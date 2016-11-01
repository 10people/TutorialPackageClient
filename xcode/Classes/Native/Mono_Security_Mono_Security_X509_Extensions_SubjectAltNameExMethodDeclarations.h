#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct SubjectAltNameExtension_t6514;
// System.String[]
struct StringU5BU5D_t333;
// Mono.Security.X509.X509Extension
struct X509Extension_t6502;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::.ctor(Mono.Security.X509.X509Extension)
 void SubjectAltNameExtension__ctor_m45136 (SubjectAltNameExtension_t6514 * __this, X509Extension_t6502 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::Decode()
 void SubjectAltNameExtension_Decode_m45137 (SubjectAltNameExtension_t6514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_DNSNames()
 StringU5BU5D_t333* SubjectAltNameExtension_get_DNSNames_m45138 (SubjectAltNameExtension_t6514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_IPAddresses()
 StringU5BU5D_t333* SubjectAltNameExtension_get_IPAddresses_m45139 (SubjectAltNameExtension_t6514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.SubjectAltNameExtension::ToString()
 String_t* SubjectAltNameExtension_ToString_m45140 (SubjectAltNameExtension_t6514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
