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

#include "MridType.hxx"

namespace power
{
  // MridType
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

namespace power
{
  // MridType
  //

  MridType::
  MridType ()
  : ::xml_schema_test::string ()
  {
  }

  MridType::
  MridType (const char* _xsd_string_base)
  : ::xml_schema_test::string (_xsd_string_base)
  {
  }

  MridType::
  MridType (const ::std::string& _xsd_string_base)
  : ::xml_schema_test::string (_xsd_string_base)
  {
  }

  MridType::
  MridType (const  ::xml_schema_test::string& _xsd_string_base)
  : ::xml_schema_test::string (_xsd_string_base)
  {
  }

  MridType::
  MridType (const MridType& x,
       ::xml_schema_test::flags f,
       ::xml_schema_test::container* c)
  : ::xml_schema_test::string (x, f, c)
  {
  }

  MridType::
  MridType (const ::xercesc::DOMElement& e,
       ::xml_schema_test::flags f,
       ::xml_schema_test::container* c)
  : ::xml_schema_test::string (e, f, c)
  {
  }

  MridType::
  MridType (const ::xercesc::DOMAttr& a,
       ::xml_schema_test::flags f,
       ::xml_schema_test::container* c)
  : ::xml_schema_test::string (a, f, c)
  {
  }

  MridType::
  MridType (const ::std::string& s,
            const ::xercesc::DOMElement* e,
       ::xml_schema_test::flags f,
       ::xml_schema_test::container* c)
  : ::xml_schema_test::string (s, e, f, c)
  {
  }

  MridType* MridType::
  _clone (::xml_schema_test::flags f,
     ::xml_schema_test::container* c) const
  {
    return new class MridType (*this, f, c);
  }

  MridType::
  ~MridType ()
  {
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace power
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

namespace power
{
  void
  operator<< (::xercesc::DOMElement& e, const MridType& i)
  {
    e << static_cast< const  ::xml_schema_test::string& > (i);
  }

  void
  operator<< (::xercesc::DOMAttr& a, const MridType& i)
  {
    a << static_cast< const  ::xml_schema_test::string& > (i);
  }

  void
  operator<< (::xml_schema_test::list_stream& l,
              const MridType& i)
  {
    l << static_cast< const  ::xml_schema_test::string& > (i);
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

