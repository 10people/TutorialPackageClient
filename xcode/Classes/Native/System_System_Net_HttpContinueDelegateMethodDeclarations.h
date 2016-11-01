#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t7196;
// System.Object
struct Object_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.HttpContinueDelegate::.ctor(System.Object,System.IntPtr)
 void HttpContinueDelegate__ctor_m51019 (HttpContinueDelegate_t7196 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::Invoke(System.Int32,System.Net.WebHeaderCollection)
 void HttpContinueDelegate_Invoke_m51020 (HttpContinueDelegate_t7196 * __this, int32_t ___StatusCode, WebHeaderCollection_t7157 * ___httpHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpContinueDelegate::BeginInvoke(System.Int32,System.Net.WebHeaderCollection,System.AsyncCallback,System.Object)
 Object_t * HttpContinueDelegate_BeginInvoke_m51021 (HttpContinueDelegate_t7196 * __this, int32_t ___StatusCode, WebHeaderCollection_t7157 * ___httpHeaders, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpContinueDelegate::EndInvoke(System.IAsyncResult)
 void HttpContinueDelegate_EndInvoke_m51022 (HttpContinueDelegate_t7196 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
