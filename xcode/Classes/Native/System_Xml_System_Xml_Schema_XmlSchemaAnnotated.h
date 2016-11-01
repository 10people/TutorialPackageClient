#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t6761;
// System.String
struct String_t;
// System.Xml.XmlAttribute[]
struct XmlAttributeU5BU5D_t6762;
// System.Xml.Schema.XmlSchemaObject
#include "System_Xml_System_Xml_Schema_XmlSchemaObject.h"
// System.Xml.Schema.XmlSchemaAnnotated
struct XmlSchemaAnnotated_t6764  : public XmlSchemaObject_t6662
{
	// System.Xml.Schema.XmlSchemaAnnotation System.Xml.Schema.XmlSchemaAnnotated::annotation
	XmlSchemaAnnotation_t6761 * ___annotation;
	// System.String System.Xml.Schema.XmlSchemaAnnotated::id
	String_t* ___id;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchemaAnnotated::unhandledAttributes
	XmlAttributeU5BU5D_t6762* ___unhandledAttributes;
};
