#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t6941;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t7026  : public Object_t
{
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::valueCache
	String_t* ___valueCache;
	// Mono.Xml2.XmlTextReader Mono.Xml2.XmlTextReader/XmlTokenInfo::Reader
	XmlTextReader_t6941 * ___Reader;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::Name
	String_t* ___Name;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::LocalName
	String_t* ___LocalName;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::Prefix
	String_t* ___Prefix;
	// System.String Mono.Xml2.XmlTextReader/XmlTokenInfo::NamespaceURI
	String_t* ___NamespaceURI;
	// System.Boolean Mono.Xml2.XmlTextReader/XmlTokenInfo::IsEmptyElement
	bool ___IsEmptyElement;
	// System.Char Mono.Xml2.XmlTextReader/XmlTokenInfo::QuoteChar
	uint16_t ___QuoteChar;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::LineNumber
	int32_t ___LineNumber;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::LinePosition
	int32_t ___LinePosition;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::ValueBufferStart
	int32_t ___ValueBufferStart;
	// System.Int32 Mono.Xml2.XmlTextReader/XmlTokenInfo::ValueBufferEnd
	int32_t ___ValueBufferEnd;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader/XmlTokenInfo::NodeType
	int32_t ___NodeType;
};
