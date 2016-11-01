#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Xml.Serialization.XmlAnyElementAttribute
struct XmlAnyElementAttribute_t6846  : public Attribute_t6396
{
	// System.String System.Xml.Serialization.XmlAnyElementAttribute::elementName
	String_t* ___elementName;
	// System.String System.Xml.Serialization.XmlAnyElementAttribute::ns
	String_t* ___ns;
	// System.Int32 System.Xml.Serialization.XmlAnyElementAttribute::order
	int32_t ___order;
};
