#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PVPData/UpdateMyDataDelegate
struct UpdateMyDataDelegate_t4929;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PVPData/UpdateMyDataDelegate::.ctor(System.Object,System.IntPtr)
 void UpdateMyDataDelegate__ctor_m34919 (UpdateMyDataDelegate_t4929 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData/UpdateMyDataDelegate::Invoke()
 void UpdateMyDataDelegate_Invoke_m34920 (UpdateMyDataDelegate_t4929 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult PVPData/UpdateMyDataDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * UpdateMyDataDelegate_BeginInvoke_m34921 (UpdateMyDataDelegate_t4929 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData/UpdateMyDataDelegate::EndInvoke(System.IAsyncResult)
 void UpdateMyDataDelegate_EndInvoke_m34922 (UpdateMyDataDelegate_t4929 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
