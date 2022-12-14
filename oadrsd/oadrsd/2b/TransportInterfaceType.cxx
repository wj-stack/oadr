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

#include "TransportInterfaceType.hxx"

#include "NodeType.hxx"

namespace power
{
  // TransportInterfaceType
  // 

  const TransportInterfaceType::pointOfReceipt_type& TransportInterfaceType::
  pointOfReceipt () const
  {
    return this->pointOfReceipt_.get ();
  }

  TransportInterfaceType::pointOfReceipt_type& TransportInterfaceType::
  pointOfReceipt ()
  {
    return this->pointOfReceipt_.get ();
  }

  void TransportInterfaceType::
  pointOfReceipt (const pointOfReceipt_type& x)
  {
    this->pointOfReceipt_.set (x);
  }

  void TransportInterfaceType::
  pointOfReceipt (::std::unique_ptr< pointOfReceipt_type > x)
  {
    this->pointOfReceipt_.set (std::move (x));
  }

  const TransportInterfaceType::pointOfDelivery_type& TransportInterfaceType::
  pointOfDelivery () const
  {
    return this->pointOfDelivery_.get ();
  }

  TransportInterfaceType::pointOfDelivery_type& TransportInterfaceType::
  pointOfDelivery ()
  {
    return this->pointOfDelivery_.get ();
  }

  void TransportInterfaceType::
  pointOfDelivery (const pointOfDelivery_type& x)
  {
    this->pointOfDelivery_.set (x);
  }

  void TransportInterfaceType::
  pointOfDelivery (::std::unique_ptr< pointOfDelivery_type > x)
  {
    this->pointOfDelivery_.set (std::move (x));
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
  // TransportInterfaceType
  //

  TransportInterfaceType::
  TransportInterfaceType (const pointOfReceipt_type& pointOfReceipt,
                          const pointOfDelivery_type& pointOfDelivery)
  : ::xml_schema_test::type (),
    pointOfReceipt_ (pointOfReceipt, this),
    pointOfDelivery_ (pointOfDelivery, this)
  {
  }

  TransportInterfaceType::
  TransportInterfaceType (const TransportInterfaceType& x,
                     ::xml_schema_test::flags f,
                     ::xml_schema_test::container* c)
  : ::xml_schema_test::type (x, f, c),
    pointOfReceipt_ (x.pointOfReceipt_, f, this),
    pointOfDelivery_ (x.pointOfDelivery_, f, this)
  {
  }

  TransportInterfaceType::
  TransportInterfaceType (const ::xercesc::DOMElement& e,
                     ::xml_schema_test::flags f,
                     ::xml_schema_test::container* c)
  : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
    pointOfReceipt_ (this),
    pointOfDelivery_ (this)
  {
    if ((f & ::xml_schema_test::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
      this->parse (p, f);
    }
  }

  void TransportInterfaceType::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
    ::xml_schema_test::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // pointOfReceipt
      //
      if (n.name () == "pointOfReceipt" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/power")
      {
        ::std::unique_ptr< pointOfReceipt_type > r (
          pointOfReceipt_traits::create (i, f, this));

        if (!pointOfReceipt_.present ())
        {
          this->pointOfReceipt_.set (::std::move (r));
          continue;
        }
      }

      // pointOfDelivery
      //
      if (n.name () == "pointOfDelivery" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06/power")
      {
        ::std::unique_ptr< pointOfDelivery_type > r (
          pointOfDelivery_traits::create (i, f, this));

        if (!pointOfDelivery_.present ())
        {
          this->pointOfDelivery_.set (::std::move (r));
          continue;
        }
      }

      break;
    }

    if (!pointOfReceipt_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "pointOfReceipt",
        "http://docs.oasis-open.org/ns/emix/2011/06/power");
    }

    if (!pointOfDelivery_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "pointOfDelivery",
        "http://docs.oasis-open.org/ns/emix/2011/06/power");
    }
  }

  TransportInterfaceType* TransportInterfaceType::
  _clone (::xml_schema_test::flags f,
     ::xml_schema_test::container* c) const
  {
    return new class TransportInterfaceType (*this, f, c);
  }

  TransportInterfaceType& TransportInterfaceType::
  operator= (const TransportInterfaceType& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema_test::type& > (*this) = x;
      this->pointOfReceipt_ = x.pointOfReceipt_;
      this->pointOfDelivery_ = x.pointOfDelivery_;
    }

    return *this;
  }

  TransportInterfaceType::
  ~TransportInterfaceType ()
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
  operator<< (::xercesc::DOMElement& e, const TransportInterfaceType& i)
  {
    e << static_cast< const  ::xml_schema_test::type& > (i);

    // pointOfReceipt
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "pointOfReceipt",
          "http://docs.oasis-open.org/ns/emix/2011/06/power",
          e));

      s << i.pointOfReceipt ();
    }

    // pointOfDelivery
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "pointOfDelivery",
          "http://docs.oasis-open.org/ns/emix/2011/06/power",
          e));

      s << i.pointOfDelivery ();
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

