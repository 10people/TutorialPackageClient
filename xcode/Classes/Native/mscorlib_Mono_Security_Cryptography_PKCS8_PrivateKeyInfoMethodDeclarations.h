#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t7807;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Security.Cryptography.RSA
struct RSA_t6476;
// System.Security.Cryptography.DSA
struct DSA_t6478;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
 void PrivateKeyInfo__ctor_m53841 (PrivateKeyInfo_t7807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
 void PrivateKeyInfo__ctor_m53842 (PrivateKeyInfo_t7807 * __this, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
 ByteU5BU5D_t1033* PrivateKeyInfo_get_PrivateKey_m53843 (PrivateKeyInfo_t7807 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
 void PrivateKeyInfo_Decode_m53844 (PrivateKeyInfo_t7807 * __this, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
 ByteU5BU5D_t1033* PrivateKeyInfo_RemoveLeadingZero_m53845 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___bigInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
 ByteU5BU5D_t1033* PrivateKeyInfo_Normalize_m53846 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___bigInt, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
 RSA_t6476 * PrivateKeyInfo_DecodeRSA_m53847 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___keypair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
 DSA_t6478 * PrivateKeyInfo_DecodeDSA_m53848 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___privateKey, DSAParameters_t6479  ___dsaParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
