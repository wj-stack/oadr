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

#include "DSAKeyValueType.hxx"

#include "CryptoBinary.hxx"

namespace oadr2b
{
  namespace sig
  {
    // DSAKeyValueType
    // 

    const DSAKeyValueType::P_optional& DSAKeyValueType::
    P () const
    {
      return this->P_;
    }

    DSAKeyValueType::P_optional& DSAKeyValueType::
    P ()
    {
      return this->P_;
    }

    void DSAKeyValueType::
    P (const P_type& x)
    {
      this->P_.set (x);
    }

    void DSAKeyValueType::
    P (const P_optional& x)
    {
      this->P_ = x;
    }

    void DSAKeyValueType::
    P (::std::unique_ptr< P_type > x)
    {
      this->P_.set (std::move (x));
    }

    const DSAKeyValueType::Q_optional& DSAKeyValueType::
    Q () const
    {
      return this->Q_;
    }

    DSAKeyValueType::Q_optional& DSAKeyValueType::
    Q ()
    {
      return this->Q_;
    }

    void DSAKeyValueType::
    Q (const Q_type& x)
    {
      this->Q_.set (x);
    }

    void DSAKeyValueType::
    Q (const Q_optional& x)
    {
      this->Q_ = x;
    }

    void DSAKeyValueType::
    Q (::std::unique_ptr< Q_type > x)
    {
      this->Q_.set (std::move (x));
    }

    const DSAKeyValueType::G_optional& DSAKeyValueType::
    G () const
    {
      return this->G_;
    }

    DSAKeyValueType::G_optional& DSAKeyValueType::
    G ()
    {
      return this->G_;
    }

    void DSAKeyValueType::
    G (const G_type& x)
    {
      this->G_.set (x);
    }

    void DSAKeyValueType::
    G (const G_optional& x)
    {
      this->G_ = x;
    }

    void DSAKeyValueType::
    G (::std::unique_ptr< G_type > x)
    {
      this->G_.set (std::move (x));
    }

    const DSAKeyValueType::Y_type& DSAKeyValueType::
    Y () const
    {
      return this->Y_.get ();
    }

    DSAKeyValueType::Y_type& DSAKeyValueType::
    Y ()
    {
      return this->Y_.get ();
    }

    void DSAKeyValueType::
    Y (const Y_type& x)
    {
      this->Y_.set (x);
    }

    void DSAKeyValueType::
    Y (::std::unique_ptr< Y_type > x)
    {
      this->Y_.set (std::move (x));
    }

    const DSAKeyValueType::J_optional& DSAKeyValueType::
    J () const
    {
      return this->J_;
    }

    DSAKeyValueType::J_optional& DSAKeyValueType::
    J ()
    {
      return this->J_;
    }

    void DSAKeyValueType::
    J (const J_type& x)
    {
      this->J_.set (x);
    }

    void DSAKeyValueType::
    J (const J_optional& x)
    {
      this->J_ = x;
    }

    void DSAKeyValueType::
    J (::std::unique_ptr< J_type > x)
    {
      this->J_.set (std::move (x));
    }

    const DSAKeyValueType::Seed_optional& DSAKeyValueType::
    Seed () const
    {
      return this->Seed_;
    }

    DSAKeyValueType::Seed_optional& DSAKeyValueType::
    Seed ()
    {
      return this->Seed_;
    }

    void DSAKeyValueType::
    Seed (const Seed_type& x)
    {
      this->Seed_.set (x);
    }

    void DSAKeyValueType::
    Seed (const Seed_optional& x)
    {
      this->Seed_ = x;
    }

    void DSAKeyValueType::
    Seed (::std::unique_ptr< Seed_type > x)
    {
      this->Seed_.set (std::move (x));
    }

    const DSAKeyValueType::PgenCounter_optional& DSAKeyValueType::
    PgenCounter () const
    {
      return this->PgenCounter_;
    }

    DSAKeyValueType::PgenCounter_optional& DSAKeyValueType::
    PgenCounter ()
    {
      return this->PgenCounter_;
    }

    void DSAKeyValueType::
    PgenCounter (const PgenCounter_type& x)
    {
      this->PgenCounter_.set (x);
    }

    void DSAKeyValueType::
    PgenCounter (const PgenCounter_optional& x)
    {
      this->PgenCounter_ = x;
    }

