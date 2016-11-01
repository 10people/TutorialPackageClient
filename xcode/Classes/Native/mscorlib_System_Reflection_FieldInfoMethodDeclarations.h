#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.FieldInfo
struct FieldInfo_t5491;
// System.Type
struct Type_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t7939;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t7061;
// System.Globalization.CultureInfo
struct CultureInfo_t6595;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.FieldInfo::.ctor()
 void FieldInfo__ctor_m55091 (FieldInfo_t5491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes()
// System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle()
// System.Type System.Reflection.FieldInfo::get_FieldType()
// System.Object System.Reflection.FieldInfo::GetValue(System.Object)
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
 int32_t FieldInfo_get_MemberType_m55092 (FieldInfo_t5491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
 bool FieldInfo_get_IsLiteral_m55093 (FieldInfo_t5491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
 bool FieldInfo_get_IsStatic_m55094 (FieldInfo_t5491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
 bool FieldInfo_get_IsNotSerialized_m55095 (FieldInfo_t5491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
 void FieldInfo_SetValue_m38830 (FieldInfo_t5491 * __this, Object_t * ___obj, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
 FieldInfo_t5491 * FieldInfo_internal_from_handle_type_m55096 (Object_t * __this/* static, unused */, IntPtr_t24 ___field_handle, IntPtr_t24 ___type_handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
 FieldInfo_t5491 * FieldInfo_GetFieldFromHandle_m55097 (Object_t * __this/* static, unused */, RuntimeFieldHandle_t7747  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
 int32_t FieldInfo_GetFieldOffset_m55098 (FieldInfo_t5491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
 UnmanagedMarshal_t7939 * FieldInfo_GetUnmanagedMarshal_m55099 (FieldInfo_t5491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
 UnmanagedMarshal_t7939 * FieldInfo_get_UMarshal_m55100 (FieldInfo_t5491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
 ObjectU5BU5D_t142* FieldInfo_GetPseudoCustomAttributes_m55101 (FieldInfo_t5491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
