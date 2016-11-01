#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Certificate
struct X509Certificate_t7821;
// System.Security.Cryptography.DSA
struct DSA_t6478;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.ASN1
struct ASN1_t7813;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
 void X509Certificate__ctor_m53929 (X509Certificate_t7821 * __this, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
 void X509Certificate__cctor_m53930 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
 void X509Certificate_Parse_m53931 (X509Certificate_t7821 * __this, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t1033* X509Certificate_GetUnsignedBigInteger_m53932 (X509Certificate_t7821 * __this, ByteU5BU5D_t1033* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
 DSA_t6478 * X509Certificate_get_DSA_m53933 (X509Certificate_t7821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
 String_t* X509Certificate_get_IssuerName_m53934 (X509Certificate_t7821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
 ByteU5BU5D_t1033* X509Certificate_get_KeyAlgorithmParameters_m53935 (X509Certificate_t7821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
 ByteU5BU5D_t1033* X509Certificate_get_PublicKey_m53936 (X509Certificate_t7821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
 ByteU5BU5D_t1033* X509Certificate_get_RawData_m53937 (X509Certificate_t7821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
 String_t* X509Certificate_get_SubjectName_m53938 (X509Certificate_t7821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
 DateTime_t1171  X509Certificate_get_ValidFrom_m53939 (X509Certificate_t7821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
 DateTime_t1171  X509Certificate_get_ValidUntil_m53940 (X509Certificate_t7821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
 ASN1_t7813 * X509Certificate_GetIssuerName_m53941 (X509Certificate_t7821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
 ASN1_t7813 * X509Certificate_GetSubjectName_m53942 (X509Certificate_t7821 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void X509Certificate_GetObjectData_m53943 (X509Certificate_t7821 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
 ByteU5BU5D_t1033* X509Certificate_PEM_m53944 (Object_t * __this/* static, unused */, String_t* ___type, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
