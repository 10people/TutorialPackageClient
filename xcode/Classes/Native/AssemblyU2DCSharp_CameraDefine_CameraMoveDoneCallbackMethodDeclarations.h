#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CameraDefine/CameraMoveDoneCallback
struct CameraMoveDoneCallback_t4571;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void CameraDefine/CameraMoveDoneCallback::.ctor(System.Object,System.IntPtr)
 void CameraMoveDoneCallback__ctor_m32838 (CameraMoveDoneCallback_t4571 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraDefine/CameraMoveDoneCallback::Invoke()
 void CameraMoveDoneCallback_Invoke_m32839 (CameraMoveDoneCallback_t4571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult CameraDefine/CameraMoveDoneCallback::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * CameraMoveDoneCallback_BeginInvoke_m32840 (CameraMoveDoneCallback_t4571 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraDefine/CameraMoveDoneCallback::EndInvoke(System.IAsyncResult)
 void CameraMoveDoneCallback_EndInvoke_m32841 (CameraMoveDoneCallback_t4571 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
