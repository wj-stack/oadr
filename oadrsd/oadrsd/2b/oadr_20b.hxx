
#ifndef OADR_20B_HXX
#define OADR_20B_HXX

#ifndef XSD_CXX11
#define XSD_CXX11
#endif

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 4000000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>

#include <xsd/cxx/tree/serialization.hxx>
#include <xsd/cxx/tree/serialization/boolean.hxx>
#include <xsd/cxx/tree/serialization/byte.hxx>
#include <xsd/cxx/tree/serialization/decimal.hxx>
#include <xsd/cxx/tree/serialization/double.hxx>
#include <xsd/cxx/tree/serialization/float.hxx>
#include <xsd/cxx/tree/serialization/int.hxx>
#include <xsd/cxx/tree/serialization/long.hxx>
#include <xsd/cxx/tree/serialization/short.hxx>
#include <xsd/cxx/tree/serialization/unsigned-byte.hxx>
#include <xsd/cxx/tree/serialization/unsigned-int.hxx>
#include <xsd/cxx/tree/serialization/unsigned-long.hxx>
#include <xsd/cxx/tree/serialization/unsigned-short.hxx>
#include <xsd/cxx/xml/dom/serialization-header.hxx>

namespace xml_schema {
// anyType and anySimpleType.
//
typedef ::xsd::cxx::tree::type type;
typedef ::xsd::cxx::tree::simple_type<char, type> simple_type;
typedef ::xsd::cxx::tree::type container;

// 8-bit
//
typedef signed char byte;
typedef unsigned char unsigned_byte;

// 16-bit
//
typedef short short_;
typedef unsigned short unsigned_short;

// 32-bit
//
typedef int int_;
typedef unsigned int unsigned_int;

// 64-bit
//
typedef long long long_;
typedef unsigned long long unsigned_long;

// Supposed to be arbitrary-length integral types.
//
typedef long long integer;
typedef long long non_positive_integer;
typedef unsigned long long non_negative_integer;
typedef unsigned long long positive_integer;
typedef long long negative_integer;

// Boolean.
//
typedef bool boolean;

// Floating-point types.
//
typedef float float_;
typedef double double_;
typedef double decimal;

// String types.
//
typedef ::xsd::cxx::tree::string<char, simple_type> string;
typedef ::xsd::cxx::tree::normalized_string<char, string> normalized_string;
typedef ::xsd::cxx::tree::token<char, normalized_string> token;
typedef ::xsd::cxx::tree::name<char, token> name;
typedef ::xsd::cxx::tree::nmtoken<char, token> nmtoken;
typedef ::xsd::cxx::tree::nmtokens<char, simple_type, nmtoken> nmtokens;
typedef ::xsd::cxx::tree::ncname<char, name> ncname;
typedef ::xsd::cxx::tree::language<char, token> language;

// ID/IDREF.
//
typedef ::xsd::cxx::tree::id<char, ncname> id;
typedef ::xsd::cxx::tree::idref<char, ncname, type> idref;
typedef ::xsd::cxx::tree::idrefs<char, simple_type, idref> idrefs;

// URI.
//
typedef ::xsd::cxx::tree::uri<char, simple_type> uri;

// Qualified name.
//
typedef ::xsd::cxx::tree::qname<char, simple_type, uri, ncname> qname;

// Binary.
//
typedef ::xsd::cxx::tree::buffer<char> buffer;
typedef ::xsd::cxx::tree::base64_binary<char, simple_type> base64_binary;
typedef ::xsd::cxx::tree::hex_binary<char, simple_type> hex_binary;

// Date/time.
//
typedef ::xsd::cxx::tree::time_zone time_zone;
typedef ::xsd::cxx::tree::date<char, simple_type> date;
typedef ::xsd::cxx::tree::date_time<char, simple_type> date_time;
typedef ::xsd::cxx::tree::duration<char, simple_type> duration;
typedef ::xsd::cxx::tree::gday<char, simple_type> gday;
typedef ::xsd::cxx::tree::gmonth<char, simple_type> gmonth;
typedef ::xsd::cxx::tree::gmonth_day<char, simple_type> gmonth_day;
typedef ::xsd::cxx::tree::gyear<char, simple_type> gyear;
typedef ::xsd::cxx::tree::gyear_month<char, simple_type> gyear_month;
typedef ::xsd::cxx::tree::time<char, simple_type> time;

// Entity.
//
typedef ::xsd::cxx::tree::entity<char, ncname> entity;
typedef ::xsd::cxx::tree::entities<char, simple_type, entity> entities;

typedef ::xsd::cxx::tree::content_order content_order;
// Namespace information and list stream. Used in
// serialization functions.
//
typedef ::xsd::cxx::xml::dom::namespace_info<char> namespace_info;
typedef ::xsd::cxx::xml::dom::namespace_infomap<char> namespace_infomap;
typedef ::xsd::cxx::tree::list_stream<char> list_stream;
typedef ::xsd::cxx::tree::as_double<double_> as_double;
typedef ::xsd::cxx::tree::as_decimal<decimal> as_decimal;
typedef ::xsd::cxx::tree::facet facet;

// Flags and properties.
//
typedef ::xsd::cxx::tree::flags flags;
typedef ::xsd::cxx::tree::properties<char> properties;

// Parsing/serialization diagnostics.
//
typedef ::xsd::cxx::tree::severity severity;
typedef ::xsd::cxx::tree::error<char> error;
typedef ::xsd::cxx::tree::diagnostics<char> diagnostics;

// Exceptions.
//
typedef ::xsd::cxx::tree::exception<char> exception;
typedef ::xsd::cxx::tree::bounds<char> bounds;
typedef ::xsd::cxx::tree::duplicate_id<char> duplicate_id;
typedef ::xsd::cxx::tree::parsing<char> parsing;
typedef ::xsd::cxx::tree::expected_element<char> expected_element;
typedef ::xsd::cxx::tree::unexpected_element<char> unexpected_element;
typedef ::xsd::cxx::tree::expected_attribute<char> expected_attribute;
typedef ::xsd::cxx::tree::unexpected_enumerator<char> unexpected_enumerator;
typedef ::xsd::cxx::tree::expected_text_content<char> expected_text_content;
typedef ::xsd::cxx::tree::no_prefix_mapping<char> no_prefix_mapping;
typedef ::xsd::cxx::tree::no_type_info<char> no_type_info;
typedef ::xsd::cxx::tree::not_derived<char> not_derived;
typedef ::xsd::cxx::tree::serialization<char> serialization;

// Error handler callback interface.
//
typedef ::xsd::cxx::xml::error_handler<char> error_handler;

// DOM interaction.
//
namespace dom {
// Automatic pointer for DOMDocument.
//
using ::xsd::cxx::xml::dom::unique_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
// DOM user data key for back pointers to tree nodes.
//
const XMLCh *const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
} // namespace dom
} // namespace xml_schema

