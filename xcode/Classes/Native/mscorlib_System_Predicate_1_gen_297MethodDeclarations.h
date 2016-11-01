#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<MapConnectPath>
struct Predicate_1_t20967;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// MapConnectPath
#include "AssemblyU2DCSharp_MapConnectPath.h"

// System.Void System.Predicate`1<MapConnectPath>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m152822 (Predicate_1_t20967 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<MapConnectPath>::Invoke(T)
 bool Predicate_1_Invoke_m152823 (Predicate_1_t20967 * __this, MapConnectPath_t4534  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<MapConnectPath>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m152824 (Predicate_1_t20967 * __this, MapConnectPath_t4534  ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<MapConnectPath>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m152825 (Predicate_1_t20967 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
