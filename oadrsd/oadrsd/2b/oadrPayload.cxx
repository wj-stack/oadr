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

#include "oadrPayload.hxx"

#include "SignatureType.hxx"

#include "oadrSignedObject.hxx"

namespace oadr2b
{
  namespace oadr
  {
    // oadrPayload
    // 

    const oadrPayload::Signature_optional& oadrPayload::
    Signature () const
    {
      return this->Signature_;
    }

    oadrPayload::Signature_optional& oadrPayload::
    Signature ()
    {
      return this->Signature_;
    }

    void oadrPayload::
    Signature (const Signature_type& x)
    {
      this->Signature_.set (x);
    }

    void oadrPayload::
    Signature (const Signature_optional& x)
    {
      this->Signature_ = x;
    }

    void oadrPayload::
    Signature (::std::unique_ptr< Signature_type > x)
    {
      this->Signature_.set (std::move (x));
    }

    const oadrPayload::oadrSignedObject_type& oadrPayload::
    oadrSignedObject () const
    {
      return this->oadrSignedObject_.get ();
    }

    oadrPayload::oadrSignedObject_type& oadrPayload::
    oadrSignedObject ()
    {
      return this->oadrSignedObject_.get ();
    }

    void oadrPayload::
    oadrSignedObject (const oadrSignedObject_type& x)
    {
      this->oadrSignedObject_.set (x);
    }

    void oadrPayload::
    oadrSignedObject (::std::unique_ptr< oadrSignedObject_type > x)
    {
      this->oadrSignedObject_.set (std::move (x));
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
    // oadrPayload
    //

    oadrPayload::
    oadrPayload (const oadrSignedObject_type& oadrSignedObject)
    : ::xml_schema_test::type (),
      Signature_ (this),
      oadrSignedObject_ (oadrSignedObject, this)
    {
    }

    oadrPayload::
    oadrPayload (::std::unique_ptr< oadrSignedObject_type > oadrSignedObject)
    : ::xml_schema_test::type (),
      Signature_ (this),
      oadrSignedObject_ (std::move (oadrSignedObject), this)
    {
    }

    oadrPayload::
    oadrPayload (const oadrPayload& x,
            ::xml_schema_test::flags f,
            ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      Signature_ (x.Signature_, f, this),
      oadrSignedObject_ (x.oadrSignedObject_, f, this)
    {
    }

    oadrPayload::
    oadrPayload (const ::xercesc::DOMElement& e,
            ::xml_schema_test::flags f,
            ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      Signature_ (this),
      oadrSignedObject_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void oadrPayload::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
      ::xml_schema_test::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // Signature
        //
        if (n.name () == "Signature" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< Signature_type > r (
            Signature_traits::create (i, f, this));

          if (!this->Signature_)
          {
            this->Signature_.set (::std::move (r));
            continue;
          }
        }

        // oadrSignedObject
        //
        if (n.name () == "oadrSignedObject" && n.namespace_ () == "http://openadr.org/oadr-2.0b/2012/07")
        {
          ::std::unique_ptr< oadrSignedObject_type > r (
            oadrSignedObject_traits::create (i, f, this));

          if (!oadrSignedObject_.present ())
          {
            this->oadrSignedObject_.set (::std::move (r));
            continue;
          }
        }

        break;
      }

      if (!oadrSignedObject_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "oadrSignedObject",
          "http://openadr.org/oadr-2.0b/2012/07");
      }
    }

    oadrPayload* oadrPayload::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class oadrPayload (*this, f, c);
    }

    oadrPayload& oadrPayload::
    operator= (const oadrPayload& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->Signature_ = x.Signature_;
        this->oadrSignedObject_ = x.oadrSignedObject_;
      }

      return *this;
    }

    oadrPayload::
    ~oadrPayload ()
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
    operator<< (::xercesc::DOMElement& e, const oadrPayload& i)
    {
      e << static_cast< const  ::xml_schema_test::type& > (i);

      // Signature
      //
      if (i.Signature ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "Signature",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *i.Signature ();
      }

      // oadrSignedObject
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "oadrSignedObject",
            "http://openadr.org/oadr-2.0b/2012/07",
            e));

        s << i.oadrSignedObject ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

