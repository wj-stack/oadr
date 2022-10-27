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

#include "ReportPayloadType.hxx"

#include "ConfidenceType.hxx"

#include "AccuracyType.hxx"

#include "PayloadBaseType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // ReportPayloadType
    // 

    const ReportPayloadType::rID_type& ReportPayloadType::
    rID () const
    {
      return this->rID_.get ();
    }

    ReportPayloadType::rID_type& ReportPayloadType::
    rID ()
    {
      return this->rID_.get ();
    }

    void ReportPayloadType::
    rID (const rID_type& x)
    {
      this->rID_.set (x);
    }

    void ReportPayloadType::
    rID (::std::unique_ptr< rID_type > x)
    {
      this->rID_.set (std::move (x));
    }

    const ReportPayloadType::confidence_optional& ReportPayloadType::
    confidence () const
    {
      return this->confidence_;
    }

    ReportPayloadType::confidence_optional& ReportPayloadType::
    confidence ()
    {
      return this->confidence_;
    }

    void ReportPayloadType::
    confidence (const confidence_type& x)
    {
      this->confidence_.set (x);
    }

    void ReportPayloadType::
    confidence (const confidence_optional& x)
    {
      this->confidence_ = x;
    }

    void ReportPayloadType::
    confidence (::std::unique_ptr< confidence_type > x)
    {
      this->confidence_.set (std::move (x));
    }

    const ReportPayloadType::accuracy_optional& ReportPayloadType::
    accuracy () const
    {
      return this->accuracy_;
    }

    ReportPayloadType::accuracy_optional& ReportPayloadType::
    accuracy ()
    {
      return this->accuracy_;
    }

    void ReportPayloadType::
    accuracy (const accuracy_type& x)
    {
      this->accuracy_.set (x);
    }

    void ReportPayloadType::
    accuracy (const accuracy_optional& x)
    {
      this->accuracy_ = x;
    }

    void ReportPayloadType::
    accuracy (::std::unique_ptr< accuracy_type > x)
    {
      this->accuracy_.set (std::move (x));
    }

    const ReportPayloadType::payloadBase_type& ReportPayloadType::
    payloadBase () const
    {
      return this->payloadBase_.get ();
    }

    ReportPayloadType::payloadBase_type& ReportPayloadType::
    payloadBase ()
    {
      return this->payloadBase_.get ();
    }

    void ReportPayloadType::
    payloadBase (const payloadBase_type& x)
    {
      this->payloadBase_.set (x);
    }

    void ReportPayloadType::
    payloadBase (::std::unique_ptr< payloadBase_type > x)
    {
      this->payloadBase_.set (std::move (x));
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
    // ReportPayloadType
    //

    ReportPayloadType::
    ReportPayloadType (const rID_type& rID,
                       const payloadBase_type& payloadBase)
    : ::stream::StreamPayloadBaseType (),
      rID_ (rID, this),
      confidence_ (this),
      accuracy_ (this),
      payloadBase_ (payloadBase, this)
    {
    }

    ReportPayloadType::
    ReportPayloadType (const rID_type& rID,
                       ::std::unique_ptr< payloadBase_type > payloadBase)
    : ::stream::StreamPayloadBaseType (),
      rID_ (rID, this),
      confidence_ (this),
      accuracy_ (this),
      payloadBase_ (std::move (payloadBase), this)
    {
    }

    ReportPayloadType::
    ReportPayloadType (const ReportPayloadType& x,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
    : ::stream::StreamPayloadBaseType (x, f, c),
      rID_ (x.rID_, f, this),
      confidence_ (x.confidence_, f, this),
      accuracy_ (x.accuracy_, f, this),
      payloadBase_ (x.payloadBase_, f, this)
    {
    }

    ReportPayloadType::
    ReportPayloadType (const ::xercesc::DOMElement& e,
                       ::xml_schema::flags f,
                       ::xml_schema::container* c)
    : ::stream::StreamPayloadBaseType (e, f | ::xml_schema::flags::base, c),
      rID_ (this),
      confidence_ (this),
      accuracy_ (this),
      payloadBase_ (this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void ReportPayloadType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // rID
        //
        if (n.name () == "rID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< rID_type > r (
            rID_traits::create (i, f, this));

          if (!rID_.present ())
          {
            this->rID_.set (::std::move (r));
            continue;
          }
        }

        // confidence
        //
        if (n.name () == "confidence" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< confidence_type > r (
            confidence_traits::create (i, f, this));

          if (!this->confidence_)
          {
            this->confidence_.set (::std::move (r));
            continue;
          }
        }

        // accuracy
        //
        if (n.name () == "accuracy" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< accuracy_type > r (
            accuracy_traits::create (i, f, this));

          if (!this->accuracy_)
          {
            this->accuracy_.set (::std::move (r));
            continue;
          }
        }

        // payloadBase
        //
        {
          ::std::unique_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "payloadBase",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              &::xsd::cxx::tree::factory_impl< payloadBase_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!payloadBase_.present ())
            {
              ::std::unique_ptr< payloadBase_type > r (
                dynamic_cast< payloadBase_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->payloadBase_.set (::std::move (r));
              continue;
            }
          }
        }

        break;
      }

      if (!rID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "rID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!payloadBase_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "payloadBase",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }
    }

    ReportPayloadType* ReportPayloadType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class ReportPayloadType (*this, f, c);
    }

    ReportPayloadType& ReportPayloadType::
    operator= (const ReportPayloadType& x)
    {
      if (this != &x)
      {
        static_cast< ::stream::StreamPayloadBaseType& > (*this) = x;
        this->rID_ = x.rID_;
        this->confidence_ = x.confidence_;
        this->accuracy_ = x.accuracy_;
        this->payloadBase_ = x.payloadBase_;
      }

      return *this;
    }

    ReportPayloadType::
    ~ReportPayloadType ()
    {
    }

    static
    const ::xsd::cxx::tree::type_factory_initializer< 0, char, ReportPayloadType >
    _xsd_ReportPayloadType_type_factory_init (
      "ReportPayloadType",
      "http://docs.oasis-open.org/ns/energyinterop/201110");
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
    operator<< (::xercesc::DOMElement& e, const ReportPayloadType& i)
    {
      e << static_cast< const ::stream::StreamPayloadBaseType& > (i);

      // rID
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "rID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.rID ();
      }

      // confidence
      //
      if (i.confidence ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "confidence",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *i.confidence ();
      }

      // accuracy
      //
      if (i.accuracy ())
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "accuracy",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *i.accuracy ();
      }

      // payloadBase
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        const ReportPayloadType::payloadBase_type& x (i.payloadBase ());
        if (typeid (ReportPayloadType::payloadBase_type) == typeid (x))
        {
          ::xercesc::DOMElement& s (
            ::xsd::cxx::xml::dom::create_element (
              "payloadBase",
              "http://docs.oasis-open.org/ns/energyinterop/201110",
              e));

          s << x;
        }
        else
          tsm.serialize (
            "payloadBase",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            true, true, e, x);
      }
    }

    static
    const ::xsd::cxx::tree::type_serializer_initializer< 0, char, ReportPayloadType >
    _xsd_ReportPayloadType_type_serializer_init (
      "ReportPayloadType",
      "http://docs.oasis-open.org/ns/energyinterop/201110");
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
