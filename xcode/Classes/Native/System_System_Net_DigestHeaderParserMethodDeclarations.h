#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DigestHeaderParser
struct DigestHeaderParser_t7168;
// System.String
struct String_t;

// System.Void System.Net.DigestHeaderParser::.ctor(System.String)
 void DigestHeaderParser__ctor_m49815 (DigestHeaderParser_t7168 * __this, String_t* ___header, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestHeaderParser::.cctor()
 void DigestHeaderParser__cctor_m49816 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Realm()
 String_t* DigestHeaderParser_get_Realm_m49817 (DigestHeaderParser_t7168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Opaque()
 String_t* DigestHeaderParser_get_Opaque_m49818 (DigestHeaderParser_t7168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Nonce()
 String_t* DigestHeaderParser_get_Nonce_m49819 (DigestHeaderParser_t7168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_Algorithm()
 String_t* DigestHeaderParser_get_Algorithm_m49820 (DigestHeaderParser_t7168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::get_QOP()
 String_t* DigestHeaderParser_get_QOP_m49821 (DigestHeaderParser_t7168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestHeaderParser::Parse()
 bool DigestHeaderParser_Parse_m49822 (DigestHeaderParser_t7168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestHeaderParser::SkipWhitespace()
 void DigestHeaderParser_SkipWhitespace_m49823 (DigestHeaderParser_t7168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestHeaderParser::GetKey()
 String_t* DigestHeaderParser_GetKey_m49824 (DigestHeaderParser_t7168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestHeaderParser::GetKeywordAndValue(System.String&,System.String&)
 bool DigestHeaderParser_GetKeywordAndValue_m49825 (DigestHeaderParser_t7168 * __this, String_t** ___key, String_t** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
