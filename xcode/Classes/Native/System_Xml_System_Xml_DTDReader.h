#pragma once
#include <stdint.h>
// System.Xml.XmlParserInput
struct XmlParserInput_t6963;
// System.Collections.Stack
struct Stack_t6658;
// System.Char[]
struct CharU5BU5D_t1016;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t6924;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.DTDReader
struct DTDReader_t6964  : public Object_t
{
	// System.Xml.XmlParserInput System.Xml.DTDReader::currentInput
	XmlParserInput_t6963 * ___currentInput;
	// System.Collections.Stack System.Xml.DTDReader::parserInputStack
	Stack_t6658 * ___parserInputStack;
	// System.Char[] System.Xml.DTDReader::nameBuffer
	CharU5BU5D_t1016* ___nameBuffer;
	// System.Int32 System.Xml.DTDReader::nameLength
	int32_t ___nameLength;
	// System.Int32 System.Xml.DTDReader::nameCapacity
	int32_t ___nameCapacity;
	// System.Text.StringBuilder System.Xml.DTDReader::valueBuffer
	StringBuilder_t1097 * ___valueBuffer;
	// System.Int32 System.Xml.DTDReader::currentLinkedNodeLineNumber
	int32_t ___currentLinkedNodeLineNumber;
	// System.Int32 System.Xml.DTDReader::currentLinkedNodeLinePosition
	int32_t ___currentLinkedNodeLinePosition;
	// System.Int32 System.Xml.DTDReader::dtdIncludeSect
	int32_t ___dtdIncludeSect;
	// System.Boolean System.Xml.DTDReader::normalization
	bool ___normalization;
	// System.Boolean System.Xml.DTDReader::processingInternalSubset
	bool ___processingInternalSubset;
	// System.String System.Xml.DTDReader::cachedPublicId
	String_t* ___cachedPublicId;
	// System.String System.Xml.DTDReader::cachedSystemId
	String_t* ___cachedSystemId;
	// Mono.Xml.DTDObjectModel System.Xml.DTDReader::DTD
	DTDObjectModel_t6924 * ___DTD;
};
