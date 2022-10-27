#include "VEN2b.h"

const string VEN2b::_EndpointEiEvent = "/OpenADR2/Simple/2.0b/EiEvent";
const string VEN2b::_EndpointEiReport = "/OpenADR2/Simple/2.0b/EiReport";
const string VEN2b::_EndpointEiRegisterParty =
    "/OpenADR2/Simple/2.0b/EiRegisterParty";
const string VEN2b::_EndpointEiOpt = "/OpenADR2/Simple/2.0b/EiOpt";
const string VEN2b::_EndpointEiPoll = "/OpenADR2/Simple/2.0b/OadrPoll";

/********************************************************************************/

VEN2b::VEN2b(unique_ptr<IHttp> http, string baseURL, string venName,
             string venID, string registrationID)
    : m_http(std::move(http)), m_baseURL(baseURL), m_venName(venName),
      m_venID(venID), m_registrationID(registrationID), m_defaultVenID(venID),
      m_defaultRegistrationID(registrationID), m_isRegistered(false) {
  m_oadrMessage = &OadrMessageBlank::oadrMessageBlank;

  // initialize xerces; required for some of the code synthesis parsing routines
  // TODO: init/terminate need only be called once.  Should we add an object
  // counter and initialize xerces when the count == 0 and terminate when
  // count goes back to 0?
  XMLPlatformUtils::Initialize();
}

/********************************************************************************/

VEN2b::~VEN2b() {
  // cleanup xerces
  XMLPlatformUtils::Terminate();
}

/********************************************************************************/

string VEN2b::venID() { return m_venID; }

/********************************************************************************/

string VEN2b::registrationID() { return m_registrationID; }

/********************************************************************************/

string VEN2b::vtnID() { return m_vtnID; }

/********************************************************************************/

void VEN2b::setOadrMessage(IOadrMessage *oadrMessage) {
  m_oadrMessage = oadrMessage;
}

/********************************************************************************/

string VEN2b::pollFrequency() { return m_pollFrequency; }

/********************************************************************************/

bool VEN2b::isRegistered() {
  return m_isRegistered;

  return true;
}

/********************************************************************************/

void VEN2b::postRequest(Oadr2bRequest *request, string endPoint) {
  std::unique_lock<std::mutex> lock(m_mutex);

  string requestBody = request->generateRequestXML();

  m_oadrMessage->OnOadrMessageSent(requestBody);

  m_http->post(m_baseURL + endPoint, requestBody);

  m_oadrMessage->OnOadrMessageReceived(m_http->getResponseBody());

  request->setHttpFields(requestBody, m_http->getResponseBody(),
                         m_http->getResponseCode(),
                         m_http->getResponseMessage());
}

/********************************************************************************/

unique_ptr<RequestEvent> VEN2b::requestEvent(string requestID,
                                             unsigned int replyLimit) {
  unique_ptr<RequestEvent> request(
      new RequestEvent(m_venID, requestID, replyLimit));

  postRequest(request.get(), _EndpointEiEvent);

  return request;
}

/********************************************************************************/

void VEN2b::setIDs(oadrCreatedPartyRegistrationType *cpr) {
  m_venID = (cpr->venID().present() ? *cpr->venID() : "");
  m_registrationID =
      (cpr->registrationID().present() ? *cpr->registrationID() : "");

  m_vtnID = cpr->vtnID();

  m_pollFrequency = cpr->oadrRequestedOadrPollFreq()->duration();

  m_isRegistered = true;
}

/********************************************************************************/

unsigned int VEN2b::pollFrequencyInSeconds() {
  return ISO8601Duration::TotalSeconds(m_pollFrequency);
}

/********************************************************************************/

unique_ptr<QueryRegistration> VEN2b::queryRegistration(string requestID) {
  unique_ptr<QueryRegistration> request(new QueryRegistration(requestID));

  postRequest(request.get(), _EndpointEiRegisterParty);

  // the response should be a oadrCreatedPartyRegistration which contains the
  // VEN ID and registration ID which are needed for future communications
  if (request->response() != NULL && request->response()
                                         ->oadrSignedObject()
                                         .oadrCreatedPartyRegistration()
                                         .present()) {
    if (request->response()
            ->oadrSignedObject()
            .oadrCreatedPartyRegistration()
            ->eiResponse()
            .responseCode()
            .compare("200") == 0) {
      oadrCreatedPartyRegistrationType *cpr =
          &request->response()
               ->oadrSignedObject()
               .oadrCreatedPartyRegistration()
               .get();

      if (cpr->venID().present() && cpr->venID()->compare("") != 0)
        setIDs(cpr);
    }
  }

  return request;
}

/********************************************************************************/