    void DSAKeyValueType::
    PgenCounter (::std::unique_ptr< PgenCounter_type > x)
    {
      this->PgenCounter_.set (std::move (x));
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
    // DSAKeyValueType
    //

    DSAKeyValueType::
    DSAKeyValueType (const Y_type& Y)
    : ::xml_schema_test::type (),
      P_ (this),
      Q_ (this),
      G_ (this),
      Y_ (Y, this),
      J_ (this),
      Seed_ (this),
      PgenCounter_ (this)
    {
    }

    DSAKeyValueType::
    DSAKeyValueType (const DSAKeyValueType& x,
                ::xml_schema_test::flags f,
                ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      P_ (x.P_, f, this),
      Q_ (x.Q_, f, this),
      G_ (x.G_, f, this),
      Y_ (x.Y_, f, this),
      J_ (x.J_, f, this),
      Seed_ (x.Seed_, f, this),
      PgenCounter_ (x.PgenCounter_, f, this)
    {
    }

    DSAKeyValueType::
    DSAKeyValueType (const ::xercesc::DOMElement& e,
                ::xml_schema_test::flags f,
                ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      P_ (this),
      Q_ (this),
      G_ (this),
      Y_ (this),
      J_ (this),
      Seed_ (this),
      PgenCounter_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void DSAKeyValueType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
      ::xml_schema_test::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // P
        //
        if (n.name () == "P" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< P_type > r (
            P_traits::create (i, f, this));

          if (!this->P_)
          {
            this->P_.set (::std::move (r));
            continue;
          }
        }

        // Q
        //
        if (n.name () == "Q" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< Q_type > r (
            Q_traits::create (i, f, this));

          if (!this->Q_)
          {
            this->Q_.set (::std::move (r));
            continue;
          }
        }

        // G
        //
        if (n.name () == "G" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< G_type > r (
            G_traits::create (i, f, this));

          if (!this->G_)
          {
            this->G_.set (::std::move (r));
            continue;
          }
        }

        // Y
        //
        if (n.name () == "Y" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< Y_type > r (
            Y_traits::create (i, f, this));

          if (!Y_.present ())
          {
            this->Y_.set (::std::move (r));
            continue;
          }
        }

        // J
        //
        if (n.name () == "J" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< J_type > r (
            J_traits::create (i, f, this));

          if (!this->J_)
          {
            this->J_.set (::std::move (r));
            continue;
          }
        }

        // Seed
        //
        if (n.name () == "Seed" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< Seed_type > r (
            Seed_traits::create (i, f, this));

          if (!this->Seed_)
          {
            this->Seed_.set (::std::move (r));
            continue;
          }
        }

        // PgenCounter
        //
        if (n.name () == "PgenCounter" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< PgenCounter_type > r (
            PgenCounter_traits::create (i, f, this));

          if (!this->PgenCounter_)
          {
            this->PgenCounter_.set (::std::move (r));
            continue;
          }
        }

        break;
      }

      if (!Y_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "Y",
          "http://www.w3.org/2000/09/xmldsig#");
      }
    }

    DSAKeyValueType* DSAKeyValueType::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class DSAKeyValueType (*this, f, c);
    }

    DSAKeyValueType& DSAKeyValueType::
    operator= (const DSAKeyValueType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->P_ = x.P_;
        this->Q_ = x.Q_;
        this->G_ = x.G_;
        this->Y_ = x.Y_;
        this->J_ = x.J_;
        this->Seed_ = x.Seed_;
        this->PgenCounter_ = x.PgenCounter_;
      }

      return *this;
    }

    DSAKeyValueType::
    ~DSAKeyValueType ()
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
    operator<< (::xercesc::DOMElement& e, const DSAKeyValueType& i)
    {
      e << static_cast< const  ::xml_schema_test::type& > (i);

      // P
      //
      if (i.P ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "P",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *i.P ();
      }

      // Q
      //
      if (i.Q ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "Q",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *i.Q ();
      }

      // G
      //
      if (i.G ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "G",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *i.G ();
      }

      // Y
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "Y",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << i.Y ();
      }

      // J
      //
      if (i.J ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "J",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *i.J ();
      }

      // Seed
      //
      if (i.Seed ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "Seed",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *i.Seed ();
      }

      // PgenCounter
      //
      if (i.PgenCounter ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "PgenCounter",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *i.PgenCounter ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

