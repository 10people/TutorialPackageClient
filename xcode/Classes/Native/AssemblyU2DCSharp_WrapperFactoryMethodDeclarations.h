#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WrapperFactory
struct WrapperFactory_t1085;
// System.Object
struct Object_t;
// IJsonWrapper
struct IJsonWrapper_t1063;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void WrapperFactory::.ctor(System.Object,System.IntPtr)
 void WrapperFactory__ctor_m38615 (WrapperFactory_t1085 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// IJsonWrapper WrapperFactory::Invoke()
 Object_t * WrapperFactory_Invoke_m38616 (WrapperFactory_t1085 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * WrapperFactory_BeginInvoke_m38617 (WrapperFactory_t1085 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// IJsonWrapper WrapperFactory::EndInvoke(System.IAsyncResult)
 Object_t * WrapperFactory_EndInvoke_m38618 (WrapperFactory_t1085 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
