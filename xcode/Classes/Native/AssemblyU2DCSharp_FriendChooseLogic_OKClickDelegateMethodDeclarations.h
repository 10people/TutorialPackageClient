#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FriendChooseLogic/OKClickDelegate
struct OKClickDelegate_t1412;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void FriendChooseLogic/OKClickDelegate::.ctor(System.Object,System.IntPtr)
 void OKClickDelegate__ctor_m8592 (OKClickDelegate_t1412 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FriendChooseLogic/OKClickDelegate::Invoke(System.Int32)
 void OKClickDelegate_Invoke_m8593 (OKClickDelegate_t1412 * __this, int32_t ___curNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult FriendChooseLogic/OKClickDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
 Object_t * OKClickDelegate_BeginInvoke_m8594 (OKClickDelegate_t1412 * __this, int32_t ___curNum, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FriendChooseLogic/OKClickDelegate::EndInvoke(System.IAsyncResult)
 void OKClickDelegate_EndInvoke_m8595 (OKClickDelegate_t1412 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
