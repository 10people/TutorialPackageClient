#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.WrapperFactory
struct WrapperFactory_t6302;
// System.Object
struct Object_t;
// LitJson.IJsonWrapper
struct IJsonWrapper_t6290;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
 void WrapperFactory__ctor_m44307 (WrapperFactory_t6302 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
 Object_t * WrapperFactory_Invoke_m44308 (WrapperFactory_t6302 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * WrapperFactory_BeginInvoke_m44309 (WrapperFactory_t6302 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
 Object_t * WrapperFactory_EndInvoke_m44310 (WrapperFactory_t6302 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
