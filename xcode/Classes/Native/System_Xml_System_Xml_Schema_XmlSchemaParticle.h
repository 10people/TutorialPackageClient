#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t6760;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t6760  : public XmlSchemaAnnotated_t6764
{
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::minOccurs
	Decimal_t1099  ___minOccurs;
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::maxOccurs
	Decimal_t1099  ___maxOccurs;
	// System.String System.Xml.Schema.XmlSchemaParticle::minstr
	String_t* ___minstr;
	// System.String System.Xml.Schema.XmlSchemaParticle::maxstr
	String_t* ___maxstr;
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::validatedMinOccurs
	Decimal_t1099  ___validatedMinOccurs;
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::validatedMaxOccurs
	Decimal_t1099  ___validatedMaxOccurs;
	// System.Int32 System.Xml.Schema.XmlSchemaParticle::recursionDepth
	int32_t ___recursionDepth;
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::minEffectiveTotalRange
	Decimal_t1099  ___minEffectiveTotalRange;
	// System.Boolean System.Xml.Schema.XmlSchemaParticle::parentIsGroupDefinition
	bool ___parentIsGroupDefinition;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::OptimizedParticle
	XmlSchemaParticle_t6760 * ___OptimizedParticle;
};
struct XmlSchemaParticle_t6760_StaticFields{
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::empty
	XmlSchemaParticle_t6760 * ___empty;
};
