#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BelleData/GetBelleDelegate
struct GetBelleDelegate_t4856;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BelleData/GetBelleDelegate::.ctor(System.Object,System.IntPtr)
 void GetBelleDelegate__ctor_m34512 (GetBelleDelegate_t4856 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/GetBelleDelegate::Invoke()
 void GetBelleDelegate_Invoke_m34513 (GetBelleDelegate_t4856 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BelleData/GetBelleDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * GetBelleDelegate_BeginInvoke_m34514 (GetBelleDelegate_t4856 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/GetBelleDelegate::EndInvoke(System.IAsyncResult)
 void GetBelleDelegate_EndInvoke_m34515 (GetBelleDelegate_t4856 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