// Forward declarations.
//
namespace oadr2b {
namespace oadr {}
} // namespace oadr2b

#include <algorithm> // std::binary_search
#include <limits>    // std::numeric_limits
#include <memory>    // ::std::unique_ptr
#include <utility>   // std::move

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

#include "oadr_strm_20b.hxx"

#include "oadr_ei_20b.hxx"

#include "oadr_pyld_20b.hxx"

#include "oadr_emix_20b.hxx"

#include "oadr_siscale_20b.hxx"

#include "oadr_xcal_20b.hxx"

#include "oadr_ISO_ISO3AlphaCurrencyCode_20100407.hxx"

#include "oadr_atom.hxx"

#include "oadr_xmldsig11.hxx"

#include "oadr_xmldsig.hxx"

#include "oadrDistributeEventType.hxx"

#include "oadrCreatedEventType.hxx"

#include "oadrRequestEventType.hxx"

#include "oadrResponseType.hxx"

#include "oadrCancelOptType.hxx"

#include "oadrCanceledOptType.hxx"

#include "oadrCreateOptType.hxx"

#include "oadrCreatedOptType.hxx"

#include "oadrCancelReportType.hxx"

#include "oadrCanceledReportType.hxx"

#include "oadrCreateReportType.hxx"

#include "oadrCreatedReportType.hxx"

#include "oadrRegisterReportType.hxx"

#include "oadrRegisteredReportType.hxx"

#include "oadrUpdateReportType.hxx"

#include "oadrUpdatedReportType.hxx"

#include "oadrCancelPartyRegistrationType.hxx"

#include "oadrCanceledPartyRegistrationType.hxx"

#include "oadrCreatePartyRegistrationType.hxx"

#include "oadrCreatedPartyRegistrationType.hxx"

#include "oadrRequestReregistrationType.hxx"

#include "oadrQueryRegistrationType.hxx"

