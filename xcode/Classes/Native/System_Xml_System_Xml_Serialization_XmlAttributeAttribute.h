#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Serialization.XmlAttributeAttribute
struct XmlAttributeAttribute_t6851  : public Attribute_t6396
{
	// System.String System.Xml.Serialization.XmlAttributeAttribute::attributeName
	String_t* ___attributeName;
	// System.String System.Xml.Serialization.XmlAttributeAttribute::dataType
	String_t* ___dataType;
	// System.Type System.Xml.Serialization.XmlAttributeAttribute::type
	Type_t * ___type;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlAttributeAttribute::form
	int32_t ___form;
	// System.String System.Xml.Serialization.XmlAttributeAttribute::ns
	String_t* ___ns;
};
