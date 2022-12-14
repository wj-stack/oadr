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

#include "LinearRing.hxx"

#include "doubleList.hxx"

namespace oadr2b
{
  namespace gml
  {
    // LinearRing
    // 

    const LinearRing::posList_type& LinearRing::
    posList () const
    {
      return this->posList_.get ();
    }

    LinearRing::posList_type& LinearRing::
    posList ()
    {
      return this->posList_.get ();
    }

    void LinearRing::
    posList (const posList_type& x)
    {
      this->posList_.set (x);
    }

    void LinearRing::
    posList (::std::unique_ptr< posList_type > x)
    {
      this->posList_.set (std::move (x));
    }
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

namespace oadr2b
{
  namespace gml
  {
    // LinearRing
    //

    LinearRing::
    LinearRing (const posList_type& posList)
    : ::xml_schema_test::type (),
      posList_ (posList, this)
    {
    }

    LinearRing::
    LinearRing (const LinearRing& x,
           ::xml_schema_test::flags f,
           ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      posList_ (x.posList_, f, this)
    {
    }

    LinearRing::
    LinearRing (const ::xercesc::DOMElement& e,
           ::xml_schema_test::flags f,
           ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      posList_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void LinearRing::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
      ::xml_schema_test::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // posList
        //
        if (n.name () == "posList" && n.namespace_ () == "http://www.opengis.net/gml/3.2")
        {
          ::std::unique_ptr< posList_type > r (
            posList_traits::create (i, f, this));

          if (!posList_.present ())
          {
            this->posList_.set (::std::move (r));
            continue;
          }
        }

        break;
      }

      if (!posList_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "posList",
          "http://www.opengis.net/gml/3.2");
      }
    }

    LinearRing* LinearRing::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class LinearRing (*this, f, c);
    }

    LinearRing& LinearRing::
    operator= (const LinearRing& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->posList_ = x.posList_;
      }

      return *this;
    }

    LinearRing::
    ~LinearRing ()
    {
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace gml
  {
  }
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

namespace oadr2b
{
  namespace gml
  {
    void
    operator<< (::xercesc::DOMElement& e, const LinearRing& i)
    {
      e << static_cast< const  ::xml_schema_test::type& > (i);

      // posList
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "posList",
            "http://www.opengis.net/gml/3.2",
            e));

        s << i.posList ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

