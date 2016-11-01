#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UICenterOnChild/OnCenterFinished
struct OnCenterFinished_t5295;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UICenterOnChild/OnCenterFinished::.ctor(System.Object,System.IntPtr)
 void OnCenterFinished__ctor_m37504 (OnCenterFinished_t5295 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild/OnCenterFinished::Invoke(UnityEngine.GameObject)
 void OnCenterFinished_Invoke_m37505 (OnCenterFinished_t5295 * __this, GameObject_t9 * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UICenterOnChild/OnCenterFinished::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
 Object_t * OnCenterFinished_BeginInvoke_m37506 (OnCenterFinished_t5295 * __this, GameObject_t9 * ___target, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UICenterOnChild/OnCenterFinished::EndInvoke(System.IAsyncResult)
 void OnCenterFinished_EndInvoke_m37507 (OnCenterFinished_t5295 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
