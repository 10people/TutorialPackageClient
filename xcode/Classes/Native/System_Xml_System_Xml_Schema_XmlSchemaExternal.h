#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaObject
#include "System_Xml_System_Xml_Schema_XmlSchemaObject.h"
// System.Xml.Schema.XmlSchemaExternal
struct XmlSchemaExternal_t6756  : public XmlSchemaObject_t6662
{
	// System.String System.Xml.Schema.XmlSchemaExternal::id
	String_t* ___id;
	// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaExternal::schema
	XmlSchema_t6691 * ___schema;
	// System.String System.Xml.Schema.XmlSchemaExternal::location
	String_t* ___location;
};
