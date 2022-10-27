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

#include "oadrCreatedPartyRegistrationType.hxx"

#include "EiResponseType.hxx"

#include "UidType.hxx"

#include "oadrProfiles.hxx"

#include "DurationPropType.hxx"

#include "oadrServiceSpecificInfo.hxx"

#include "oadrExtensions.hxx"

#include "schemaVersionType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrCreatedPartyRegistrationType
    // 

    const oadrCreatedPartyRegistrationType::eiResponse_type& oadrCreatedPartyRegistrationType::
    eiResponse () const
    {
      return this->eiResponse_.get ();
    }

    oadrCreatedPartyRegistrationType::eiResponse_type& oadrCreatedPartyRegistrationType::
    eiResponse ()
    {
      return this->eiResponse_.get ();
    }

    void oadrCreatedPartyRegistrationType::
    eiResponse (const eiResponse_type& x)
    {
      this->eiResponse_.set (x);
    }

    void oadrCreatedPartyRegistrationType::
    eiResponse (::std::unique_ptr< eiResponse_type > x)
    {
      this->eiResponse_.set (std::move (x));
    }

    const oadrCreatedPartyRegistrationType::registrationID_optional& oadrCreatedPartyRegistrationType::
    registrationID () const
    {
      return this->registrationID_;
    }

    oadrCreatedPartyRegistrationType::registrationID_optional& oadrCreatedPartyRegistrationType::
    registrationID ()
    {
      return this->registrationID_;
    }

    void oadrCreatedPartyRegistrationType::
    registrationID (const registrationID_type& x)
    {
      this->registrationID_.set (x);
    }

    void oadrCreatedPartyRegistrationType::
    registrationID (const registrationID_optional& x)
    {
      this->registrationID_ = x;
    }

    void oadrCreatedPartyRegistrationType::
    registrationID (::std::unique_ptr< registrationID_type > x)
    {
      this->registrationID_.set (std::move (x));
    }

    const oadrCreatedPartyRegistrationType::venID_optional& oadrCreatedPartyRegistrationType::
    venID () const
    {
      return this->venID_;
    }

    oadrCreatedPartyRegistrationType::venID_optional& oadrCreatedPartyRegistrationType::
    venID ()
    {
      return this->venID_;
    }

    void oadrCreatedPartyRegistrationType::
    venID (const venID_type& x)
    {
      this->venID_.set (x);
    }

    void oadrCreatedPartyRegistrationType::
    venID (const venID_optional& x)
    {
      this->venID_ = x;
    }

    void oadrCreatedPartyRegistrationType::
    venID (::std::unique_ptr< venID_type > x)
    {
      this->venID_.set (std::move (x));
    }

    const oadrCreatedPartyRegistrationType::vtnID_type& oadrCreatedPartyRegistrationType::
    vtnID () const
    {
      return this->vtnID_.get ();
    }

    oadrCreatedPartyRegistrationType::vtnID_type& oadrCreatedPartyRegistrationType::
    vtnID ()
    {
      return this->vtnID_.get ();
    }

    void oadrCreatedPartyRegistrationType::
    vtnID (const vtnID_type& x)
    {
      this->vtnID_.set (x);
    }

    void oadrCreatedPartyRegistrationType::
    vtnID (::std::unique_ptr< vtnID_type > x)
    {
      this->vtnID_.set (std::move (x));
    }

    const oadrCreatedPartyRegistrationType::oadrProfiles_type& oadrCreatedPartyRegistrationType::
    oadrProfiles () const
    {
      return this->oadrProfiles_.get ();
    }

    oadrCreatedPartyRegistrationType::oadrProfiles_type& oadrCreatedPartyRegistrationType::
    oadrProfiles ()
    {
      return this->oadrProfiles_.get ();
    }

    void oadrCreatedPartyRegistrationType::
    oadrProfiles (const oadrProfiles_type& x)
    {
      this->oadrProfiles_.set (x);
    }

    void oadrCreatedPartyRegistrationType::
    oadrProfiles (::std::unique_ptr< oadrProfiles_type > x)
    {
      this->oadrProfiles_.set (std::move (x));
    }

    const oadrCreatedPartyRegistrationType::oadrRequestedOadrPollFreq_optional& oadrCreatedPartyRegistrationType::
    oadrRequestedOadrPollFreq () const
    {
      return this->oadrRequestedOadrPollFreq_;
    }

    oadrCreatedPartyRegistrationType::oadrRequestedOadrPollFreq_optional& oadrCreatedPartyRegistrationType::
    oadrRequestedOadrPollFreq ()
    {
      return this->oadrRequestedOadrPollFreq_;
    }

    void oadrCreatedPartyRegistrationType::
    oadrRequestedOadrPollFreq (const oadrRequestedOadrPollFreq_type& x)
    {
      this->oadrRequestedOadrPollFreq_.set (x);
    }

    void oadrCreatedPartyRegistrationType::
    oadrRequestedOadrPollFreq (const oadrRequestedOadrPollFreq_optional& x)
    {
      this->oadrRequestedOadrPollFreq_ = x;
    }

    void oadrCreatedPartyRegistrationType::
    oadrRequestedOadrPollFreq (::std::unique_ptr< oadrRequestedOadrPollFreq_type > x)
    {
      this->oadrRequestedOadrPollFreq_.set (std::move (x));
    }

    const oadrCreatedPartyRegistrationType::oadrServiceSpecificInfo_optional& oadrCreatedPartyRegistrationType::
    oadrServiceSpecificInfo () const
    {
      return this->oadrServiceSpecificInfo_;
    }

    oadrCreatedPartyRegistrationType::oadrServiceSpecificInfo_optional& oadrCreatedPartyRegistrationType::
    oadrServiceSpecificInfo ()
    {
      return this->oadrServiceSpecificInfo_;
    }

    void oadrCreatedPartyRegistrationType::
    oadrServiceSpecificInfo (const oadrServiceSpecificInfo_type& x)
    {
      this->oadrServiceSpecificInfo_.set (x);
    }

    void oadrCreatedPartyRegistrationType::
    oadrServiceSpecificInfo (const oadrServiceSpecificInfo_optional& x)
    {
      this->oadrServiceSpecificInfo_ = x;
    }

    void oadrCreatedPartyRegistrationType::
    oadrServiceSpecificInfo (::std::unique_ptr< oadrServiceSpecificInfo_type > x)
    {
      this->oadrServiceSpecificInfo_.set (std::move (x));
    }

    const oadrCreatedPartyRegistrationType::oadrExtensions_optional& oadrCreatedPartyRegistrationType::
    oadrExtensions () const
    {
      return this->oadrExtensions_;
    }

    oadrCreatedPartyRegistrationType::oadrExtensions_optional& oadrCreatedPartyRegistrationType::
    oadrExtensions ()
    {
      return this->oadrExtensions_;
    }

    void oadrCreatedPartyRegistrationType::
    oadrExtensions (const oadrExtensions_type& x)
    {
      this->oadrExtensions_.set (x);
    }

    void oadrCreatedPartyRegistrationType::
    oadrExtensions (const oadrExtensions_optional& x)
    {
      this->oadrExtensions_ = x;
    }

    void oadrCreatedPartyRegistrationType::
    oadrExtensions (::std::unique_ptr< oadrExtensions_type > x)
    {
      this->oadrExtensions_.set (std::move (x));
    }

    const oadrCreatedPartyRegistrationType::schemaVersion_optional& oadrCreatedPartyRegistrationType::
    schemaVersion () const
    {
      return this->schemaVersion_;
    }

    oadrCreatedPartyRegistrationType::schemaVersion_optional& oadrCreatedPartyRegistrationType::
    schemaVersion ()
    {
      return this->schemaVersion_;
    }

    void oadrCreatedPartyRegistrationType::
    schemaVersion (const schemaVersion_type& x)
    {
      this->schemaVersion_.set (x);
    }

    void oadrCreatedPartyRegistrationType::
    schemaVersion (const schemaVersion_optional& x)
    {
      this->schemaVersion_ = x;
    }

    void oadrCreatedPartyRegistrationType::
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
    // oadrCreatedPartyRegistrationType
    //

    oadrCreatedPartyRegistrationType::
    oadrCreatedPartyRegistrationType (const eiResponse_type& eiResponse,
                                      const vtnID_type& vtnID,
                                      const oadrProfiles_type& oadrProfiles)
    : ::xml_schema_test::type (),
      eiResponse_ (eiResponse, this),
      registrationID_ (this),
      venID_ (this),
      vtnID_ (vtnID, this),
      oadrProfiles_ (oadrProfiles, this),
      oadrRequestedOadrPollFreq_ (this),
      oadrServiceSpecificInfo_ (this),
      oadrExtensions_ (this),
      schemaVersion_ (this)
    {
    }

    oadrCreatedPartyRegistrationType::
    oadrCreatedPartyRegistrationType (::std::unique_ptr< eiResponse_type > eiResponse,
                                      const vtnID_type& vtnID,
                                      ::std::unique_ptr< oadrProfiles_type > oadrProfiles)
    : ::xml_schema_test::type (),
      eiResponse_ (std::move (eiResponse), this),
      registrationID_ (this),
      venID_ (this),
      vtnID_ (vtnID, this),
      oadrProfiles_ (std::move (oadrProfiles), this),
      oadrRequestedOadrPollFreq_ (this),
      oadrServiceSpecificInfo_ (this),
      oadrExtensions_ (this),
      schemaVersion_ (this)
    {
    }

    oadrCreatedPartyRegistrationType::
    oadrCreatedPartyRegistrationType (const oadrCreatedPartyRegistrationType& x,
                                 ::xml_schema_test::flags f,
                                 ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      eiResponse_ (x.eiResponse_, f, this),
      registrationID_ (x.registrationID_, f, this),
      venID_ (x.venID_, f, this),
      vtnID_ (x.vtnID_, f, this),
      oadrProfiles_ (x.oadrProfiles_, f, this),
      oadrRequestedOadrPollFreq_ (x.oadrRequestedOadrPollFreq_, f, this),
      oadrServiceSpecificInfo_ (x.oadrServiceSpecificInfo_, f, this),
      oadrExtensions_ (x.oadrExtensions_, f, this),
      schemaVersion_ (x.schemaVersion_, f, this)
    {
    }

    oadrCreatedPartyRegistrationType::
    oadrCreatedPartyRegistrationType (const ::xercesc::DOMElement& e,
                                 ::xml_schema_test::flags f,
                                 ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      eiResponse_ (this),
      registrationID_ (this),
      venID_ (this),
      vtnID_ (this),
      oadrProfiles_ (this),
      oadrRequestedOadrPollFreq_ (this),
      oadrServiceSpecificInfo_ (this),
      oadrExtensions_ (this),
      schemaVersion_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
        this->parse (p, f);
      }
    }

    void oadrCreatedPartyRegistrationType::
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

          if (!eiResponse_.present ())
          {
            this->eiResponse_.set (::std::move (r));
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

        // oadrProfiles
        //
        if (n.name () == "oadrProfiles" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrProfiles_type > r (
            oadrProfiles_traits::create (i, f, this));

          if (!oadrProfiles_.present ())
          {
            this->oadrProfiles_.set (::std::move (r));
            continue;
          }
        }

        // oadrRequestedOadrPollFreq
        //
        if (n.name () == "oadrRequestedOadrPollFreq" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrRequestedOadrPollFreq_type > r (
            oadrRequestedOadrPollFreq_traits::create (i, f, this));

          if (!this->oadrRequestedOadrPollFreq_)
          {
            this->oadrRequestedOadrPollFreq_.set (::std::move (r));
            continue;
          }
        }

        // oadrServiceSpecificInfo
        //
        if (n.name () == "oadrServiceSpecificInfo" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrServiceSpecificInfo_type > r (
            oadrServiceSpecificInfo_traits::create (i, f, this));

          if (!this->oadrServiceSpecificInfo_)
          {
            this->oadrServiceSpecificInfo_.set (::std::move (r));
            continue;
          }
        }

        // oadrExtensions
        //
        if (n.name () == "oadrExtensions" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrExtensions_type > r (
            oadrExtensions_traits::create (i, f, this));

          if (!this->oadrExtensions_)
          {
            this->oadrExtensions_.set (::std::move (r));
            continue;
          }
        }

        break;
      }

      if (!eiResponse_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "eiResponse",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!vtnID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "vtnID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!oadrProfiles_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrProfiles",
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

    oadrCreatedPartyRegistrationType* oadrCreatedPartyRegistrationType::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class oadrCreatedPartyRegistrationType (*this, f, c);
    }

    oadrCreatedPartyRegistrationType& oadrCreatedPartyRegistrationType::
    operator= (const oadrCreatedPartyRegistrationType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->eiResponse_ = x.eiResponse_;
        this->registrationID_ = x.registrationID_;
        this->venID_ = x.venID_;
        this->vtnID_ = x.vtnID_;
        this->oadrProfiles_ = x.oadrProfiles_;
        this->oadrRequestedOadrPollFreq_ = x.oadrRequestedOadrPollFreq_;
        this->oadrServiceSpecificInfo_ = x.oadrServiceSpecificInfo_;
        this->oadrExtensions_ = x.oadrExtensions_;
        this->schemaVersion_ = x.schemaVersion_;
      }

      return *this;
    }

    oadrCreatedPartyRegistrationType::
    ~oadrCreatedPartyRegistrationType ()
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
    operator<< (::xercesc::DOMElement& e, const oadrCreatedPartyRegistrationType& i)
    {
      e << static_cast< const  ::xml_schema_test::type& > (i);

      // eiResponse
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "eiResponse",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.eiResponse ();
      }

      // registrationID
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        if (i.registrationID ())
        {
          const oadrCreatedPartyRegistrationType::registrationID_type& x (*i.registrationID ());
          if (typeid (oadrCreatedPartyRegistrationType::registrationID_type) == typeid (x))
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

      // oadrProfiles
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrProfiles",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrProfiles ();
      }

      // oadrRequestedOadrPollFreq
      //
      if (i.oadrRequestedOadrPollFreq ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrRequestedOadrPollFreq",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrRequestedOadrPollFreq ();
      }

      // oadrServiceSpecificInfo
      //
      if (i.oadrServiceSpecificInfo ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrServiceSpecificInfo",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrServiceSpecificInfo ();
      }

      // oadrExtensions
      //
      if (i.oadrExtensions ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrExtensions",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrExtensions ();
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

