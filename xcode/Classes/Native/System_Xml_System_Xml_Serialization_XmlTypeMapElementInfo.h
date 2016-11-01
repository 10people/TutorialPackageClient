#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Serialization.XmlTypeMapMember
struct XmlTypeMapMember_t6875;
// System.Object
struct Object_t;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t6835;
// System.Xml.Serialization.TypeData
struct TypeData_t6841;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Serialization.XmlTypeMapElementInfo
struct XmlTypeMapElementInfo_t6894  : public Object_t
{
	// System.String System.Xml.Serialization.XmlTypeMapElementInfo::_elementName
	String_t* ____elementName;
	// System.String System.Xml.Serialization.XmlTypeMapElementInfo::_namespace
	String_t* ____namespace;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlTypeMapElementInfo::_form
	int32_t ____form;
	// System.Xml.Serialization.XmlTypeMapMember System.Xml.Serialization.XmlTypeMapElementInfo::_member
	XmlTypeMapMember_t6875 * ____member;
	// System.Object System.Xml.Serialization.XmlTypeMapElementInfo::_choiceValue
	Object_t * ____choiceValue;
	// System.Boolean System.Xml.Serialization.XmlTypeMapElementInfo::_isNullable
	bool ____isNullable;
	// System.Int32 System.Xml.Serialization.XmlTypeMapElementInfo::_nestingLevel
	int32_t ____nestingLevel;
	// System.Xml.Serialization.XmlTypeMapping System.Xml.Serialization.XmlTypeMapElementInfo::_mappedType
	XmlTypeMapping_t6835 * ____mappedType;
	// System.Xml.Serialization.TypeData System.Xml.Serialization.XmlTypeMapElementInfo::_type
	TypeData_t6841 * ____type;
	// System.Boolean System.Xml.Serialization.XmlTypeMapElementInfo::_wrappedElement
	bool ____wrappedElement;
};
