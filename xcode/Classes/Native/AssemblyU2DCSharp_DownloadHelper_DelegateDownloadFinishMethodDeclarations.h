#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DownloadHelper/DelegateDownloadFinish
struct DelegateDownloadFinish_t4497;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void DownloadHelper/DelegateDownloadFinish::.ctor(System.Object,System.IntPtr)
 void DelegateDownloadFinish__ctor_m32207 (DelegateDownloadFinish_t4497 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DownloadHelper/DelegateDownloadFinish::Invoke(System.Boolean)
 void DelegateDownloadFinish_Invoke_m32208 (DelegateDownloadFinish_t4497 * __this, bool ___bSuccess, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult DownloadHelper/DelegateDownloadFinish::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
 Object_t * DelegateDownloadFinish_BeginInvoke_m32209 (DelegateDownloadFinish_t4497 * __this, bool ___bSuccess, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DownloadHelper/DelegateDownloadFinish::EndInvoke(System.IAsyncResult)
 void DelegateDownloadFinish_EndInvoke_m32210 (DelegateDownloadFinish_t4497 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
