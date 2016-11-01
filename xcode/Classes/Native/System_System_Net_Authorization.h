#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t7153;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.Authorization
struct Authorization_t7152  : public Object_t
{
	// System.String System.Net.Authorization::token
	String_t* ___token;
	// System.Boolean System.Net.Authorization::complete
	bool ___complete;
	// System.String System.Net.Authorization::connectionGroupId
	String_t* ___connectionGroupId;
	// System.Net.IAuthenticationModule System.Net.Authorization::module
	Object_t * ___module;
};
