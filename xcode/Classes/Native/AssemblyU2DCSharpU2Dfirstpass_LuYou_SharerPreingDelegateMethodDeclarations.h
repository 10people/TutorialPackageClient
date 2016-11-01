#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/SharerPreingDelegate
struct SharerPreingDelegate_t915;
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

// System.Void LuYou/SharerPreingDelegate::.ctor(System.Object,System.IntPtr)
 void SharerPreingDelegate__ctor_m3896 (SharerPreingDelegate_t915 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerPreingDelegate::Invoke(System.String)
 void SharerPreingDelegate_Invoke_m3897 (SharerPreingDelegate_t915 * __this, String_t* ___videoId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuYou/SharerPreingDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
 Object_t * SharerPreingDelegate_BeginInvoke_m3898 (SharerPreingDelegate_t915 * __this, String_t* ___videoId, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerPreingDelegate::EndInvoke(System.IAsyncResult)
 void SharerPreingDelegate_EndInvoke_m3899 (SharerPreingDelegate_t915 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
