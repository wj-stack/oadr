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

#include "PGPDataType.hxx"

namespace oadr2b
{
  namespace sig
  {
    // PGPDataType
    // 

    const PGPDataType::PGPKeyID_optional& PGPDataType::
    PGPKeyID () const
    {
      return this->PGPKeyID_;
    }

    PGPDataType::PGPKeyID_optional& PGPDataType::
    PGPKeyID ()
    {
      return this->PGPKeyID_;
    }

    void PGPDataType::
    PGPKeyID (const PGPKeyID_type& x)
    {
      this->PGPKeyID_.set (x);
    }

    void PGPDataType::
    PGPKeyID (const PGPKeyID_optional& x)
    {
      this->PGPKeyID_ = x;
    }

    void PGPDataType::
    PGPKeyID (::std::unique_ptr< PGPKeyID_type > x)
    {
      this->PGPKeyID_.set (std::move (x));
    }

    const PGPDataType::PGPKeyPacket_optional& PGPDataType::
    PGPKeyPacket () const
    {
      return this->PGPKeyPacket_;
    }

    PGPDataType::PGPKeyPacket_optional& PGPDataType::
    PGPKeyPacket ()
    {
      return this->PGPKeyPacket_;
    }

    void PGPDataType::
    PGPKeyPacket (const PGPKeyPacket_type& x)
    {
      this->PGPKeyPacket_.set (x);
    }

    void PGPDataType::
    PGPKeyPacket (const PGPKeyPacket_optional& x)
    {
      this->PGPKeyPacket_ = x;
    }

    void PGPDataType::
    PGPKeyPacket (::std::unique_ptr< PGPKeyPacket_type > x)
    {
      this->PGPKeyPacket_.set (std::move (x));
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
    // PGPDataType
    //

    PGPDataType::
    PGPDataType ()
    : ::xml_schema::type (),
      PGPKeyID_ (this),
      PGPKeyPacket_ (this)
    {
    }

    PGPDataType::
    PGPDataType (const PGPDataType& x,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      PGPKeyID_ (x.PGPKeyID_, f, this),
      PGPKeyPacket_ (x.PGPKeyPacket_, f, this)
    {
    }

    PGPDataType::
    PGPDataType (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      PGPKeyID_ (this),
      PGPKeyPacket_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void PGPDataType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // PGPKeyID
        //
        if (n.name () == "PGPKeyID" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< PGPKeyID_type > r (
            PGPKeyID_traits::create (i, f, this));

          if (!this->PGPKeyID_)
          {
            this->PGPKeyID_.set (::std::move (r));
            continue;
          }
        }

        // PGPKeyPacket
        //
        if (n.name () == "PGPKeyPacket" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< PGPKeyPacket_type > r (
            PGPKeyPacket_traits::create (i, f, this));

          if (!this->PGPKeyPacket_)
          {
            this->PGPKeyPacket_.set (::std::move (r));
            continue;
          }
        }

        break;
      }
    }

    PGPDataType* PGPDataType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class PGPDataType (*this, f, c);
    }

    PGPDataType& PGPDataType::
    operator= (const PGPDataType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->PGPKeyID_ = x.PGPKeyID_;
        this->PGPKeyPacket_ = x.PGPKeyPacket_;
      }

      return *this;
    }

    PGPDataType::
    ~PGPDataType ()
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
    operator<< (::xercesc::DOMElement& e, const PGPDataType& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // PGPKeyID
      //
      if (i.PGPKeyID ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "PGPKeyID",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *i.PGPKeyID ();
      }

      // PGPKeyPacket
      //
      if (i.PGPKeyPacket ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "PGPKeyPacket",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *i.PGPKeyPacket ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
