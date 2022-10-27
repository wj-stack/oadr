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

#include "EndDeviceAssetType.hxx"

#include "MridType.hxx"

namespace power
{
  // EndDeviceAssetType
  // 

  const EndDeviceAssetType::mrid_type& EndDeviceAssetType::
  mrid () const
  {
    return this->mrid_.get ();
  }

  EndDeviceAssetType::mrid_type& EndDeviceAssetType::
  mrid ()
  {
    return this->mrid_.get ();
  }

  void EndDeviceAssetType::
  mrid (const mrid_type& x)
  {
    this->mrid_.set (x);
  }

  void EndDeviceAssetType::
  mrid (::std::unique_ptr< mrid_type > x)
  {
    this->mrid_.set (std::move (x));
  }
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
  // EndDeviceAssetType
  //

  EndDeviceAssetType::
  EndDeviceAssetType (const mrid_type& mrid)
  : ::xml_schema_test::type (),
    mrid_ (mrid, this)
  {
  }

  EndDeviceAssetType::
  EndDeviceAssetType (const EndDeviceAssetType& x,
                 ::xml_schema_test::flags f,
                 ::xml_schema_test::container* c)
  : ::xml_schema_test::type (x, f, c),
    mrid_ (x.mrid_, f, this)
  {
  }

  EndDeviceAssetType::
  EndDeviceAssetType (const ::xercesc::DOMElement& e,
                 ::xml_schema_test::flags f,
                 ::xml_schema_test::container* c)
  : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
    mrid_ (this)
  {
    if ((f & ::xml_schema_test::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
      this->parse (p, f);
    }
  }

  void EndDeviceAssetType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
    ::xml_schema_test::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // mrid
      //
      if (n.name () == "mrid" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/power")
      {
        ::std::unique_ptr< mrid_type > r (
          mrid_traits::create (i, f, this));

        if (!mrid_.present ())
        {
          this->mrid_.set (::std::move (r));
          continue;
        }
      }

      break;
    }

    if (!mrid_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "mrid",
        "http://docs.oasis-open.org/ns/emix/2011/06/power");
    }
  }

  EndDeviceAssetType* EndDeviceAssetType::
  _clone (::xml_schema_test::flags f,
     ::xml_schema_test::container* c) const
  {
    return new class EndDeviceAssetType (*this, f, c);
  }

  EndDeviceAssetType& EndDeviceAssetType::
  operator= (const EndDeviceAssetType& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema_test::type& > (*this) = x;
      this->mrid_ = x.mrid_;
    }

    return *this;
  }

  EndDeviceAssetType::
  ~EndDeviceAssetType ()
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
  operator<< (::xercesc::DOMElement& e, const EndDeviceAssetType& i)
  {
    e << static_cast< const  ::xml_schema_test::type& > (i);

    // mrid
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "mrid",
          "http://docs.oasis-open.org/ns/emix/2011/06/power",
          e));

      s << i.mrid ();
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

