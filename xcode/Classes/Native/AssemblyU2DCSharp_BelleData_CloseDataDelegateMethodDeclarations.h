#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BelleData/CloseDataDelegate
struct CloseDataDelegate_t4853;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BelleData/CloseDataDelegate::.ctor(System.Object,System.IntPtr)
 void CloseDataDelegate__ctor_m34500 (CloseDataDelegate_t4853 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/CloseDataDelegate::Invoke()
 void CloseDataDelegate_Invoke_m34501 (CloseDataDelegate_t4853 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BelleData/CloseDataDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * CloseDataDelegate_BeginInvoke_m34502 (CloseDataDelegate_t4853 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/CloseDataDelegate::EndInvoke(System.IAsyncResult)
 void CloseDataDelegate_EndInvoke_m34503 (CloseDataDelegate_t4853 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
