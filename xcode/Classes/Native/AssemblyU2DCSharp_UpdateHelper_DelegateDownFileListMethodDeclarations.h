#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UpdateHelper/DelegateDownFileList
struct DelegateDownFileList_t4513;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UpdateHelper/DelegateDownFileList::.ctor(System.Object,System.IntPtr)
 void DelegateDownFileList__ctor_m32344 (DelegateDownFileList_t4513 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper/DelegateDownFileList::Invoke(System.Boolean)
 void DelegateDownFileList_Invoke_m32345 (DelegateDownFileList_t4513 * __this, bool ___bSuccess, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UpdateHelper/DelegateDownFileList::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
 Object_t * DelegateDownFileList_BeginInvoke_m32346 (DelegateDownFileList_t4513 * __this, bool ___bSuccess, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateHelper/DelegateDownFileList::EndInvoke(System.IAsyncResult)
 void DelegateDownFileList_EndInvoke_m32347 (DelegateDownFileList_t4513 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
