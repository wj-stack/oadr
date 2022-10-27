#ifndef VEN2B_H_
#define VEN2B_H_

#include <string>

#include <mutex>

#include <xercesc/util/PlatformUtils.hpp>

#include "IOadrMessage.h"

#include "http/IHttp.h"

#include "../request/CancelPartyRegistration.h"
#include "../request/CreatePartyRegistration.h"
#include "../request/CreatedEvent.h"
#include "../request/QueryRegistration.h"
#include "../request/RequestEvent.h"

#include "../request/opt/CancelOptSchedule.h"
#include "../request/opt/CreateOptEvent.h"
#include "../request/opt/CreateOptSchedule.h"

#include "../request/report/RegisterReport.h"
#include "../request/report/RegisteredReport.h"
#include "../request/report/UpdateReport.h"

#include "../request/CanceledReport.h"
#include "../request/CreatedReport.h"

#include "../request/opt/CreateOptSchedule.h"

#include "../request/Poll.h"

#include "../helper/ISO8601Duration.h"

using namespace std;
// using namespace xercesc_3_1;
using namespace XERCES_CPP_NAMESPACE;

class VEN2b {
private:
  unique_ptr<IHttp> m_http;
  string m_baseURL;
  string m_venName;
  string m_venID;
  string m_registrationID;
  string m_vtnID;
  string m_pollFrequency;

  string m_defaultVenID;
  string m_defaultRegistrationID;

  bool m_isRegistered;

  mutex m_mutex;

  static const string _EndpointEiEvent;
  static const string _EndpointEiReport;
  static const string _EndpointEiRegisterParty;
  static const string _EndpointEiOpt;
  static const string _EndpointEiPoll;

  IOadrMessage *m_oadrMessage;

  void postRequest(Oadr2bRequest *request, string endPoint);

  void setIDs(oadrCreatedPartyRegistrationType *cpr);

public:
  VEN2b(unique_ptr<IHttp> http, string baseURL, string venName,
        string venID = "", string registrationID = "");

  virtual ~VEN2b();

  string venID();
  string registrationID();
  string vtnID();
  string pollFrequency();

  void setOadrMessage(IOadrMessage *oadrMessage);

  unsigned int pollFrequencyInSeconds();

  bool isRegistered();

  unique_ptr<RequestEvent> requestEvent(string requestID = "",
                                        unsigned int replyLimit = 0);

  unique_ptr<QueryRegistration> queryRegistration(string requestID = "");

  unique_ptr<CreatePartyRegistration> createPartyRegistration(
      oadrProfileType profileType, oadrTransportType transportType,
      string transportAddress, bool reportOnly, bool xmlSignature,
      bool httpPullModel, string requestID = "");

  unique_ptr<CancelPartyRegistration>
  cancelPartyRegistration(string requestID = "");

  void clearRegistration();

  unique_ptr<CreatedEvent>
  createdEvent(string responseCode, string responseDescription,
               eventResponses::eventResponse_sequence &ers,
               string requestID = "");

  unique_ptr<RegisterReport>
  registerReport(oadrRegisterReportType::oadrReport_sequence sequence,
                 string requestID = "");

  unique_ptr<UpdateReport>
  updateReport(oadrUpdateReportType::oadrReport_sequence &sequence,
               time_t dtstart, string reportRequestID,
               time_t createdDateTime = 0, string requestID = "");

  unique_ptr<RegisteredReport> registeredReport(string requestID,
                                                string responseCode,
                                                string responseDescription);

  unique_ptr<CreatedReport> createdReport(string requestID, string responseCode,
                                          string responseDescription,
                                          const set<string> &pendingReports);

  unique_ptr<CanceledReport> canceledReport(string requestID,
                                            string responseCode,
                                            string responseDescription,
                                            const set<string> &pendingReports);

  unique_ptr<CreateOptSchedule> createOptSchedule(OptSchedule &optSchedule,
                                                  string requestID = "");

  unique_ptr<CancelOptSchedule> cancelOptSchedule(string optID,
                                                  string requestID = "");

  unique_ptr<Poll> poll();
};

#endif /* VEN2B_H_ */
