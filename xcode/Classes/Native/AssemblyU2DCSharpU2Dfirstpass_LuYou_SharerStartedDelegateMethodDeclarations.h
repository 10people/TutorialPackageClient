#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/SharerStartedDelegate
struct SharerStartedDelegate_t917;
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

// System.Void LuYou/SharerStartedDelegate::.ctor(System.Object,System.IntPtr)
 void SharerStartedDelegate__ctor_m3904 (SharerStartedDelegate_t917 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerStartedDelegate::Invoke(System.String)
 void SharerStartedDelegate_Invoke_m3905 (SharerStartedDelegate_t917 * __this, String_t* ___videoId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuYou/SharerStartedDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
 Object_t * SharerStartedDelegate_BeginInvoke_m3906 (SharerStartedDelegate_t917 * __this, String_t* ___videoId, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerStartedDelegate::EndInvoke(System.IAsyncResult)
 void SharerStartedDelegate_EndInvoke_m3907 (SharerStartedDelegate_t917 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
