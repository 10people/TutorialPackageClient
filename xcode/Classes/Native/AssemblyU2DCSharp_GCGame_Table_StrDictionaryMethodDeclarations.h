#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.StrDictionary
struct StrDictionary_t1164;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t142;

// System.Void GCGame.Table.StrDictionary::.ctor()
 void StrDictionary__ctor_m6940 (StrDictionary_t1164 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.StrDictionary::GetClientString_WithNameSex(System.String)
 String_t* StrDictionary_GetClientString_WithNameSex_m6941 (Object_t * __this/* static, unused */, String_t* ___ClientStr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.StrDictionary::GetClientDictionaryString_WithNameSex(System.String,System.Object[])
 String_t* StrDictionary_GetClientDictionaryString_WithNameSex_m6942 (Object_t * __this/* static, unused */, String_t* ___ClientDictionaryStr, ObjectU5BU5D_t142* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.StrDictionary::GetClientDictionaryString(System.String,System.Object[])
 String_t* StrDictionary_GetClientDictionaryString_m6943 (Object_t * __this/* static, unused */, String_t* ___ClientDictionaryStr, ObjectU5BU5D_t142* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.StrDictionary::GetClientDictionaryString(System.String,System.String&,System.Object[])
 int32_t StrDictionary_GetClientDictionaryString_m6944 (Object_t * __this/* static, unused */, String_t* ___ClientDictionaryStr, String_t** ___szResult, ObjectU5BU5D_t142* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.StrDictionary::GetServerDictionaryFormatString(System.String)
 String_t* StrDictionary_GetServerDictionaryFormatString_m6945 (Object_t * __this/* static, unused */, String_t* ___ServerSendedDictionaryStr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.StrDictionary::GetServerDictionaryFormatString(System.String,System.String&)
 int32_t StrDictionary_GetServerDictionaryFormatString_m6946 (Object_t * __this/* static, unused */, String_t* ___ServerSendedDictionaryStr, String_t** ___szResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
