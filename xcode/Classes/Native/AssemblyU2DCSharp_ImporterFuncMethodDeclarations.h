#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ImporterFunc
struct ImporterFunc_t1084;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void ImporterFunc::.ctor(System.Object,System.IntPtr)
 void ImporterFunc__ctor_m38611 (ImporterFunc_t1084 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ImporterFunc::Invoke(System.Object)
 Object_t * ImporterFunc_Invoke_m38612 (ImporterFunc_t1084 * __this, Object_t * ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * ImporterFunc_BeginInvoke_m38613 (ImporterFunc_t1084 * __this, Object_t * ___input, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ImporterFunc::EndInvoke(System.IAsyncResult)
 Object_t * ImporterFunc_EndInvoke_m38614 (ImporterFunc_t1084 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
