#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MethodBase
struct MethodBase_t5498;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t5487;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Reflection.Binder
struct Binder_t7061;
// System.Globalization.CultureInfo
struct CultureInfo_t6595;
// System.Type[]
struct TypeU5BU5D_t1042;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.MethodBase::.ctor()
 void MethodBase__ctor_m55107 (MethodBase_t5498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
 MethodBase_t5498 * MethodBase_GetMethodFromHandleNoGenericCheck_m55108 (Object_t * __this/* static, unused */, RuntimeMethodHandle_t7937  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
 MethodBase_t5498 * MethodBase_GetMethodFromIntPtr_m55109 (Object_t * __this/* static, unused */, IntPtr_t24 ___handle, IntPtr_t24 ___declaringType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
 MethodBase_t5498 * MethodBase_GetMethodFromHandle_m55110 (Object_t * __this/* static, unused */, RuntimeMethodHandle_t7937  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
 MethodBase_t5498 * MethodBase_GetMethodFromHandleInternalType_m55111 (Object_t * __this/* static, unused */, IntPtr_t24 ___method_handle, IntPtr_t24 ___type_handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters()
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
 Object_t * MethodBase_Invoke_m38819 (MethodBase_t5498 * __this, Object_t * ___obj, ObjectU5BU5D_t142* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle()
// System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes()
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
 int32_t MethodBase_get_CallingConvention_m55112 (MethodBase_t5498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
 bool MethodBase_get_IsPublic_m55113 (MethodBase_t5498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
 bool MethodBase_get_IsStatic_m52692 (MethodBase_t5498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
 bool MethodBase_get_IsVirtual_m55114 (MethodBase_t5498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
 TypeU5BU5D_t1042* MethodBase_GetGenericArguments_m55115 (MethodBase_t5498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
 bool MethodBase_get_ContainsGenericParameters_m55116 (MethodBase_t5498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
 bool MethodBase_get_IsGenericMethodDefinition_m55117 (MethodBase_t5498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
 bool MethodBase_get_IsGenericMethod_m55118 (MethodBase_t5498 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
