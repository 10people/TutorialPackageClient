#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WuLinData/ShowPkInfoDelegate
struct ShowPkInfoDelegate_t4995;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void WuLinData/ShowPkInfoDelegate::.ctor(System.Object,System.IntPtr)
 void ShowPkInfoDelegate__ctor_m35742 (ShowPkInfoDelegate_t4995 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData/ShowPkInfoDelegate::Invoke()
 void ShowPkInfoDelegate_Invoke_m35743 (ShowPkInfoDelegate_t4995 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WuLinData/ShowPkInfoDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * ShowPkInfoDelegate_BeginInvoke_m35744 (ShowPkInfoDelegate_t4995 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinData/ShowPkInfoDelegate::EndInvoke(System.IAsyncResult)
 void ShowPkInfoDelegate_EndInvoke_m35745 (ShowPkInfoDelegate_t4995 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
