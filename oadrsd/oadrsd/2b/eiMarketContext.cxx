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

#include "eiMarketContext.hxx"

#include "MarketContextType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // eiMarketContext
    // 

    const eiMarketContext::marketContext_type& eiMarketContext::
    marketContext () const
    {
      return this->marketContext_.get ();
    }

    eiMarketContext::marketContext_type& eiMarketContext::
    marketContext ()
    {
      return this->marketContext_.get ();
    }

    void eiMarketContext::
    marketContext (const marketContext_type& x)
    {
      this->marketContext_.set (x);
    }

    void eiMarketContext::
    marketContext (::std::unique_ptr< marketContext_type > x)
    {
      this->marketContext_.set (std::move (x));
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
    // eiMarketContext
    //

    eiMarketContext::
    eiMarketContext (const marketContext_type& marketContext)
    : ::xml_schema::type (),
      marketContext_ (marketContext, this)
    {
    }

    eiMarketContext::
    eiMarketContext (const eiMarketContext& x,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      marketContext_ (x.marketContext_, f, this)
    {
    }

    eiMarketContext::
    eiMarketContext (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      marketContext_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void eiMarketContext::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // marketContext
        //
        if (n.name () == "marketContext" && n.namespace_ () == "http://docs.oasis-open.org/ns/emix/2011/06")
        {
          ::std::unique_ptr< marketContext_type > r (
            marketContext_traits::create (i, f, this));

          if (!marketContext_.present ())
          {
            this->marketContext_.set (::std::move (r));
            continue;
          }
        }

        break;
      }

      if (!marketContext_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "marketContext",
          "http://docs.oasis-open.org/ns/emix/2011/06");
      }
    }

    eiMarketContext* eiMarketContext::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class eiMarketContext (*this, f, c);
    }

    eiMarketContext& eiMarketContext::
    operator= (const eiMarketContext& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema::type& > (*this) = x;
        this->marketContext_ = x.marketContext_;
      }

      return *this;
    }

    eiMarketContext::
    ~eiMarketContext ()
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
    operator<< (::xercesc::DOMElement& e, const eiMarketContext& i)
    {
      e << static_cast< const ::xml_schema::type& > (i);

      // marketContext
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "marketContext",
            "http://docs.oasis-open.org/ns/emix/2011/06",
            e));

        s << i.marketContext ();
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

