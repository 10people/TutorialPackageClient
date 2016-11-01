#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<GC_CHAT/LINKTYPE>
struct Predicate_1_t16656;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GC_CHAT/LINKTYPE
#include "AssemblyU2DCSharp_GC_CHAT_LINKTYPE.h"

// System.Void System.Predicate`1<GC_CHAT/LINKTYPE>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m124598 (Predicate_1_t16656 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<GC_CHAT/LINKTYPE>::Invoke(T)
 bool Predicate_1_Invoke_m124599 (Predicate_1_t16656 * __this, int32_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<GC_CHAT/LINKTYPE>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m124600 (Predicate_1_t16656 * __this, int32_t ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<GC_CHAT/LINKTYPE>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m124601 (Predicate_1_t16656 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
