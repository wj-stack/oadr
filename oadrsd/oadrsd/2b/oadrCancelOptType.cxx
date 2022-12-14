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

#include "oadrCancelOptType.hxx"

#include "schemaVersionType.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrCancelOptType
    // 

    const oadrCancelOptType::requestID_type& oadrCancelOptType::
    requestID () const
    {
      return this->requestID_.get ();
    }

    oadrCancelOptType::requestID_type& oadrCancelOptType::
    requestID ()
    {
      return this->requestID_.get ();
    }

    void oadrCancelOptType::
    requestID (const requestID_type& x)
    {
      this->requestID_.set (x);
    }

    void oadrCancelOptType::
    requestID (::std::unique_ptr< requestID_type > x)
    {
      this->requestID_.set (std::move (x));
    }

    const oadrCancelOptType::optID_type& oadrCancelOptType::
    optID () const
    {
      return this->optID_.get ();
    }

    oadrCancelOptType::optID_type& oadrCancelOptType::
    optID ()
    {
      return this->optID_.get ();
    }

    void oadrCancelOptType::
    optID (const optID_type& x)
    {
      this->optID_.set (x);
    }

    void oadrCancelOptType::
    optID (::std::unique_ptr< optID_type > x)
    {
      this->optID_.set (std::move (x));
    }

    const oadrCancelOptType::venID_type& oadrCancelOptType::
    venID () const
    {
      return this->venID_.get ();
    }

    oadrCancelOptType::venID_type& oadrCancelOptType::
    venID ()
    {
      return this->venID_.get ();
    }

    void oadrCancelOptType::
    venID (const venID_type& x)
    {
      this->venID_.set (x);
    }

    void oadrCancelOptType::
    venID (::std::unique_ptr< venID_type > x)
    {
      this->venID_.set (std::move (x));
    }

    const oadrCancelOptType::schemaVersion_optional& oadrCancelOptType::
    schemaVersion () const
    {
      return this->schemaVersion_;
    }

    oadrCancelOptType::schemaVersion_optional& oadrCancelOptType::
    schemaVersion ()
    {
      return this->schemaVersion_;
    }

    void oadrCancelOptType::
    schemaVersion (const schemaVersion_type& x)
    {
      this->schemaVersion_.set (x);
    }

    void oadrCancelOptType::
    schemaVersion (const schemaVersion_optional& x)
    {
      this->schemaVersion_ = x;
    }

    void oadrCancelOptType::
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
    // oadrCancelOptType
    //

    oadrCancelOptType::
    oadrCancelOptType (const requestID_type& requestID,
                       const optID_type& optID,
                       const venID_type& venID)
    : ::xml_schema_test::type (),
      requestID_ (requestID, this),
      optID_ (optID, this),
      venID_ (venID, this),
      schemaVersion_ (this)
    {
    }

    oadrCancelOptType::
    oadrCancelOptType (const oadrCancelOptType& x,
                  ::xml_schema_test::flags f,
                  ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      requestID_ (x.requestID_, f, this),
      optID_ (x.optID_, f, this),
      venID_ (x.venID_, f, this),
      schemaVersion_ (x.schemaVersion_, f, this)
    {
    }

    oadrCancelOptType::
    oadrCancelOptType (const ::xercesc::DOMElement& e,
                  ::xml_schema_test::flags f,
                  ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      requestID_ (this),
      optID_ (this),
      venID_ (this),
      schemaVersion_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
        this->parse (p, f);
      }
    }

    void oadrCancelOptType::
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

        // optID
        //
        if (n.name () == "optID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< optID_type > r (
            optID_traits::create (i, f, this));

          if (!optID_.present ())
          {
            this->optID_.set (::std::move (r));
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

        break;
      }

      if (!requestID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "requestID",
          "http://docs.oasis-open.org/ns/energyinterop/201110/payloads");
      }

      if (!optID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "optID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!venID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "venID",
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

    oadrCancelOptType* oadrCancelOptType::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class oadrCancelOptType (*this, f, c);
    }

    oadrCancelOptType& oadrCancelOptType::
    operator= (const oadrCancelOptType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->requestID_ = x.requestID_;
        this->optID_ = x.optID_;
        this->venID_ = x.venID_;
        this->schemaVersion_ = x.schemaVersion_;
      }

      return *this;
    }

    oadrCancelOptType::
    ~oadrCancelOptType ()
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
    operator<< (::xercesc::DOMElement& e, const oadrCancelOptType& i)
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

      // optID
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "optID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.optID ();
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