unique_ptr<CreatePartyRegistration> VEN2b::createPartyRegistration(
    oadrProfileType profileType, oadrTransportType transportType,
    string transportAddress, bool reportOnly, bool xmlSignature,
    bool httpPullModel, string requestID) {
  unique_ptr<CreatePartyRegistration> request(new CreatePartyRegistration(
      m_venID, requestID, m_registrationID, profileType, transportType,
      transportAddress, reportOnly, xmlSignature, m_venName, httpPullModel));

  postRequest(request.get(), _EndpointEiRegisterParty);

  // the response should be a oadrCreatedPartyRegistration which contains the
  // VEN ID and registration ID which are needed for future communications
  if (request->response() != NULL && request->response()
                                         ->oadrSignedObject()
                                         .oadrCreatedPartyRegistration()
                                         .present()) {
    if (request->response()
            ->oadrSignedObject()
            .oadrCreatedPartyRegistration()
            ->eiResponse()
            .responseCode()
            .compare("200") == 0) {
      oadrCreatedPartyRegistrationType *cpr =
          &request->response()
               ->oadrSignedObject()
               .oadrCreatedPartyRegistration()
               .get();

      setIDs(cpr);
    }
  }

  return request;
}

/********************************************************************************/

unique_ptr<CancelPartyRegistration>
VEN2b::cancelPartyRegistration(string requestID) {
  unique_ptr<CancelPartyRegistration> request(
      new CancelPartyRegistration(m_venID, m_registrationID, requestID));

  postRequest(request.get(), _EndpointEiRegisterParty);

  if (request->response() != NULL && request->response()
                                         ->oadrSignedObject()
                                         .oadrCreatedPartyRegistration()
                                         .present()) {
    string responseCode = request->response()
                              ->oadrSignedObject()
                              .oadrCreatedPartyRegistration()
                              ->eiResponse()
                              .responseCode();

    // if the response indicates OK, the request was successful
    // 453 indicates the registrationID was invalid
    // any other return should indicate the cancel was not successful
    if (responseCode.compare("200") == 0 || responseCode.compare("453") == 0)
      clearRegistration();
  }

  return request;
}

/********************************************************************************/

void VEN2b::clearRegistration() {
  m_venID = m_defaultVenID;
  m_registrationID = m_defaultRegistrationID;

  m_isRegistered = false;
}

/********************************************************************************/

unique_ptr<CreatedEvent>
VEN2b::createdEvent(string responseCode, string responseDescription,
                    eventResponses::eventResponse_sequence &ers,
                    string requestID) {
  unique_ptr<CreatedEvent> request(new CreatedEvent(
      m_venID, responseCode, responseDescription, ers, requestID));

  postRequest(request.get(), _EndpointEiEvent);

  return request;
}

/********************************************************************************/

unique_ptr<RegisterReport>
VEN2b::registerReport(oadrRegisterReportType::oadrReport_sequence sequence,
                      string requestID) {
  unique_ptr<RegisterReport> request(
      new RegisterReport(m_venID, requestID, sequence));

  postRequest(request.get(), _EndpointEiReport);

  return request;
}

/********************************************************************************/

unique_ptr<RegisteredReport>
VEN2b::registeredReport(string requestID, string responseCode,
                        string responseDescription) {
  unique_ptr<RegisteredReport> request(new RegisteredReport(
      venID(), requestID, responseCode, responseDescription));

  postRequest(request.get(), _EndpointEiReport);

  return request;
}

/********************************************************************************/

unique_ptr<CreatedReport>
VEN2b::createdReport(string requestID, string responseCode,
                     string responseDescription,
                     const set<string> &pendingReports) {
  unique_ptr<CreatedReport> request(new CreatedReport(
      venID(), pendingReports, responseCode, responseDescription, requestID));

  postRequest(request.get(), _EndpointEiReport);

  return request;
}

/********************************************************************************/

unique_ptr<CanceledReport>
VEN2b::canceledReport(string requestID, string responseCode,
                      string responseDescription,
                      const set<string> &pendingReports) {
  unique_ptr<CanceledReport> request(new CanceledReport(
      venID(), responseCode, responseDescription, pendingReports, requestID));

  postRequest(request.get(), _EndpointEiReport);

  return request;
}

/********************************************************************************/

unique_ptr<UpdateReport>
VEN2b::updateReport(oadrUpdateReportType::oadrReport_sequence &sequence,
                    time_t dtstart, string reportRequestID,
                    time_t createdDateTime, string requestID) {
  unique_ptr<UpdateReport> request(new UpdateReport(
      m_venID, requestID, sequence, dtstart, reportRequestID, createdDateTime));

  postRequest(request.get(), _EndpointEiReport);

  return request;
}

/********************************************************************************/

unique_ptr<CreateOptSchedule> VEN2b::createOptSchedule(OptSchedule &optSchedule,
                                                       string requestID) {
  unique_ptr<CreateOptSchedule> request(
      new CreateOptSchedule(m_venID, optSchedule, requestID));

  postRequest(request.get(), _EndpointEiOpt);

  return request;
}

/********************************************************************************/

unique_ptr<CancelOptSchedule> VEN2b::cancelOptSchedule(string optID,
                                                       string requestID) {
  unique_ptr<CancelOptSchedule> request(
      new CancelOptSchedule(m_venID, optID, requestID));

  postRequest(request.get(), _EndpointEiOpt);

  return request;
}

/********************************************************************************/

unique_ptr<Poll> VEN2b::poll() {
  unique_ptr<Poll> request(new Poll(m_venID));

  postRequest(request.get(), _EndpointEiPoll);

  return request;
}
