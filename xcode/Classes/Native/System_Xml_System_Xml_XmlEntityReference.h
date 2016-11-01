#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t6983;
// System.Xml.XmlLinkedNode
#include "System_Xml_System_Xml_XmlLinkedNode.h"
// System.Xml.XmlEntityReference
struct XmlEntityReference_t6997  : public XmlLinkedNode_t6983
{
	// System.String System.Xml.XmlEntityReference::entityName
	String_t* ___entityName;
	// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::lastLinkedChild
	XmlLinkedNode_t6983 * ___lastLinkedChild;
};
