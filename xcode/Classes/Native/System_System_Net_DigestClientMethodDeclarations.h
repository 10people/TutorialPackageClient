#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DigestClient
struct DigestClient_t7170;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t7152;
// System.Net.WebRequest
struct WebRequest_t6621;
// System.Net.ICredentials
struct ICredentials_t7041;

// System.Void System.Net.DigestClient::.ctor()
 void DigestClient__ctor_m49841 (DigestClient_t7170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::.cctor()
 void DigestClient__cctor_m49842 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.DigestClient::get_Cache()
 Hashtable_t4372 * DigestClient_get_Cache_m49843 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::CheckExpired(System.Int32)
 void DigestClient_CheckExpired_m49844 (Object_t * __this/* static, unused */, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t7152 * DigestClient_Authenticate_m49845 (DigestClient_t7170 * __this, String_t* ___challenge, WebRequest_t6621 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t7152 * DigestClient_PreAuthenticate_m49846 (DigestClient_t7170 * __this, WebRequest_t6621 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestClient::get_AuthenticationType()
 String_t* DigestClient_get_AuthenticationType_m49847 (DigestClient_t7170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
