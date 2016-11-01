#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Store
struct X509Store_t6503;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t6490;
// System.Collections.ArrayList
struct ArrayList_t5157;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t6494;
// Mono.Security.X509.X509Crl
struct X509Crl_t6501;

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
 void X509Store__ctor_m45094 (X509Store_t6503 * __this, String_t* ___path, bool ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
 X509CertificateCollection_t6490 * X509Store_get_Certificates_m45095 (X509Store_t6503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
 ArrayList_t5157 * X509Store_get_Crls_m45096 (X509Store_t6503 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
 ByteU5BU5D_t1033* X509Store_Load_m45097 (X509Store_t6503 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
 X509Certificate_t6494 * X509Store_LoadCertificate_m45098 (X509Store_t6503 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
 X509Crl_t6501 * X509Store_LoadCrl_m45099 (X509Store_t6503 * __this, String_t* ___filename, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
 bool X509Store_CheckStore_m45100 (X509Store_t6503 * __this, String_t* ___path, bool ___throwException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
 X509CertificateCollection_t6490 * X509Store_BuildCertificatesCollection_m45101 (X509Store_t6503 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
 ArrayList_t5157 * X509Store_BuildCrlsCollection_m45102 (X509Store_t6503 * __this, String_t* ___storeName, MethodInfo* method) IL2CPP_METHOD_ATTR;
