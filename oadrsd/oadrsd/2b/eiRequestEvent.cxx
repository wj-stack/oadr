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

#include "eiRequestEvent.hxx"

namespace payloads
{
  // eiRequestEvent
  // 

  const eiRequestEvent::requestID_type& eiRequestEvent::
  requestID () const
  {
    return this->requestID_.get ();
  }

  eiRequestEvent::requestID_type& eiRequestEvent::
  requestID ()
  {
    return this->requestID_.get ();
  }

  void eiRequestEvent::
  requestID (const requestID_type& x)
  {
    this->requestID_.set (x);
  }

  void eiRequestEvent::
  requestID (::std::unique_ptr< requestID_type > x)
  {
    this->requestID_.set (std::move (x));
  }

  const eiRequestEvent::venID_type& eiRequestEvent::
  venID () const
  {
    return this->venID_.get ();
  }

  eiRequestEvent::venID_type& eiRequestEvent::
  venID ()
  {
    return this->venID_.get ();
  }

  void eiRequestEvent::
  venID (const venID_type& x)
  {
    this->venID_.set (x);
  }

  void eiRequestEvent::
  venID (::std::unique_ptr< venID_type > x)
  {
    this->venID_.set (std::move (x));
  }

  const eiRequestEvent::replyLimit_optional& eiRequestEvent::
  replyLimit () const
  {
    return this->replyLimit_;
  }

  eiRequestEvent::replyLimit_optional& eiRequestEvent::
  replyLimit ()
  {
    return this->replyLimit_;
  }

  void eiRequestEvent::
  replyLimit (const replyLimit_type& x)
  {
    this->replyLimit_.set (x);
  }

  void eiRequestEvent::
  replyLimit (const replyLimit_optional& x)
  {
    this->replyLimit_ = x;
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

namespace payloads
{
  // eiRequestEvent
  //

  eiRequestEvent::
  eiRequestEvent (const requestID_type& requestID,
                  const venID_type& venID)
  : ::xml_schema_test::type (),
    requestID_ (requestID, this),
    venID_ (venID, this),
    replyLimit_ (this)
  {
  }

  eiRequestEvent::
  eiRequestEvent (const eiRequestEvent& x,
             ::xml_schema_test::flags f,
             ::xml_schema_test::container* c)
  : ::xml_schema_test::type (x, f, c),
    requestID_ (x.requestID_, f, this),
    venID_ (x.venID_, f, this),
    replyLimit_ (x.replyLimit_, f, this)
  {
  }

  eiRequestEvent::
  eiRequestEvent (const ::xercesc::DOMElement& e,
             ::xml_schema_test::flags f,
             ::xml_schema_test::container* c)
  : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
    requestID_ (this),
    venID_ (this),
    replyLimit_ (this)
  {
    if ((f & ::xml_schema_test::flags::base) == 0)
    {
      ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
      this->parse (p, f);
    }
  }

  void eiRequestEvent::
  parse (::xsd::cxx::xml::dom::parser< char >& p,
    ::xml_schema_test::flags f)
  {
    for (; p.more_content (); p.next_content (false))
    {
      const ::xercesc::DOMElement& i (p.cur_element ());
      const ::xsd::cxx::xml::qualified_name< char > n (
        ::xsd::cxx::xml::dom::name< char > (i));

      // requestID
      //
      if (n.name () == "requestID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110/payloads")
      {
        ::std::unique_ptr< requestID_type > r (
          requestID_traits::create (i, f, this));

        if (!requestID_.present ())
        {
          this->requestID_.set (::std::move (r));
          continue;
        }
      }

      // venID
      //
      if (n.name () == "venID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
      {
        ::std::unique_ptr< venID_type > r (
          venID_traits::create (i, f, this));

        if (!venID_.present ())
        {
          this->venID_.set (::std::move (r));
          continue;
        }
      }

      // replyLimit
      //
      if (n.name () == "replyLimit" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110/payloads")
      {
        if (!this->replyLimit_)
        {
          this->replyLimit_.set (replyLimit_traits::create (i, f, this));
          continue;
        }
      }

      break;
    }

    if (!requestID_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "requestID",
        "http://docs.oasis-open.org/ns/energyinterop/201110/payloads");
    }

    if (!venID_.present ())
    {
      throw ::xsd::cxx::tree::expected_element< char > (
        "venID",
        "http://docs.oasis-open.org/ns/energyinterop/201110");
    }
  }

  eiRequestEvent* eiRequestEvent::
  _clone (::xml_schema_test::flags f,
     ::xml_schema_test::container* c) const
  {
    return new class eiRequestEvent (*this, f, c);
  }

  eiRequestEvent& eiRequestEvent::
  operator= (const eiRequestEvent& x)
  {
    if (this != &x)
    {
      static_cast< ::xml_schema_test::type& > (*this) = x;
      this->requestID_ = x.requestID_;
      this->venID_ = x.venID_;
      this->replyLimit_ = x.replyLimit_;
    }

    return *this;
  }

  eiRequestEvent::
  ~eiRequestEvent ()
  {
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace payloads
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

namespace payloads
{
  void
  operator<< (::xercesc::DOMElement& e, const eiRequestEvent& i)
  {
    e << static_cast< const  ::xml_schema_test::type& > (i);

    // requestID
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "requestID",
          "http://docs.oasis-open.org/ns/energyinterop/201110/payloads",
          e));

      s << i.requestID ();
    }

    // venID
    //
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "venID",
          "http://docs.oasis-open.org/ns/energyinterop/201110",
          e));

      s << i.venID ();
    }

    // replyLimit
    //
    if (i.replyLimit ())
    {
      ::xercesc::DOMElement& s (
        ::xsd::cxx::xml::dom::create_element (
          "replyLimit",
          "http://docs.oasis-open.org/ns/energyinterop/201110/payloads",
          e));

      s << *i.replyLimit ();
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

