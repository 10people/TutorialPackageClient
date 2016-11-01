#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Games.FlyWing.FlyWingProperty>
struct Comparison_1_t21155;
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

// System.Void System.Comparison`1<Games.FlyWing.FlyWingProperty>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m154307 (Comparison_1_t21155 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Games.FlyWing.FlyWingProperty>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m154308 (Comparison_1_t21155 * __this, FlyWingProperty_t4727  ___x, FlyWingProperty_t4727  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<Games.FlyWing.FlyWingProperty>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m154309 (Comparison_1_t21155 * __this, FlyWingProperty_t4727  ___x, FlyWingProperty_t4727  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Games.FlyWing.FlyWingProperty>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m154310 (Comparison_1_t21155 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
