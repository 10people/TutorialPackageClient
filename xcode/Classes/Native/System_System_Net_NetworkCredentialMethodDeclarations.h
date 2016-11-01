#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.NetworkCredential
struct NetworkCredential_t7190;
// System.String
struct String_t;
// System.Uri
struct Uri_t6735;

// System.String System.Net.NetworkCredential::get_Domain()
 String_t* NetworkCredential_get_Domain_m50140 (NetworkCredential_t7190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_UserName()
 String_t* NetworkCredential_get_UserName_m50141 (NetworkCredential_t7190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkCredential::get_Password()
 String_t* NetworkCredential_get_Password_m50142 (NetworkCredential_t7190 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkCredential System.Net.NetworkCredential::GetCredential(System.Uri,System.String)
 NetworkCredential_t7190 * NetworkCredential_GetCredential_m50143 (NetworkCredential_t7190 * __this, Uri_t6735 * ___uri, String_t* ___authType, MethodInfo* method) IL2CPP_METHOD_ATTR;
