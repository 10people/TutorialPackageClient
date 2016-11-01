#pragma once
#include <stdint.h>
// System.Xml.XmlReader
struct XmlReader_t6677;
// System.Xml.XmlTextReader
struct XmlTextReader_t6967;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t6769;
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t6970;
// Mono.Xml.IHasXmlSchemaInfo
struct IHasXmlSchemaInfo_t6679;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t6682;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.ValidationType
#include "System_Xml_System_Xml_ValidationType.h"
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t6968  : public XmlReader_t6677
{
	// System.Xml.EntityHandling System.Xml.XmlValidatingReader::entityHandling
	int32_t ___entityHandling;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::sourceReader
	XmlReader_t6677 * ___sourceReader;
	// System.Xml.XmlTextReader System.Xml.XmlValidatingReader::xmlTextReader
	XmlTextReader_t6967 * ___xmlTextReader;
	// System.Xml.XmlReader System.Xml.XmlValidatingReader::validatingReader
	XmlReader_t6677 * ___validatingReader;
	// System.Xml.XmlResolver System.Xml.XmlValidatingReader::resolver
	XmlResolver_t6678 * ___resolver;
	// System.Boolean System.Xml.XmlValidatingReader::resolverSpecified
	bool ___resolverSpecified;
	// System.Xml.ValidationType System.Xml.XmlValidatingReader::validationType
	int32_t ___validationType;
	// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::schemas
	XmlSchemaCollection_t6769 * ___schemas;
	// Mono.Xml.DTDValidatingReader System.Xml.XmlValidatingReader::dtdReader
	DTDValidatingReader_t6970 * ___dtdReader;
	// Mono.Xml.IHasXmlSchemaInfo System.Xml.XmlValidatingReader::schemaInfo
	Object_t * ___schemaInfo;
	// System.Text.StringBuilder System.Xml.XmlValidatingReader::storedCharacters
	StringBuilder_t1097 * ___storedCharacters;
	// System.Xml.Schema.ValidationEventHandler System.Xml.XmlValidatingReader::ValidationEventHandler
	ValidationEventHandler_t6682 * ___ValidationEventHandler;
};
