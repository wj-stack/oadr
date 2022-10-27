// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#ifndef OADR_SIGNED_OBJECT_HXX
#define OADR_SIGNED_OBJECT_HXX

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

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>

#include <xsd/cxx/xml/dom/serialization-header.hxx>
#include <xsd/cxx/tree/serialization.hxx>
#include <xsd/cxx/tree/serialization/byte.hxx>
#include <xsd/cxx/tree/serialization/unsigned-byte.hxx>
#include <xsd/cxx/tree/serialization/short.hxx>
#include <xsd/cxx/tree/serialization/unsigned-short.hxx>
#include <xsd/cxx/tree/serialization/int.hxx>
#include <xsd/cxx/tree/serialization/unsigned-int.hxx>
#include <xsd/cxx/tree/serialization/long.hxx>
#include <xsd/cxx/tree/serialization/unsigned-long.hxx>
#include <xsd/cxx/tree/serialization/boolean.hxx>
#include <xsd/cxx/tree/serialization/float.hxx>
#include <xsd/cxx/tree/serialization/double.hxx>
#include <xsd/cxx/tree/serialization/decimal.hxx>

namespace xml_schema_test
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< char, type > simple_type;
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
typedef ::xsd::cxx::tree::string<char, simple_type> normalized_string;
typedef ::xsd::cxx::tree::string<char, simple_type> token;
typedef ::xsd::cxx::tree::string<char, simple_type> name;
typedef ::xsd::cxx::tree::string<char, simple_type> nmtoken;
typedef ::xsd::cxx::tree::string<char, simple_type> nmtokens;
typedef ::xsd::cxx::tree::string<char, simple_type> ncname;
typedef ::xsd::cxx::tree::string<char, simple_type> language;
  // ID/IDREF.
  //
  typedef ::xsd::cxx::tree::string< char, simple_type > id;
  typedef ::xsd::cxx::tree::string< char, simple_type > idref;
  typedef ::xsd::cxx::tree::string< char, simple_type > idrefs;

  // URI.
  //
  typedef ::xsd::cxx::tree::uri< char, simple_type > uri;

  // Qualified name.
  //
  typedef ::xsd::cxx::tree::qname< char, simple_type, uri, ncname > qname;

  // Binary.
  //
  typedef ::xsd::cxx::tree::buffer< char > buffer;
  typedef ::xsd::cxx::tree::base64_binary< char, simple_type > base64_binary;
  typedef ::xsd::cxx::tree::hex_binary< char, simple_type > hex_binary;

  // Date/time.
  //
  typedef ::xsd::cxx::tree::time_zone time_zone;
  typedef ::xsd::cxx::tree::date< char, simple_type > date;
  typedef ::xsd::cxx::tree::date_time< char, simple_type > date_time;
  typedef ::xsd::cxx::tree::duration< char, simple_type > duration;
  typedef ::xsd::cxx::tree::gday< char, simple_type > gday;
  typedef ::xsd::cxx::tree::gmonth< char, simple_type > gmonth;
  typedef ::xsd::cxx::tree::gmonth_day< char, simple_type > gmonth_day;
  typedef ::xsd::cxx::tree::gyear< char, simple_type > gyear;
  typedef ::xsd::cxx::tree::gyear_month< char, simple_type > gyear_month;
  typedef ::xsd::cxx::tree::time< char, simple_type > time;

  // Entity.
  //
  typedef ::xsd::cxx::tree::entity< char, ncname > entity;
  typedef ::xsd::cxx::tree::entities< char, simple_type, entity > entities;

  typedef ::xsd::cxx::tree::content_order content_order;
  // Namespace information and list stream. Used in
  // serialization functions.
  //
  typedef ::xsd::cxx::xml::dom::namespace_info< char > namespace_info;
  typedef ::xsd::cxx::xml::dom::namespace_infomap< char > namespace_infomap;
  typedef ::xsd::cxx::tree::list_stream< char > list_stream;
  typedef ::xsd::cxx::tree::as_double< double_ > as_double;
  typedef ::xsd::cxx::tree::as_decimal< decimal > as_decimal;
  typedef ::xsd::cxx::tree::facet facet;

  // Flags and properties.
  //
  typedef ::xsd::cxx::tree::flags flags;
  typedef ::xsd::cxx::tree::properties< char > properties;

  // Parsing/serialization diagnostics.
  //
  typedef ::xsd::cxx::tree::severity severity;
  typedef ::xsd::cxx::tree::error< char > error;
  typedef ::xsd::cxx::tree::diagnostics< char > diagnostics;

  // Exceptions.
  //
  typedef ::xsd::cxx::tree::exception< char > exception;
  typedef ::xsd::cxx::tree::bounds< char > bounds;
  typedef ::xsd::cxx::tree::duplicate_id< char > duplicate_id;
  typedef ::xsd::cxx::tree::parsing< char > parsing;
  typedef ::xsd::cxx::tree::expected_element< char > expected_element;
  typedef ::xsd::cxx::tree::unexpected_element< char > unexpected_element;
  typedef ::xsd::cxx::tree::expected_attribute< char > expected_attribute;
  typedef ::xsd::cxx::tree::unexpected_enumerator< char > unexpected_enumerator;
  typedef ::xsd::cxx::tree::expected_text_content< char > expected_text_content;
  typedef ::xsd::cxx::tree::no_prefix_mapping< char > no_prefix_mapping;
  typedef ::xsd::cxx::tree::no_type_info< char > no_type_info;
  typedef ::xsd::cxx::tree::not_derived< char > not_derived;
  typedef ::xsd::cxx::tree::serialization< char > serialization;

  // Error handler callback interface.
  //
  typedef ::xsd::cxx::xml::error_handler< char > error_handler;

  // DOM interaction.
  //
  namespace dom
  {
    // Automatic pointer for DOMDocument.
    //
    using ::xsd::cxx::xml::dom::unique_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
    // DOM user data key for back pointers to tree nodes.
    //
    const XMLCh* const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
  }
}

