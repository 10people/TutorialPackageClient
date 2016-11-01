#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Single>
struct Action_1_t4409;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
 void Action_1__ctor_m150408 (Action_1_t4409 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Single>::Invoke(T)
 void Action_1_Invoke_m40537 (Action_1_t4409 * __this, float ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Action`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Action_1_BeginInvoke_m150409 (Action_1_t4409 * __this, float ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<System.Single>::EndInvoke(System.IAsyncResult)
 void Action_1_EndInvoke_m150410 (Action_1_t4409 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
