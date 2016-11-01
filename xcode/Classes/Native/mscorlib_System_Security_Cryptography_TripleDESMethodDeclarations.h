#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDES
struct TripleDES_t6615;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.String
struct String_t;

// System.Byte[] System.Security.Cryptography.TripleDES::get_Key()
 ByteU5BU5D_t1033* TripleDES_get_Key_m56036 (TripleDES_t6615 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDES::set_Key(System.Byte[])
 void TripleDES_set_Key_m56037 (TripleDES_t6615 * __this, ByteU5BU5D_t1033* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.TripleDES::IsWeakKey(System.Byte[])
 bool TripleDES_IsWeakKey_m56038 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create()
 TripleDES_t6615 * TripleDES_Create_m45757 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create(System.String)
 TripleDES_t6615 * TripleDES_Create_m56039 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
