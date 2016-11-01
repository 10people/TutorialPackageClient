#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BelleData/ActiveMatrixDelegate
struct ActiveMatrixDelegate_t4859;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void BelleData/ActiveMatrixDelegate::.ctor(System.Object,System.IntPtr)
 void ActiveMatrixDelegate__ctor_m34524 (ActiveMatrixDelegate_t4859 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/ActiveMatrixDelegate::Invoke()
 void ActiveMatrixDelegate_Invoke_m34525 (ActiveMatrixDelegate_t4859 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult BelleData/ActiveMatrixDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * ActiveMatrixDelegate_BeginInvoke_m34526 (ActiveMatrixDelegate_t4859 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData/ActiveMatrixDelegate::EndInvoke(System.IAsyncResult)
 void ActiveMatrixDelegate_EndInvoke_m34527 (ActiveMatrixDelegate_t4859 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
