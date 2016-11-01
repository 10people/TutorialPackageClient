#pragma once
#include <stdint.h>
// System.Collections.Stack
struct Stack_t6658;
// System.Xml.XmlParserInput/XmlParserInputSource
struct XmlParserInputSource_t7020;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.XmlParserInput
struct XmlParserInput_t6963  : public Object_t
{
	// System.Collections.Stack System.Xml.XmlParserInput::sourceStack
	Stack_t6658 * ___sourceStack;
	// System.Xml.XmlParserInput/XmlParserInputSource System.Xml.XmlParserInput::source
	XmlParserInputSource_t7020 * ___source;
	// System.Boolean System.Xml.XmlParserInput::has_peek
	bool ___has_peek;
	// System.Int32 System.Xml.XmlParserInput::peek_char
	int32_t ___peek_char;
	// System.Boolean System.Xml.XmlParserInput::allowTextDecl
	bool ___allowTextDecl;
};
