#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t7229;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t7227;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t6495;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t6494;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Security.Cryptography.DSA
struct DSA_t6478;
// System.Security.Cryptography.RSA
struct RSA_t6476;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
 void PublicKey__ctor_m50403 (PublicKey_t7229 * __this, X509Certificate_t6494 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
 AsnEncodedData_t7227 * PublicKey_get_EncodedKeyValue_m50404 (PublicKey_t7229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
 AsnEncodedData_t7227 * PublicKey_get_EncodedParameters_m50405 (PublicKey_t7229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
 AsymmetricAlgorithm_t6495 * PublicKey_get_Key_m50406 (PublicKey_t7229 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t1033* PublicKey_GetUnsignedBigInteger_m50407 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
 DSA_t6478 * PublicKey_DecodeDSA_m50408 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___rawPublicKey, ByteU5BU5D_t1033* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
 RSA_t6476 * PublicKey_DecodeRSA_m50409 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
