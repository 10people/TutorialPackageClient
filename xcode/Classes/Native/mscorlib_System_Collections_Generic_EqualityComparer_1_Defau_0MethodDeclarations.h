#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
struct DefaultComparer_t8629;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::.ctor()
 void DefaultComparer__ctor_m58129_gshared (DefaultComparer_t8629 * __this, MethodInfo* method);
#define DefaultComparer__ctor_m58129(__this, method) (void)DefaultComparer__ctor_m58129_gshared((DefaultComparer_t8629 *)__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::GetHashCode(T)
 int32_t DefaultComparer_GetHashCode_m58130_gshared (DefaultComparer_t8629 * __this, Object_t * ___obj, MethodInfo* method);
#define DefaultComparer_GetHashCode_m58130(__this, ___obj, method) (int32_t)DefaultComparer_GetHashCode_m58130_gshared((DefaultComparer_t8629 *)__this, (Object_t *)___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::Equals(T,T)
 bool DefaultComparer_Equals_m58131_gshared (DefaultComparer_t8629 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define DefaultComparer_Equals_m58131(__this, ___x, ___y, method) (bool)DefaultComparer_Equals_m58131_gshared((DefaultComparer_t8629 *)__this, (Object_t *)___x, (Object_t *)___y, method)
