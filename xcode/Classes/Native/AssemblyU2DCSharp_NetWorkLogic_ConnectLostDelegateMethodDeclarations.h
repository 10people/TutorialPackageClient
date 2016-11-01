#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NetWorkLogic/ConnectLostDelegate
struct ConnectLostDelegate_t2202;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void NetWorkLogic/ConnectLostDelegate::.ctor(System.Object,System.IntPtr)
 void ConnectLostDelegate__ctor_m14716 (ConnectLostDelegate_t2202 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic/ConnectLostDelegate::Invoke()
 void ConnectLostDelegate_Invoke_m14717 (ConnectLostDelegate_t2202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult NetWorkLogic/ConnectLostDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * ConnectLostDelegate_BeginInvoke_m14718 (ConnectLostDelegate_t2202 * __this, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic/ConnectLostDelegate::EndInvoke(System.IAsyncResult)
 void ConnectLostDelegate_EndInvoke_m14719 (ConnectLostDelegate_t2202 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
