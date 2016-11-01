#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UpdateManager/OnUpdate
struct OnUpdate_t5276;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UpdateManager/OnUpdate::.ctor(System.Object,System.IntPtr)
 void OnUpdate__ctor_m37402 (OnUpdate_t5276 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager/OnUpdate::Invoke(System.Single)
 void OnUpdate_Invoke_m37403 (OnUpdate_t5276 * __this, float ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UpdateManager/OnUpdate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
 Object_t * OnUpdate_BeginInvoke_m37404 (OnUpdate_t5276 * __this, float ___delta, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager/OnUpdate::EndInvoke(System.IAsyncResult)
 void OnUpdate_EndInvoke_m37405 (OnUpdate_t5276 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
