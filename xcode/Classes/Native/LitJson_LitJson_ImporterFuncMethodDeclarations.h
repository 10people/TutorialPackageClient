#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.ImporterFunc
struct ImporterFunc_t6300;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
 void ImporterFunc__ctor_m44303 (ImporterFunc_t6300 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
 Object_t * ImporterFunc_Invoke_m44304 (ImporterFunc_t6300 * __this, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * ImporterFunc_BeginInvoke_m44305 (ImporterFunc_t6300 * __this, Object_t * ___input, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
 Object_t * ImporterFunc_EndInvoke_m44306 (ImporterFunc_t6300 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
