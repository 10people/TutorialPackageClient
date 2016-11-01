#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.Reflection.MonoField
struct MonoField_t7969  : public FieldInfo_t5491
{
	// System.IntPtr System.Reflection.MonoField::klass
	IntPtr_t24 ___klass;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t7747  ___fhandle;
	// System.String System.Reflection.MonoField::name
	String_t* ___name;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs;
};
