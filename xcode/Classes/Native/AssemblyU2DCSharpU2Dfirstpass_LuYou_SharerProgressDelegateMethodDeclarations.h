#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LuYou/SharerProgressDelegate
struct SharerProgressDelegate_t919;
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

// System.Void LuYou/SharerProgressDelegate::.ctor(System.Object,System.IntPtr)
 void SharerProgressDelegate__ctor_m3908 (SharerProgressDelegate_t919 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerProgressDelegate::Invoke(System.String,System.Double)
 void SharerProgressDelegate_Invoke_m3909 (SharerProgressDelegate_t919 * __this, String_t* ___videoId, double ___progress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LuYou/SharerProgressDelegate::BeginInvoke(System.String,System.Double,System.AsyncCallback,System.Object)
 Object_t * SharerProgressDelegate_BeginInvoke_m3910 (SharerProgressDelegate_t919 * __this, String_t* ___videoId, double ___progress, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LuYou/SharerProgressDelegate::EndInvoke(System.IAsyncResult)
 void SharerProgressDelegate_EndInvoke_m3911 (SharerProgressDelegate_t919 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
