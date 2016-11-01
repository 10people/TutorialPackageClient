#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t6465;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t6464;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.ASN1
struct ASN1_t6461;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m44885 (EncryptedData_t6465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m44886 (EncryptedData_t6465 * __this, ASN1_t6461 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t6464 * EncryptedData_get_EncryptionAlgorithm_m44887 (EncryptedData_t6465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t1033* EncryptedData_get_EncryptedContent_m44888 (EncryptedData_t6465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
