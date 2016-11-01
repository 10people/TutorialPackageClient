#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebRequest
struct WebRequest_t6621;
// System.Net.ICredentials
struct ICredentials_t7041;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t7176;
// System.Uri
struct Uri_t6735;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Exception
struct Exception_t972;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t7078;
// System.Net.IWebRequestCreate
struct IWebRequestCreate_t7221;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebRequest::.ctor()
 void WebRequest__ctor_m50363 (WebRequest_t6621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest__ctor_m50364 (WebRequest_t6621 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
 void WebRequest__cctor_m50365 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m50366 (WebRequest_t6621 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
 void WebRequest_AddDynamicPrefix_m50367 (Object_t * __this/* static, unused */, String_t* ___protocol, String_t* ___implementor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
 Exception_t972 * WebRequest_GetMustImplement_m50368 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebRequest::get_ContentLength()
 int64_t WebRequest_get_ContentLength_m50369 (WebRequest_t6621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebRequest::get_Credentials()
 Object_t * WebRequest_get_Credentials_m50370 (WebRequest_t6621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials)
 void WebRequest_set_Credentials_m49300 (WebRequest_t6621 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
 WebHeaderCollection_t7157 * WebRequest_get_Headers_m50371 (WebRequest_t6621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_Method()
 String_t* WebRequest_get_Method_m50372 (WebRequest_t6621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
 Object_t * WebRequest_get_Proxy_m50373 (WebRequest_t6621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebRequest::get_RequestUri()
 Uri_t6735 * WebRequest_get_RequestUri_m50374 (WebRequest_t6621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
 Object_t * WebRequest_get_DefaultWebProxy_m50375 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
 Object_t * WebRequest_GetDefaultWebProxy_m50376 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::Abort()
 void WebRequest_Abort_m50377 (WebRequest_t6621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
 Object_t * WebRequest_BeginGetResponse_m50378 (WebRequest_t6621 * __this, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
 WebRequest_t6621 * WebRequest_Create_m49299 (Object_t * __this/* static, unused */, Uri_t6735 * ___requestUri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult)
 WebResponse_t7078 * WebRequest_EndGetResponse_m50379 (WebRequest_t6621 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::GetResponse()
 WebResponse_t7078 * WebRequest_GetResponse_m49301 (WebRequest_t6621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebRequest_GetObjectData_m50380 (WebRequest_t6621 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebRequestCreate System.Net.WebRequest::GetCreator(System.String)
 Object_t * WebRequest_GetCreator_m50381 (Object_t * __this/* static, unused */, String_t* ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
 void WebRequest_AddPrefix_m50382 (Object_t * __this/* static, unused */, String_t* ___prefix, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
