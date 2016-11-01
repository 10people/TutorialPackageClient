#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIManager/OnOpenUIDelegate
struct OnOpenUIDelegate_t1396;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIManager/OnOpenUIDelegate::.ctor(System.Object,System.IntPtr)
 void OnOpenUIDelegate__ctor_m12721 (OnOpenUIDelegate_t1396 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager/OnOpenUIDelegate::Invoke(System.Boolean,System.Object)
 void OnOpenUIDelegate_Invoke_m12722 (OnOpenUIDelegate_t1396 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIManager/OnOpenUIDelegate::BeginInvoke(System.Boolean,System.Object,System.AsyncCallback,System.Object)
 Object_t * OnOpenUIDelegate_BeginInvoke_m12723 (OnOpenUIDelegate_t1396 * __this, bool ___bSuccess, Object_t * ___param, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIManager/OnOpenUIDelegate::EndInvoke(System.IAsyncResult)
 void OnOpenUIDelegate_EndInvoke_m12724 (OnOpenUIDelegate_t1396 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
