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

#include "EiResponseType.hxx"

#include "ResponseCodeType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // EiResponseType
    // 

    const EiResponseType::responseCode_type& EiResponseType::
    responseCode () const
    {
      return this->responseCode_.get ();
    }

    EiResponseType::responseCode_type& EiResponseType::
    responseCode ()
    {
      return this->responseCode_.get ();
    }

    void EiResponseType::
    responseCode (const responseCode_type& x)
    {
      this->responseCode_.set (x);
    }

    void EiResponseType::
    responseCode (::std::unique_ptr< responseCode_type > x)
    {
      this->responseCode_.set (std::move (x));
    }

    const EiResponseType::responseDescription_optional& EiResponseType::
    responseDescription () const
    {
      return this->responseDescription_;
    }

    EiResponseType::responseDescription_optional& EiResponseType::
    responseDescription ()
    {
      return this->responseDescription_;
    }

    void EiResponseType::
    responseDescription (const responseDescription_type& x)
    {
      this->responseDescription_.set (x);
    }

    void EiResponseType::
    responseDescription (const responseDescription_optional& x)
    {
      this->responseDescription_ = x;
    }

    void EiResponseType::
    responseDescription (::std::unique_ptr< responseDescription_type > x)
    {
      this->responseDescription_.set (std::move (x));
    }

    const EiResponseType::requestID_type& EiResponseType::
    requestID () const
    {
      return this->requestID_.get ();
    }

    EiResponseType::requestID_type& EiResponseType::
    requestID ()
    {
      return this->requestID_.get ();
    }

    void EiResponseType::
    requestID (const requestID_type& x)
    {
      this->requestID_.set (x);
    }

    void EiResponseType::
    requestID (::std::unique_ptr< requestID_type > x)
    {
      this->requestID_.set (std::move (x));
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
    // EiResponseType
    //

    EiResponseType::
    EiResponseType (const responseCode_type& responseCode,
                    const requestID_type& requestID)
    : ::xml_schema_test::type (),
      responseCode_ (responseCode, this),
      responseDescription_ (this),
      requestID_ (requestID, this)
    {
    }

    EiResponseType::
    EiResponseType (const EiResponseType& x,
               ::xml_schema_test::flags f,
               ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      responseCode_ (x.responseCode_, f, this),
      responseDescription_ (x.responseDescription_, f, this),
      requestID_ (x.requestID_, f, this)
    {
    }

    EiResponseType::
    EiResponseType (const ::xercesc::DOMElement& e,
               ::xml_schema_test::flags f,
               ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      responseCode_ (this),
      responseDescription_ (this),
      requestID_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void EiResponseType::
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
    }

    EiResponseType* EiResponseType::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class EiResponseType (*this, f, c);
    }

    EiResponseType& EiResponseType::
    operator= (const EiResponseType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->responseCode_ = x.responseCode_;
        this->responseDescription_ = x.responseDescription_;
        this->requestID_ = x.requestID_;
      }

      return *this;
    }

    EiResponseType::
    ~EiResponseType ()
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
    operator<< (::xercesc::DOMElement& e, const EiResponseType& i)
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
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

