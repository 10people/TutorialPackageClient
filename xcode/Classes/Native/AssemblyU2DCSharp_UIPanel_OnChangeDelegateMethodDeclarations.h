#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIPanel/OnChangeDelegate
struct OnChangeDelegate_t5424;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UIPanel/OnChangeDelegate::.ctor(System.Object,System.IntPtr)
 void OnChangeDelegate__ctor_m38425 (OnChangeDelegate_t5424 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel/OnChangeDelegate::Invoke()
 void OnChangeDelegate_Invoke_m38426 (OnChangeDelegate_t5424 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UIPanel/OnChangeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * OnChangeDelegate_BeginInvoke_m38427 (OnChangeDelegate_t5424 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIPanel/OnChangeDelegate::EndInvoke(System.IAsyncResult)
 void OnChangeDelegate_EndInvoke_m38428 (OnChangeDelegate_t5424 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
