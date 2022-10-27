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

#ifndef DSAKEY_VALUE_TYPE_HXX
#define DSAKEY_VALUE_TYPE_HXX

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
  namespace sig
  {
    class DSAKeyValueType;
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
  namespace sig
  {
    class CryptoBinary;
  }
}

namespace oadr2b
{
  namespace sig
  {
    class DSAKeyValueType: public ::xml_schema_test::type
    {
      public:
      // P
      //
      typedef ::oadr2b::sig::CryptoBinary P_type;
      typedef ::xsd::cxx::tree::optional< P_type > P_optional;
      typedef ::xsd::cxx::tree::traits< P_type, char > P_traits;

      const P_optional&
      P () const;

      P_optional&
      P ();

      void
      P (const P_type& x);

      void
      P (const P_optional& x);

      void
      P (::std::unique_ptr< P_type > p);

      // Q
      //
      typedef ::oadr2b::sig::CryptoBinary Q_type;
      typedef ::xsd::cxx::tree::optional< Q_type > Q_optional;
      typedef ::xsd::cxx::tree::traits< Q_type, char > Q_traits;

      const Q_optional&
      Q () const;

      Q_optional&
      Q ();

      void
      Q (const Q_type& x);

      void
      Q (const Q_optional& x);

      void
      Q (::std::unique_ptr< Q_type > p);

      // G
      //
      typedef ::oadr2b::sig::CryptoBinary G_type;
      typedef ::xsd::cxx::tree::optional< G_type > G_optional;
      typedef ::xsd::cxx::tree::traits< G_type, char > G_traits;

      const G_optional&
      G () const;

      G_optional&
      G ();

      void
      G (const G_type& x);

      void
      G (const G_optional& x);

      void
      G (::std::unique_ptr< G_type > p);

      // Y
      //
      typedef ::oadr2b::sig::CryptoBinary Y_type;
      typedef ::xsd::cxx::tree::traits< Y_type, char > Y_traits;

      const Y_type&
      Y () const;

      Y_type&
      Y ();

      void
      Y (const Y_type& x);

      void
      Y (::std::unique_ptr< Y_type > p);

      // J
      //
      typedef ::oadr2b::sig::CryptoBinary J_type;
      typedef ::xsd::cxx::tree::optional< J_type > J_optional;
      typedef ::xsd::cxx::tree::traits< J_type, char > J_traits;

      const J_optional&
      J () const;

      J_optional&
      J ();

      void
      J (const J_type& x);

      void
      J (const J_optional& x);

      void
      J (::std::unique_ptr< J_type > p);

      // Seed
      //
      typedef ::oadr2b::sig::CryptoBinary Seed_type;
      typedef ::xsd::cxx::tree::optional< Seed_type > Seed_optional;
      typedef ::xsd::cxx::tree::traits< Seed_type, char > Seed_traits;

      const Seed_optional&
      Seed () const;

      Seed_optional&
      Seed ();

      void
      Seed (const Seed_type& x);

      void
      Seed (const Seed_optional& x);

      void
      Seed (::std::unique_ptr< Seed_type > p);

      // PgenCounter
      //
      typedef ::oadr2b::sig::CryptoBinary PgenCounter_type;
      typedef ::xsd::cxx::tree::optional< PgenCounter_type > PgenCounter_optional;
      typedef ::xsd::cxx::tree::traits< PgenCounter_type, char > PgenCounter_traits;

      const PgenCounter_optional&
      PgenCounter () const;

      PgenCounter_optional&
      PgenCounter ();

      void
      PgenCounter (const PgenCounter_type& x);

      void
      PgenCounter (const PgenCounter_optional& x);

      void
      PgenCounter (::std::unique_ptr< PgenCounter_type > p);

      // Constructors.
      //
      DSAKeyValueType (const Y_type&);

      DSAKeyValueType (const ::xercesc::DOMElement& e,
                  ::xml_schema_test::flags f = 0,
                  ::xml_schema_test::container* c = 0);

      DSAKeyValueType (const DSAKeyValueType& x,
                  ::xml_schema_test::flags f = 0,
                  ::xml_schema_test::container* c = 0);

      virtual DSAKeyValueType*
      _clone (::xml_schema_test::flags f = 0,
         ::xml_schema_test::container* c = 0) const;

      DSAKeyValueType&
      operator= (const DSAKeyValueType& x);

      virtual 
      ~DSAKeyValueType ();

      // Implementation.
      //
      protected:
      void
      parse (::xsd::cxx::xml::dom::parser< char >&,
        ::xml_schema_test::flags);

      protected:
      P_optional P_;
      Q_optional Q_;
      G_optional G_;
      ::xsd::cxx::tree::one< Y_type > Y_;
      J_optional J_;
      Seed_optional Seed_;
      PgenCounter_optional PgenCounter_;
    };
  }
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace oadr2b
{
  namespace sig
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
  namespace sig
  {
    void
    operator<< (::xercesc::DOMElement&, const DSAKeyValueType&);
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // DSAKEY_VALUE_TYPE_HXX
