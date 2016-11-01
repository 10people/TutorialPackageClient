#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LoginData/LoginRet
struct LoginRet_t4776;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// GC_LOGIN_RET/LOGINRESULT
#include "AssemblyU2DCSharp_GC_LOGIN_RET_LOGINRESULT.h"

// System.Void LoginData/LoginRet::.ctor(System.Object,System.IntPtr)
 void LoginRet__ctor_m34820 (LoginRet_t4776 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData/LoginRet::Invoke(GC_LOGIN_RET/LOGINRESULT,System.Int32)
 void LoginRet_Invoke_m34821 (LoginRet_t4776 * __this, int32_t ___result, int32_t ___validateResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LoginData/LoginRet::BeginInvoke(GC_LOGIN_RET/LOGINRESULT,System.Int32,System.AsyncCallback,System.Object)
 Object_t * LoginRet_BeginInvoke_m34822 (LoginRet_t4776 * __this, int32_t ___result, int32_t ___validateResult, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoginData/LoginRet::EndInvoke(System.IAsyncResult)
 void LoginRet_EndInvoke_m34823 (LoginRet_t4776 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
