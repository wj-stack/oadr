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

#include "oadrDistributeEventType.hxx"

#include "EiResponseType.hxx"

#include "oadrEvent.hxx"

#include "schemaVersionType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrDistributeEventType
    // 

    const oadrDistributeEventType::eiResponse_optional& oadrDistributeEventType::
    eiResponse () const
    {
      return this->eiResponse_;
    }

    oadrDistributeEventType::eiResponse_optional& oadrDistributeEventType::
    eiResponse ()
    {
      return this->eiResponse_;
    }

    void oadrDistributeEventType::
    eiResponse (const eiResponse_type& x)
    {
      this->eiResponse_.set (x);
    }

    void oadrDistributeEventType::
    eiResponse (const eiResponse_optional& x)
    {
      this->eiResponse_ = x;
    }

    void oadrDistributeEventType::
    eiResponse (::std::unique_ptr< eiResponse_type > x)
    {
      this->eiResponse_.set (std::move (x));
    }

    const oadrDistributeEventType::requestID_type& oadrDistributeEventType::
    requestID () const
    {
      return this->requestID_.get ();
    }

    oadrDistributeEventType::requestID_type& oadrDistributeEventType::
    requestID ()
    {
      return this->requestID_.get ();
    }

    void oadrDistributeEventType::
    requestID (const requestID_type& x)
    {
      this->requestID_.set (x);
    }

    void oadrDistributeEventType::
    requestID (::std::unique_ptr< requestID_type > x)
    {
      this->requestID_.set (std::move (x));
    }

    const oadrDistributeEventType::vtnID_type& oadrDistributeEventType::
    vtnID () const
    {
      return this->vtnID_.get ();
    }

    oadrDistributeEventType::vtnID_type& oadrDistributeEventType::
    vtnID ()
    {
      return this->vtnID_.get ();
    }

    void oadrDistributeEventType::
    vtnID (const vtnID_type& x)
    {
      this->vtnID_.set (x);
    }

    void oadrDistributeEventType::
    vtnID (::std::unique_ptr< vtnID_type > x)
    {
      this->vtnID_.set (std::move (x));
    }

    const oadrDistributeEventType::oadrEvent_sequence& oadrDistributeEventType::
    oadrEvent () const
    {
      return this->oadrEvent_;
    }

    oadrDistributeEventType::oadrEvent_sequence& oadrDistributeEventType::
    oadrEvent ()
    {
      return this->oadrEvent_;
    }

    void oadrDistributeEventType::
    oadrEvent (const oadrEvent_sequence& s)
    {
      this->oadrEvent_ = s;
    }

    const oadrDistributeEventType::schemaVersion_optional& oadrDistributeEventType::
    schemaVersion () const
    {
      return this->schemaVersion_;
    }

    oadrDistributeEventType::schemaVersion_optional& oadrDistributeEventType::
    schemaVersion ()
    {
      return this->schemaVersion_;
    }

    void oadrDistributeEventType::
    schemaVersion (const schemaVersion_type& x)
    {
      this->schemaVersion_.set (x);
    }

    void oadrDistributeEventType::
    schemaVersion (const schemaVersion_optional& x)
    {
      this->schemaVersion_ = x;
    }

    void oadrDistributeEventType::
    schemaVersion (::std::unique_ptr< schemaVersion_type > x)
    {
      this->schemaVersion_.set (std::move (x));
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
  namespace oadr
  {
    // oadrDistributeEventType
    //

    oadrDistributeEventType::
    oadrDistributeEventType (const requestID_type& requestID,
                             const vtnID_type& vtnID)
    : ::xml_schema_test::type (),
      eiResponse_ (this),
      requestID_ (requestID, this),
      vtnID_ (vtnID, this),
      oadrEvent_ (this),
      schemaVersion_ (this)
    {
    }

    oadrDistributeEventType::
    oadrDistributeEventType (const oadrDistributeEventType& x,
                        ::xml_schema_test::flags f,
                        ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      eiResponse_ (x.eiResponse_, f, this),
      requestID_ (x.requestID_, f, this),
      vtnID_ (x.vtnID_, f, this),
      oadrEvent_ (x.oadrEvent_, f, this),
      schemaVersion_ (x.schemaVersion_, f, this)
    {
    }

    oadrDistributeEventType::
    oadrDistributeEventType (const ::xercesc::DOMElement& e,
                        ::xml_schema_test::flags f,
                        ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      eiResponse_ (this),
      requestID_ (this),
      vtnID_ (this),
      oadrEvent_ (this),
      schemaVersion_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
        this->parse (p, f);
      }
    }

    void oadrDistributeEventType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
      ::xml_schema_test::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // eiResponse
        //
        if (n.name () == "eiResponse" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< eiResponse_type > r (
            eiResponse_traits::create (i, f, this));

          if (!this->eiResponse_)
          {
            this->eiResponse_.set (::std::move (r));
            continue;
          }
        }

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

        // vtnID
        //
        if (n.name () == "vtnID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< vtnID_type > r (
            vtnID_traits::create (i, f, this));

          if (!vtnID_.present ())
          {
            this->vtnID_.set (::std::move (r));
            continue;
          }
        }

        // oadrEvent
        //
        if (n.name () == "oadrEvent" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrEvent_type > r (
            oadrEvent_traits::create (i, f, this));

          this->oadrEvent_.push_back (::std::move (r));
          continue;
        }

        break;
      }

      if (!requestID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "requestID",
          "http://docs.oasis-open.org/ns/energyinterop/201110/payloads");
      }

      if (!vtnID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "vtnID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "schemaVersion" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          this->schemaVersion_.set (schemaVersion_traits::create (i, f, this));
          continue;
        }
      }
    }

    oadrDistributeEventType* oadrDistributeEventType::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class oadrDistributeEventType (*this, f, c);
    }

    oadrDistributeEventType& oadrDistributeEventType::
    operator= (const oadrDistributeEventType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->eiResponse_ = x.eiResponse_;
        this->requestID_ = x.requestID_;
        this->vtnID_ = x.vtnID_;
        this->oadrEvent_ = x.oadrEvent_;
        this->schemaVersion_ = x.schemaVersion_;
      }

      return *this;
    }

    oadrDistributeEventType::
    ~oadrDistributeEventType ()
    {
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace oadr
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
  namespace oadr
  {
    void
    operator<< (::xercesc::DOMElement& e, const oadrDistributeEventType& i)
    {
      e << static_cast< const  ::xml_schema_test::type& > (i);

      // eiResponse
      //
      if (i.eiResponse ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "eiResponse",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *i.eiResponse ();
      }

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

      // vtnID
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "vtnID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.vtnID ();
      }

      // oadrEvent
      //
      for (oadrDistributeEventType::oadrEvent_const_iterator
           b (i.oadrEvent ().begin ()), n (i.oadrEvent ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrEvent",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *b;
      }

      // schemaVersion
      //
      if (i.schemaVersion ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "schemaVersion",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        a << *i.schemaVersion ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

