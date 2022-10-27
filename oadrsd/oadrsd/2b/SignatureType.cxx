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

#include "SignatureType.hxx"

#include "SignedInfoType.hxx"

#include "SignatureValueType.hxx"

#include "KeyInfoType.hxx"

#include "ObjectType.hxx"

namespace oadr2b
{
  namespace sig
  {
    // SignatureType
    // 

    const SignatureType::SignedInfo_type& SignatureType::
    SignedInfo () const
    {
      return this->SignedInfo_.get ();
    }

    SignatureType::SignedInfo_type& SignatureType::
    SignedInfo ()
    {
      return this->SignedInfo_.get ();
    }

    void SignatureType::
    SignedInfo (const SignedInfo_type& x)
    {
      this->SignedInfo_.set (x);
    }

    void SignatureType::
    SignedInfo (::std::unique_ptr< SignedInfo_type > x)
    {
      this->SignedInfo_.set (std::move (x));
    }

    const SignatureType::SignatureValue_type& SignatureType::
    SignatureValue () const
    {
      return this->SignatureValue_.get ();
    }

    SignatureType::SignatureValue_type& SignatureType::
    SignatureValue ()
    {
      return this->SignatureValue_.get ();
    }

    void SignatureType::
    SignatureValue (const SignatureValue_type& x)
    {
      this->SignatureValue_.set (x);
    }

    void SignatureType::
    SignatureValue (::std::unique_ptr< SignatureValue_type > x)
    {
      this->SignatureValue_.set (std::move (x));
    }

    const SignatureType::KeyInfo_optional& SignatureType::
    KeyInfo () const
    {
      return this->KeyInfo_;
    }

    SignatureType::KeyInfo_optional& SignatureType::
    KeyInfo ()
    {
      return this->KeyInfo_;
    }

    void SignatureType::
    KeyInfo (const KeyInfo_type& x)
    {
      this->KeyInfo_.set (x);
    }

    void SignatureType::
    KeyInfo (const KeyInfo_optional& x)
    {
      this->KeyInfo_ = x;
    }

    void SignatureType::
    KeyInfo (::std::unique_ptr< KeyInfo_type > x)
    {
      this->KeyInfo_.set (std::move (x));
    }

    const SignatureType::Object_sequence& SignatureType::
    Object () const
    {
      return this->Object_;
    }

    SignatureType::Object_sequence& SignatureType::
    Object ()
    {
      return this->Object_;
    }

    void SignatureType::
    Object (const Object_sequence& s)
    {
      this->Object_ = s;
    }

    const SignatureType::Id_optional& SignatureType::
    Id () const
    {
      return this->Id_;
    }

    SignatureType::Id_optional& SignatureType::
    Id ()
    {
      return this->Id_;
    }

    void SignatureType::
    Id (const Id_type& x)
    {
      this->Id_.set (x);
    }

    void SignatureType::
    Id (const Id_optional& x)
    {
      this->Id_ = x;
    }

    void SignatureType::
    Id (::std::unique_ptr< Id_type > x)
    {
      this->Id_.set (std::move (x));
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
  namespace sig
  {
    // SignatureType
    //

    SignatureType::
    SignatureType (const SignedInfo_type& SignedInfo,
                   const SignatureValue_type& SignatureValue)
    : ::xml_schema_test::type (),
      SignedInfo_ (SignedInfo, this),
      SignatureValue_ (SignatureValue, this),
      KeyInfo_ (this),
      Object_ (this),
      Id_ (this)
    {
    }

    SignatureType::
    SignatureType (::std::unique_ptr< SignedInfo_type > SignedInfo,
                   ::std::unique_ptr< SignatureValue_type > SignatureValue)
    : ::xml_schema_test::type (),
      SignedInfo_ (std::move (SignedInfo), this),
      SignatureValue_ (std::move (SignatureValue), this),
      KeyInfo_ (this),
      Object_ (this),
      Id_ (this)
    {
    }

    SignatureType::
    SignatureType (const SignatureType& x,
              ::xml_schema_test::flags f,
              ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      SignedInfo_ (x.SignedInfo_, f, this),
      SignatureValue_ (x.SignatureValue_, f, this),
      KeyInfo_ (x.KeyInfo_, f, this),
      Object_ (x.Object_, f, this),
      Id_ (x.Id_, f, this)
    {
    }

    SignatureType::
    SignatureType (const ::xercesc::DOMElement& e,
              ::xml_schema_test::flags f,
              ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      SignedInfo_ (this),
      SignatureValue_ (this),
      KeyInfo_ (this),
      Object_ (this),
      Id_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, true);
        this->parse (p, f);
      }
    }

    void SignatureType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
      ::xml_schema_test::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // SignedInfo
        //
        if (n.name () == "SignedInfo" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< SignedInfo_type > r (
            SignedInfo_traits::create (i, f, this));

          if (!SignedInfo_.present ())
          {
            this->SignedInfo_.set (::std::move (r));
            continue;
          }
        }

        // SignatureValue
        //
        if (n.name () == "SignatureValue" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< SignatureValue_type > r (
            SignatureValue_traits::create (i, f, this));

          if (!SignatureValue_.present ())
          {
            this->SignatureValue_.set (::std::move (r));
            continue;
          }
        }

        // KeyInfo
        //
        if (n.name () == "KeyInfo" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< KeyInfo_type > r (
            KeyInfo_traits::create (i, f, this));

          if (!this->KeyInfo_)
          {
            this->KeyInfo_.set (::std::move (r));
            continue;
          }
        }

        // Object
        //
        if (n.name () == "Object" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< Object_type > r (
            Object_traits::create (i, f, this));

          this->Object_.push_back (::std::move (r));
          continue;
        }

        break;
      }

      if (!SignedInfo_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "SignedInfo",
          "http://www.w3.org/2000/09/xmldsig#");
      }

      if (!SignatureValue_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "SignatureValue",
          "http://www.w3.org/2000/09/xmldsig#");
      }

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "Id" && n.namespace_ ().empty ())
        {
          this->Id_.set (Id_traits::create (i, f, this));
          continue;
        }
      }
    }

    SignatureType* SignatureType::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class SignatureType (*this, f, c);
    }

    SignatureType& SignatureType::
    operator= (const SignatureType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->SignedInfo_ = x.SignedInfo_;
        this->SignatureValue_ = x.SignatureValue_;
        this->KeyInfo_ = x.KeyInfo_;
        this->Object_ = x.Object_;
        this->Id_ = x.Id_;
      }

      return *this;
    }

    SignatureType::
    ~SignatureType ()
    {
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace oadr2b
{
  namespace sig
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
  namespace sig
  {
    void
    operator<< (::xercesc::DOMElement& e, const SignatureType& i)
    {
      e << static_cast< const  ::xml_schema_test::type& > (i);

      // SignedInfo
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "SignedInfo",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << i.SignedInfo ();
      }

      // SignatureValue
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "SignatureValue",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << i.SignatureValue ();
      }

      // KeyInfo
      //
      if (i.KeyInfo ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "KeyInfo",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *i.KeyInfo ();
      }

      // Object
      //
      for (SignatureType::Object_const_iterator
           b (i.Object ().begin ()), n (i.Object ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "Object",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // Id
      //
      if (i.Id ())
      {
        ::xercesc::DOMAttr& a (
          ::xsd::cxx::xml::dom::create_attribute (
            "Id",
            e));

        a << *i.Id ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

