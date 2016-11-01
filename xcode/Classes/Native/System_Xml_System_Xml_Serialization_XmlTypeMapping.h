#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t6835;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.Serialization.XmlMapping
#include "System_Xml_System_Xml_Serialization_XmlMapping.h"
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t6835  : public XmlMapping_t6867
{
	// System.String System.Xml.Serialization.XmlTypeMapping::xmlType
	String_t* ___xmlType;
	// System.String System.Xml.Serialization.XmlTypeMapping::xmlTypeNamespace
	String_t* ___xmlTypeNamespace;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapping::type
	TypeData_t6841 * ___type;
	// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapping::baseMap
	XmlTypeMapping_t6835 * ___baseMap;
	// System.Boolean System.Xml.Serialization.XmlTypeMapping::multiReferenceType
	bool ___multiReferenceType;
	// System.Boolean System.Xml.Serialization.XmlTypeMapping::includeInSchema
	bool ___includeInSchema;
	// System.Boolean System.Xml.Serialization.XmlTypeMapping::isNullable
	bool ___isNullable;
	// System.Collections.ArrayList System.Xml.Serialization.XmlTypeMapping::_derivedTypes
	ArrayList_t5157 * ____derivedTypes;
};
