#pragma once
#include <stdint.h>
// System.Text.Encoding
struct Encoding_t1037;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
// System.Xml.NewLineHandling
#include "System_Xml_System_Xml_NewLineHandling.h"
// System.Xml.XmlOutputMethod
#include "System_Xml_System_Xml_XmlOutputMethod.h"
// System.Xml.NamespaceHandling
#include "System_Xml_System_Xml_NamespaceHandling.h"
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t5908  : public Object_t
{
	// System.Boolean System.Xml.XmlWriterSettings::checkCharacters
	bool ___checkCharacters;
	// System.Boolean System.Xml.XmlWriterSettings::closeOutput
	bool ___closeOutput;
	// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::conformance
	int32_t ___conformance;
	// System.Text.Encoding System.Xml.XmlWriterSettings::encoding
	Encoding_t1037 * ___encoding;
	// System.Boolean System.Xml.XmlWriterSettings::indent
	bool ___indent;
	// System.String System.Xml.XmlWriterSettings::indentChars
	String_t* ___indentChars;
	// System.String System.Xml.XmlWriterSettings::newLineChars
	String_t* ___newLineChars;
	// System.Boolean System.Xml.XmlWriterSettings::newLineOnAttributes
	bool ___newLineOnAttributes;
	// System.Xml.NewLineHandling System.Xml.XmlWriterSettings::newLineHandling
	int32_t ___newLineHandling;
	// System.Boolean System.Xml.XmlWriterSettings::omitXmlDeclaration
	bool ___omitXmlDeclaration;
	// System.Xml.XmlOutputMethod System.Xml.XmlWriterSettings::outputMethod
	int32_t ___outputMethod;
	// System.Xml.NamespaceHandling System.Xml.XmlWriterSettings::<NamespaceHandling>k__BackingField
	int32_t ___U3CNamespaceHandlingU3Ek__BackingField;
};
