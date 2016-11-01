#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/SharerPreparedDelegate
struct SharerPreparedDelegate_t916;
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

// System.Void LuYou/SharerPreparedDelegate::.ctor(System.Object,System.IntPtr)
 void SharerPreparedDelegate__ctor_m3900 (SharerPreparedDelegate_t916 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerPreparedDelegate::Invoke(System.String,System.String)
 void SharerPreparedDelegate_Invoke_m3901 (SharerPreparedDelegate_t916 * __this, String_t* ___videoId, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuYou/SharerPreparedDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
 Object_t * SharerPreparedDelegate_BeginInvoke_m3902 (SharerPreparedDelegate_t916 * __this, String_t* ___videoId, String_t* ___url, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerPreparedDelegate::EndInvoke(System.IAsyncResult)
 void SharerPreparedDelegate_EndInvoke_m3903 (SharerPreparedDelegate_t916 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
