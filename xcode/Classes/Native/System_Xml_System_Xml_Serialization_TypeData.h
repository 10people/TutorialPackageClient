#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t6808;
// System.String[]
struct StringU5BU5D_t333;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Serialization.SchemaTypes
#include "System_Xml_System_Xml_Serialization_SchemaTypes.h"
// System.Xml.Serialization.TypeData
struct TypeData_t6841  : public Object_t
{
	// System.Type System.Xml.Serialization.TypeData::type
	Type_t * ___type;
	// System.String System.Xml.Serialization.TypeData::elementName
	String_t* ___elementName;
	// System.Xml.Serialization.SchemaTypes System.Xml.Serialization.TypeData::sType
	int32_t ___sType;
	// System.Type System.Xml.Serialization.TypeData::listItemType
	Type_t * ___listItemType;
	// System.String System.Xml.Serialization.TypeData::typeName
	String_t* ___typeName;
	// System.String System.Xml.Serialization.TypeData::fullTypeName
	String_t* ___fullTypeName;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::listItemTypeData
	TypeData_t6841 * ___listItemTypeData;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.TypeData::mappedType
	TypeData_t6841 * ___mappedType;
	// System.Xml.Schema.XmlSchemaPatternFacet System.Xml.Serialization.TypeData::facet
	XmlSchemaPatternFacet_t6808 * ___facet;
	// System.Boolean System.Xml.Serialization.TypeData::hasPublicConstructor
	bool ___hasPublicConstructor;
	// System.Boolean System.Xml.Serialization.TypeData::nullableOverride
	bool ___nullableOverride;
};
struct TypeData_t6841_StaticFields{
	// System.String[] System.Xml.Serialization.TypeData::keywords
	StringU5BU5D_t333* ___keywords;
};
