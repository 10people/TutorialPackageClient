#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Serialization.XmlRootAttribute
struct XmlRootAttribute_t6839  : public Attribute_t6396
{
	// System.String System.Xml.Serialization.XmlRootAttribute::dataType
	String_t* ___dataType;
	// System.String System.Xml.Serialization.XmlRootAttribute::elementName
	String_t* ___elementName;
	// System.Boolean System.Xml.Serialization.XmlRootAttribute::isNullable
	bool ___isNullable;
	// System.String System.Xml.Serialization.XmlRootAttribute::ns
	String_t* ___ns;
};
