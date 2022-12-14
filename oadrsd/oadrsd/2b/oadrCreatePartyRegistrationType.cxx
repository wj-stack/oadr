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

#include "oadrCreatePartyRegistrationType.hxx"

#include "UidType.hxx"

#include "oadrProfileType.hxx"

#include "oadrTransportType.hxx"

#include "schemaVersionType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrCreatePartyRegistrationType
    // 

    const oadrCreatePartyRegistrationType::requestID_type& oadrCreatePartyRegistrationType::
    requestID () const
    {
      return this->requestID_.get ();
    }

    oadrCreatePartyRegistrationType::requestID_type& oadrCreatePartyRegistrationType::
    requestID ()
    {
      return this->requestID_.get ();
    }

    void oadrCreatePartyRegistrationType::
    requestID (const requestID_type& x)
    {
      this->requestID_.set (x);
    }

    void oadrCreatePartyRegistrationType::
    requestID (::std::unique_ptr< requestID_type > x)
    {
      this->requestID_.set (std::move (x));
    }

    const oadrCreatePartyRegistrationType::registrationID_optional& oadrCreatePartyRegistrationType::
    registrationID () const
    {
      return this->registrationID_;
    }

    oadrCreatePartyRegistrationType::registrationID_optional& oadrCreatePartyRegistrationType::
    registrationID ()
    {
      return this->registrationID_;
    }

    void oadrCreatePartyRegistrationType::
    registrationID (const registrationID_type& x)
    {
      this->registrationID_.set (x);
    }

    void oadrCreatePartyRegistrationType::
    registrationID (const registrationID_optional& x)
    {
      this->registrationID_ = x;
    }

    void oadrCreatePartyRegistrationType::
    registrationID (::std::unique_ptr< registrationID_type > x)
    {
      this->registrationID_.set (std::move (x));
    }

    const oadrCreatePartyRegistrationType::venID_optional& oadrCreatePartyRegistrationType::
    venID () const
    {
      return this->venID_;
    }

    oadrCreatePartyRegistrationType::venID_optional& oadrCreatePartyRegistrationType::
    venID ()
    {
      return this->venID_;
    }

    void oadrCreatePartyRegistrationType::
    venID (const venID_type& x)
    {
      this->venID_.set (x);
    }

    void oadrCreatePartyRegistrationType::
    venID (const venID_optional& x)
    {
      this->venID_ = x;
    }

    void oadrCreatePartyRegistrationType::
    venID (::std::unique_ptr< venID_type > x)
    {
      this->venID_.set (std::move (x));
    }

    const oadrCreatePartyRegistrationType::oadrProfileName_type& oadrCreatePartyRegistrationType::
    oadrProfileName () const
    {
      return this->oadrProfileName_.get ();
    }

    oadrCreatePartyRegistrationType::oadrProfileName_type& oadrCreatePartyRegistrationType::
    oadrProfileName ()
    {
      return this->oadrProfileName_.get ();
    }

    void oadrCreatePartyRegistrationType::
    oadrProfileName (const oadrProfileName_type& x)
    {
      this->oadrProfileName_.set (x);
    }

    void oadrCreatePartyRegistrationType::
    oadrProfileName (::std::unique_ptr< oadrProfileName_type > x)
    {
      this->oadrProfileName_.set (std::move (x));
    }

    const oadrCreatePartyRegistrationType::oadrTransportName_type& oadrCreatePartyRegistrationType::
    oadrTransportName () const
    {
      return this->oadrTransportName_.get ();
    }

    oadrCreatePartyRegistrationType::oadrTransportName_type& oadrCreatePartyRegistrationType::
    oadrTransportName ()
    {
      return this->oadrTransportName_.get ();
    }

    void oadrCreatePartyRegistrationType::
    oadrTransportName (const oadrTransportName_type& x)
    {
      this->oadrTransportName_.set (x);
    }

    void oadrCreatePartyRegistrationType::
    oadrTransportName (::std::unique_ptr< oadrTransportName_type > x)
    {
      this->oadrTransportName_.set (std::move (x));
    }

    const oadrCreatePartyRegistrationType::oadrTransportAddress_optional& oadrCreatePartyRegistrationType::
    oadrTransportAddress () const
    {
      return this->oadrTransportAddress_;
    }

    oadrCreatePartyRegistrationType::oadrTransportAddress_optional& oadrCreatePartyRegistrationType::
    oadrTransportAddress ()
    {
      return this->oadrTransportAddress_;
    }

    void oadrCreatePartyRegistrationType::
    oadrTransportAddress (const oadrTransportAddress_type& x)
    {
      this->oadrTransportAddress_.set (x);
    }

    void oadrCreatePartyRegistrationType::
    oadrTransportAddress (const oadrTransportAddress_optional& x)
    {
      this->oadrTransportAddress_ = x;
    }

    void oadrCreatePartyRegistrationType::
    oadrTransportAddress (::std::unique_ptr< oadrTransportAddress_type > x)
    {
      this->oadrTransportAddress_.set (std::move (x));
    }

    const oadrCreatePartyRegistrationType::oadrReportOnly_type& oadrCreatePartyRegistrationType::
    oadrReportOnly () const
    {
      return this->oadrReportOnly_.get ();
    }

    oadrCreatePartyRegistrationType::oadrReportOnly_type& oadrCreatePartyRegistrationType::
    oadrReportOnly ()
    {
      return this->oadrReportOnly_.get ();
    }

    void oadrCreatePartyRegistrationType::
    oadrReportOnly (const oadrReportOnly_type& x)
    {
      this->oadrReportOnly_.set (x);
    }

    const oadrCreatePartyRegistrationType::oadrXmlSignature_type& oadrCreatePartyRegistrationType::
    oadrXmlSignature () const
    {
      return this->oadrXmlSignature_.get ();
    }

    oadrCreatePartyRegistrationType::oadrXmlSignature_type& oadrCreatePartyRegistrationType::
    oadrXmlSignature ()
    {
      return this->oadrXmlSignature_.get ();
    }

    void oadrCreatePartyRegistrationType::
    oadrXmlSignature (const oadrXmlSignature_type& x)
    {
      this->oadrXmlSignature_.set (x);
    }

    const oadrCreatePartyRegistrationType::oadrVenName_optional& oadrCreatePartyRegistrationType::
    oadrVenName () const
    {
      return this->oadrVenName_;
    }

    oadrCreatePartyRegistrationType::oadrVenName_optional& oadrCreatePartyRegistrationType::
    oadrVenName ()
    {
      return this->oadrVenName_;
    }

    void oadrCreatePartyRegistrationType::
    oadrVenName (const oadrVenName_type& x)
    {
      this->oadrVenName_.set (x);
    }

    void oadrCreatePartyRegistrationType::
    oadrVenName (const oadrVenName_optional& x)
    {
      this->oadrVenName_ = x;
    }

    void oadrCreatePartyRegistrationType::
    oadrVenName (::std::unique_ptr< oadrVenName_type > x)
    {
      this->oadrVenName_.set (std::move (x));
    }

    const oadrCreatePartyRegistrationType::oadrHttpPullModel_optional& oadrCreatePartyRegistrationType::
    oadrHttpPullModel () const
    {
      return this->oadrHttpPullModel_;
    }

    oadrCreatePartyRegistrationType::oadrHttpPullModel_optional& oadrCreatePartyRegistrationType::
    oadrHttpPullModel ()
    {
      return this->oadrHttpPullModel_;
    }

    void oadrCreatePartyRegistrationType::
    oadrHttpPullModel (const oadrHttpPullModel_type& x)
    {
      this->oadrHttpPullModel_.set (x);
    }

    void oadrCreatePartyRegistrationType::
    oadrHttpPullModel (const oadrHttpPullModel_optional& x)
    {
      this->oadrHttpPullModel_ = x;
    }

    const oadrCreatePartyRegistrationType::schemaVersion_optional& oadrCreatePartyRegistrationType::
    schemaVersion () const
    {
      return this->schemaVersion_;
    }

    oadrCreatePartyRegistrationType::schemaVersion_optional& oadrCreatePartyRegistrationType::
    schemaVersion ()
    {
      return this->schemaVersion_;
    }

    void oadrCreatePartyRegistrationType::
    schemaVersion (const schemaVersion_type& x)
    {
      this->schemaVersion_.set (x);
    }

    void oadrCreatePartyRegistrationType::
    schemaVersion (const schemaVersion_optional& x)
    {
      this->schemaVersion_ = x;
    }

    void oadrCreatePartyRegistrationType::
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
    // oadrCreatePartyRegistrationType
    //

    oadrCreatePartyRegistrationType::
    oadrCreatePartyRegistrationType (const requestID_type& requestID,
                                     const oadrProfileName_type& oadrProfileName,
                                     const oadrTransportName_type& oadrTransportName,
                                     const oadrReportOnly_type& oadrReportOnly,
                                     const oadrXmlSignature_type& oadrXmlSignature)
    : ::xml_schema_test::type (),
      requestID_ (requestID, this),
      registrationID_ (this),
      venID_ (this),
      oadrProfileName_ (oadrProfileName, this),
      oadrTransportName_ (oadrTransportName, this),
      oadrTransportAddress_ (this),
      oadrReportOnly_ (oadrReportOnly, this),
      oadrXmlSignature_ (oadrXmlSignature, this),
      oadrVenName_ (this),
      oadrHttpPullModel_ (this),
      schemaVersion_ (this)
    {
    }

    oadrCreatePartyRegistrationType::
    oadrCreatePartyRegistrationType (const oadrCreatePartyRegistrationType& x,
                                ::xml_schema_test::flags f,
                                ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      requestID_ (x.requestID_, f, this),
      registrationID_ (x.registrationID_, f, this),
      venID_ (x.venID_, f, this),
      oadrProfileName_ (x.oadrProfileName_, f, this),
      oadrTransportName_ (x.oadrTransportName_, f, this),
      oadrTransportAddress_ (x.oadrTransportAddress_, f, this),
      oadrReportOnly_ (x.oadrReportOnly_, f, this),
      oadrXmlSignature_ (x.oadrXmlSignature_, f, this),
      oadrVenName_ (x.oadrVenName_, f, this),
      oadrHttpPullModel_ (x.oadrHttpPullModel_, f, this),
      schemaVersion_ (x.schemaVersion_, f, this)
    {
    }

    oadrCreatePartyRegistrationType::
    oadrCreatePartyRegistrationType (const ::xercesc::DOMElement& e,
                                ::xml_schema_test::flags f,
                                ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      requestID_ (this),
      registrationID_ (this),
      venID_ (this),
      oadrProfileName_ (this),
      oadrTransportName_ (this),
      oadrTransportAddress_ (this),
      oadrReportOnly_ (this),
      oadrXmlSignature_ (this),
      oadrVenName_ (this),
      oadrHttpPullModel_ (this),
      schemaVersion_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
        this->parse (p, f);
      }
    }

    void oadrCreatePartyRegistrationType::
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

        // registrationID
        //
        {
          ::std::unique_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "registrationID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< registrationID_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!this->registrationID_)
            {
              ::std::unique_ptr< registrationID_type > r (
                dynamic_cast< registrationID_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->registrationID_.set (::std::move (r));
              continue;
            }
          }
        }

        // venID
        //
        if (n.name () == "venID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< venID_type > r (
            venID_traits::create (i, f, this));

          if (!this->venID_)
          {
            this->venID_.set (::std::move (r));
            continue;
          }
        }

        // oadrProfileName
        //
        if (n.name () == "oadrProfileName" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrProfileName_type > r (
            oadrProfileName_traits::create (i, f, this));

          if (!oadrProfileName_.present ())
          {
            this->oadrProfileName_.set (::std::move (r));
            continue;
          }
        }

        // oadrTransportName
        //
        if (n.name () == "oadrTransportName" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrTransportName_type > r (
            oadrTransportName_traits::create (i, f, this));

          if (!oadrTransportName_.present ())
          {
            this->oadrTransportName_.set (::std::move (r));
            continue;
          }
        }

        // oadrTransportAddress
        //
        if (n.name () == "oadrTransportAddress" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrTransportAddress_type > r (
            oadrTransportAddress_traits::create (i, f, this));

          if (!this->oadrTransportAddress_)
          {
            this->oadrTransportAddress_.set (::std::move (r));
            continue;
          }
        }

        // oadrReportOnly
        //
        if (n.name () == "oadrReportOnly" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          if (!oadrReportOnly_.present ())
          {
            this->oadrReportOnly_.set (oadrReportOnly_traits::create (i, f, this));
            continue;
          }
        }

        // oadrXmlSignature
        //
        if (n.name () == "oadrXmlSignature" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          if (!oadrXmlSignature_.present ())
          {
            this->oadrXmlSignature_.set (oadrXmlSignature_traits::create (i, f, this));
            continue;
          }
        }

        // oadrVenName
        //
        if (n.name () == "oadrVenName" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrVenName_type > r (
            oadrVenName_traits::create (i, f, this));

          if (!this->oadrVenName_)
          {
            this->oadrVenName_.set (::std::move (r));
            continue;
          }
        }

        // oadrHttpPullModel
        //
        if (n.name () == "oadrHttpPullModel" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          if (!this->oadrHttpPullModel_)
          {
            this->oadrHttpPullModel_.set (oadrHttpPullModel_traits::create (i, f, this));
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

      if (!oadrProfileName_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrProfileName",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!oadrTransportName_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrTransportName",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!oadrReportOnly_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrReportOnly",
          "http://openadr.org/oadr-2.0b/2012/07");
      }

      if (!oadrXmlSignature_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrXmlSignature",
          "http://openadr.org/oadr-2.0b/2012/07");
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

    oadrCreatePartyRegistrationType* oadrCreatePartyRegistrationType::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class oadrCreatePartyRegistrationType (*this, f, c);
    }

    oadrCreatePartyRegistrationType& oadrCreatePartyRegistrationType::
    operator= (const oadrCreatePartyRegistrationType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->requestID_ = x.requestID_;
        this->registrationID_ = x.registrationID_;
        this->venID_ = x.venID_;
        this->oadrProfileName_ = x.oadrProfileName_;
        this->oadrTransportName_ = x.oadrTransportName_;
        this->oadrTransportAddress_ = x.oadrTransportAddress_;
        this->oadrReportOnly_ = x.oadrReportOnly_;
        this->oadrXmlSignature_ = x.oadrXmlSignature_;
        this->oadrVenName_ = x.oadrVenName_;
        this->oadrHttpPullModel_ = x.oadrHttpPullModel_;
        this->schemaVersion_ = x.schemaVersion_;
      }

      return *this;
    }

    oadrCreatePartyRegistrationType::
    ~oadrCreatePartyRegistrationType ()
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
    operator<< (::xercesc::DOMElement& e, const oadrCreatePartyRegistrationType& i)
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

      // registrationID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        if (i.registrationID ())
        {
          const oadrCreatePartyRegistrationType::registrationID_type& x (*i.registrationID ());
          if (typeid (oadrCreatePartyRegistrationType::registrationID_type) == typeid (x))
          {
            ::xercesc::DOMElement& s (
              ::xsd::cxx::xml::dom::create_element (
                "registrationID",
                "http://docs.oasis-open.org/ns/energyinterop/201110",
                e));

            s << x;
          }
          else
            tsm.serialize (
              "registrationID",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              true, true, e, x);
        }
      }

      // venID
      //
      if (i.venID ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "venID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *i.venID ();
      }

      // oadrProfileName
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrProfileName",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrProfileName ();
      }

      // oadrTransportName
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrTransportName",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrTransportName ();
      }

      // oadrTransportAddress
      //
      if (i.oadrTransportAddress ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrTransportAddress",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrTransportAddress ();
      }

      // oadrReportOnly
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrReportOnly",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrReportOnly ();
      }

      // oadrXmlSignature
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrXmlSignature",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrXmlSignature ();
      }

      // oadrVenName
      //
      if (i.oadrVenName ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrVenName",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrVenName ();
      }

      // oadrHttpPullModel
      //
      if (i.oadrHttpPullModel ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrHttpPullModel",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrHttpPullModel ();
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