#include "oadrPollType.hxx"

#include "oadrProfileType.hxx"

#include "oadrTransportType.hxx"

#include "oadrServiceNameType.hxx"

#include "ResponseRequiredType.hxx"

#include "oadrPendingReportsType.hxx"

#include "BaseUnitType.hxx"

#include "CurrentType.hxx"

#include "currencyType.hxx"

#include "currencyItemDescriptionType.hxx"

#include "FrequencyType.hxx"

#include "ThermType.hxx"

#include "temperatureType.hxx"

#include "temperatureUnitType.hxx"

#include "pulseCountType.hxx"

#include "oadrReportRequestType.hxx"

#include "oadrReportType.hxx"

#include "oadrReportDescriptionType.hxx"

#include "oadrSamplingRateType.hxx"

#include "oadrPayloadResourceStatusType.hxx"

#include "oadrLoadControlStateType.hxx"

#include "oadrLoadControlStateTypeType.hxx"

#include "oadrGBItemBase.hxx"

#include "oadrGBStreamPayloadBase.hxx"

#include "oadrReportPayloadType.hxx"

#include "oadrDataQualityTypeType.hxx"

#include "oadrDataQualityType.hxx"

#include "oadrPayload.hxx"

#include "oadrSignedObject.hxx"

#include "oadrEvent.hxx"

#include "oadrExtensions.hxx"

#include "oadrProfiles.hxx"

#include "oadrTransports.hxx"

#include "oadrServiceSpecificInfo.hxx"

#include "oadrInfo.hxx"

#include "oadrExtension.hxx"

#include "oadrProfile.hxx"

#include "oadrTransport.hxx"

#include "oadrService.hxx"

namespace oadr2b {
namespace oadr {}
} // namespace oadr2b

#include <iosfwd>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>
#include <xercesc/sax/InputSource.hpp>

namespace oadr2b {
namespace oadr {
// Parse a URI or a local file.
//

// ::std::unique_ptr<::oadr2b::oadr::oadrPayload>
// oadrPayload_(const ::std::string &uri, ::xml_schema::flags f = 0,
//              const ::xml_schema::properties &p = ::xml_schema::properties());
//
// ::std::unique_ptr<::oadr2b::oadr::oadrPayload>
// oadrPayload_(const ::std::string &uri, ::xml_schema::error_handler &eh,
//              ::xml_schema::flags f = 0,
//              const ::xml_schema::properties &p = ::xml_schema::properties());
//
// ::std::unique_ptr<::oadr2b::oadr::oadrPayload>
// oadrPayload_(const ::std::string &uri, ::xercesc::DOMErrorHandler &eh,
//              ::xml_schema::flags f = 0,
//              const ::xml_schema::properties &p = ::xml_schema::properties());

// Parse std::istream.
//

::std::unique_ptr<::oadr2b::oadr::oadrPayload>
oadrPayload_(::std::istream &is, ::xml_schema::flags f = 0,
             const ::xml_schema::properties &p = ::xml_schema::properties());

// ::std::unique_ptr<::oadr2b::oadr::oadrPayload>
// oadrPayload_(::std::istream &is, ::xml_schema::error_handler &eh,
//              ::xml_schema::flags f = 0,
//              const ::xml_schema::properties &p = ::xml_schema::properties());

// ::std::unique_ptr<::oadr2b::oadr::oadrPayload>
// oadrPayload_(::std::istream &is, ::xercesc::DOMErrorHandler &eh,
//              ::xml_schema::flags f = 0,
//              const ::xml_schema::properties &p = ::xml_schema::properties());

::std::unique_ptr<::oadr2b::oadr::oadrPayload>
oadrPayload_(::std::istream &is, const ::std::string &id,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties &p = ::xml_schema::properties());

// ::std::unique_ptr<::oadr2b::oadr::oadrPayload>
// oadrPayload_(::std::istream &is, const ::std::string &id,
//              ::xml_schema::error_handler &eh, ::xml_schema::flags f = 0,
//              const ::xml_schema::properties &p = ::xml_schema::properties());
//
// ::std::unique_ptr<::oadr2b::oadr::oadrPayload>
// oadrPayload_(::std::istream &is, const ::std::string &id,
//              ::xercesc::DOMErrorHandler &eh, ::xml_schema::flags f = 0,
//              const ::xml_schema::properties &p = ::xml_schema::properties());

// Parse xercesc::InputSource.
//

::std::unique_ptr<::oadr2b::oadr::oadrPayload>
oadrPayload_(::xercesc::InputSource &is, ::xml_schema::flags f = 0,
             const ::xml_schema::properties &p = ::xml_schema::properties());

::std::unique_ptr<::oadr2b::oadr::oadrPayload>
oadrPayload_(::xercesc::InputSource &is, ::xml_schema::error_handler &eh,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties &p = ::xml_schema::properties());

::std::unique_ptr<::oadr2b::oadr::oadrPayload>
oadrPayload_(::xercesc::InputSource &is, ::xercesc::DOMErrorHandler &eh,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties &p = ::xml_schema::properties());

// Parse xercesc::DOMDocument.
//

::std::unique_ptr<::oadr2b::oadr::oadrPayload>
oadrPayload_(const ::xercesc::DOMDocument &d, ::xml_schema::flags f = 0,
             const ::xml_schema::properties &p = ::xml_schema::properties());

::std::unique_ptr<::oadr2b::oadr::oadrPayload>
oadrPayload_(::xml_schema::dom::unique_ptr<::xercesc::DOMDocument> d,
             ::xml_schema::flags f = 0,
             const ::xml_schema::properties &p = ::xml_schema::properties());
} // namespace oadr
} // namespace oadr2b

