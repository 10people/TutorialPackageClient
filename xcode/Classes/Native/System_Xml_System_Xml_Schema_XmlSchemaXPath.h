#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6685;
// Mono.Xml.Schema.XsdIdentityPath[]
struct XsdIdentityPathU5BU5D_t6638;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t6639;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Xml.Schema.XmlSchemaAnnotated
#include "System_Xml_System_Xml_Schema_XmlSchemaAnnotated.h"
// System.Xml.Schema.XmlSchemaXPath
struct XmlSchemaXPath_t6643  : public XmlSchemaAnnotated_t6764
{
	// System.String System.Xml.Schema.XmlSchemaXPath::xpath
	String_t* ___xpath;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.XmlSchemaXPath::nsmgr
	XmlNamespaceManager_t6685 * ___nsmgr;
	// System.Boolean System.Xml.Schema.XmlSchemaXPath::isSelector
	bool ___isSelector;
	// Mono.Xml.Schema.XsdIdentityPath[] System.Xml.Schema.XmlSchemaXPath::compiledExpression
	XsdIdentityPathU5BU5D_t6638* ___compiledExpression;
	// Mono.Xml.Schema.XsdIdentityPath System.Xml.Schema.XmlSchemaXPath::currentPath
	XsdIdentityPath_t6639 * ___currentPath;
};
struct XmlSchemaXPath_t6643_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchemaXPath::<>f__switch$map3C
	Dictionary_2_t944 * ___U3CU3Ef__switch$map3C;
};
