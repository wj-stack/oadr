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

#include "oadrCreateOptType.hxx"

#include "QualifiedEventIDType.hxx"

#include "EiTargetType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrCreateOptType
    // 

    const oadrCreateOptType::requestID_type& oadrCreateOptType::
    requestID () const
    {
      return this->requestID_.get ();
    }

    oadrCreateOptType::requestID_type& oadrCreateOptType::
    requestID ()
    {
      return this->requestID_.get ();
    }

    void oadrCreateOptType::
    requestID (const requestID_type& x)
    {
      this->requestID_.set (x);
    }

    void oadrCreateOptType::
    requestID (::std::unique_ptr< requestID_type > x)
    {
      this->requestID_.set (std::move (x));
    }

    const oadrCreateOptType::qualifiedEventID_optional& oadrCreateOptType::
    qualifiedEventID () const
    {
      return this->qualifiedEventID_;
    }

    oadrCreateOptType::qualifiedEventID_optional& oadrCreateOptType::
    qualifiedEventID ()
    {
      return this->qualifiedEventID_;
    }

    void oadrCreateOptType::
    qualifiedEventID (const qualifiedEventID_type& x)
    {
      this->qualifiedEventID_.set (x);
    }

    void oadrCreateOptType::
    qualifiedEventID (const qualifiedEventID_optional& x)
    {
      this->qualifiedEventID_ = x;
    }

    void oadrCreateOptType::
    qualifiedEventID (::std::unique_ptr< qualifiedEventID_type > x)
    {
      this->qualifiedEventID_.set (std::move (x));
    }

    const oadrCreateOptType::eiTarget_type& oadrCreateOptType::
    eiTarget () const
    {
      return this->eiTarget_.get ();
    }

    oadrCreateOptType::eiTarget_type& oadrCreateOptType::
    eiTarget ()
    {
      return this->eiTarget_.get ();
    }

    void oadrCreateOptType::
    eiTarget (const eiTarget_type& x)
    {
      this->eiTarget_.set (x);
    }

    void oadrCreateOptType::
    eiTarget (::std::unique_ptr< eiTarget_type > x)
    {
      this->eiTarget_.set (std::move (x));
    }

    const oadrCreateOptType::oadrDeviceClass_optional& oadrCreateOptType::
    oadrDeviceClass () const
    {
      return this->oadrDeviceClass_;
    }

    oadrCreateOptType::oadrDeviceClass_optional& oadrCreateOptType::
    oadrDeviceClass ()
    {
      return this->oadrDeviceClass_;
    }

    void oadrCreateOptType::
    oadrDeviceClass (const oadrDeviceClass_type& x)
    {
      this->oadrDeviceClass_.set (x);
    }

    void oadrCreateOptType::
    oadrDeviceClass (const oadrDeviceClass_optional& x)
    {
      this->oadrDeviceClass_ = x;
    }

    void oadrCreateOptType::
    oadrDeviceClass (::std::unique_ptr< oadrDeviceClass_type > x)
    {
      this->oadrDeviceClass_.set (std::move (x));
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
    // oadrCreateOptType
    //

    oadrCreateOptType::
    oadrCreateOptType (const optID_type& optID,
                       const optType_type& optType,
                       const optReason_type& optReason,
                       const venID_type& venID,
                       const createdDateTime_type& createdDateTime,
                       const requestID_type& requestID,
                       const eiTarget_type& eiTarget)
    : ::oadr2b::ei::EiOptType (optID,
                               optType,
                               optReason,
                               venID,
                               createdDateTime),
      requestID_ (requestID, this),
      qualifiedEventID_ (this),
      eiTarget_ (eiTarget, this),
      oadrDeviceClass_ (this)
    {
    }

    oadrCreateOptType::
    oadrCreateOptType (const optID_type& optID,
                       const optType_type& optType,
                       const optReason_type& optReason,
                       const venID_type& venID,
                       const createdDateTime_type& createdDateTime,
                       const requestID_type& requestID,
                       ::std::unique_ptr< eiTarget_type > eiTarget)
    : ::oadr2b::ei::EiOptType (optID,
                               optType,
                               optReason,
                               venID,
                               createdDateTime),
      requestID_ (requestID, this),
      qualifiedEventID_ (this),
      eiTarget_ (std::move (eiTarget), this),
      oadrDeviceClass_ (this)
    {
    }

    oadrCreateOptType::
    oadrCreateOptType (const oadrCreateOptType& x,
                  ::xml_schema_test::flags f,
                  ::xml_schema_test::container* c)
    : ::oadr2b::ei::EiOptType (x, f, c),
      requestID_ (x.requestID_, f, this),
      qualifiedEventID_ (x.qualifiedEventID_, f, this),
      eiTarget_ (x.eiTarget_, f, this),
      oadrDeviceClass_ (x.oadrDeviceClass_, f, this)
    {
    }

    oadrCreateOptType::
    oadrCreateOptType (const ::xercesc::DOMElement& e,
                  ::xml_schema_test::flags f,
                  ::xml_schema_test::container* c)
    : ::oadr2b::ei::EiOptType (e, f | ::xml_schema_test::flags::base, c),
      requestID_ (this),
      qualifiedEventID_ (this),
      eiTarget_ (this),
      oadrDeviceClass_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
        this->parse (p, f);
      }
    }

    void oadrCreateOptType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
      ::xml_schema_test::flags f)
    {
      this->::oadr2b::ei::EiOptType::parse (p, f);

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

        // qualifiedEventID
        //
        if (n.name () == "qualifiedEventID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< qualifiedEventID_type > r (
            qualifiedEventID_traits::create (i, f, this));

          if (!this->qualifiedEventID_)
          {
            this->qualifiedEventID_.set (::std::move (r));
            continue;
          }
        }

        // eiTarget
        //
        if (n.name () == "eiTarget" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< eiTarget_type > r (
            eiTarget_traits::create (i, f, this));

          if (!eiTarget_.present ())
          {
            this->eiTarget_.set (::std::move (r));
            continue;
          }
        }

        // oadrDeviceClass
        //
        if (n.name () == "oadrDeviceClass" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrDeviceClass_type > r (
            oadrDeviceClass_traits::create (i, f, this));

          if (!this->oadrDeviceClass_)
          {
            this->oadrDeviceClass_.set (::std::move (r));
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

      if (!eiTarget_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "eiTarget",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }
    }

    oadrCreateOptType* oadrCreateOptType::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class oadrCreateOptType (*this, f, c);
    }

    oadrCreateOptType& oadrCreateOptType::
    operator= (const oadrCreateOptType& x)
    {
      if (this != &x)
      {
        static_cast< ::oadr2b::ei::EiOptType& > (*this) = x;
        this->requestID_ = x.requestID_;
        this->qualifiedEventID_ = x.qualifiedEventID_;
        this->eiTarget_ = x.eiTarget_;
        this->oadrDeviceClass_ = x.oadrDeviceClass_;
      }

      return *this;
    }

    oadrCreateOptType::
    ~oadrCreateOptType ()
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
    operator<< (::xercesc::DOMElement& e, const oadrCreateOptType& i)
    {
      e << static_cast< const ::oadr2b::ei::EiOptType& > (i);

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
      if (i.qualifiedEventID ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "qualifiedEventID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *i.qualifiedEventID ();
      }

      // eiTarget
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "eiTarget",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.eiTarget ();
      }

      // oadrDeviceClass
      //
      if (i.oadrDeviceClass ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrDeviceClass",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << *i.oadrDeviceClass ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

