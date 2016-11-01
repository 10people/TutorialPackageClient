#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UpdateHelper/DelegateCheckResVersion
struct DelegateCheckResVersion_t4514;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UpdateHelper/CheckVersionResult
#include "AssemblyU2DCSharp_UpdateHelper_CheckVersionResult.h"

// System.Void UpdateHelper/DelegateCheckResVersion::.ctor(System.Object,System.IntPtr)
 void DelegateCheckResVersion__ctor_m32348 (DelegateCheckResVersion_t4514 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper/DelegateCheckResVersion::Invoke(UpdateHelper/CheckVersionResult)
 void DelegateCheckResVersion_Invoke_m32349 (DelegateCheckResVersion_t4514 * __this, int32_t ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UpdateHelper/DelegateCheckResVersion::BeginInvoke(UpdateHelper/CheckVersionResult,System.AsyncCallback,System.Object)
 Object_t * DelegateCheckResVersion_BeginInvoke_m32350 (DelegateCheckResVersion_t4514 * __this, int32_t ___result, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper/DelegateCheckResVersion::EndInvoke(System.IAsyncResult)
 void DelegateCheckResVersion_EndInvoke_m32351 (DelegateCheckResVersion_t4514 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
