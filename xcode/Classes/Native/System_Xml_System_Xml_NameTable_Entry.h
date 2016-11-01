#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Xml.NameTable/Entry
struct Entry_t6973;
// System.Object
#include "mscorlib_System_Object.h"
// System.Xml.NameTable/Entry
struct Entry_t6973  : public Object_t
{
	// System.String System.Xml.NameTable/Entry::str
	String_t* ___str;
	// System.Int32 System.Xml.NameTable/Entry::hash
	int32_t ___hash;
	// System.Int32 System.Xml.NameTable/Entry::len
	int32_t ___len;
	// System.Xml.NameTable/Entry System.Xml.NameTable/Entry::next
	Entry_t6973 * ___next;
};
