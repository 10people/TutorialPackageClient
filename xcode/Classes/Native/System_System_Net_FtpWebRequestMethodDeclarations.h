#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpWebRequest
struct FtpWebRequest_t7184;
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
// System.Net.ServicePoint
struct ServicePoint_t6620;
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
// System.Net.FtpStatus
struct FtpStatus_t7187;
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.String[]
struct StringU5BU5D_t333;
// System.IO.Stream
struct Stream_t1038;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6546;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t6623;
// System.Net.FtpWebRequest/RequestState
#include "System_System_Net_FtpWebRequest_RequestState.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
 void FtpWebRequest__ctor_m49943 (FtpWebRequest_t7184 * __this, Uri_t6735 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
 void FtpWebRequest__cctor_m49944 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::GetMustImplement()
 Exception_t972 * FtpWebRequest_GetMustImplement_m49945 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebRequest::get_ContentLength()
 int64_t FtpWebRequest_get_ContentLength_m49946 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FtpWebRequest::get_Credentials()
 Object_t * FtpWebRequest_get_Credentials_m49947 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Credentials(System.Net.ICredentials)
 void FtpWebRequest_set_Credentials_m49948 (FtpWebRequest_t7184 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_EnableSsl()
 bool FtpWebRequest_get_EnableSsl_m49949 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebRequest::get_Headers()
 WebHeaderCollection_t7157 * FtpWebRequest_get_Headers_m49950 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_Method()
 String_t* FtpWebRequest_get_Method_m49951 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FtpWebRequest::get_Proxy()
 Object_t * FtpWebRequest_get_Proxy_m49952 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpWebRequest::get_ReadWriteTimeout()
 int32_t FtpWebRequest_get_ReadWriteTimeout_m49953 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FtpWebRequest::get_RequestUri()
 Uri_t6735 * FtpWebRequest_get_RequestUri_m49954 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::get_ServicePoint()
 ServicePoint_t6620 * FtpWebRequest_get_ServicePoint_m49955 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_DataType()
 String_t* FtpWebRequest_get_DataType_m49956 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::get_State()
 int32_t FtpWebRequest_get_State_m49957 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_State(System.Net.FtpWebRequest/RequestState)
 void FtpWebRequest_set_State_m49958 (FtpWebRequest_t7184 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Abort()
 void FtpWebRequest_Abort_m49959 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
 Object_t * FtpWebRequest_BeginGetResponse_m49960 (FtpWebRequest_t7184 * __this, AsyncCallback_t15 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::EndGetResponse(System.IAsyncResult)
 WebResponse_t7078 * FtpWebRequest_EndGetResponse_m49961 (FtpWebRequest_t7184 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::GetResponse()
 WebResponse_t7078 * FtpWebRequest_GetResponse_m49962 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::GetServicePoint()
 ServicePoint_t6620 * FtpWebRequest_GetServicePoint_m49963 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ResolveHost()
 void FtpWebRequest_ResolveHost_m49964 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessRequest()
 void FtpWebRequest_ProcessRequest_m49965 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetType()
 void FtpWebRequest_SetType_m49966 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetRemoteFolderPath(System.Uri)
 String_t* FtpWebRequest_GetRemoteFolderPath_m49967 (FtpWebRequest_t7184 * __this, Uri_t6735 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CWDAndSetFileName(System.Uri)
 void FtpWebRequest_CWDAndSetFileName_m49968 (FtpWebRequest_t7184 * __this, Uri_t6735 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessMethod()
 void FtpWebRequest_ProcessMethod_m49969 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseControlConnection()
 void FtpWebRequest_CloseControlConnection_m49970 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseDataConnection()
 void FtpWebRequest_CloseDataConnection_m49971 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseConnection()
 void FtpWebRequest_CloseConnection_m49972 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessSimpleMethod()
 void FtpWebRequest_ProcessSimpleMethod_m49973 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::UploadData()
 void FtpWebRequest_UploadData_m49974 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::DownloadData()
 void FtpWebRequest_DownloadData_m49975 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckRequestStarted()
 void FtpWebRequest_CheckRequestStarted_m49976 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenControlConnection()
 void FtpWebRequest_OpenControlConnection_m49977 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetInitialPath(System.Net.FtpStatus)
 String_t* FtpWebRequest_GetInitialPath_m49978 (Object_t * __this/* static, unused */, FtpStatus_t7187 * ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::SetupPassiveConnection(System.String)
 Socket_t4375 * FtpWebRequest_SetupPassiveConnection_m49979 (FtpWebRequest_t7184 * __this, String_t* ___statusDescription, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::CreateExceptionFromResponse(System.Net.FtpStatus)
 Exception_t972 * FtpWebRequest_CreateExceptionFromResponse_m49980 (FtpWebRequest_t7184 * __this, FtpStatus_t7187 * ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetTransferCompleted()
 void FtpWebRequest_SetTransferCompleted_m49981 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OperationCompleted()
 void FtpWebRequest_OperationCompleted_m49982 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetCompleteWithError(System.Exception)
 void FtpWebRequest_SetCompleteWithError_m49983 (FtpWebRequest_t7184 * __this, Exception_t972 * ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::InitDataConnection()
 Socket_t4375 * FtpWebRequest_InitDataConnection_m49984 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenDataConnection()
 void FtpWebRequest_OpenDataConnection_m49985 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Authenticate()
 void FtpWebRequest_Authenticate_m49986 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.String,System.String[])
 FtpStatus_t7187 * FtpWebRequest_SendCommand_m49987 (FtpWebRequest_t7184 * __this, String_t* ___command, StringU5BU5D_t333* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.Boolean,System.String,System.String[])
 FtpStatus_t7187 * FtpWebRequest_SendCommand_m49988 (FtpWebRequest_t7184 * __this, bool ___waitResponse, String_t* ___command, StringU5BU5D_t333* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::ServiceNotAvailable()
 FtpStatus_t7187 * FtpWebRequest_ServiceNotAvailable_m49989 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::GetResponseStatus()
 FtpStatus_t7187 * FtpWebRequest_GetResponseStatus_m49990 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::InitiateSecureConnection(System.IO.Stream&)
 void FtpWebRequest_InitiateSecureConnection_m49991 (FtpWebRequest_t7184 * __this, Stream_t1038 ** ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::ChangeToSSLSocket(System.IO.Stream&)
 bool FtpWebRequest_ChangeToSSLSocket_m49992 (FtpWebRequest_t7184 * __this, Stream_t1038 ** ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InFinalState()
 bool FtpWebRequest_InFinalState_m49993 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InProgress()
 bool FtpWebRequest_InProgress_m49994 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckIfAborted()
 void FtpWebRequest_CheckIfAborted_m49995 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckFinalState()
 void FtpWebRequest_CheckFinalState_m49996 (FtpWebRequest_t7184 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
 bool FtpWebRequest_U3CcallbackU3Em__B_m49997 (Object_t * __this/* static, unused */, Object_t * ___sender, X509Certificate_t6546 * ___certificate, X509Chain_t6623 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
