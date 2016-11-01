#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.TypeInitializationException
struct TypeInitializationException_t8274  : public SystemException_t6783
{
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name;
};
