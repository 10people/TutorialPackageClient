#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t20380;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Action_1__ctor_m148410_gshared (Action_1_t20380 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method);
#define Action_1__ctor_m148410(__this, ___object, ___method, method) (void)Action_1__ctor_m148410_gshared((Action_1_t20380 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
 void Action_1_Invoke_m148411_gshared (Action_1_t20380 * __this, Object_t * ___obj, MethodInfo* method);
#define Action_1_Invoke_m148411(__this, ___obj, method) (void)Action_1_Invoke_m148411_gshared((Action_1_t20380 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Action_1_BeginInvoke_m148413_gshared (Action_1_t20380 * __this, Object_t * ___obj, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_1_BeginInvoke_m148413(__this, ___obj, ___callback, ___object, method) (Object_t *)Action_1_BeginInvoke_m148413_gshared((Action_1_t20380 *)__this, (Object_t *)___obj, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
 void Action_1_EndInvoke_m148415_gshared (Action_1_t20380 * __this, Object_t * ___result, MethodInfo* method);
#define Action_1_EndInvoke_m148415(__this, ___result, method) (void)Action_1_EndInvoke_m148415_gshared((Action_1_t20380 *)__this, (Object_t *)___result, method)
