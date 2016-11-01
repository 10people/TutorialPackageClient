#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t333;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.DigestHeaderParser
struct DigestHeaderParser_t7168  : public Object_t
{
	// System.String System.Net.DigestHeaderParser::header
	String_t* ___header;
	// System.Int32 System.Net.DigestHeaderParser::length
	int32_t ___length;
	// System.Int32 System.Net.DigestHeaderParser::pos
	int32_t ___pos;
	// System.String[] System.Net.DigestHeaderParser::values
	StringU5BU5D_t333* ___values;
};
struct DigestHeaderParser_t7168_StaticFields{
	// System.String[] System.Net.DigestHeaderParser::keywords
	StringU5BU5D_t333* ___keywords;
};
