#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1037;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6685;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Collections.ArrayList
struct ArrayList_t5157;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.XmlParserContext
struct XmlParserContext_t6684  : public Object_t
{
	// System.String System.Xml.XmlParserContext::baseURI
	String_t* ___baseURI;
	// System.String System.Xml.XmlParserContext::docTypeName
	String_t* ___docTypeName;
	// System.Text.Encoding System.Xml.XmlParserContext::encoding
	Encoding_t1037 * ___encoding;
	// System.String System.Xml.XmlParserContext::internalSubset
	String_t* ___internalSubset;
	// System.Xml.XmlNamespaceManager System.Xml.XmlParserContext::namespaceManager
	XmlNamespaceManager_t6685 * ___namespaceManager;
	// System.Xml.XmlNameTable System.Xml.XmlParserContext::nameTable
	XmlNameTable_t6650 * ___nameTable;
	// System.String System.Xml.XmlParserContext::publicID
	String_t* ___publicID;
	// System.String System.Xml.XmlParserContext::systemID
	String_t* ___systemID;
	// System.String System.Xml.XmlParserContext::xmlLang
	String_t* ___xmlLang;
	// System.Xml.XmlSpace System.Xml.XmlParserContext::xmlSpace
	int32_t ___xmlSpace;
	// System.Collections.ArrayList System.Xml.XmlParserContext::contextItems
	ArrayList_t5157 * ___contextItems;
	// System.Int32 System.Xml.XmlParserContext::contextItemCount
	int32_t ___contextItemCount;
	// Mono.Xml.DTDObjectModel System.Xml.XmlParserContext::dtd
	DTDObjectModel_t6924 * ___dtd;
};
