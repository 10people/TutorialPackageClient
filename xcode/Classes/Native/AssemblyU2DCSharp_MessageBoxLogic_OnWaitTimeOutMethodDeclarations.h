#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MessageBoxLogic/OnWaitTimeOut
struct OnWaitTimeOut_t1549;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void MessageBoxLogic/OnWaitTimeOut::.ctor(System.Object,System.IntPtr)
 void OnWaitTimeOut__ctor_m9609 (OnWaitTimeOut_t1549 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic/OnWaitTimeOut::Invoke()
 void OnWaitTimeOut_Invoke_m9610 (OnWaitTimeOut_t1549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult MessageBoxLogic/OnWaitTimeOut::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * OnWaitTimeOut_BeginInvoke_m9611 (OnWaitTimeOut_t1549 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MessageBoxLogic/OnWaitTimeOut::EndInvoke(System.IAsyncResult)
 void OnWaitTimeOut_EndInvoke_m9612 (OnWaitTimeOut_t1549 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
