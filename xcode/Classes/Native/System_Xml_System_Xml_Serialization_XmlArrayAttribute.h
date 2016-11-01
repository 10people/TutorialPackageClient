#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Schema.XmlSchemaForm
#include "System_Xml_System_Xml_Schema_XmlSchemaForm.h"
// System.Xml.Serialization.XmlArrayAttribute
struct XmlArrayAttribute_t6848  : public Attribute_t6396
{
	// System.String System.Xml.Serialization.XmlArrayAttribute::elementName
	String_t* ___elementName;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Serialization.XmlArrayAttribute::form
	int32_t ___form;
	// System.Boolean System.Xml.Serialization.XmlArrayAttribute::isNullable
	bool ___isNullable;
	// System.String System.Xml.Serialization.XmlArrayAttribute::ns
	String_t* ___ns;
};
