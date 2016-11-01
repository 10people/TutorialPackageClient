#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GestureRecognizer`1/GestureEventHandler<TapGesture>
struct GestureEventHandler_t9049;
// System.Object
struct Object_t;
// TapGesture
struct TapGesture_t108;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GestureRecognizer`1/GestureEventHandler<TapGesture>::.ctor(System.Object,System.IntPtr)
// GestureRecognizer`1/GestureEventHandler<System.Object>
#include "AssemblyU2DCSharpU2Dfirstpass_GestureRecognizer_1_GestureEve_1MethodDeclarations.h"
#define GestureEventHandler__ctor_m61808(__this, ___object, ___method, method) (void)GestureEventHandler__ctor_m60011_gshared((GestureEventHandler_t8859 *)__this, (Object_t *)___object, (IntPtr_t24)___method, method)
// System.Void GestureRecognizer`1/GestureEventHandler<TapGesture>::Invoke(T)
#define GestureEventHandler_Invoke_m61809(__this, ___gesture, method) (void)GestureEventHandler_Invoke_m60013_gshared((GestureEventHandler_t8859 *)__this, (Object_t *)___gesture, method)
// System.IAsyncResult GestureRecognizer`1/GestureEventHandler<TapGesture>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define GestureEventHandler_BeginInvoke_m61810(__this, ___gesture, ___callback, ___object, method) (Object_t *)GestureEventHandler_BeginInvoke_m60015_gshared((GestureEventHandler_t8859 *)__this, (Object_t *)___gesture, (AsyncCallback_t15 *)___callback, (Object_t *)___object, method)
// System.Void GestureRecognizer`1/GestureEventHandler<TapGesture>::EndInvoke(System.IAsyncResult)
#define GestureEventHandler_EndInvoke_m61811(__this, ___result, method) (void)GestureEventHandler_EndInvoke_m60017_gshared((GestureEventHandler_t8859 *)__this, (Object_t *)___result, method)
