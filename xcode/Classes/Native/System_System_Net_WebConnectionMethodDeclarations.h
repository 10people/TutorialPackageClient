#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnection
struct WebConnection_t7201;
// System.Net.HttpWebRequest
struct HttpWebRequest_t6544;
// System.Net.NetworkCredential
struct NetworkCredential_t7190;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t7209;
// System.Net.ServicePoint
struct ServicePoint_t6620;
// System.Exception
struct Exception_t972;
// System.IO.Stream
struct Stream_t1038;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t14;
// System.Object
struct Object_t;
// System.EventHandler
struct EventHandler_t7200;
// System.AsyncCallback
struct AsyncCallback_t15;
// System.EventArgs
struct EventArgs_t5207;
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"

// System.Void System.Net.WebConnection::.ctor(System.Net.WebConnectionGroup,System.Net.ServicePoint)
 void WebConnection__ctor_m50223 (WebConnection_t7201 * __this, WebConnectionGroup_t7209 * ___group, ServicePoint_t6620 * ___sPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::.cctor()
 void WebConnection__cctor_m50224 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CanReuse()
 bool WebConnection_CanReuse_m50225 (WebConnection_t7201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::LoggedThrow(System.Exception)
 void WebConnection_LoggedThrow_m50226 (WebConnection_t7201 * __this, Exception_t972 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::CheckUnityWebSecurity(System.Net.HttpWebRequest)
 void WebConnection_CheckUnityWebSecurity_m50227 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Connect(System.Net.HttpWebRequest)
 void WebConnection_Connect_m50228 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EnsureSSLStreamAvailable()
 void WebConnection_EnsureSSLStreamAvailable_m50229 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateTunnel(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&)
 bool WebConnection_CreateTunnel_m50230 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, Stream_t1038 * ___stream, ByteU5BU5D_t1033** ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebConnection::ReadHeaders(System.Net.HttpWebRequest,System.IO.Stream,System.Byte[]&,System.Int32&)
 WebHeaderCollection_t7157 * WebConnection_ReadHeaders_m50231 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, Stream_t1038 * ___stream, ByteU5BU5D_t1033** ___retBuffer, int32_t* ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CreateStream(System.Net.HttpWebRequest)
 bool WebConnection_CreateStream_m50232 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::HandleError(System.Net.WebExceptionStatus,System.Exception,System.String)
 void WebConnection_HandleError_m50233 (WebConnection_t7201 * __this, int32_t ___st, Exception_t972 * ___e, String_t* ___where, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ReadDone(System.IAsyncResult)
 void WebConnection_ReadDone_m50234 (Object_t * __this/* static, unused */, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ExpectContent(System.Int32)
 bool WebConnection_ExpectContent_m50235 (Object_t * __this/* static, unused */, int32_t ___statusCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::GetCertificates()
 void WebConnection_GetCertificates_m50236 (WebConnection_t7201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitRead(System.Object)
 void WebConnection_InitRead_m50237 (Object_t * __this/* static, unused */, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::GetResponse(System.Byte[],System.Int32)
 int32_t WebConnection_GetResponse_m50238 (WebConnection_t7201 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::InitConnection(System.Object)
 void WebConnection_InitConnection_m50239 (WebConnection_t7201 * __this, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.WebConnection::SendRequest(System.Net.HttpWebRequest)
 EventHandler_t7200 * WebConnection_SendRequest_m50240 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::SendNext()
 void WebConnection_SendNext_m50241 (WebConnection_t7201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::NextRead()
 void WebConnection_NextRead_m50242 (WebConnection_t7201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::ReadLine(System.Byte[],System.Int32&,System.Int32,System.String&)
 bool WebConnection_ReadLine_m50243 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___buffer, int32_t* ___start, int32_t ___max, String_t** ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginRead(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WebConnection_BeginRead_m50244 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t15 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EndRead(System.Net.HttpWebRequest,System.IAsyncResult)
 int32_t WebConnection_EndRead_m50245 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::EnsureRead(System.Byte[],System.Int32,System.Int32)
 int32_t WebConnection_EnsureRead_m50246 (WebConnection_t7201 * __this, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::CompleteChunkedRead()
 bool WebConnection_CompleteChunkedRead_m50247 (WebConnection_t7201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebConnection::BeginWrite(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * WebConnection_BeginWrite_m50248 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t15 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::EndWrite2(System.Net.HttpWebRequest,System.IAsyncResult)
 void WebConnection_EndWrite2_m50249 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::EndWrite(System.Net.HttpWebRequest,System.IAsyncResult)
 bool WebConnection_EndWrite_m50250 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebConnection::Read(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32)
 int32_t WebConnection_Read_m50251 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::Write(System.Net.HttpWebRequest,System.Byte[],System.Int32,System.Int32,System.String&)
 bool WebConnection_Write_m50252 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___request, ByteU5BU5D_t1033* ___buffer, int32_t ___offset, int32_t ___size, String_t** ___err_msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Close(System.Boolean)
 void WebConnection_Close_m50253 (WebConnection_t7201 * __this, bool ___sendNext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::Abort(System.Object,System.EventArgs)
 void WebConnection_Abort_m50254 (WebConnection_t7201 * __this, Object_t * ___sender, EventArgs_t5207 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::ResetNtlm()
 void WebConnection_ResetNtlm_m50255 (WebConnection_t7201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_Busy()
 bool WebConnection_get_Busy_m50256 (WebConnection_t7201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_PriorityRequest(System.Net.HttpWebRequest)
 void WebConnection_set_PriorityRequest_m50257 (WebConnection_t7201 * __this, HttpWebRequest_t6544 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_NtlmAuthenticated()
 bool WebConnection_get_NtlmAuthenticated_m50258 (WebConnection_t7201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmAuthenticated(System.Boolean)
 void WebConnection_set_NtlmAuthenticated_m50259 (WebConnection_t7201 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.WebConnection::get_NtlmCredential()
 NetworkCredential_t7190 * WebConnection_get_NtlmCredential_m50260 (WebConnection_t7201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_NtlmCredential(System.Net.NetworkCredential)
 void WebConnection_set_NtlmCredential_m50261 (WebConnection_t7201 * __this, NetworkCredential_t7190 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebConnection::get_UnsafeAuthenticatedConnectionSharing()
 bool WebConnection_get_UnsafeAuthenticatedConnectionSharing_m50262 (WebConnection_t7201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnection::set_UnsafeAuthenticatedConnectionSharing(System.Boolean)
 void WebConnection_set_UnsafeAuthenticatedConnectionSharing_m50263 (WebConnection_t7201 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
