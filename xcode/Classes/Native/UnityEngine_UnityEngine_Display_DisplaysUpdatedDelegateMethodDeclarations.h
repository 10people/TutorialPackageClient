#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t7625;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::.ctor(System.Object,System.IntPtr)
 void DisplaysUpdatedDelegate__ctor_m52554 (DisplaysUpdatedDelegate_t7625 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::Invoke()
 void DisplaysUpdatedDelegate_Invoke_m52555 (DisplaysUpdatedDelegate_t7625 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Display/DisplaysUpdatedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * DisplaysUpdatedDelegate_BeginInvoke_m52556 (DisplaysUpdatedDelegate_t7625 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Display/DisplaysUpdatedDelegate::EndInvoke(System.IAsyncResult)
 void DisplaysUpdatedDelegate_EndInvoke_m52557 (DisplaysUpdatedDelegate_t7625 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
