#pragma once
#include <stdint.h>
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t6671;
// System.String
struct String_t;
// Mono.Xml.Schema.XsdWildcard
struct XsdWildcard_t6693;
// System.Xml.Schema.XmlSchemaParticle
#include "System_Xml_System_Xml_Schema_XmlSchemaParticle.h"
// System.Xml.Schema.XmlSchemaContentProcessing
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProcessing.h"
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t6671  : public XmlSchemaParticle_t6760
{
	// System.String System.Xml.Schema.XmlSchemaAny::nameSpace
	String_t* ___nameSpace;
	// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::processing
	int32_t ___processing;
	// Mono.Xml.Schema.XsdWildcard System.Xml.Schema.XmlSchemaAny::wildcard
	XsdWildcard_t6693 * ___wildcard;
};
struct XmlSchemaAny_t6671_StaticFields{
	// System.Xml.Schema.XmlSchemaAny System.Xml.Schema.XmlSchemaAny::anyTypeContent
	XmlSchemaAny_t6671 * ___anyTypeContent;
};
