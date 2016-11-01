#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t7822;
// System.Object
struct Object_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t7821;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t7816;

// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
 void X509CertificateEnumerator__ctor_m53945 (X509CertificateEnumerator_t7822 * __this, X509CertificateCollection_t7816 * ___mappings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
 Object_t * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m53946 (X509CertificateEnumerator_t7822 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
 bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m53947 (X509CertificateEnumerator_t7822 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
 void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m53948 (X509CertificateEnumerator_t7822 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
 X509Certificate_t7821 * X509CertificateEnumerator_get_Current_m53949 (X509CertificateEnumerator_t7822 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
 bool X509CertificateEnumerator_MoveNext_m53950 (X509CertificateEnumerator_t7822 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::Reset()
 void X509CertificateEnumerator_Reset_m53951 (X509CertificateEnumerator_t7822 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
