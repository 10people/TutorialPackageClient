#pragma once
#include <stdint.h>
// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t6966;
// System.Xml.XmlTextReader
struct XmlTextReader_t6967;
// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t6968;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.String
struct String_t;
// Mono.Xml.DTDValidatingReader/AttributeSlot[]
struct AttributeSlotU5BU5D_t6969;
// System.Collections.Stack
struct Stack_t6658;
// Mono.Xml.DTDAutomata
struct DTDAutomata_t6927;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6685;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// Mono.Xml.DTDValidatingReader
struct DTDValidatingReader_t6970  : public XmlReader_t6677
{
	// Mono.Xml.EntityResolvingXmlReader Mono.Xml.DTDValidatingReader::reader
	EntityResolvingXmlReader_t6966 * ___reader;
	// System.Xml.XmlTextReader Mono.Xml.DTDValidatingReader::sourceTextReader
	XmlTextReader_t6967 * ___sourceTextReader;
	// System.Xml.XmlValidatingReader Mono.Xml.DTDValidatingReader::validatingReader
	XmlValidatingReader_t6968 * ___validatingReader;
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDValidatingReader::dtd
	DTDObjectModel_t6924 * ___dtd;
	// System.Xml.XmlResolver Mono.Xml.DTDValidatingReader::resolver
	XmlResolver_t6678 * ___resolver;
	// System.String Mono.Xml.DTDValidatingReader::currentElement
	String_t* ___currentElement;
	// Mono.Xml.DTDValidatingReader/AttributeSlot[] Mono.Xml.DTDValidatingReader::attributes
	AttributeSlotU5BU5D_t6969* ___attributes;
	// System.Int32 Mono.Xml.DTDValidatingReader::attributeCount
	int32_t ___attributeCount;
	// System.Int32 Mono.Xml.DTDValidatingReader::currentAttribute
	int32_t ___currentAttribute;
	// System.Boolean Mono.Xml.DTDValidatingReader::consumedAttribute
	bool ___consumedAttribute;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::elementStack
	Stack_t6658 * ___elementStack;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::automataStack
	Stack_t6658 * ___automataStack;
	// System.Boolean Mono.Xml.DTDValidatingReader::popScope
	bool ___popScope;
	// System.Boolean Mono.Xml.DTDValidatingReader::isStandalone
	bool ___isStandalone;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::currentAutomata
	DTDAutomata_t6927 * ___currentAutomata;
	// Mono.Xml.DTDAutomata Mono.Xml.DTDValidatingReader::previousAutomata
	DTDAutomata_t6927 * ___previousAutomata;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::idList
	ArrayList_t5157 * ___idList;
	// System.Collections.ArrayList Mono.Xml.DTDValidatingReader::missingIDReferences
	ArrayList_t5157 * ___missingIDReferences;
	// System.Xml.XmlNamespaceManager Mono.Xml.DTDValidatingReader::nsmgr
	XmlNamespaceManager_t6685 * ___nsmgr;
	// System.String Mono.Xml.DTDValidatingReader::currentTextValue
	String_t* ___currentTextValue;
	// System.String Mono.Xml.DTDValidatingReader::constructingTextValue
	String_t* ___constructingTextValue;
	// System.Boolean Mono.Xml.DTDValidatingReader::shouldResetCurrentTextValue
	bool ___shouldResetCurrentTextValue;
	// System.Boolean Mono.Xml.DTDValidatingReader::isSignificantWhitespace
	bool ___isSignificantWhitespace;
	// System.Boolean Mono.Xml.DTDValidatingReader::isWhitespace
	bool ___isWhitespace;
	// System.Boolean Mono.Xml.DTDValidatingReader::isText
	bool ___isText;
	// System.Collections.Stack Mono.Xml.DTDValidatingReader::attributeValueEntityStack
	Stack_t6658 * ___attributeValueEntityStack;
	// System.Text.StringBuilder Mono.Xml.DTDValidatingReader::valueBuilder
	StringBuilder_t1097 * ___valueBuilder;
	// System.Char[] Mono.Xml.DTDValidatingReader::whitespaceChars
	CharU5BU5D_t1016* ___whitespaceChars;
};
struct DTDValidatingReader_t6970_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml.DTDValidatingReader::<>f__switch$map43
	Dictionary_2_t944 * ___U3CU3Ef__switch$map43;
};
