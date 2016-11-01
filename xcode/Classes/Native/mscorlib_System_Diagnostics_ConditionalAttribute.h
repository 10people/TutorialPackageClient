#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Diagnostics.ConditionalAttribute
struct ConditionalAttribute_t7643  : public Attribute_t6396
{
	// System.String System.Diagnostics.ConditionalAttribute::myCondition
	String_t* ___myCondition;
};
