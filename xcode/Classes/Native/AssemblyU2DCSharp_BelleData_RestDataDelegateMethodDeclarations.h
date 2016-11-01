#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BelleData/RestDataDelegate
struct RestDataDelegate_t4858;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BelleData/RestDataDelegate::.ctor(System.Object,System.IntPtr)
 void RestDataDelegate__ctor_m34520 (RestDataDelegate_t4858 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/RestDataDelegate::Invoke()
 void RestDataDelegate_Invoke_m34521 (RestDataDelegate_t4858 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BelleData/RestDataDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * RestDataDelegate_BeginInvoke_m34522 (RestDataDelegate_t4858 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/RestDataDelegate::EndInvoke(System.IAsyncResult)
 void RestDataDelegate_EndInvoke_m34523 (RestDataDelegate_t4858 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
