#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t6490;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t6494;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t6496;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
 void X509CertificateCollection__ctor_m45039 (X509CertificateCollection_t6490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509CertificateCollection)
 void X509CertificateCollection__ctor_m45040 (X509CertificateCollection_t6490 * __this, X509CertificateCollection_t6490 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m45041 (X509CertificateCollection_t6490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
 X509Certificate_t6494 * X509CertificateCollection_get_Item_m45042 (X509CertificateCollection_t6490 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
 int32_t X509CertificateCollection_Add_m45043 (X509CertificateCollection_t6490 * __this, X509Certificate_t6494 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
 void X509CertificateCollection_AddRange_m45044 (X509CertificateCollection_t6490 * __this, X509CertificateCollection_t6490 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
 bool X509CertificateCollection_Contains_m45045 (X509CertificateCollection_t6490 * __this, X509Certificate_t6494 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
 X509CertificateEnumerator_t6496 * X509CertificateCollection_GetEnumerator_m45046 (X509CertificateCollection_t6490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
 int32_t X509CertificateCollection_GetHashCode_m45047 (X509CertificateCollection_t6490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
 int32_t X509CertificateCollection_IndexOf_m45048 (X509CertificateCollection_t6490 * __this, X509Certificate_t6494 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::Remove(Mono.Security.X509.X509Certificate)
 void X509CertificateCollection_Remove_m45049 (X509CertificateCollection_t6490 * __this, X509Certificate_t6494 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
 bool X509CertificateCollection_Compare_m45050 (X509CertificateCollection_t6490 * __this, ByteU5BU5D_t1033* ___array1, ByteU5BU5D_t1033* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
