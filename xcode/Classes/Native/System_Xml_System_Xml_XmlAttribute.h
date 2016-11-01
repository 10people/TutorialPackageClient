#pragma once
#include <stdint.h>
// System.Xml.XmlNameEntry
struct XmlNameEntry_t6982;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t6983;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t6793;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlAttribute
struct XmlAttribute_t6763  : public XmlNode_t5526
{
	// System.Xml.XmlNameEntry System.Xml.XmlAttribute::name
	XmlNameEntry_t6982 * ___name;
	// System.Boolean System.Xml.XmlAttribute::isDefault
	bool ___isDefault;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastLinkedChild
	XmlLinkedNode_t6983 * ___lastLinkedChild;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::schemaInfo
	Object_t * ___schemaInfo;
};