// Forward declarations.
//
namespace oadr2b
{
  namespace oadr
  {
    class oadrSignedObject;
  }
}


#include <memory>    // ::std::unique_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search
#include <utility>   // std::move

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

namespace oadr2b
{
  namespace oadr
  {
    class oadrDistributeEventType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCreatedEventType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrRequestEventType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrResponseType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCancelOptType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCanceledOptType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCreateOptType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCreatedOptType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCancelReportType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCanceledReportType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCreateReportType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCreatedReportType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrRegisterReportType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrRegisteredReportType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrUpdateReportType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrUpdatedReportType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCancelPartyRegistrationType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCanceledPartyRegistrationType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCreatePartyRegistrationType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrCreatedPartyRegistrationType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrRequestReregistrationType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrQueryRegistrationType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrPollType;
  }
}

namespace oadr2b
{
  namespace oadr
  {
    class oadrSignedObject: public ::xml_schema_test::type
    {
      public:
      // oadrDistributeEvent
      //
      typedef ::oadr2b::oadr::oadrDistributeEventType oadrDistributeEvent_type;
      typedef ::xsd::cxx::tree::optional< oadrDistributeEvent_type > oadrDistributeEvent_optional;
      typedef ::xsd::cxx::tree::traits< oadrDistributeEvent_type, char > oadrDistributeEvent_traits;

      const oadrDistributeEvent_optional&
      oadrDistributeEvent () const;

      oadrDistributeEvent_optional&
      oadrDistributeEvent ();

      void
      oadrDistributeEvent (const oadrDistributeEvent_type& x);

      void
      oadrDistributeEvent (const oadrDistributeEvent_optional& x);

      void
      oadrDistributeEvent (::std::unique_ptr< oadrDistributeEvent_type > p);

      // oadrCreatedEvent
      //
      typedef ::oadr2b::oadr::oadrCreatedEventType oadrCreatedEvent_type;
      typedef ::xsd::cxx::tree::optional< oadrCreatedEvent_type > oadrCreatedEvent_optional;
      typedef ::xsd::cxx::tree::traits< oadrCreatedEvent_type, char > oadrCreatedEvent_traits;

