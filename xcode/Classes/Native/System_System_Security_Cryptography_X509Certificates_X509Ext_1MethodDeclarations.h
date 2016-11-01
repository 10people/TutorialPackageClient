#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t7249;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t7235;
// System.Collections.ArrayList
struct ArrayList_t5157;

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::.ctor(System.Collections.ArrayList)
 void X509ExtensionEnumerator__ctor_m50542 (X509ExtensionEnumerator_t7249 * __this, ArrayList_t5157 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::System.Collections.IEnumerator.get_Current()
 Object_t * X509ExtensionEnumerator_System_Collections_IEnumerator_get_Current_m50543 (X509ExtensionEnumerator_t7249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::get_Current()
 X509Extension_t7235 * X509ExtensionEnumerator_get_Current_m50544 (X509ExtensionEnumerator_t7249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::MoveNext()
 bool X509ExtensionEnumerator_MoveNext_m50545 (X509ExtensionEnumerator_t7249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::Reset()
 void X509ExtensionEnumerator_Reset_m50546 (X509ExtensionEnumerator_t7249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
