#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Cutscene.Cutscene/EventHandler>
struct Predicate_1_t21103;
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

// System.Void System.Predicate`1<Cutscene.Cutscene/EventHandler>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m153900 (Predicate_1_t21103 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Cutscene.Cutscene/EventHandler>::Invoke(T)
 bool Predicate_1_Invoke_m153901 (Predicate_1_t21103 * __this, EventHandler_t4593  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<Cutscene.Cutscene/EventHandler>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m153902 (Predicate_1_t21103 * __this, EventHandler_t4593  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Cutscene.Cutscene/EventHandler>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m153903 (Predicate_1_t21103 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