      const oadrCreatedEvent_optional&
      oadrCreatedEvent () const;

      oadrCreatedEvent_optional&
      oadrCreatedEvent ();

      void
      oadrCreatedEvent (const oadrCreatedEvent_type& x);

      void
      oadrCreatedEvent (const oadrCreatedEvent_optional& x);

      void
      oadrCreatedEvent (::std::unique_ptr< oadrCreatedEvent_type > p);

      // oadrRequestEvent
      //
      typedef ::oadr2b::oadr::oadrRequestEventType oadrRequestEvent_type;
      typedef ::xsd::cxx::tree::optional< oadrRequestEvent_type > oadrRequestEvent_optional;
      typedef ::xsd::cxx::tree::traits< oadrRequestEvent_type, char > oadrRequestEvent_traits;

      const oadrRequestEvent_optional&
      oadrRequestEvent () const;

      oadrRequestEvent_optional&
      oadrRequestEvent ();

      void
      oadrRequestEvent (const oadrRequestEvent_type& x);

      void
      oadrRequestEvent (const oadrRequestEvent_optional& x);

      void
      oadrRequestEvent (::std::unique_ptr< oadrRequestEvent_type > p);

      // oadrResponse
      //
      typedef ::oadr2b::oadr::oadrResponseType oadrResponse_type;
      typedef ::xsd::cxx::tree::optional< oadrResponse_type > oadrResponse_optional;
      typedef ::xsd::cxx::tree::traits< oadrResponse_type, char > oadrResponse_traits;

      const oadrResponse_optional&
      oadrResponse () const;

      oadrResponse_optional&
      oadrResponse ();

      void
      oadrResponse (const oadrResponse_type& x);

      void
      oadrResponse (const oadrResponse_optional& x);

      void
      oadrResponse (::std::unique_ptr< oadrResponse_type > p);

      // oadrCancelOpt
      //
      typedef ::oadr2b::oadr::oadrCancelOptType oadrCancelOpt_type;
      typedef ::xsd::cxx::tree::optional< oadrCancelOpt_type > oadrCancelOpt_optional;
      typedef ::xsd::cxx::tree::traits< oadrCancelOpt_type, char > oadrCancelOpt_traits;

      const oadrCancelOpt_optional&
      oadrCancelOpt () const;

      oadrCancelOpt_optional&
      oadrCancelOpt ();

      void
      oadrCancelOpt (const oadrCancelOpt_type& x);

      void
      oadrCancelOpt (const oadrCancelOpt_optional& x);

      void
      oadrCancelOpt (::std::unique_ptr< oadrCancelOpt_type > p);

      // oadrCanceledOpt
      //
      typedef ::oadr2b::oadr::oadrCanceledOptType oadrCanceledOpt_type;
      typedef ::xsd::cxx::tree::optional< oadrCanceledOpt_type > oadrCanceledOpt_optional;
      typedef ::xsd::cxx::tree::traits< oadrCanceledOpt_type, char > oadrCanceledOpt_traits;

      const oadrCanceledOpt_optional&
      oadrCanceledOpt () const;

      oadrCanceledOpt_optional&
      oadrCanceledOpt ();

      void
      oadrCanceledOpt (const oadrCanceledOpt_type& x);

      void
      oadrCanceledOpt (const oadrCanceledOpt_optional& x);

      void
      oadrCanceledOpt (::std::unique_ptr< oadrCanceledOpt_type > p);

      // oadrCreateOpt
      //
      typedef ::oadr2b::oadr::oadrCreateOptType oadrCreateOpt_type;
      typedef ::xsd::cxx::tree::optional< oadrCreateOpt_type > oadrCreateOpt_optional;
      typedef ::xsd::cxx::tree::traits< oadrCreateOpt_type, char > oadrCreateOpt_traits;

      const oadrCreateOpt_optional&
      oadrCreateOpt () const;

      oadrCreateOpt_optional&
      oadrCreateOpt ();

      void
      oadrCreateOpt (const oadrCreateOpt_type& x);

      void
      oadrCreateOpt (const oadrCreateOpt_optional& x);

