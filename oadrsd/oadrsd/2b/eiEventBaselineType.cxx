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

#include "eiEventBaselineType.hxx"

#include "dtstart.hxx"

#include "DurationPropType.hxx"

#include "intervals.hxx"

#include "ItemBaseType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // eiEventBaselineType
    // 

    const eiEventBaselineType::dtstart_type& eiEventBaselineType::
    dtstart () const
    {
      return this->dtstart_.get ();
    }

    eiEventBaselineType::dtstart_type& eiEventBaselineType::
    dtstart ()
    {
      return this->dtstart_.get ();
    }

    void eiEventBaselineType::
    dtstart (const dtstart_type& x)
    {
      this->dtstart_.set (x);
    }

    void eiEventBaselineType::
    dtstart (::std::unique_ptr< dtstart_type > x)
    {
      this->dtstart_.set (std::move (x));
    }

    const eiEventBaselineType::duration_type& eiEventBaselineType::
    duration () const
    {
      return this->duration_.get ();
    }

    eiEventBaselineType::duration_type& eiEventBaselineType::
    duration ()
    {
      return this->duration_.get ();
    }

    void eiEventBaselineType::
    duration (const duration_type& x)
    {
      this->duration_.set (x);
    }

    void eiEventBaselineType::
    duration (::std::unique_ptr< duration_type > x)
    {
      this->duration_.set (std::move (x));
    }

    const eiEventBaselineType::intervals_type& eiEventBaselineType::
    intervals () const
    {
      return this->intervals_.get ();
    }

    eiEventBaselineType::intervals_type& eiEventBaselineType::
    intervals ()
    {
      return this->intervals_.get ();
    }

    void eiEventBaselineType::
    intervals (const intervals_type& x)
    {
      this->intervals_.set (x);
    }

    void eiEventBaselineType::
    intervals (::std::unique_ptr< intervals_type > x)
    {
      this->intervals_.set (std::move (x));
    }

    const eiEventBaselineType::baselineID_type& eiEventBaselineType::
    baselineID () const
    {
      return this->baselineID_.get ();
    }

    eiEventBaselineType::baselineID_type& eiEventBaselineType::
    baselineID ()
    {
      return this->baselineID_.get ();
    }

    void eiEventBaselineType::
    baselineID (const baselineID_type& x)
    {
      this->baselineID_.set (x);
    }

    void eiEventBaselineType::
    baselineID (::std::unique_ptr< baselineID_type > x)
    {
      this->baselineID_.set (std::move (x));
    }

    const eiEventBaselineType::resourceID_sequence& eiEventBaselineType::
    resourceID () const
    {
      return this->resourceID_;
    }

    eiEventBaselineType::resourceID_sequence& eiEventBaselineType::
    resourceID ()
    {
      return this->resourceID_;
    }

    void eiEventBaselineType::
    resourceID (const resourceID_sequence& s)
    {
      this->resourceID_ = s;
    }

    const eiEventBaselineType::baselineName_type& eiEventBaselineType::
    baselineName () const
    {
      return this->baselineName_.get ();
    }

    eiEventBaselineType::baselineName_type& eiEventBaselineType::
    baselineName ()
    {
      return this->baselineName_.get ();
    }

    void eiEventBaselineType::
    baselineName (const baselineName_type& x)
    {
      this->baselineName_.set (x);
    }

    void eiEventBaselineType::
    baselineName (::std::unique_ptr< baselineName_type > x)
    {
      this->baselineName_.set (std::move (x));
    }

    const eiEventBaselineType::itemBase_optional& eiEventBaselineType::
    itemBase () const
    {
      return this->itemBase_;
    }

    eiEventBaselineType::itemBase_optional& eiEventBaselineType::
    itemBase ()
    {
      return this->itemBase_;
    }

    void eiEventBaselineType::
    itemBase (const itemBase_type& x)
    {
      this->itemBase_.set (x);
    }

    void eiEventBaselineType::
    itemBase (const itemBase_optional& x)
    {
      this->itemBase_ = x;
    }

    void eiEventBaselineType::
    itemBase (::std::unique_ptr< itemBase_type > x)
    {
      this->itemBase_.set (std::move (x));
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
    // eiEventBaselineType
    //

    eiEventBaselineType::
    eiEventBaselineType (const dtstart_type& dtstart,
                         const duration_type& duration,
                         const intervals_type& intervals,
                         const baselineID_type& baselineID,
                         const baselineName_type& baselineName)
    : ::xml_schema_test::type (),
      dtstart_ (dtstart, this),
      duration_ (duration, this),
      intervals_ (intervals, this),
      baselineID_ (baselineID, this),
      resourceID_ (this),
      baselineName_ (baselineName, this),
      itemBase_ (this)
    {
    }

    eiEventBaselineType::
    eiEventBaselineType (::std::unique_ptr< dtstart_type > dtstart,
                         ::std::unique_ptr< duration_type > duration,
                         ::std::unique_ptr< intervals_type > intervals,
                         const baselineID_type& baselineID,
                         const baselineName_type& baselineName)
    : ::xml_schema_test::type (),
      dtstart_ (std::move (dtstart), this),
      duration_ (std::move (duration), this),
      intervals_ (std::move (intervals), this),
      baselineID_ (baselineID, this),
      resourceID_ (this),
      baselineName_ (baselineName, this),
      itemBase_ (this)
    {
    }

    eiEventBaselineType::
    eiEventBaselineType (const eiEventBaselineType& x,
                    ::xml_schema_test::flags f,
                    ::xml_schema_test::container* c)
    : ::xml_schema_test::type (x, f, c),
      dtstart_ (x.dtstart_, f, this),
      duration_ (x.duration_, f, this),
      intervals_ (x.intervals_, f, this),
      baselineID_ (x.baselineID_, f, this),
      resourceID_ (x.resourceID_, f, this),
      baselineName_ (x.baselineName_, f, this),
      itemBase_ (x.itemBase_, f, this)
    {
    }

    eiEventBaselineType::
    eiEventBaselineType (const ::xercesc::DOMElement& e,
                    ::xml_schema_test::flags f,
                    ::xml_schema_test::container* c)
    : ::xml_schema_test::type (e, f | ::xml_schema_test::flags::base, c),
      dtstart_ (this),
      duration_ (this),
      intervals_ (this),
      baselineID_ (this),
      resourceID_ (this),
      baselineName_ (this),
      itemBase_ (this)
    {
      if ((f & ::xml_schema_test::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false, false);
        this->parse (p, f);
      }
    }

    void eiEventBaselineType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
      ::xml_schema_test::flags f)
    {
      for (; p.more_content (); p.next_content (false))
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // dtstart
        //
        if (n.name () == "dtstart" && n.namespace_ () == "urn:ietf:params:xml:ns:icalendar-2.0")
        {
          ::std::unique_ptr< dtstart_type > r (
            dtstart_traits::create (i, f, this));

          if (!dtstart_.present ())
          {
            this->dtstart_.set (::std::move (r));
            continue;
          }
        }

        // duration
        //
        if (n.name () == "duration" && n.namespace_ () == "urn:ietf:params:xml:ns:icalendar-2.0")
        {
          ::std::unique_ptr< duration_type > r (
            duration_traits::create (i, f, this));

          if (!duration_.present ())
          {
            this->duration_.set (::std::move (r));
            continue;
          }
        }

        // intervals
        //
        if (n.name () == "intervals" && n.namespace_ () == "urn:ietf:params:xml:ns:icalendar-2.0:stream")
        {
          ::std::unique_ptr< intervals_type > r (
            intervals_traits::create (i, f, this));

          if (!intervals_.present ())
          {
            this->intervals_.set (::std::move (r));
            continue;
          }
        }

        // baselineID
        //
        if (n.name () == "baselineID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< baselineID_type > r (
            baselineID_traits::create (i, f, this));

          if (!baselineID_.present ())
          {
            this->baselineID_.set (::std::move (r));
            continue;
          }
        }

        // resourceID
        //
        if (n.name () == "resourceID" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< resourceID_type > r (
            resourceID_traits::create (i, f, this));

          this->resourceID_.push_back (::std::move (r));
          continue;
        }

        // baselineName
        //
        if (n.name () == "baselineName" && n.namespace_ () == "http://docs.oasis-open.org/ns/energyinterop/201110")
        {
          ::std::unique_ptr< baselineName_type > r (
            baselineName_traits::create (i, f, this));

          if (!baselineName_.present ())
          {
            this->baselineName_.set (::std::move (r));
            continue;
          }
        }

        // itemBase
        //
        {
          ::std::unique_ptr< ::xsd::cxx::tree::type > tmp (
            ::xsd::cxx::tree::type_factory_map_instance< 0, char > ().create (
              "itemBase",
              "http://docs.oasis-open.org/ns/emix/2011/06",
              &::xsd::cxx::tree::factory_impl< itemBase_type >,
              true, true, i, n, f, this));

          if (tmp.get () != 0)
          {
            if (!this->itemBase_)
            {
              ::std::unique_ptr< itemBase_type > r (
                dynamic_cast< itemBase_type* > (tmp.get ()));

              if (r.get ())
                tmp.release ();
              else
                throw ::xsd::cxx::tree::not_derived< char > ();

              this->itemBase_.set (::std::move (r));
              continue;
            }
          }
        }

        break;
      }

      if (!dtstart_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "dtstart",
          "urn:ietf:params:xml:ns:icalendar-2.0");
      }

      if (!duration_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "duration",
          "urn:ietf:params:xml:ns:icalendar-2.0");
      }

      if (!intervals_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "intervals",
          "urn:ietf:params:xml:ns:icalendar-2.0:stream");
      }

      if (!baselineID_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "baselineID",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }

      if (!baselineName_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "baselineName",
          "http://docs.oasis-open.org/ns/energyinterop/201110");
      }
    }

    eiEventBaselineType* eiEventBaselineType::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class eiEventBaselineType (*this, f, c);
    }

    eiEventBaselineType& eiEventBaselineType::
    operator= (const eiEventBaselineType& x)
    {
      if (this != &x)
      {
        static_cast< ::xml_schema_test::type& > (*this) = x;
        this->dtstart_ = x.dtstart_;
        this->duration_ = x.duration_;
        this->intervals_ = x.intervals_;
        this->baselineID_ = x.baselineID_;
        this->resourceID_ = x.resourceID_;
        this->baselineName_ = x.baselineName_;
        this->itemBase_ = x.itemBase_;
      }

      return *this;
    }

    eiEventBaselineType::
    ~eiEventBaselineType ()
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
    operator<< (::xercesc::DOMElement& e, const eiEventBaselineType& i)
    {
      e << static_cast< const  ::xml_schema_test::type& > (i);

      // dtstart
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "dtstart",
            "urn:ietf:params:xml:ns:icalendar-2.0",
            e));

        s << i.dtstart ();
      }

      // duration
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "duration",
            "urn:ietf:params:xml:ns:icalendar-2.0",
            e));

        s << i.duration ();
      }

      // intervals
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "intervals",
            "urn:ietf:params:xml:ns:icalendar-2.0:stream",
            e));

        s << i.intervals ();
      }

      // baselineID
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "baselineID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.baselineID ();
      }

      // resourceID
      //
      for (eiEventBaselineType::resourceID_const_iterator
           b (i.resourceID ().begin ()), n (i.resourceID ().end ());
           b != n; ++b)
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "resourceID",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << *b;
      }

      // baselineName
      //
      {
        ::xercesc::DOMElement& s (
          ::xsd::cxx::xml::dom::create_element (
            "baselineName",
            "http://docs.oasis-open.org/ns/energyinterop/201110",
            e));

        s << i.baselineName ();
      }

      // itemBase
      //
      {
        ::xsd::cxx::tree::type_serializer_map< char >& tsm (
          ::xsd::cxx::tree::type_serializer_map_instance< 0, char > ());

        if (i.itemBase ())
        {
          const eiEventBaselineType::itemBase_type& x (*i.itemBase ());
          if (typeid (eiEventBaselineType::itemBase_type) == typeid (x))
          {
            ::xercesc::DOMElement& s (
              ::xsd::cxx::xml::dom::create_element (
                "itemBase",
                "http://docs.oasis-open.org/ns/emix/2011/06",
                e));

            s << x;
          }
          else
            tsm.serialize (
              "itemBase",
              "http://docs.oasis-open.org/ns/emix/2011/06",
              true, true, e, x);
        }
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

