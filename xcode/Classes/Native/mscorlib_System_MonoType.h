#pragma once
#include <stdint.h>
// System.MonoTypeInfo
struct MonoTypeInfo_t8259;
// System.Type
#include "mscorlib_System_Type.h"
// System.MonoType
struct MonoType_t8260  : public Type_t
{
	// System.MonoTypeInfo System.MonoType::type_info
	MonoTypeInfo_t8259 * ___type_info;
};