      void
      oadrCreateOpt (::std::unique_ptr< oadrCreateOpt_type > p);

      // oadrCreatedOpt
      //
      typedef ::oadr2b::oadr::oadrCreatedOptType oadrCreatedOpt_type;
      typedef ::xsd::cxx::tree::optional< oadrCreatedOpt_type > oadrCreatedOpt_optional;
      typedef ::xsd::cxx::tree::traits< oadrCreatedOpt_type, char > oadrCreatedOpt_traits;

      const oadrCreatedOpt_optional&
      oadrCreatedOpt () const;

      oadrCreatedOpt_optional&
      oadrCreatedOpt ();

      void
      oadrCreatedOpt (const oadrCreatedOpt_type& x);

      void
      oadrCreatedOpt (const oadrCreatedOpt_optional& x);

      void
      oadrCreatedOpt (::std::unique_ptr< oadrCreatedOpt_type > p);

      // oadrCancelReport
      //
      typedef ::oadr2b::oadr::oadrCancelReportType oadrCancelReport_type;
      typedef ::xsd::cxx::tree::optional< oadrCancelReport_type > oadrCancelReport_optional;
      typedef ::xsd::cxx::tree::traits< oadrCancelReport_type, char > oadrCancelReport_traits;

      const oadrCancelReport_optional&
      oadrCancelReport () const;

      oadrCancelReport_optional&
      oadrCancelReport ();

      void
      oadrCancelReport (const oadrCancelReport_type& x);

      void
      oadrCancelReport (const oadrCancelReport_optional& x);

      void
      oadrCancelReport (::std::unique_ptr< oadrCancelReport_type > p);

      // oadrCanceledReport
      //
      typedef ::oadr2b::oadr::oadrCanceledReportType oadrCanceledReport_type;
      typedef ::xsd::cxx::tree::optional< oadrCanceledReport_type > oadrCanceledReport_optional;
      typedef ::xsd::cxx::tree::traits< oadrCanceledReport_type, char > oadrCanceledReport_traits;

      const oadrCanceledReport_optional&
      oadrCanceledReport () const;

      oadrCanceledReport_optional&
      oadrCanceledReport ();

      void
      oadrCanceledReport (const oadrCanceledReport_type& x);

      void
      oadrCanceledReport (const oadrCanceledReport_optional& x);

      void
      oadrCanceledReport (::std::unique_ptr< oadrCanceledReport_type > p);

      // oadrCreateReport
      //
      typedef ::oadr2b::oadr::oadrCreateReportType oadrCreateReport_type;
      typedef ::xsd::cxx::tree::optional< oadrCreateReport_type > oadrCreateReport_optional;
      typedef ::xsd::cxx::tree::traits< oadrCreateReport_type, char > oadrCreateReport_traits;

      const oadrCreateReport_optional&
      oadrCreateReport () const;

      oadrCreateReport_optional&
      oadrCreateReport ();

      void
      oadrCreateReport (const oadrCreateReport_type& x);

      void
      oadrCreateReport (const oadrCreateReport_optional& x);

      void
      oadrCreateReport (::std::unique_ptr< oadrCreateReport_type > p);

      // oadrCreatedReport
      //
      typedef ::oadr2b::oadr::oadrCreatedReportType oadrCreatedReport_type;
      typedef ::xsd::cxx::tree::optional< oadrCreatedReport_type > oadrCreatedReport_optional;
      typedef ::xsd::cxx::tree::traits< oadrCreatedReport_type, char > oadrCreatedReport_traits;

      const oadrCreatedReport_optional&
      oadrCreatedReport () const;

      oadrCreatedReport_optional&
      oadrCreatedReport ();

      void
      oadrCreatedReport (const oadrCreatedReport_type& x);

      void
      oadrCreatedReport (const oadrCreatedReport_optional& x);

      void
      oadrCreatedReport (::std::unique_ptr< oadrCreatedReport_type > p);

      // oadrRegisterReport
      //
      typedef ::oadr2b::oadr::oadrRegisterReportType oadrRegisterReport_type;
      typedef ::xsd::cxx::tree::optional< oadrRegisterReport_type > oadrRegisterReport_optional;
      typedef ::xsd::cxx::tree::traits< oadrRegisterReport_type, char > oadrRegisterReport_traits;