#include <iosfwd>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>
#include <xercesc/framework/XMLFormatter.hpp>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

namespace oadr2b {
namespace oadr {
// Serialize to std::ostream.
//

void oadrPayload_(::std::ostream &os, const ::oadr2b::oadr::oadrPayload &x,
                  const ::xml_schema::namespace_infomap &m =
                      ::xml_schema::namespace_infomap(),
                  const ::std::string &e = "UTF-8", ::xml_schema::flags f = 0);

// void oadrPayload_(::std::ostream &os, const ::oadr2b::oadr::oadrPayload &x,
//                   ::xml_schema::error_handler &eh,
//                   const ::xml_schema::namespace_infomap &m =
//                       ::xml_schema::namespace_infomap(),
//                   const ::std::string &e = "UTF-8", ::xml_schema::flags f =
//                   0);
//
// void oadrPayload_(::std::ostream &os, const ::oadr2b::oadr::oadrPayload &x,
//                   ::xercesc::DOMErrorHandler &eh,
//                   const ::xml_schema::namespace_infomap &m =
//                       ::xml_schema::namespace_infomap(),
//                   const ::std::string &e = "UTF-8", ::xml_schema::flags f =
//                   0);

// Serialize to xercesc::XMLFormatTarget.
//

// void oadrPayload_(::xercesc::XMLFormatTarget &ft,
//                   const ::oadr2b::oadr::oadrPayload &x,
//                   const ::xml_schema::namespace_infomap &m =
//                       ::xml_schema::namespace_infomap(),
//                   const ::std::string &e = "UTF-8", ::xml_schema::flags f =
//                   0);
//
// void oadrPayload_(::xercesc::XMLFormatTarget &ft,
//                   const ::oadr2b::oadr::oadrPayload &x,
//                   ::xml_schema::error_handler &eh,
//                   const ::xml_schema::namespace_infomap &m =
//                       ::xml_schema::namespace_infomap(),
//                   const ::std::string &e = "UTF-8", ::xml_schema::flags f =
//                   0);
//
// void oadrPayload_(::xercesc::XMLFormatTarget &ft,
//                   const ::oadr2b::oadr::oadrPayload &x,
//                   ::xercesc::DOMErrorHandler &eh,
//                   const ::xml_schema::namespace_infomap &m =
//                       ::xml_schema::namespace_infomap(),
//                   const ::std::string &e = "UTF-8", ::xml_schema::flags f =
//                   0);

// Serialize to an existing xercesc::DOMDocument.
//

// void oadrPayload_(::xercesc::DOMDocument &d,
//                   const ::oadr2b::oadr::oadrPayload &x,
//                   ::xml_schema::flags f = 0);

// Serialize to a new xercesc::DOMDocument.
//

::xml_schema::dom::unique_ptr<::xercesc::DOMDocument>
oadrPayload_(const ::oadr2b::oadr::oadrPayload &x,
             const ::xml_schema::namespace_infomap &m =
                 ::xml_schema::namespace_infomap(),
             ::xml_schema::flags f = 0);
} // namespace oadr
} // namespace oadr2b

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // OADR_20B_HXX
