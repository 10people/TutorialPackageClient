#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameManager/InitDataFinishDelegate
struct InitDataFinishDelegate_t2170;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void GameManager/InitDataFinishDelegate::.ctor(System.Object,System.IntPtr)
 void InitDataFinishDelegate__ctor_m14590 (InitDataFinishDelegate_t2170 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager/InitDataFinishDelegate::Invoke()
 void InitDataFinishDelegate_Invoke_m14591 (InitDataFinishDelegate_t2170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GameManager/InitDataFinishDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * InitDataFinishDelegate_BeginInvoke_m14592 (InitDataFinishDelegate_t2170 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager/InitDataFinishDelegate::EndInvoke(System.IAsyncResult)
 void InitDataFinishDelegate_EndInvoke_m14593 (InitDataFinishDelegate_t2170 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
