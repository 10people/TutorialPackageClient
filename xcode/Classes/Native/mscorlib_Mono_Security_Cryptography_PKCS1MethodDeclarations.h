#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t7806;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Security.Cryptography.RSA
struct RSA_t6476;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t6455;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t6473;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
 void PKCS1__cctor_m53829 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
 bool PKCS1_Compare_m53830 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___array1, ByteU5BU5D_t1033* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
 ByteU5BU5D_t1033* PKCS1_I2OSP_m53831 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___x, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
 ByteU5BU5D_t1033* PKCS1_OS2IP_m53832 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t1033* PKCS1_RSAEP_m53833 (Object_t * __this/* static, unused */, RSA_t6476 * ___rsa, ByteU5BU5D_t1033* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t1033* PKCS1_RSASP1_m53834 (Object_t * __this/* static, unused */, RSA_t6476 * ___rsa, ByteU5BU5D_t1033* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
 ByteU5BU5D_t1033* PKCS1_RSAVP1_m53835 (Object_t * __this/* static, unused */, RSA_t6476 * ___rsa, ByteU5BU5D_t1033* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
 ByteU5BU5D_t1033* PKCS1_Encrypt_v15_m53836 (Object_t * __this/* static, unused */, RSA_t6476 * ___rsa, RandomNumberGenerator_t6455 * ___rng, ByteU5BU5D_t1033* ___M, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
 ByteU5BU5D_t1033* PKCS1_Sign_v15_m53837 (Object_t * __this/* static, unused */, RSA_t6476 * ___rsa, HashAlgorithm_t6473 * ___hash, ByteU5BU5D_t1033* ___hashValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
 bool PKCS1_Verify_v15_m53838 (Object_t * __this/* static, unused */, RSA_t6476 * ___rsa, HashAlgorithm_t6473 * ___hash, ByteU5BU5D_t1033* ___hashValue, ByteU5BU5D_t1033* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
 bool PKCS1_Verify_v15_m53839 (Object_t * __this/* static, unused */, RSA_t6476 * ___rsa, HashAlgorithm_t6473 * ___hash, ByteU5BU5D_t1033* ___hashValue, ByteU5BU5D_t1033* ___signature, bool ___tryNonStandardEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
 ByteU5BU5D_t1033* PKCS1_Encode_v15_m53840 (Object_t * __this/* static, unused */, HashAlgorithm_t6473 * ___hash, ByteU5BU5D_t1033* ___hashValue, int32_t ___emLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
