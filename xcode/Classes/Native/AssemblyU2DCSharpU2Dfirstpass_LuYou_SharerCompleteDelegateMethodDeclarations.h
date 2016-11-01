#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/SharerCompleteDelegate
struct SharerCompleteDelegate_t920;
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

// System.Void LuYou/SharerCompleteDelegate::.ctor(System.Object,System.IntPtr)
 void SharerCompleteDelegate__ctor_m3912 (SharerCompleteDelegate_t920 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerCompleteDelegate::Invoke(System.String)
 void SharerCompleteDelegate_Invoke_m3913 (SharerCompleteDelegate_t920 * __this, String_t* ___videoId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuYou/SharerCompleteDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
 Object_t * SharerCompleteDelegate_BeginInvoke_m3914 (SharerCompleteDelegate_t920 * __this, String_t* ___videoId, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerCompleteDelegate::EndInvoke(System.IAsyncResult)
 void SharerCompleteDelegate_EndInvoke_m3915 (SharerCompleteDelegate_t920 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