      const oadrRegisterReport_optional&
      oadrRegisterReport () const;

      oadrRegisterReport_optional&
      oadrRegisterReport ();

      void
      oadrRegisterReport (const oadrRegisterReport_type& x);

      void
      oadrRegisterReport (const oadrRegisterReport_optional& x);

      void
      oadrRegisterReport (::std::unique_ptr< oadrRegisterReport_type > p);

      // oadrRegisteredReport
      //
      typedef ::oadr2b::oadr::oadrRegisteredReportType oadrRegisteredReport_type;
      typedef ::xsd::cxx::tree::optional< oadrRegisteredReport_type > oadrRegisteredReport_optional;
      typedef ::xsd::cxx::tree::traits< oadrRegisteredReport_type, char > oadrRegisteredReport_traits;

      const oadrRegisteredReport_optional&
      oadrRegisteredReport () const;

      oadrRegisteredReport_optional&
      oadrRegisteredReport ();

      void
      oadrRegisteredReport (const oadrRegisteredReport_type& x);

      void
      oadrRegisteredReport (const oadrRegisteredReport_optional& x);

      void
      oadrRegisteredReport (::std::unique_ptr< oadrRegisteredReport_type > p);

      // oadrUpdateReport
      //
      typedef ::oadr2b::oadr::oadrUpdateReportType oadrUpdateReport_type;
      typedef ::xsd::cxx::tree::optional< oadrUpdateReport_type > oadrUpdateReport_optional;
      typedef ::xsd::cxx::tree::traits< oadrUpdateReport_type, char > oadrUpdateReport_traits;

      const oadrUpdateReport_optional&
      oadrUpdateReport () const;

      oadrUpdateReport_optional&
      oadrUpdateReport ();

      void
      oadrUpdateReport (const oadrUpdateReport_type& x);

      void
      oadrUpdateReport (const oadrUpdateReport_optional& x);

      void
      oadrUpdateReport (::std::unique_ptr< oadrUpdateReport_type > p);

      // oadrUpdatedReport
      //
      typedef ::oadr2b::oadr::oadrUpdatedReportType oadrUpdatedReport_type;
      typedef ::xsd::cxx::tree::optional< oadrUpdatedReport_type > oadrUpdatedReport_optional;
      typedef ::xsd::cxx::tree::traits< oadrUpdatedReport_type, char > oadrUpdatedReport_traits;

      const oadrUpdatedReport_optional&
      oadrUpdatedReport () const;

      oadrUpdatedReport_optional&
      oadrUpdatedReport ();

      void
      oadrUpdatedReport (const oadrUpdatedReport_type& x);

      void
      oadrUpdatedReport (const oadrUpdatedReport_optional& x);

      void
      oadrUpdatedReport (::std::unique_ptr< oadrUpdatedReport_type > p);

      // oadrCancelPartyRegistration
      //
      typedef ::oadr2b::oadr::oadrCancelPartyRegistrationType oadrCancelPartyRegistration_type;
      typedef ::xsd::cxx::tree::optional< oadrCancelPartyRegistration_type > oadrCancelPartyRegistration_optional;
      typedef ::xsd::cxx::tree::traits< oadrCancelPartyRegistration_type, char > oadrCancelPartyRegistration_traits;

      const oadrCancelPartyRegistration_optional&
      oadrCancelPartyRegistration () const;

      oadrCancelPartyRegistration_optional&
      oadrCancelPartyRegistration ();

      void
      oadrCancelPartyRegistration (const oadrCancelPartyRegistration_type& x);

      void
      oadrCancelPartyRegistration (const oadrCancelPartyRegistration_optional& x);

      void
      oadrCancelPartyRegistration (::std::unique_ptr< oadrCancelPartyRegistration_type > p);

