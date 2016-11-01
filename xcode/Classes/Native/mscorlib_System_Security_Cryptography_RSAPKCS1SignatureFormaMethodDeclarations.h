#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t8134;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t6495;

// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::.ctor()
 void RSAPKCS1SignatureFormatter__ctor_m55927 (RSAPKCS1SignatureFormatter_t8134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1SignatureFormatter::CreateSignature(System.Byte[])
 ByteU5BU5D_t1033* RSAPKCS1SignatureFormatter_CreateSignature_m55928 (RSAPKCS1SignatureFormatter_t8134 * __this, ByteU5BU5D_t1033* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetHashAlgorithm(System.String)
 void RSAPKCS1SignatureFormatter_SetHashAlgorithm_m55929 (RSAPKCS1SignatureFormatter_t8134 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1SignatureFormatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1SignatureFormatter_SetKey_m55930 (RSAPKCS1SignatureFormatter_t8134 * __this, AsymmetricAlgorithm_t6495 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
