#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t6509;
// System.String[]
struct StringU5BU5D_t333;
// Mono.Security.ASN1
struct ASN1_t6461;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
 void GeneralNames__ctor_m45123 (GeneralNames_t6509 * __this, ASN1_t6461 * ___sequence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
 StringU5BU5D_t333* GeneralNames_get_DNSNames_m45124 (GeneralNames_t6509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
 StringU5BU5D_t333* GeneralNames_get_IPAddresses_m45125 (GeneralNames_t6509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
 String_t* GeneralNames_ToString_m45126 (GeneralNames_t6509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
