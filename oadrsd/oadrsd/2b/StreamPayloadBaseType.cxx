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

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "StreamPayloadBaseType.hxx"

namespace stream
{
  // StreamPayloadBaseType
  // 
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

#include <xsd/cxx/tree/type-factory-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_factory_plate< 0, char >
  type_factory_plate_init;
}

namespace stream
{
  // StreamPayloadBaseType
  //

  StreamPayloadBaseType::
  StreamPayloadBaseType ()
  : ::xml_schema_test::type ()
  {
  }

  StreamPayloadBaseType::
  StreamPayloadBaseType (const StreamPayloadBaseType& x,
                    ::xml_schema_test::flags f,
                    ::xml_schema_test::container* c)
  : ::xml_schema_test::type (x, f, c)
  {
  }

  StreamPayloadBaseType::
  StreamPayloadBaseType (const ::xercesc::DOMElement& e,
                    ::xml_schema_test::flags f,
                    ::xml_schema_test::container* c)
  : ::xml_schema_test::type (e, f, c)
  {
  }

  StreamPayloadBaseType::
  StreamPayloadBaseType (const ::xercesc::DOMAttr& a,
                    ::xml_schema_test::flags f,
                    ::xml_schema_test::container* c)
  : ::xml_schema_test::type (a, f, c)
  {
  }

  StreamPayloadBaseType::
  StreamPayloadBaseType (const ::std::string& s,
                         const ::xercesc::DOMElement* e,
                    ::xml_schema_test::flags f,
                    ::xml_schema_test::container* c)
  : ::xml_schema_test::type (s, e, f, c)
  {
  }

  StreamPayloadBaseType* StreamPayloadBaseType::
  _clone (::xml_schema_test::flags f,
     ::xml_schema_test::container* c) const
  {
    return new class StreamPayloadBaseType (*this, f, c);
  }

  StreamPayloadBaseType::
  ~StreamPayloadBaseType ()
  {
  }

  static
  const ::xsd::cxx::tree::type_factory_initializer< 0, char, StreamPayloadBaseType >
  _xsd_StreamPayloadBaseType_type_factory_init (
    "StreamPayloadBaseType",
    "urn:ietf:params:xml:ns:icalendar-2.0:stream");
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace stream
{
}

#include <ostream>
#include <xsd/cxx/tree/error-handler.hxx>
#include <xsd/cxx/xml/dom/serialization-source.hxx>

#include <xsd/cxx/tree/type-serializer-map.hxx>

namespace _xsd
{
  static
  const ::xsd::cxx::tree::type_serializer_plate< 0, char >
  type_serializer_plate_init;
}

namespace stream
{
  void
  operator<< (::xercesc::DOMElement& e, const StreamPayloadBaseType& i)
  {
    e << static_cast< const  ::xml_schema_test::type& > (i);
  }

  void
  operator<< (::xercesc::DOMAttr&, const StreamPayloadBaseType&)
  {
  }

  void
  operator<< (::xml_schema_test::list_stream&,
              const StreamPayloadBaseType&)
  {
  }

  static
  const ::xsd::cxx::tree::type_serializer_initializer< 0, char, StreamPayloadBaseType >
  _xsd_StreamPayloadBaseType_type_serializer_init (
    "StreamPayloadBaseType",
    "urn:ietf:params:xml:ns:icalendar-2.0:stream");
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

