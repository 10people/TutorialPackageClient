#pragma once
#include <stdint.h>
// System.Xml.XmlTextReader
struct XmlTextReader_t6967;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t6941;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t7034;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.XmlTextReader
struct XmlTextReader_t6967  : public XmlReader_t6677
{
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t6967 * ___entity;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t6941 * ___source;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t7034 * ___entityNameStack;
};
