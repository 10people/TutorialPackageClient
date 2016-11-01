#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t6983;
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Xml.XmlEntity
struct XmlEntity_t7001  : public XmlNode_t5526
{
	// System.String System.Xml.XmlEntity::name
	String_t* ___name;
	// System.String System.Xml.XmlEntity::NDATA
	String_t* ___NDATA;
	// System.String System.Xml.XmlEntity::publicId
	String_t* ___publicId;
	// System.String System.Xml.XmlEntity::systemId
	String_t* ___systemId;
	// System.String System.Xml.XmlEntity::baseUri
	String_t* ___baseUri;
	// System.Xml.XmlLinkedNode System.Xml.XmlEntity::lastLinkedChild
	XmlLinkedNode_t6983 * ___lastLinkedChild;
	// System.Boolean System.Xml.XmlEntity::contentAlreadySet
	bool ___contentAlreadySet;
};
