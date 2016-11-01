#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t7933;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t7939;
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t7940  : public FieldInfo_t5491
{
	// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::attrs
	int32_t ___attrs;
	// System.Type System.Reflection.Emit.FieldBuilder::type
	Type_t * ___type;
	// System.String System.Reflection.Emit.FieldBuilder::name
	String_t* ___name;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.FieldBuilder::typeb
	TypeBuilder_t7933 * ___typeb;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::marshal_info
	UnmanagedMarshal_t7939 * ___marshal_info;
};
