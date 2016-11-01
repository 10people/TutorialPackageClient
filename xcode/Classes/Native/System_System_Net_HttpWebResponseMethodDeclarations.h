#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebResponse
struct HttpWebResponse_t7198;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.String
struct String_t;
// System.Uri
struct Uri_t6735;
// System.Net.WebConnectionData
struct WebConnectionData_t7202;
// System.Net.CookieContainer
struct CookieContainer_t7164;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.IO.Stream
struct Stream_t1038;
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
 void HttpWebResponse__ctor_m50063 (HttpWebResponse_t7198 * __this, Uri_t6735 * ___uri, String_t* ___method, WebConnectionData_t7202 * ___data, CookieContainer_t7164 * ___container, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebResponse__ctor_m50064 (HttpWebResponse_t7198 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m50065 (HttpWebResponse_t7198 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
 void HttpWebResponse_System_IDisposable_Dispose_m50066 (HttpWebResponse_t7198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
 WebHeaderCollection_t7157 * HttpWebResponse_get_Headers_m50067 (HttpWebResponse_t7198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
 int32_t HttpWebResponse_get_StatusCode_m50068 (HttpWebResponse_t7198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
 String_t* HttpWebResponse_get_StatusDescription_m50069 (HttpWebResponse_t7198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
 void HttpWebResponse_ReadAll_m50070 (HttpWebResponse_t7198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
 Stream_t1038 * HttpWebResponse_GetResponseStream_m50071 (HttpWebResponse_t7198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HttpWebResponse_GetObjectData_m50072 (HttpWebResponse_t7198 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
 void HttpWebResponse_Close_m50073 (HttpWebResponse_t7198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
 void HttpWebResponse_Dispose_m50074 (HttpWebResponse_t7198 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
 void HttpWebResponse_CheckDisposed_m50075 (HttpWebResponse_t7198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
 void HttpWebResponse_FillCookies_m50076 (HttpWebResponse_t7198 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
 void HttpWebResponse_SetCookie_m50077 (HttpWebResponse_t7198 * __this, String_t* ___header, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
 void HttpWebResponse_SetCookie2_m50078 (HttpWebResponse_t7198 * __this, String_t* ___cookies_str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
 DateTime_t1171  HttpWebResponse_TryParseCookieExpires_m50079 (HttpWebResponse_t7198 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
