#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/SharerFailedDelegate
struct SharerFailedDelegate_t921;
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

// System.Void LuYou/SharerFailedDelegate::.ctor(System.Object,System.IntPtr)
 void SharerFailedDelegate__ctor_m3916 (SharerFailedDelegate_t921 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerFailedDelegate::Invoke(System.String,System.Int32,System.String)
 void SharerFailedDelegate_Invoke_m3917 (SharerFailedDelegate_t921 * __this, String_t* ___videoId, int32_t ___code, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuYou/SharerFailedDelegate::BeginInvoke(System.String,System.Int32,System.String,System.AsyncCallback,System.Object)
 Object_t * SharerFailedDelegate_BeginInvoke_m3918 (SharerFailedDelegate_t921 * __this, String_t* ___videoId, int32_t ___code, String_t* ___msg, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerFailedDelegate::EndInvoke(System.IAsyncResult)
 void SharerFailedDelegate_EndInvoke_m3919 (SharerFailedDelegate_t921 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
