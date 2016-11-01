#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpWebResponse
struct FtpWebResponse_t7180;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t1038;
// System.Net.FtpWebRequest
struct FtpWebRequest_t7184;
// System.Uri
struct Uri_t6735;
// System.Net.FtpStatus
struct FtpStatus_t7187;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.FtpStatusCode
#include "System_System_Net_FtpStatusCode.h"

// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
 void FtpWebResponse__ctor_m49998 (FtpWebResponse_t7180 * __this, FtpWebRequest_t7184 * ___request, Uri_t6735 * ___uri, String_t* ___method, bool ___keepAlive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
 void FtpWebResponse__ctor_m49999 (FtpWebResponse_t7180 * __this, FtpWebRequest_t7184 * ___request, Uri_t6735 * ___uri, String_t* ___method, int32_t ___statusCode, String_t* ___statusDescription, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
 void FtpWebResponse__ctor_m50000 (FtpWebResponse_t7180 * __this, FtpWebRequest_t7184 * ___request, Uri_t6735 * ___uri, String_t* ___method, FtpStatus_t7187 * ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
 WebHeaderCollection_t7157 * FtpWebResponse_get_Headers_m50001 (FtpWebResponse_t7180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
 void FtpWebResponse_set_LastModified_m50002 (FtpWebResponse_t7180 * __this, DateTime_t1171  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
 void FtpWebResponse_set_BannerMessage_m50003 (FtpWebResponse_t7180 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
 void FtpWebResponse_set_WelcomeMessage_m50004 (FtpWebResponse_t7180 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::Close()
 void FtpWebResponse_Close_m50005 (FtpWebResponse_t7180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
 Stream_t1038 * FtpWebResponse_GetResponseStream_m50006 (FtpWebResponse_t7180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
 void FtpWebResponse_set_Stream_m50007 (FtpWebResponse_t7180 * __this, Stream_t1038 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
 void FtpWebResponse_UpdateStatus_m50008 (FtpWebResponse_t7180 * __this, FtpStatus_t7187 * ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::CheckDisposed()
 void FtpWebResponse_CheckDisposed_m50009 (FtpWebResponse_t7180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebResponse::IsFinal()
 bool FtpWebResponse_IsFinal_m50010 (FtpWebResponse_t7180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
