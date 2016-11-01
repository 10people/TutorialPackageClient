#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t6362;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.Dispatcher::.ctor(System.Object,System.IntPtr)
 void Dispatcher__ctor_m44609 (Dispatcher_t6362 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::Invoke(System.Object,System.Object[])
 Object_t * Dispatcher_Invoke_m44610 (Dispatcher_t6362 * __this, Object_t * ___target, ObjectU5BU5D_t142* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Boo.Lang.Runtime.DynamicDispatching.Dispatcher::BeginInvoke(System.Object,System.Object[],System.AsyncCallback,System.Object)
 Object_t * Dispatcher_BeginInvoke_m44611 (Dispatcher_t6362 * __this, Object_t * ___target, ObjectU5BU5D_t142* ___args, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.DynamicDispatching.Dispatcher::EndInvoke(System.IAsyncResult)
 Object_t * Dispatcher_EndInvoke_m44612 (Dispatcher_t6362 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
