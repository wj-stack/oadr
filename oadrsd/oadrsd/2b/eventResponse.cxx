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

#include "eventResponse.hxx"

#include "ResponseCodeType.hxx"

#include "QualifiedEventIDType.hxx"

#include "OptTypeType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // eventResponse
    // 

    const eventResponse::responseCode_type& eventResponse::
    responseCode () const
    {
      return this->responseCode_.get ();
    }

    eventResponse::responseCode_type& eventResponse::
    responseCode ()
    {
      return this->responseCode_.get ();
    }

    void eventResponse::
    responseCode (const responseCode_type& x)
    {
      this->responseCode_.set (x);
    }

    void eventResponse::
    responseCode (::std::unique_ptr< responseCode_type > x)
    {
      this->responseCode_.set (std::move (x));
    }

    const eventResponse::responseDescription_optional& eventResponse::
    responseDescription () const
    {
      return this->responseDescription_;
    }

    eventResponse::responseDescription_optional& eventResponse::
    responseDescription ()
    {
      return this->responseDescription_;
    }

    void eventResponse::
    responseDescription (const responseDescription_type& x)
    {
      this->responseDescription_.set (x);
    }

    void eventResponse::
    responseDescription (const responseDescription_optional& x)
    {
      this->responseDescription_ = x;
    }

    void eventResponse::
    responseDescription (::std::unique_ptr< responseDescription_type > x)
    {
      this->responseDescription_.set (std::move (x));
    }

    const eventResponse::requestID_type& eventResponse::
    requestID () const
    {
      return this->requestID_.get ();
    }

    eventResponse::requestID_type& eventResponse::
    requestID ()
    {
      return this->requestID_.get ();
    }

    void eventResponse::
    requestID (const requestID_type& x)
    {
      this->requestID_.set (x);
    }

    void eventResponse::
    requestID (::std::unique_ptr< requestID_type > x)
    {
      this->requestID_.set (std::move (x));
    }

    const eventResponse::qualifiedEventID_type& eventResponse::
    qualifiedEventID () const
    {
      return this->qualifiedEventID_.get ();
    }

    eventResponse::qualifiedEventID_type& eventResponse::
    qualifiedEventID ()
    {
      return this->qualifiedEventID_.get ();
    }

    void eventResponse::
    qualifiedEventID (const qualifiedEventID_type& x)
    {
      this->qualifiedEventID_.set (x);
    }

    void eventResponse::
    qualifiedEventID (::std::unique_ptr< qualifiedEventID_type > x)
    {
      this->qualifiedEventID_.set (std::move (x));
    }

    const eventResponse::optType_type& eventResponse::
    optType () const
    {
      return this->optType_.get ();
    }

    eventResponse::optType_type& eventResponse::
    optType ()
    {
      return this->optType_.get ();
    }

    void eventResponse::
    optType (const optType_type& x)
    {
      this->optType_.set (x);
    }

    void eventResponse::
    optType (::std::unique_ptr< optType_type > x)
    {
      this->optType_.set (std::move (x));
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
  namespace ei
  {
    // eventResponse
    //

    eventResponse::
    eventResponse (const responseCode_type& responseCode,
                   const requestID_type& requestID,
                   const qualifiedEventID_type& qualifiedEventID,
                   const optType_type& optType)
    : ::xml_schema_test::type (),
      responseCode_ (responseCode, this),
      responseDescription_ (this),
      requestID_ (requestID, this),
      qualifiedEventID_ (qualifiedEventID, this),
      optType_ (optType, this)
    {
    }

    eventResponse::
    eventResponse (const responseCode_type& responseCode,
                   const requestID_type& requestID,
                   ::std::unique_ptr< qualifiedEventID_type > qualifiedEventID,
                   const optType_type& optType)
    : ::xml_schema_test::type (),
      responseCode_ (responseCode, this),
      responseDescription_ (this),
      requestID_ (requestID, this),
      qualifiedEventID_ (std::move (qualifiedEventID), this),
      optType_ (optType, this)
    {
    }

    eventResponse::
    eventResponse (const eventResponse& x,
              ::xml_schema_test::flags f,
              ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      responseCode_ (x.responseCode_, f, this),
      responseDescription_ (x.responseDescription_, f, this),
      requestID_ (x.requestID_, f, this),
      qualifiedEventID_ (x.qualifiedEventID_, f, this),
      optType_ (x.optType_, f, this)
    {
    }

    eventResponse::
    eventResponse (const ::xercesc::DOMElement& e,
              ::xml_schema_test::flags f,
              ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      responseCode_ (this),
      responseDescription_ (this),
      requestID_ (this),
      qualifiedEventID_ (this),
      optType_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void eventResponse::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
      ::xml_schema_test::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // responseCode
        //
        if (n.name () == "responseCode" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< responseCode_type > r (
            responseCode_traits::create (i, f, this));

          if (!responseCode_.present ())
          {
            this->responseCode_.set (::std::move (r));
            continue;
          }
        }

        // responseDescription
        //
        if (n.name () == "responseDescription" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< responseDescription_type > r (
            responseDescription_traits::create (i, f, this));

          if (!this->responseDescription_)
          {
            this->responseDescription_.set (::std::move (r));
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

        // qualifiedEventID
        //
        if (n.name () == "qualifiedEventID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< qualifiedEventID_type > r (
            qualifiedEventID_traits::create (i, f, this));

          if (!qualifiedEventID_.present ())
          {
            this->qualifiedEventID_.set (::std::move (r));
            continue;
          }
        }

        // optType
        //
        if (n.name () == "optType" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< optType_type > r (
            optType_traits::create (i, f, this));

          if (!optType_.present ())
          {
            this->optType_.set (::std::move (r));
            continue;
          }
        }

        break;
      }

      if (!responseCode_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "responseCode",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!requestID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "requestID",
          "http://docs.oasis-open.org/ns/energyinterop/201110/payloads");
      }

      if (!qualifiedEventID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "qualifiedEventID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!optType_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "optType",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }
    }

    eventResponse* eventResponse::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class eventResponse (*this, f, c);
    }

    eventResponse& eventResponse::
    operator= (const eventResponse& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->responseCode_ = x.responseCode_;
        this->responseDescription_ = x.responseDescription_;
        this->requestID_ = x.requestID_;
        this->qualifiedEventID_ = x.qualifiedEventID_;
        this->optType_ = x.optType_;
      }

      return *this;
    }

    eventResponse::
    ~eventResponse ()
    {
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace ei
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
  namespace ei
  {
    void
    operator<< (::xercesc::DOMElement& e, const eventResponse& i)
    {
      e << static_cast< const  ::xml_schema_test::type& > (i);

      // responseCode
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "responseCode",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.responseCode ();
      }

      // responseDescription
      //
      if (i.responseDescription ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "responseDescription",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *i.responseDescription ();
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

      // qualifiedEventID
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "qualifiedEventID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.qualifiedEventID ();
      }

      // optType
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "optType",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.optType ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

