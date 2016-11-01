#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.CharEnumerator
struct CharEnumerator_t8224  : public Object_t
{
	// System.String System.CharEnumerator::str
	String_t* ___str;
	// System.Int32 System.CharEnumerator::index
	int32_t ___index;
	// System.Int32 System.CharEnumerator::length
	int32_t ___length;
};
