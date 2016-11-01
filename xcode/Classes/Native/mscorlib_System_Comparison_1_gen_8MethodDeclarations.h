#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UICamera/DepthEntry>
struct Comparison_1_t5410;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UICamera/DepthEntry
#include "AssemblyU2DCSharp_UICamera_DepthEntry.h"

// System.Void System.Comparison`1<UICamera/DepthEntry>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m42208 (Comparison_1_t5410 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<UICamera/DepthEntry>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m166457 (Comparison_1_t5410 * __this, DepthEntry_t5402  ___x, DepthEntry_t5402  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<UICamera/DepthEntry>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m166458 (Comparison_1_t5410 * __this, DepthEntry_t5402  ___x, DepthEntry_t5402  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<UICamera/DepthEntry>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m166459 (Comparison_1_t5410 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
