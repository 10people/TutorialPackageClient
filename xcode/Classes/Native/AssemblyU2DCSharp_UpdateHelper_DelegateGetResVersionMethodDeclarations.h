#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UpdateHelper/DelegateGetResVersion
struct DelegateGetResVersion_t4512;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UpdateHelper/DelegateGetResVersion::.ctor(System.Object,System.IntPtr)
 void DelegateGetResVersion__ctor_m32340 (DelegateGetResVersion_t4512 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper/DelegateGetResVersion::Invoke(System.Boolean)
 void DelegateGetResVersion_Invoke_m32341 (DelegateGetResVersion_t4512 * __this, bool ___bSuccess, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UpdateHelper/DelegateGetResVersion::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
 Object_t * DelegateGetResVersion_BeginInvoke_m32342 (DelegateGetResVersion_t4512 * __this, bool ___bSuccess, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper/DelegateGetResVersion::EndInvoke(System.IAsyncResult)
 void DelegateGetResVersion_EndInvoke_m32343 (DelegateGetResVersion_t4512 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
