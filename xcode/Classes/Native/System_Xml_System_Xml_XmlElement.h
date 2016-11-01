#pragma once
#include <stdint.h>
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t6984;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t6982;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t6983;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t6793;
// System.Xml.XmlLinkedNode
#include "System_Xml_System_Xml_XmlLinkedNode.h"
// System.Xml.XmlElement
struct XmlElement_t5531  : public XmlLinkedNode_t6983
{
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_t6984 * ___attributes;
	// System.Xml.XmlNameEntry System.Xml.XmlElement::name
	XmlNameEntry_t6982 * ___name;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastLinkedChild
	XmlLinkedNode_t6983 * ___lastLinkedChild;
	// System.Boolean System.Xml.XmlElement::isNotEmpty
	bool ___isNotEmpty;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlElement::schemaInfo
	Object_t * ___schemaInfo;
};
