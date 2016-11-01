#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DigestSession
struct DigestSession_t7169;
// System.String
struct String_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t6544;
// System.Net.Authorization
struct Authorization_t7152;
// System.Net.WebRequest
struct WebRequest_t6621;
// System.Net.ICredentials
struct ICredentials_t7041;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.DigestSession::.ctor()
 void DigestSession__ctor_m49826 (DigestSession_t7169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestSession::.cctor()
 void DigestSession__cctor_m49827 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Algorithm()
 String_t* DigestSession_get_Algorithm_m49828 (DigestSession_t7169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Realm()
 String_t* DigestSession_get_Realm_m49829 (DigestSession_t7169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Nonce()
 String_t* DigestSession_get_Nonce_m49830 (DigestSession_t7169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Opaque()
 String_t* DigestSession_get_Opaque_m49831 (DigestSession_t7169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_QOP()
 String_t* DigestSession_get_QOP_m49832 (DigestSession_t7169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_CNonce()
 String_t* DigestSession_get_CNonce_m49833 (DigestSession_t7169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestSession::Parse(System.String)
 bool DigestSession_Parse_m49834 (DigestSession_t7169 * __this, String_t* ___challenge, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HashToHexString(System.String)
 String_t* DigestSession_HashToHexString_m49835 (DigestSession_t7169 * __this, String_t* ___toBeHashed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA1(System.String,System.String)
 String_t* DigestSession_HA1_m49836 (DigestSession_t7169 * __this, String_t* ___username, String_t* ___password, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA2(System.Net.HttpWebRequest)
 String_t* DigestSession_HA2_m49837 (DigestSession_t7169 * __this, HttpWebRequest_t6544 * ___webRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::Response(System.String,System.String,System.Net.HttpWebRequest)
 String_t* DigestSession_Response_m49838 (DigestSession_t7169 * __this, String_t* ___username, String_t* ___password, HttpWebRequest_t6544 * ___webRequest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestSession::Authenticate(System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t7152 * DigestSession_Authenticate_m49839 (DigestSession_t7169 * __this, WebRequest_t6621 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.DigestSession::get_LastUse()
 DateTime_t1171  DigestSession_get_LastUse_m49840 (DigestSession_t7169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