      // oadrCanceledPartyRegistration
      //
      typedef ::oadr2b::oadr::oadrCanceledPartyRegistrationType oadrCanceledPartyRegistration_type;
      typedef ::xsd::cxx::tree::optional< oadrCanceledPartyRegistration_type > oadrCanceledPartyRegistration_optional;
      typedef ::xsd::cxx::tree::traits< oadrCanceledPartyRegistration_type, char > oadrCanceledPartyRegistration_traits;

      const oadrCanceledPartyRegistration_optional&
      oadrCanceledPartyRegistration () const;

      oadrCanceledPartyRegistration_optional&
      oadrCanceledPartyRegistration ();

      void
      oadrCanceledPartyRegistration (const oadrCanceledPartyRegistration_type& x);

      void
      oadrCanceledPartyRegistration (const oadrCanceledPartyRegistration_optional& x);

      void
      oadrCanceledPartyRegistration (::std::unique_ptr< oadrCanceledPartyRegistration_type > p);

      // oadrCreatePartyRegistration
      //
      typedef ::oadr2b::oadr::oadrCreatePartyRegistrationType oadrCreatePartyRegistration_type;
      typedef ::xsd::cxx::tree::optional< oadrCreatePartyRegistration_type > oadrCreatePartyRegistration_optional;
      typedef ::xsd::cxx::tree::traits< oadrCreatePartyRegistration_type, char > oadrCreatePartyRegistration_traits;

      const oadrCreatePartyRegistration_optional&
      oadrCreatePartyRegistration () const;

      oadrCreatePartyRegistration_optional&
      oadrCreatePartyRegistration ();

      void
      oadrCreatePartyRegistration (const oadrCreatePartyRegistration_type& x);

      void
      oadrCreatePartyRegistration (const oadrCreatePartyRegistration_optional& x);

      void
      oadrCreatePartyRegistration (::std::unique_ptr< oadrCreatePartyRegistration_type > p);

      // oadrCreatedPartyRegistration
      //
      typedef ::oadr2b::oadr::oadrCreatedPartyRegistrationType oadrCreatedPartyRegistration_type;
      typedef ::xsd::cxx::tree::optional< oadrCreatedPartyRegistration_type > oadrCreatedPartyRegistration_optional;
      typedef ::xsd::cxx::tree::traits< oadrCreatedPartyRegistration_type, char > oadrCreatedPartyRegistration_traits;

      const oadrCreatedPartyRegistration_optional&
      oadrCreatedPartyRegistration () const;

      oadrCreatedPartyRegistration_optional&
      oadrCreatedPartyRegistration ();

      void
      oadrCreatedPartyRegistration (const oadrCreatedPartyRegistration_type& x);

      void
      oadrCreatedPartyRegistration (const oadrCreatedPartyRegistration_optional& x);

      void
      oadrCreatedPartyRegistration (::std::unique_ptr< oadrCreatedPartyRegistration_type > p);

      // oadrRequestReregistration
      //
      typedef ::oadr2b::oadr::oadrRequestReregistrationType oadrRequestReregistration_type;
      typedef ::xsd::cxx::tree::optional< oadrRequestReregistration_type > oadrRequestReregistration_optional;
      typedef ::xsd::cxx::tree::traits< oadrRequestReregistration_type, char > oadrRequestReregistration_traits;

      const oadrRequestReregistration_optional&
      oadrRequestReregistration () const;

      oadrRequestReregistration_optional&
      oadrRequestReregistration ();

      void
      oadrRequestReregistration (const oadrRequestReregistration_type& x);

      void
      oadrRequestReregistration (const oadrRequestReregistration_optional& x);

      void
      oadrRequestReregistration (::std::unique_ptr< oadrRequestReregistration_type > p);

      // oadrQueryRegistration
      //
      typedef ::oadr2b::oadr::oadrQueryRegistrationType oadrQueryRegistration_type;
      typedef ::xsd::cxx::tree::optional< oadrQueryRegistration_type > oadrQueryRegistration_optional;
      typedef ::xsd::cxx::tree::traits< oadrQueryRegistration_type, char > oadrQueryRegistration_traits;

      const oadrQueryRegistration_optional&
      oadrQueryRegistration () const;

      oadrQueryRegistration_optional&
      oadrQueryRegistration ();

