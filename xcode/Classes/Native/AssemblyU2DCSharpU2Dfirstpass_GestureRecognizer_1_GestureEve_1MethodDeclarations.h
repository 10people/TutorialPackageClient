#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GestureRecognizer`1/GestureEventHandler<System.Object>
struct GestureEventHandler_t8859;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GestureRecognizer`1/GestureEventHandler<System.Object>::.ctor(System.Object,System.IntPtr)
 void GestureEventHandler__ctor_m60011_gshared (GestureEventHandler_t8859 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method);
#define GestureEventHandler__ctor_m60011(__this, ___object, ___method, method) (void)GestureEventHandler__ctor_m60011_gshared((GestureEventHandler_t8859 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// System.Void GestureRecognizer`1/GestureEventHandler<System.Object>::Invoke(T)
 void GestureEventHandler_Invoke_m60013_gshared (GestureEventHandler_t8859 * __this, Object_t * ___gesture, MethodInfo* method);
#define GestureEventHandler_Invoke_m60013(__this, ___gesture, method) (void)GestureEventHandler_Invoke_m60013_gshared((GestureEventHandler_t8859 *)__this, (Object_t *)___gesture, method)
// System.IAsyncResult GestureRecognizer`1/GestureEventHandler<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * GestureEventHandler_BeginInvoke_m60015_gshared (GestureEventHandler_t8859 * __this, Object_t * ___gesture, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method);
#define GestureEventHandler_BeginInvoke_m60015(__this, ___gesture, ___callback, ___object, method) (Object_t *)GestureEventHandler_BeginInvoke_m60015_gshared((GestureEventHandler_t8859 *)__this, (Object_t *)___gesture, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// System.Void GestureRecognizer`1/GestureEventHandler<System.Object>::EndInvoke(System.IAsyncResult)
 void GestureEventHandler_EndInvoke_m60017_gshared (GestureEventHandler_t8859 * __this, Object_t * ___result, MethodInfo* method);
#define GestureEventHandler_EndInvoke_m60017(__this, ___result, method) (void)GestureEventHandler_EndInvoke_m60017_gshared((GestureEventHandler_t8859 *)__this, (Object_t *)___result, method)
