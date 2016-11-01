#pragma once
#include <stdint.h>
// System.Xml.XmlElement
struct XmlElement_t5531;
// System.Xml.XmlDocument
struct XmlDocument_t5524;
// System.Xml.XmlNamedNodeMap
#include "System_Xml_System_Xml_XmlNamedNodeMap.h"
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t6984  : public XmlNamedNodeMap_t6985
{
	// System.Xml.XmlElement System.Xml.XmlAttributeCollection::ownerElement
	XmlElement_t5531 * ___ownerElement;
	// System.Xml.XmlDocument System.Xml.XmlAttributeCollection::ownerDocument
	XmlDocument_t5524 * ___ownerDocument;
};
