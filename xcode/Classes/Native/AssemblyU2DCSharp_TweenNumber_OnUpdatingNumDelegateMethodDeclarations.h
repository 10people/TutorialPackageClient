#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenNumber/OnUpdatingNumDelegate
struct OnUpdatingNumDelegate_t5383;
// System.Object
struct Object_t;
// TweenNumber
struct TweenNumber_t1838;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void TweenNumber/OnUpdatingNumDelegate::.ctor(System.Object,System.IntPtr)
 void OnUpdatingNumDelegate__ctor_m38153 (OnUpdatingNumDelegate_t5383 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenNumber/OnUpdatingNumDelegate::Invoke(TweenNumber,System.Boolean)
 void OnUpdatingNumDelegate_Invoke_m38154 (OnUpdatingNumDelegate_t5383 * __this, TweenNumber_t1838 * ___tw, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult TweenNumber/OnUpdatingNumDelegate::BeginInvoke(TweenNumber,System.Boolean,System.AsyncCallback,System.Object)
 Object_t * OnUpdatingNumDelegate_BeginInvoke_m38155 (OnUpdatingNumDelegate_t5383 * __this, TweenNumber_t1838 * ___tw, bool ___isFinished, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenNumber/OnUpdatingNumDelegate::EndInvoke(System.IAsyncResult)
 void OnUpdatingNumDelegate_EndInvoke_m38156 (OnUpdatingNumDelegate_t5383 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
