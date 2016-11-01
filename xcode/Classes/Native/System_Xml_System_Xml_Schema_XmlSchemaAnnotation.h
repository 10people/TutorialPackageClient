#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.Schema.XmlSchemaObject
#include "System_Xml_System_Xml_Schema_XmlSchemaObject.h"
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t6761  : public XmlSchemaObject_t6662
{
	// System.String System.Xml.Schema.XmlSchemaAnnotation::id
	String_t* ___id;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAnnotation::items
	XmlSchemaObjectCollection_t6755 * ___items;
};
