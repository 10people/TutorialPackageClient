#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequest/GetResponseCallback
struct GetResponseCallback_t7175;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t7078;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.FileWebRequest/GetResponseCallback::.ctor(System.Object,System.IntPtr)
 void GetResponseCallback__ctor_m49859 (GetResponseCallback_t7175 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::Invoke()
 WebResponse_t7078 * GetResponseCallback_Invoke_m49860 (GetResponseCallback_t7175 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest/GetResponseCallback::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * GetResponseCallback_BeginInvoke_m49861 (GetResponseCallback_t7175 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest/GetResponseCallback::EndInvoke(System.IAsyncResult)
 WebResponse_t7078 * GetResponseCallback_EndInvoke_m49862 (GetResponseCallback_t7175 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
