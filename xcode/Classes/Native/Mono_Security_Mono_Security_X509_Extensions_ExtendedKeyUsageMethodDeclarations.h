#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct ExtendedKeyUsageExtension_t6508;
// System.Collections.ArrayList
struct ArrayList_t5157;
// Mono.Security.X509.X509Extension
struct X509Extension_t6502;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
 void ExtendedKeyUsageExtension__ctor_m45118 (ExtendedKeyUsageExtension_t6508 * __this, X509Extension_t6502 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Decode()
 void ExtendedKeyUsageExtension_Decode_m45119 (ExtendedKeyUsageExtension_t6508 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::Encode()
 void ExtendedKeyUsageExtension_Encode_m45120 (ExtendedKeyUsageExtension_t6508 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::get_KeyPurpose()
 ArrayList_t5157 * ExtendedKeyUsageExtension_get_KeyPurpose_m45121 (ExtendedKeyUsageExtension_t6508 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::ToString()
 String_t* ExtendedKeyUsageExtension_ToString_m45122 (ExtendedKeyUsageExtension_t6508 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
