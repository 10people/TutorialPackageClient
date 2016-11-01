#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t7060;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Reflection.Binder
struct Binder_t7061;
// System.Globalization.CultureInfo
struct CultureInfo_t6595;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.ConstructorInfo::.ctor()
 void ConstructorInfo__ctor_m55081 (ConstructorInfo_t7060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.ConstructorInfo::.cctor()
 void ConstructorInfo__cctor_m55082 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.ConstructorInfo::get_MemberType()
 int32_t ConstructorInfo_get_MemberType_m55083 (ConstructorInfo_t7060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
 Object_t * ConstructorInfo_Invoke_m52719 (ConstructorInfo_t7060 * __this, ObjectU5BU5D_t142* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
