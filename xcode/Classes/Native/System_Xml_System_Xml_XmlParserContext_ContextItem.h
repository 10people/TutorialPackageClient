#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.XmlParserContext/ContextItem
struct ContextItem_t7019  : public Object_t
{
	// System.String System.Xml.XmlParserContext/ContextItem::BaseURI
	String_t* ___BaseURI;
	// System.String System.Xml.XmlParserContext/ContextItem::XmlLang
	String_t* ___XmlLang;
	// System.Xml.XmlSpace System.Xml.XmlParserContext/ContextItem::XmlSpace
	int32_t ___XmlSpace;
};