      void
      oadrQueryRegistration (const oadrQueryRegistration_type& x);

      void
      oadrQueryRegistration (const oadrQueryRegistration_optional& x);

      void
      oadrQueryRegistration (::std::unique_ptr< oadrQueryRegistration_type > p);

      // oadrPoll
      //
      typedef ::oadr2b::oadr::oadrPollType oadrPoll_type;
      typedef ::xsd::cxx::tree::optional< oadrPoll_type > oadrPoll_optional;
      typedef ::xsd::cxx::tree::traits< oadrPoll_type, char > oadrPoll_traits;

      const oadrPoll_optional&
      oadrPoll () const;

      oadrPoll_optional&
      oadrPoll ();

      void
      oadrPoll (const oadrPoll_type& x);

      void
      oadrPoll (const oadrPoll_optional& x);

      void
      oadrPoll (::std::unique_ptr< oadrPoll_type > p);

      // Id
      //
      typedef ::xml_schema_test::id Id_type;
      typedef ::xsd::cxx::tree::optional< Id_type > Id_optional;
      typedef ::xsd::cxx::tree::traits< Id_type, char > Id_traits;

      const Id_optional&
      Id () const;

      Id_optional&
      Id ();

      void
      Id (const Id_type& x);

      void
      Id (const Id_optional& x);

      void
      Id (::std::unique_ptr< Id_type > p);

      // Constructors.
      //
      oadrSignedObject ();

      oadrSignedObject (const ::xercesc::DOMElement& e,
                   ::xml_schema_test::flags f = 0,
                   ::xml_schema_test::container* c = 0);

      oadrSignedObject (const oadrSignedObject& x,
                   ::xml_schema_test::flags f = 0,
                   ::xml_schema_test::container* c = 0);

      virtual oadrSignedObject*
      _clone (::xml_schema_test::flags f = 0,
         ::xml_schema_test::container* c = 0) const;

      oadrSignedObject&
      operator= (const oadrSignedObject& x);

      virtual 
      ~oadrSignedObject ();

      // Implementation.
      //
      protected:
      void
      parse (::xsd::cxx::xml::dom::parser< char >&,
        ::xml_schema_test::flags);

      protected:
      oadrDistributeEvent_optional oadrDistributeEvent_;
      oadrCreatedEvent_optional oadrCreatedEvent_;
      oadrRequestEvent_optional oadrRequestEvent_;
      oadrResponse_optional oadrResponse_;
      oadrCancelOpt_optional oadrCancelOpt_;
      oadrCanceledOpt_optional oadrCanceledOpt_;
      oadrCreateOpt_optional oadrCreateOpt_;
      oadrCreatedOpt_optional oadrCreatedOpt_;
      oadrCancelReport_optional oadrCancelReport_;
      oadrCanceledReport_optional oadrCanceledReport_;
      oadrCreateReport_optional oadrCreateReport_;
      oadrCreatedReport_optional oadrCreatedReport_;
      oadrRegisterReport_optional oadrRegisterReport_;
      oadrRegisteredReport_optional oadrRegisteredReport_;
      oadrUpdateReport_optional oadrUpdateReport_;
      oadrUpdatedReport_optional oadrUpdatedReport_;
      oadrCancelPartyRegistration_optional oadrCancelPartyRegistration_;
      oadrCanceledPartyRegistration_optional oadrCanceledPartyRegistration_;
      oadrCreatePartyRegistration_optional oadrCreatePartyRegistration_;
      oadrCreatedPartyRegistration_optional oadrCreatedPartyRegistration_;
      oadrRequestReregistration_optional oadrRequestReregistration_;
      oadrQueryRegistration_optional oadrQueryRegistration_;
      oadrPoll_optional oadrPoll_;
      Id_optional Id_;
    };
  }
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace oadr2b
{
  namespace oadr
  {
  }
}

#include <iosfwd>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>
#include <xercesc/framework/XMLFormatter.hpp>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

namespace oadr2b
{
  namespace oadr
  {
    void
    operator<< (::xercesc::DOMElement&, const oadrSignedObject&);
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // OADR_SIGNED_OBJECT_HXX
