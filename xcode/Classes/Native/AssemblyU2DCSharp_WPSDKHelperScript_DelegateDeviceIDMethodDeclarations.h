#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WPSDKHelperScript/DelegateDeviceID
struct DelegateDeviceID_t5227;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void WPSDKHelperScript/DelegateDeviceID::.ctor(System.Object,System.IntPtr)
 void DelegateDeviceID__ctor_m37203 (DelegateDeviceID_t5227 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WPSDKHelperScript/DelegateDeviceID::Invoke(System.String)
 String_t* DelegateDeviceID_Invoke_m37204 (DelegateDeviceID_t5227 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WPSDKHelperScript/DelegateDeviceID::BeginInvoke(System.String,System.AsyncCallback,System.Object)
 Object_t * DelegateDeviceID_BeginInvoke_m37205 (DelegateDeviceID_t5227 * __this, String_t* ___str, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WPSDKHelperScript/DelegateDeviceID::EndInvoke(System.IAsyncResult)
 String_t* DelegateDeviceID_EndInvoke_m37206 (DelegateDeviceID_t5227 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
