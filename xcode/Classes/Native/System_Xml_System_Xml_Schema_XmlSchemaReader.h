#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.Schema.XmlSchemaReader
struct XmlSchemaReader_t6758  : public XmlReader_t6677
{
	// System.Xml.XmlReader System.Xml.Schema.XmlSchemaReader::reader
	XmlReader_t6677 * ___reader;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaReader::handler
	ValidationEventHandler_t6682 * ___handler;
	// System.Boolean System.Xml.Schema.XmlSchemaReader::hasLineInfo
	bool ___hasLineInfo;
};
