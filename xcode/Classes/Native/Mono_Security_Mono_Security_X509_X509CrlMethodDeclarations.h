#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t6501;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t6493;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t6500;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t6494;
// System.Security.Cryptography.DSA
struct DSA_t6478;
// System.Security.Cryptography.RSA
struct RSA_t6476;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t6495;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
 void X509Crl__ctor_m45065 (X509Crl_t6501 * __this, ByteU5BU5D_t1033* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
 void X509Crl_Parse_m45066 (X509Crl_t6501 * __this, ByteU5BU5D_t1033* ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
 X509ExtensionCollection_t6493 * X509Crl_get_Extensions_m45067 (X509Crl_t6501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
 ByteU5BU5D_t1033* X509Crl_get_Hash_m45068 (X509Crl_t6501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
 String_t* X509Crl_get_IssuerName_m45069 (X509Crl_t6501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
 DateTime_t1171  X509Crl_get_NextUpdate_m45070 (X509Crl_t6501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
 bool X509Crl_Compare_m45071 (X509Crl_t6501 * __this, ByteU5BU5D_t1033* ___array1, ByteU5BU5D_t1033* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
 X509CrlEntry_t6500 * X509Crl_GetCrlEntry_m45072 (X509Crl_t6501 * __this, X509Certificate_t6494 * ___x509, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
 X509CrlEntry_t6500 * X509Crl_GetCrlEntry_m45073 (X509Crl_t6501 * __this, ByteU5BU5D_t1033* ___serialNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
 String_t* X509Crl_GetHashName_m45074 (X509Crl_t6501 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
 bool X509Crl_VerifySignature_m45075 (X509Crl_t6501 * __this, DSA_t6478 * ___dsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
 bool X509Crl_VerifySignature_m45076 (X509Crl_t6501 * __this, RSA_t6476 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Crl_VerifySignature_m45077 (X509Crl_t6501 * __this, AsymmetricAlgorithm_t6495 * ___aa, MethodInfo* method) IL2CPP_METHOD_ATTR;
