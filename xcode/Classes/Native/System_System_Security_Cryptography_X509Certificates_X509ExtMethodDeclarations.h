#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t7235;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
 void X509Extension__ctor_m50532 (X509Extension_t7235 * __this, String_t* ___oid, ByteU5BU5D_t1033* ___rawData, bool ___critical, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
 bool X509Extension_get_Critical_m50533 (X509Extension_t7235 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
