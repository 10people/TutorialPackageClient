#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NetWorkLogic/ConnectDelegate
struct ConnectDelegate_t2201;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void NetWorkLogic/ConnectDelegate::.ctor(System.Object,System.IntPtr)
 void ConnectDelegate__ctor_m14712 (ConnectDelegate_t2201 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic/ConnectDelegate::Invoke(System.Boolean,System.String)
 void ConnectDelegate_Invoke_m14713 (ConnectDelegate_t2201 * __this, bool ___bSuccess, String_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult NetWorkLogic/ConnectDelegate::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
 Object_t * ConnectDelegate_BeginInvoke_m14714 (ConnectDelegate_t2201 * __this, bool ___bSuccess, String_t* ___result, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetWorkLogic/ConnectDelegate::EndInvoke(System.IAsyncResult)
 void ConnectDelegate_EndInvoke_m14715 (ConnectDelegate_t2201 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
