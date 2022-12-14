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

#include "X509DataType.hxx"

#include "X509IssuerSerialType.hxx"

namespace oadr2b
{
  namespace sig
  {
    // X509DataType
    // 

    const X509DataType::X509IssuerSerial_sequence& X509DataType::
    X509IssuerSerial () const
    {
      return this->X509IssuerSerial_;
    }

    X509DataType::X509IssuerSerial_sequence& X509DataType::
    X509IssuerSerial ()
    {
      return this->X509IssuerSerial_;
    }

    void X509DataType::
    X509IssuerSerial (const X509IssuerSerial_sequence& s)
    {
      this->X509IssuerSerial_ = s;
    }

    const X509DataType::X509SKI_sequence& X509DataType::
    X509SKI () const
    {
      return this->X509SKI_;
    }

    X509DataType::X509SKI_sequence& X509DataType::
    X509SKI ()
    {
      return this->X509SKI_;
    }

    void X509DataType::
    X509SKI (const X509SKI_sequence& s)
    {
      this->X509SKI_ = s;
    }

    const X509DataType::X509SubjectName_sequence& X509DataType::
    X509SubjectName () const
    {
      return this->X509SubjectName_;
    }

    X509DataType::X509SubjectName_sequence& X509DataType::
    X509SubjectName ()
    {
      return this->X509SubjectName_;
    }

    void X509DataType::
    X509SubjectName (const X509SubjectName_sequence& s)
    {
      this->X509SubjectName_ = s;
    }

    const X509DataType::X509Certificate_sequence& X509DataType::
    X509Certificate () const
    {
      return this->X509Certificate_;
    }

    X509DataType::X509Certificate_sequence& X509DataType::
    X509Certificate ()
    {
      return this->X509Certificate_;
    }

    void X509DataType::
    X509Certificate (const X509Certificate_sequence& s)
    {
      this->X509Certificate_ = s;
    }

    const X509DataType::X509CRL_sequence& X509DataType::
    X509CRL () const
    {
      return this->X509CRL_;
    }

    X509DataType::X509CRL_sequence& X509DataType::
    X509CRL ()
    {
      return this->X509CRL_;
    }

    void X509DataType::
    X509CRL (const X509CRL_sequence& s)
    {
      this->X509CRL_ = s;
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
    // X509DataType
    //

    X509DataType::
    X509DataType ()
    : ::xml_schema_test::type (),
      X509IssuerSerial_ (this),
      X509SKI_ (this),
      X509SubjectName_ (this),
      X509Certificate_ (this),
      X509CRL_ (this)
    {
    }

    X509DataType::
    X509DataType (const X509DataType& x,
             ::xml_schema_test::flags f,
             ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      X509IssuerSerial_ (x.X509IssuerSerial_, f, this),
      X509SKI_ (x.X509SKI_, f, this),
      X509SubjectName_ (x.X509SubjectName_, f, this),
      X509Certificate_ (x.X509Certificate_, f, this),
      X509CRL_ (x.X509CRL_, f, this)
    {
    }

    X509DataType::
    X509DataType (const ::xercesc::DOMElement& e,
             ::xml_schema_test::flags f,
             ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      X509IssuerSerial_ (this),
      X509SKI_ (this),
      X509SubjectName_ (this),
      X509Certificate_ (this),
      X509CRL_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void X509DataType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
      ::xml_schema_test::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // X509IssuerSerial
        //
        if (n.name () == "X509IssuerSerial" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< X509IssuerSerial_type > r (
            X509IssuerSerial_traits::create (i, f, this));

          this->X509IssuerSerial_.push_back (::std::move (r));
          continue;
        }

        // X509SKI
        //
        if (n.name () == "X509SKI" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< X509SKI_type > r (
            X509SKI_traits::create (i, f, this));

          this->X509SKI_.push_back (::std::move (r));
          continue;
        }

        // X509SubjectName
        //
        if (n.name () == "X509SubjectName" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< X509SubjectName_type > r (
            X509SubjectName_traits::create (i, f, this));

          this->X509SubjectName_.push_back (::std::move (r));
          continue;
        }

        // X509Certificate
        //
        if (n.name () == "X509Certificate" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< X509Certificate_type > r (
            X509Certificate_traits::create (i, f, this));

          this->X509Certificate_.push_back (::std::move (r));
          continue;
        }

        // X509CRL
        //
        if (n.name () == "X509CRL" && n.namespace_ () == "http://www.w3.org/2000/09/xmldsig#")
        {
          ::std::unique_ptr< X509CRL_type > r (
            X509CRL_traits::create (i, f, this));

          this->X509CRL_.push_back (::std::move (r));
          continue;
        }

        break;
      }
    }

    X509DataType* X509DataType::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class X509DataType (*this, f, c);
    }

    X509DataType& X509DataType::
    operator= (const X509DataType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->X509IssuerSerial_ = x.X509IssuerSerial_;
        this->X509SKI_ = x.X509SKI_;
        this->X509SubjectName_ = x.X509SubjectName_;
        this->X509Certificate_ = x.X509Certificate_;
        this->X509CRL_ = x.X509CRL_;
      }

      return *this;
    }

    X509DataType::
    ~X509DataType ()
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
    operator<< (::xercesc::DOMElement& e, const X509DataType& i)
    {
      e << static_cast< const  ::xml_schema_test::type& > (i);

      // X509IssuerSerial
      //
      for (X509DataType::X509IssuerSerial_const_iterator
           b (i.X509IssuerSerial ().begin ()), n (i.X509IssuerSerial ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "X509IssuerSerial",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // X509SKI
      //
      for (X509DataType::X509SKI_const_iterator
           b (i.X509SKI ().begin ()), n (i.X509SKI ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "X509SKI",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // X509SubjectName
      //
      for (X509DataType::X509SubjectName_const_iterator
           b (i.X509SubjectName ().begin ()), n (i.X509SubjectName ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "X509SubjectName",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // X509Certificate
      //
      for (X509DataType::X509Certificate_const_iterator
           b (i.X509Certificate ().begin ()), n (i.X509Certificate ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "X509Certificate",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }

      // X509CRL
      //
      for (X509DataType::X509CRL_const_iterator
           b (i.X509CRL ().begin ()), n (i.X509CRL ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "X509CRL",
            "http://www.w3.org/2000/09/xmldsig#",
            e));

        s << *b;
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

