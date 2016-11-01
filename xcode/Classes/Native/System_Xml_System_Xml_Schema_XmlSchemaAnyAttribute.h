#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t6693;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t6765  : public XmlSchemaAnnotated_t6764
{
	// System.String System.Xml.Schema.XmlSchemaAnyAttribute::nameSpace
	String_t* ___nameSpace;
	// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::processing
	int32_t ___processing;
	// Mono.Xml.Schema.XsdWildcard System.Xml.Schema.XmlSchemaAnyAttribute::wildcard
	XsdWildcard_t6693 * ___wildcard;
};
