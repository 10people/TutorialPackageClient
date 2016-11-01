#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequest
struct FileWebRequest_t7173;
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
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebRequest::.ctor(System.Uri)
 void FileWebRequest__ctor_m49863 (FileWebRequest_t7173 * __this, Uri_t6735 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebRequest__ctor_m49864 (FileWebRequest_t7173 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m49865 (FileWebRequest_t7173 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FileWebRequest::get_ContentLength()
 int64_t FileWebRequest_get_ContentLength_m49866 (FileWebRequest_t7173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FileWebRequest::get_Credentials()
 Object_t * FileWebRequest_get_Credentials_m49867 (FileWebRequest_t7173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::set_Credentials(System.Net.ICredentials)
 void FileWebRequest_set_Credentials_m49868 (FileWebRequest_t7173 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebRequest::get_Headers()
 WebHeaderCollection_t7157 * FileWebRequest_get_Headers_m49869 (FileWebRequest_t7173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FileWebRequest::get_Method()
 String_t* FileWebRequest_get_Method_m49870 (FileWebRequest_t7173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FileWebRequest::get_Proxy()
 Object_t * FileWebRequest_get_Proxy_m49871 (FileWebRequest_t7173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FileWebRequest::get_RequestUri()
 Uri_t6735 * FileWebRequest_get_RequestUri_m49872 (FileWebRequest_t7173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FileWebRequest::GetMustImplement()
 Exception_t972 * FileWebRequest_GetMustImplement_m49873 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Abort()
 void FileWebRequest_Abort_m49874 (FileWebRequest_t7173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FileWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
 Object_t * FileWebRequest_BeginGetResponse_m49875 (FileWebRequest_t7173 * __this, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::EndGetResponse(System.IAsyncResult)
 WebResponse_t7078 * FileWebRequest_EndGetResponse_m49876 (FileWebRequest_t7173 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponse()
 WebResponse_t7078 * FileWebRequest_GetResponse_m49877 (FileWebRequest_t7173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FileWebRequest::GetResponseInternal()
 WebResponse_t7078 * FileWebRequest_GetResponseInternal_m49878 (FileWebRequest_t7173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebRequest_GetObjectData_m49879 (FileWebRequest_t7173 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest::Close()
 void FileWebRequest_Close_m49880 (FileWebRequest_t7173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
