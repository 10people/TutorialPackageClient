#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.CookieParser
struct CookieParser_t7203;
// System.String
struct String_t;

// System.Void System.Net.CookieParser::.ctor(System.String)
 void CookieParser__ctor_m50080 (CookieParser_t7203 * __this, String_t* ___header, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieParser::.ctor(System.String,System.Int32)
 void CookieParser__ctor_m50081 (CookieParser_t7203 * __this, String_t* ___header, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieParser::GetNextNameValue(System.String&,System.String&)
 bool CookieParser_GetNextNameValue_m50082 (CookieParser_t7203 * __this, String_t** ___name, String_t** ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieParser::GetCookieName()
 String_t* CookieParser_GetCookieName_m50083 (CookieParser_t7203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieParser::GetCookieValue()
 String_t* CookieParser_GetCookieValue_m50084 (CookieParser_t7203 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
