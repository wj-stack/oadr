
#include "Oadr2bRequest.h"

Oadr2bRequest::Oadr2bRequest(string requestType, string responseType,
                             string requestID) {
  m_requestType = requestType;
  m_responseType = responseType;

  m_requestID = (requestID != "" ? requestID : m_randomHex.generateRandomHex());
}

/********************************************************************************/

Oadr2bRequest::Oadr2bRequest(string requestType, string responseType,
                             string venID, string requestID) {
  m_requestType = requestType;
  m_responseType = responseType;

  m_venID = venID;

  m_requestID = (requestID != "" ? requestID : m_randomHex.generateRandomHex());
}

/********************************************************************************/

Oadr2bRequest::Oadr2bRequest(string requestType, string responseType,
                             string venID, string responseCode,
                             string responseDescription, string requestID) {
  m_requestType = requestType;
  m_responseType = responseType;

  m_venID = venID;

  m_responseCode = responseCode;
  m_responseDescription = responseDescription;

  m_requestID = (requestID != "" ? requestID : m_randomHex.generateRandomHex());
}

/********************************************************************************/

Oadr2bRequest::~Oadr2bRequest() {}

/********************************************************************************/

string Oadr2bRequest::serializePayload(oadrPayload *payload) {
  xml_schema::namespace_infomap map;
  stringstream ss;

  map[""].name = "";
  map[""].schema = "";

  ::xml_schema::flags f = xml_schema::flags::dont_initialize;

  oadrPayload_(ss, *payload, map, "", f);

  return ss.str();
}

/********************************************************************************/

void Oadr2bRequest::setHttpFields(string requestBody, string responseBody,
                                  string httpResponseCode,
                                  string httpResponseMessage) {
  m_requestBody = requestBody;
  m_responseBody = responseBody;
  m_httpResponseCode = httpResponseCode;
  m_httpResponseMessage = httpResponseMessage;

  if (m_httpResponseCode.compare("200") == 0 && m_responseBody.length() > 0) {
    istringstream iss(m_responseBody);

    // TODO: not currently validating the XML; need to figure out
    // how to specify the location
    unique_ptr<oadrPayload> response(
        oadrPayload_(iss, xsd::cxx::tree::flags::keep_dom |
                              xsd::cxx::tree::flags::dont_validate |
                              xml_schema::flags::dont_initialize));

    m_response = std::move(response);
  }
}

/********************************************************************************/

string Oadr2bRequest::requestID() { return m_requestID; }

/********************************************************************************/

string Oadr2bRequest::venID() { return m_venID; }

/********************************************************************************/

string Oadr2bRequest::responseCode() { return m_responseCode; }

/********************************************************************************/

string Oadr2bRequest::responseDescription() { return m_responseDescription; }

/********************************************************************************/

string Oadr2bRequest::requestBody() { return m_requestBody; }
/********************************************************************************/

string Oadr2bRequest::responseBody() { return m_responseBody; }

/********************************************************************************/

string Oadr2bRequest::httpResponseCode() { return m_httpResponseCode; }

/********************************************************************************/

string Oadr2bRequest::httpResponseMessage() { return m_httpResponseMessage; }

/********************************************************************************/

string Oadr2bRequest::generateRequestXML() {
  m_request = generatePayload();

  return serializePayload(m_request.get());
}

/********************************************************************************/

oadrPayload *Oadr2bRequest::request() { return m_request.get(); }

/********************************************************************************/

oadrPayload *Oadr2bRequest::response() { return m_response.get(); }
