#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t6751;
// System.String
struct String_t;
// System.EventArgs
#include "mscorlib_System_EventArgs.h"
// System.Xml.Schema.XmlSeverityType
#include "System_Xml_System_Xml_Schema_XmlSeverityType.h"
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t6752  : public EventArgs_t5207
{
	// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::exception
	XmlSchemaException_t6751 * ___exception;
	// System.String System.Xml.Schema.ValidationEventArgs::message
	String_t* ___message;
	// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::severity
	int32_t ___severity;
};
