#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t6755;
// System.Xml.Schema.XmlSchemaGroupBase
#include "System_Xml_System_Xml_Schema_XmlSchemaGroupBase.h"
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t6669  : public XmlSchemaGroupBase_t6759
{
	// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaAll::schema
	XmlSchema_t6691 * ___schema;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAll::items
	XmlSchemaObjectCollection_t6755 * ___items;
	// System.Boolean System.Xml.Schema.XmlSchemaAll::emptiable
	bool ___emptiable;
};
