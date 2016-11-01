#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t7818;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t7826;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.ASN1
struct ASN1_t7813;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
 void EncryptedData__ctor_m54003 (EncryptedData_t7818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
 void EncryptedData__ctor_m54004 (EncryptedData_t7818 * __this, ASN1_t7813 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
 ContentInfo_t7826 * EncryptedData_get_EncryptionAlgorithm_m54005 (EncryptedData_t7818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
 ByteU5BU5D_t1033* EncryptedData_get_EncryptedContent_m54006 (EncryptedData_t7818 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
