#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Games.FlyWing.FlyWingProperty>
struct Predicate_1_t21153;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Games.FlyWing.FlyWingProperty
#include "AssemblyU2DCSharp_Games_FlyWing_FlyWingProperty.h"

// System.Void System.Predicate`1<Games.FlyWing.FlyWingProperty>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m154297 (Predicate_1_t21153 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Games.FlyWing.FlyWingProperty>::Invoke(T)
 bool Predicate_1_Invoke_m154298 (Predicate_1_t21153 * __this, FlyWingProperty_t4727  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<Games.FlyWing.FlyWingProperty>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m154299 (Predicate_1_t21153 * __this, FlyWingProperty_t4727  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Games.FlyWing.FlyWingProperty>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m154300 (Predicate_1_t21153 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
