#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchema
struct XmlSchema_t6691;
// System.Xml.Schema.XmlSchemaComplexType
struct XmlSchemaComplexType_t6690;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Serialization.XmlTypeMapping
#include "System_Xml_System_Xml_Serialization_XmlTypeMapping.h"
// System.Xml.Serialization.XmlSerializableMapping
struct XmlSerializableMapping_t6917  : public XmlTypeMapping_t6835
{
	// System.Xml.Schema.XmlSchema System.Xml.Serialization.XmlSerializableMapping::_schema
	XmlSchema_t6691 * ____schema;
	// System.Xml.Schema.XmlSchemaComplexType System.Xml.Serialization.XmlSerializableMapping::_schemaType
	XmlSchemaComplexType_t6690 * ____schemaType;
	// System.Xml.XmlQualifiedName System.Xml.Serialization.XmlSerializableMapping::_schemaTypeName
	XmlQualifiedName_t6656 * ____schemaTypeName;
};
