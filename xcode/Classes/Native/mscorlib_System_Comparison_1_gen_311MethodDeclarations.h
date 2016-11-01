#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Cutscene.Cutscene/EventHandler>
struct Comparison_1_t21105;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Cutscene.Cutscene/EventHandler
#include "AssemblyU2DCSharp_Cutscene_Cutscene_EventHandler.h"

// System.Void System.Comparison`1<Cutscene.Cutscene/EventHandler>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m153910 (Comparison_1_t21105 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Cutscene.Cutscene/EventHandler>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m153911 (Comparison_1_t21105 * __this, EventHandler_t4593  ___x, EventHandler_t4593  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<Cutscene.Cutscene/EventHandler>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m153912 (Comparison_1_t21105 * __this, EventHandler_t4593  ___x, EventHandler_t4593  ___y, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Cutscene.Cutscene/EventHandler>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m153913 (Comparison_1_t21105 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
