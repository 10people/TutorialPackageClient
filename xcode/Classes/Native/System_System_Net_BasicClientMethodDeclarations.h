#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.BasicClient
struct BasicClient_t7154;
// System.String
struct String_t;
// System.Net.Authorization
struct Authorization_t7152;
// System.Net.WebRequest
struct WebRequest_t6621;
// System.Net.ICredentials
struct ICredentials_t7041;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Net.BasicClient::.ctor()
 void BasicClient__ctor_m49720 (BasicClient_t7154 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t7152 * BasicClient_Authenticate_m49721 (BasicClient_t7154 * __this, String_t* ___challenge, WebRequest_t6621 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
 ByteU5BU5D_t1033* BasicClient_GetBytes_m49722 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t7152 * BasicClient_InternalAuthenticate_m49723 (Object_t * __this/* static, unused */, WebRequest_t6621 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t7152 * BasicClient_PreAuthenticate_m49724 (BasicClient_t7154 * __this, WebRequest_t6621 * ___webRequest, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
 String_t* BasicClient_get_AuthenticationType_m49725 (BasicClient_t7154 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
