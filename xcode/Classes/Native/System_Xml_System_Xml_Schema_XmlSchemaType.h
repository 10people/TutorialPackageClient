#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t6687;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t6689;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaDerivationMethod
#include "System_Xml_System_Xml_Schema_XmlSchemaDerivationMethod.h"
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t6687  : public XmlSchemaAnnotated_t6764
{
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::final
	int32_t ___final;
	// System.Boolean System.Xml.Schema.XmlSchemaType::isMixed
	bool ___isMixed;
	// System.String System.Xml.Schema.XmlSchemaType::name
	String_t* ___name;
	// System.Boolean System.Xml.Schema.XmlSchemaType::recursed
	bool ___recursed;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::BaseSchemaTypeName
	XmlQualifiedName_t6656 * ___BaseSchemaTypeName;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::BaseXmlSchemaTypeInternal
	XmlSchemaType_t6687 * ___BaseXmlSchemaTypeInternal;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::DatatypeInternal
	XmlSchemaDatatype_t6689 * ___DatatypeInternal;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::resolvedDerivedBy
	int32_t ___resolvedDerivedBy;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::finalResolved
	int32_t ___finalResolved;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaType::QNameInternal
	XmlQualifiedName_t6656 * ___QNameInternal;
};
struct XmlSchemaType_t6687_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaType::<>f__switch$map2E
	Dictionary_2_t944 * ___U3CU3Ef__switch$map2E;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaType::<>f__switch$map2F
	Dictionary_2_t944 * ___U3CU3Ef__switch$map2F;
};
