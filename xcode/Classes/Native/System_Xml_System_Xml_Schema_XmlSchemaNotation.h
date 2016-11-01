#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t6656;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaNotation
struct XmlSchemaNotation_t6803  : public XmlSchemaAnnotated_t6764
{
	// System.String System.Xml.Schema.XmlSchemaNotation::name
	String_t* ___name;
	// System.String System.Xml.Schema.XmlSchemaNotation::pub
	String_t* ___pub;
	// System.String System.Xml.Schema.XmlSchemaNotation::system
	String_t* ___system;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaNotation::qualifiedName
	XmlQualifiedName_t6656 * ___qualifiedName;
};
