#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.AuthenticationManager
struct AuthenticationManager_t7151;
// System.Net.Authorization
struct Authorization_t7152;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t6621;
// System.Net.ICredentials
struct ICredentials_t7041;

// System.Void System.Net.AuthenticationManager::.cctor()
 void AuthenticationManager__cctor_m49708 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
 void AuthenticationManager_EnsureModules_m49709 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t7152 * AuthenticationManager_Authenticate_m49710 (Object_t * __this/* static, unused */, String_t* ___challenge, WebRequest_t6621 * ___request, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t7152 * AuthenticationManager_DoAuthenticate_m49711 (Object_t * __this/* static, unused */, String_t* ___challenge, WebRequest_t6621 * ___request, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
 Authorization_t7152 * AuthenticationManager_PreAuthenticate_m49712 (Object_t * __this/* static, unused */, WebRequest_t6621 * ___request, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
