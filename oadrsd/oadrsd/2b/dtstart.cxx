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

#include "dtstart.hxx"

#include "DateTimeType.hxx"

namespace icalendar_2_0
{
  // dtstart
  // 

  const dtstart::date_time_type& dtstart::
  date_time () const
  {
    return this->date_time_.get ();
  }

  dtstart::date_time_type& dtstart::
  date_time ()
  {
    return this->date_time_.get ();
  }

  void dtstart::
  date_time (const date_time_type& x)
  {
    this->date_time_.set (x);
  }

  void dtstart::
  date_time (::std::unique_ptr< date_time_type > x)
  {
    this->date_time_.set (std::move (x));
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

namespace icalendar_2_0
{
  // dtstart
  //

  dtstart::
  dtstart (const date_time_type& date_time)
  : ::xml_schema::type (),
    date_time_ (date_time, this)
  {
  }

  dtstart::
  dtstart (const dtstart& x,
           ::xml_schema::flags f,
           ::xml_schema::container* c)
  : ::xml_schema::type (x, f, c),
    date_time_ (x.date_time_, f, this)
  {
  }

  dtstart::
  dtstart (const ::xercesc::DOMElement& e,
           ::xml_schema::flags f,
           ::xml_schema::container* c)
  : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
    date_time_ (this)
  {
    if ((f & ::xml_schema::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
      this->parse (p, f);
    }
  }

  void dtstart::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
         ::xml_schema::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // date-time
      //
      if (n.name () == "date-time" && n.namespace_ () == "urn:ietf:params:xml:ns:icalendar-2.0")
      {
        ::std::unique_ptr< date_time_type > r (
          date_time_traits::create (i, f, this));

        if (!date_time_.present ())
        {
          this->date_time_.set (::std::move (r));
          continue;
        }
      }

      break;
    }

    if (!date_time_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "date-time",
        "urn:ietf:params:xml:ns:icalendar-2.0");
    }
  }

  dtstart* dtstart::
  _clone (::xml_schema::flags f,
          ::xml_schema::container* c) const
  {
    return new class dtstart (*this, f, c);
  }

  dtstart& dtstart::
  operator= (const dtstart& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema::type& > (*this) = x;
      this->date_time_ = x.date_time_;
    }

    return *this;
  }

  dtstart::
  ~dtstart ()
  {
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace icalendar_2_0
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

namespace icalendar_2_0
{
  void
  operator<< (::xercesc::DOMElement& e, const dtstart& i)
  {
    e << static_cast< const ::xml_schema::type& > (i);

    // date-time
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "date-time",
          "urn:ietf:params:xml:ns:icalendar-2.0",
          e));

      s << i.date_time ();
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

