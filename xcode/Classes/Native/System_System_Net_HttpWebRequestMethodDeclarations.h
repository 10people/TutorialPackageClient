#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t6544;
// System.Uri
struct Uri_t6735;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t6530;
// System.Net.ICredentials
struct ICredentials_t7041;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t7176;
// System.Net.ServicePoint
struct ServicePoint_t6620;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t7078;
// System.Net.WebAsyncResult
struct WebAsyncResult_t7199;
// System.Exception
struct Exception_t972;
// System.Net.WebConnectionStream
struct WebConnectionStream_t7197;
// System.Net.WebConnectionData
struct WebConnectionData_t7202;
// System.Net.DecompressionMethods
#include "System_System_Net_DecompressionMethods.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
 void HttpWebRequest__ctor_m50015 (HttpWebRequest_t6544 * __this, Uri_t6735 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest__ctor_m50016 (HttpWebRequest_t6544 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
 void HttpWebRequest__cctor_m50017 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m50018 (HttpWebRequest_t6544 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
 Uri_t6735 * HttpWebRequest_get_Address_m50019 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.DecompressionMethods System.Net.HttpWebRequest::get_AutomaticDecompression()
 int32_t HttpWebRequest_get_AutomaticDecompression_m50020 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
 bool HttpWebRequest_get_InternalAllowBuffering_m50021 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
 X509CertificateCollection_t6530 * HttpWebRequest_get_ClientCertificates_m50022 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebRequest::get_ContentLength()
 int64_t HttpWebRequest_get_ContentLength_m50023 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
 void HttpWebRequest_set_InternalContentLength_m50024 (HttpWebRequest_t6544 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
 Object_t * HttpWebRequest_get_Credentials_m50025 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Credentials(System.Net.ICredentials)
 void HttpWebRequest_set_Credentials_m50026 (HttpWebRequest_t6544 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
 WebHeaderCollection_t7157 * HttpWebRequest_get_Headers_m50027 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
 bool HttpWebRequest_get_KeepAlive_m50028 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
 int32_t HttpWebRequest_get_ReadWriteTimeout_m50029 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Method()
 String_t* HttpWebRequest_get_Method_m50030 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
 Object_t * HttpWebRequest_get_Proxy_m50031 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_RequestUri()
 Uri_t6735 * HttpWebRequest_get_RequestUri_m50032 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
 bool HttpWebRequest_get_SendChunked_m50033 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
 ServicePoint_t6620 * HttpWebRequest_get_ServicePoint_m45781 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_TransferEncoding()
 String_t* HttpWebRequest_get_TransferEncoding_m50034 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
 bool HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m50035 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
 bool HttpWebRequest_get_ExpectContinue_m50036 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
 void HttpWebRequest_set_ExpectContinue_m50037 (HttpWebRequest_t6544 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_AuthUri()
 Uri_t6735 * HttpWebRequest_get_AuthUri_m50038 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
 bool HttpWebRequest_get_ProxyQuery_m50039 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
 ServicePoint_t6620 * HttpWebRequest_GetServicePoint_m50040 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckIfForceWrite()
 void HttpWebRequest_CheckIfForceWrite_m50041 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
 Object_t * HttpWebRequest_BeginGetResponse_m50042 (HttpWebRequest_t6544 * __this, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::EndGetResponse(System.IAsyncResult)
 WebResponse_t7078 * HttpWebRequest_EndGetResponse_m50043 (HttpWebRequest_t6544 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::GetResponse()
 WebResponse_t7078 * HttpWebRequest_GetResponse_m50044 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_FinishedReading()
 bool HttpWebRequest_get_FinishedReading_m50045 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
 void HttpWebRequest_set_FinishedReading_m50046 (HttpWebRequest_t6544 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_Aborted()
 bool HttpWebRequest_get_Aborted_m50047 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::Abort()
 void HttpWebRequest_Abort_m50048 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebRequest_GetObjectData_m50049 (HttpWebRequest_t6544 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
 void HttpWebRequest_DoContinueDelegate_m50050 (HttpWebRequest_t6544 * __this, int32_t ___statusCode, WebHeaderCollection_t7157 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::Redirect(System.Net.WebAsyncResult,System.Net.HttpStatusCode)
 bool HttpWebRequest_Redirect_m50051 (HttpWebRequest_t6544 * __this, WebAsyncResult_t7199 * ___result, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::GetHeaders()
 String_t* HttpWebRequest_GetHeaders_m50052 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
 void HttpWebRequest_DoPreAuthenticate_m50053 (HttpWebRequest_t6544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStreamError(System.Net.WebExceptionStatus,System.Exception)
 void HttpWebRequest_SetWriteStreamError_m50054 (HttpWebRequest_t6544 * __this, int32_t ___status, Exception_t972 * ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SendRequestHeaders(System.Boolean)
 void HttpWebRequest_SendRequestHeaders_m50055 (HttpWebRequest_t6544 * __this, bool ___propagate_error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStream(System.Net.WebConnectionStream)
 void HttpWebRequest_SetWriteStream_m50056 (HttpWebRequest_t6544 * __this, WebConnectionStream_t7197 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseError(System.Net.WebExceptionStatus,System.Exception,System.String)
 void HttpWebRequest_SetResponseError_m50057 (HttpWebRequest_t6544 * __this, int32_t ___status, Exception_t972 * ___e, String_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckSendError(System.Net.WebConnectionData)
 void HttpWebRequest_CheckSendError_m50058 (HttpWebRequest_t6544 * __this, WebConnectionData_t7202 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::HandleNtlmAuth(System.Net.WebAsyncResult)
 void HttpWebRequest_HandleNtlmAuth_m50059 (HttpWebRequest_t6544 * __this, WebAsyncResult_t7199 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseData(System.Net.WebConnectionData)
 void HttpWebRequest_SetResponseData_m50060 (HttpWebRequest_t6544 * __this, WebConnectionData_t7202 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
 bool HttpWebRequest_CheckAuthorization_m50061 (HttpWebRequest_t6544 * __this, WebResponse_t7078 * ___response, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckFinalStatus(System.Net.WebAsyncResult)
 bool HttpWebRequest_CheckFinalStatus_m50062 (HttpWebRequest_t6544 * __this, WebAsyncResult_t7199 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
