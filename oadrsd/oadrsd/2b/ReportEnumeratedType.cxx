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

#include "ReportEnumeratedType.hxx"

namespace oadr2b
{
  namespace ei
  {
    // ReportEnumeratedType
    // 

    ReportEnumeratedType::
    ReportEnumeratedType (value v)
    : ::xml_schema_test::token (_xsd_ReportEnumeratedType_literals_[v])
    {
    }

    ReportEnumeratedType::
    ReportEnumeratedType (const char* v)
    : ::xml_schema_test::token (v)
    {
    }

    ReportEnumeratedType::
    ReportEnumeratedType (const ::std::string& v)
    : ::xml_schema_test::token (v)
    {
    }

    ReportEnumeratedType::
    ReportEnumeratedType (const  ::xml_schema_test::token& v)
    : ::xml_schema_test::token (v)
    {
    }

    ReportEnumeratedType::
    ReportEnumeratedType (const ReportEnumeratedType& v,
                     ::xml_schema_test::flags f,
                     ::xml_schema_test::container* c)
    : ::xml_schema_test::token (v, f, c)
    {
    }

    ReportEnumeratedType& ReportEnumeratedType::
    operator= (value v)
    {
      static_cast< ::xml_schema_test::token& > (*this) = 
 ::xml_schema_test::token (_xsd_ReportEnumeratedType_literals_[v]);

      return *this;
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
    // ReportEnumeratedType
    //

    ReportEnumeratedType::
    ReportEnumeratedType (const ::xercesc::DOMElement& e,
                     ::xml_schema_test::flags f,
                     ::xml_schema_test::container* c)
    : ::xml_schema_test::token (e, f, c)
    {
      _xsd_ReportEnumeratedType_convert ();
    }

    ReportEnumeratedType::
    ReportEnumeratedType (const ::xercesc::DOMAttr& a,
                     ::xml_schema_test::flags f,
                     ::xml_schema_test::container* c)
    : ::xml_schema_test::token (a, f, c)
    {
      _xsd_ReportEnumeratedType_convert ();
    }

    ReportEnumeratedType::
    ReportEnumeratedType (const ::std::string& s,
                          const ::xercesc::DOMElement* e,
                     ::xml_schema_test::flags f,
                     ::xml_schema_test::container* c)
    : ::xml_schema_test::token (s, e, f, c)
    {
      _xsd_ReportEnumeratedType_convert ();
    }

    ReportEnumeratedType* ReportEnumeratedType::
    _clone (::xml_schema_test::flags f,
       ::xml_schema_test::container* c) const
    {
      return new class ReportEnumeratedType (*this, f, c);
    }

    ReportEnumeratedType::value ReportEnumeratedType::
    _xsd_ReportEnumeratedType_convert () const
    {
      ::xsd::cxx::tree::enum_comparator< char > c (_xsd_ReportEnumeratedType_literals_);
      const value* i (::std::lower_bound (
                        _xsd_ReportEnumeratedType_indexes_,
                        _xsd_ReportEnumeratedType_indexes_ + 24,
                        *this,
                        c));

      if (i == _xsd_ReportEnumeratedType_indexes_ + 24 || _xsd_ReportEnumeratedType_literals_[*i] != *this)
      {
        throw ::xsd::cxx::tree::unexpected_enumerator < char > (*this);
      }

      return *i;
    }

    const char* const ReportEnumeratedType::
    _xsd_ReportEnumeratedType_literals_[24] =
    {
      "reading",
      "usage",
      "demand",
      "setPoint",
      "deltaUsage",
      "deltaSetPoint",
      "deltaDemand",
      "baseline",
      "deviation",
      "avgUsage",
      "avgDemand",
      "operatingState",
      "upRegulationCapacityAvailable",
      "downRegulationCapacityAvailable",
      "regulationSetpoint",
      "storedEnergy",
      "targetEnergyStorage",
      "availableEnergyStorage",
      "price",
      "level",
      "powerFactor",
      "percentUsage",
      "percentDemand",
      "x-resourceStatus"
    };

    const ReportEnumeratedType::value ReportEnumeratedType::
    _xsd_ReportEnumeratedType_indexes_[24] =
    {
      ::oadr2b::ei::ReportEnumeratedType::availableEnergyStorage,
      ::oadr2b::ei::ReportEnumeratedType::avgDemand,
      ::oadr2b::ei::ReportEnumeratedType::avgUsage,
      ::oadr2b::ei::ReportEnumeratedType::baseline,
      ::oadr2b::ei::ReportEnumeratedType::deltaDemand,
      ::oadr2b::ei::ReportEnumeratedType::deltaSetPoint,
      ::oadr2b::ei::ReportEnumeratedType::deltaUsage,
      ::oadr2b::ei::ReportEnumeratedType::demand,
      ::oadr2b::ei::ReportEnumeratedType::deviation,
      ::oadr2b::ei::ReportEnumeratedType::downRegulationCapacityAvailable,
      ::oadr2b::ei::ReportEnumeratedType::level,
      ::oadr2b::ei::ReportEnumeratedType::operatingState,
      ::oadr2b::ei::ReportEnumeratedType::percentDemand,
      ::oadr2b::ei::ReportEnumeratedType::percentUsage,
      ::oadr2b::ei::ReportEnumeratedType::powerFactor,
      ::oadr2b::ei::ReportEnumeratedType::price,
      ::oadr2b::ei::ReportEnumeratedType::reading,
      ::oadr2b::ei::ReportEnumeratedType::regulationSetpoint,
      ::oadr2b::ei::ReportEnumeratedType::setPoint,
      ::oadr2b::ei::ReportEnumeratedType::storedEnergy,
      ::oadr2b::ei::ReportEnumeratedType::targetEnergyStorage,
      ::oadr2b::ei::ReportEnumeratedType::upRegulationCapacityAvailable,
      ::oadr2b::ei::ReportEnumeratedType::usage,
      ::oadr2b::ei::ReportEnumeratedType::x_resourceStatus
    };
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
    operator<< (::xercesc::DOMElement& e, const ReportEnumeratedType& i)
    {
      e << static_cast< const  ::xml_schema_test::token& > (i);
    }

    void
    operator<< (::xercesc::DOMAttr& a, const ReportEnumeratedType& i)
    {
      a << static_cast< const  ::xml_schema_test::token& > (i);
    }

    void
    operator<< (::xml_schema_test::list_stream& l,
                const ReportEnumeratedType& i)
    {
      l << static_cast< const  ::xml_schema_test::token& > (i);
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

