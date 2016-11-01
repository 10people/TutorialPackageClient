#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebAsyncResult
struct WebAsyncResult_t7199;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t5906;
// System.Exception
struct Exception_t972;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.Net.HttpWebResponse
struct HttpWebResponse_t7198;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Net.HttpWebRequest
struct HttpWebRequest_t6544;
// System.IO.Stream
struct Stream_t1038;

// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object)
 void WebAsyncResult__ctor_m50197 (WebAsyncResult_t7199 * __this, AsyncCallback_t15 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.Net.HttpWebRequest,System.AsyncCallback,System.Object)
 void WebAsyncResult__ctor_m50198 (WebAsyncResult_t7199 * __this, HttpWebRequest_t6544 * ___request, AsyncCallback_t15 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32)
 void WebAsyncResult__ctor_m50199 (WebAsyncResult_t7199 * __this, AsyncCallback_t15 * ___cb, Object_t * ___state, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Exception)
 void WebAsyncResult_SetCompleted_m50200 (WebAsyncResult_t7199 * __this, bool ___synch, Exception_t972 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::Reset()
 void WebAsyncResult_Reset_m50201 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Int32)
 void WebAsyncResult_SetCompleted_m50202 (WebAsyncResult_t7199 * __this, bool ___synch, int32_t ___nbytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.IO.Stream)
 void WebAsyncResult_SetCompleted_m50203 (WebAsyncResult_t7199 * __this, bool ___synch, Stream_t1038 * ___writeStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Net.HttpWebResponse)
 void WebAsyncResult_SetCompleted_m50204 (WebAsyncResult_t7199 * __this, bool ___synch, HttpWebResponse_t7198 * ___response, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::DoCallback()
 void WebAsyncResult_DoCallback_m50205 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::WaitUntilComplete()
 void WebAsyncResult_WaitUntilComplete_m50206 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
 bool WebAsyncResult_WaitUntilComplete_m50207 (WebAsyncResult_t7199 * __this, int32_t ___timeout, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.WebAsyncResult::get_AsyncState()
 Object_t * WebAsyncResult_get_AsyncState_m50208 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.WebAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t5906 * WebAsyncResult_get_AsyncWaitHandle_m50209 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_IsCompleted()
 bool WebAsyncResult_get_IsCompleted_m50210 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_GotException()
 bool WebAsyncResult_get_GotException_m50211 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebAsyncResult::get_Exception()
 Exception_t972 * WebAsyncResult_get_Exception_m50212 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_NBytes()
 int32_t WebAsyncResult_get_NBytes_m50213 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_NBytes(System.Int32)
 void WebAsyncResult_set_NBytes_m50214 (WebAsyncResult_t7199 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebAsyncResult::get_InnerAsyncResult()
 Object_t * WebAsyncResult_get_InnerAsyncResult_m50215 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_InnerAsyncResult(System.IAsyncResult)
 void WebAsyncResult_set_InnerAsyncResult_m50216 (WebAsyncResult_t7199 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebResponse System.Net.WebAsyncResult::get_Response()
 HttpWebResponse_t7198 * WebAsyncResult_get_Response_m50217 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebAsyncResult::get_Buffer()
 ByteU5BU5D_t1033* WebAsyncResult_get_Buffer_m50218 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Offset()
 int32_t WebAsyncResult_get_Offset_m50219 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Size()
 int32_t WebAsyncResult_get_Size_m50220 (WebAsyncResult_t7199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
