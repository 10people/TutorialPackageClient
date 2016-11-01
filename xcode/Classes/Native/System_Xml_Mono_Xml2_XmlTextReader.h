#pragma once
#include <stdint.h>
// Mono.Xml2.XmlTextReader/XmlTokenInfo
struct XmlTokenInfo_t7026;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo
struct XmlAttributeTokenInfo_t7027;
// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[]
struct XmlAttributeTokenInfoU5BU5D_t7031;
// Mono.Xml2.XmlTextReader/XmlTokenInfo[]
struct XmlTokenInfoU5BU5D_t7032;
// System.Xml.XmlParserContext
struct XmlParserContext_t6684;
// System.Xml.XmlNameTable
struct XmlNameTable_t6650;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t6685;
// Mono.Xml2.XmlTextReader/TagName[]
struct TagNameU5BU5D_t7033;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.IO.TextReader
struct TextReader_t1019;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Xml.XmlReaderBinarySupport/CharGetter
struct CharGetter_t7024;
// System.Xml.XmlResolver
struct XmlResolver_t6678;
// System.Xml.NameTable
struct NameTable_t6975;
// Mono.Xml2.XmlTextReader/DtdInputStateStack
struct DtdInputStateStack_t7030;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t6941  : public XmlReader_t6677
{
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::cursorToken
	XmlTokenInfo_t7026 * ___cursorToken;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentToken
	XmlTokenInfo_t7026 * ___currentToken;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo Mono.Xml2.XmlTextReader::currentAttributeToken
	XmlAttributeTokenInfo_t7027 * ___currentAttributeToken;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo Mono.Xml2.XmlTextReader::currentAttributeValueToken
	XmlTokenInfo_t7026 * ___currentAttributeValueToken;
	// Mono.Xml2.XmlTextReader/XmlAttributeTokenInfo[] Mono.Xml2.XmlTextReader::attributeTokens
	XmlAttributeTokenInfoU5BU5D_t7031* ___attributeTokens;
	// Mono.Xml2.XmlTextReader/XmlTokenInfo[] Mono.Xml2.XmlTextReader::attributeValueTokens
	XmlTokenInfoU5BU5D_t7032* ___attributeValueTokens;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttribute
	int32_t ___currentAttribute;
	// System.Int32 Mono.Xml2.XmlTextReader::currentAttributeValue
	int32_t ___currentAttributeValue;
	// System.Int32 Mono.Xml2.XmlTextReader::attributeCount
	int32_t ___attributeCount;
	// System.Xml.XmlParserContext Mono.Xml2.XmlTextReader::parserContext
	XmlParserContext_t6684 * ___parserContext;
	// System.Xml.XmlNameTable Mono.Xml2.XmlTextReader::nameTable
	XmlNameTable_t6650 * ___nameTable;
	// System.Xml.XmlNamespaceManager Mono.Xml2.XmlTextReader::nsmgr
	XmlNamespaceManager_t6685 * ___nsmgr;
	// System.Xml.ReadState Mono.Xml2.XmlTextReader::readState
	int32_t ___readState;
	// System.Boolean Mono.Xml2.XmlTextReader::disallowReset
	bool ___disallowReset;
	// System.Int32 Mono.Xml2.XmlTextReader::depth
	int32_t ___depth;
	// System.Int32 Mono.Xml2.XmlTextReader::elementDepth
	int32_t ___elementDepth;
	// System.Boolean Mono.Xml2.XmlTextReader::depthUp
	bool ___depthUp;
	// System.Boolean Mono.Xml2.XmlTextReader::popScope
	bool ___popScope;
	// Mono.Xml2.XmlTextReader/TagName[] Mono.Xml2.XmlTextReader::elementNames
	TagNameU5BU5D_t7033* ___elementNames;
	// System.Int32 Mono.Xml2.XmlTextReader::elementNameStackPos
	int32_t ___elementNameStackPos;
	// System.Boolean Mono.Xml2.XmlTextReader::allowMultipleRoot
	bool ___allowMultipleRoot;
	// System.Boolean Mono.Xml2.XmlTextReader::isStandalone
	bool ___isStandalone;
	// System.Boolean Mono.Xml2.XmlTextReader::returnEntityReference
	bool ___returnEntityReference;
	// System.String Mono.Xml2.XmlTextReader::entityReferenceName
	String_t* ___entityReferenceName;
	// System.Text.StringBuilder Mono.Xml2.XmlTextReader::valueBuffer
	StringBuilder_t1097 * ___valueBuffer;
	// System.IO.TextReader Mono.Xml2.XmlTextReader::reader
	TextReader_t1019 * ___reader;
	// System.Char[] Mono.Xml2.XmlTextReader::peekChars
	CharU5BU5D_t1016* ___peekChars;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsIndex
	int32_t ___peekCharsIndex;
	// System.Int32 Mono.Xml2.XmlTextReader::peekCharsLength
	int32_t ___peekCharsLength;
	// System.Int32 Mono.Xml2.XmlTextReader::curNodePeekIndex
	int32_t ___curNodePeekIndex;
	// System.Boolean Mono.Xml2.XmlTextReader::preserveCurrentTag
	bool ___preserveCurrentTag;
	// System.Int32 Mono.Xml2.XmlTextReader::line
	int32_t ___line;
	// System.Int32 Mono.Xml2.XmlTextReader::column
	int32_t ___column;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLineNumber
	int32_t ___currentLinkedNodeLineNumber;
	// System.Int32 Mono.Xml2.XmlTextReader::currentLinkedNodeLinePosition
	int32_t ___currentLinkedNodeLinePosition;
	// System.Boolean Mono.Xml2.XmlTextReader::useProceedingLineInfo
	bool ___useProceedingLineInfo;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::startNodeType
	int32_t ___startNodeType;
	// System.Xml.XmlNodeType Mono.Xml2.XmlTextReader::currentState
	int32_t ___currentState;
	// System.Int32 Mono.Xml2.XmlTextReader::nestLevel
	int32_t ___nestLevel;
	// System.Boolean Mono.Xml2.XmlTextReader::readCharsInProgress
	bool ___readCharsInProgress;
	// System.Xml.XmlReaderBinarySupport/CharGetter Mono.Xml2.XmlTextReader::binaryCharGetter
	CharGetter_t7024 * ___binaryCharGetter;
	// System.Boolean Mono.Xml2.XmlTextReader::namespaces
	bool ___namespaces;
	// System.Xml.WhitespaceHandling Mono.Xml2.XmlTextReader::whitespaceHandling
	int32_t ___whitespaceHandling;
	// System.Xml.XmlResolver Mono.Xml2.XmlTextReader::resolver
	XmlResolver_t6678 * ___resolver;
	// System.Boolean Mono.Xml2.XmlTextReader::normalization
	bool ___normalization;
	// System.Boolean Mono.Xml2.XmlTextReader::checkCharacters
	bool ___checkCharacters;
	// System.Boolean Mono.Xml2.XmlTextReader::prohibitDtd
	bool ___prohibitDtd;
	// System.Boolean Mono.Xml2.XmlTextReader::closeInput
	bool ___closeInput;
	// System.Xml.EntityHandling Mono.Xml2.XmlTextReader::entityHandling
	int32_t ___entityHandling;
	// System.Xml.NameTable Mono.Xml2.XmlTextReader::whitespacePool
	NameTable_t6975 * ___whitespacePool;
	// System.Char[] Mono.Xml2.XmlTextReader::whitespaceCache
	CharU5BU5D_t1016* ___whitespaceCache;
	// Mono.Xml2.XmlTextReader/DtdInputStateStack Mono.Xml2.XmlTextReader::stateStack
	DtdInputStateStack_t7030 * ___stateStack;
};
struct XmlTextReader_t6941_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map51
	Dictionary_2_t944 * ___U3CU3Ef__switch$map51;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Xml2.XmlTextReader::<>f__switch$map52
	Dictionary_2_t944 * ___U3CU3Ef__switch$map52;
};
