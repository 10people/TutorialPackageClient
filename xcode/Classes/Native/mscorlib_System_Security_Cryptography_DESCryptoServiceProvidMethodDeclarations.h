#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t8120;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t6469;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
 void DESCryptoServiceProvider__ctor_m55771 (DESCryptoServiceProvider_t8120 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateDecryptor_m55772 (DESCryptoServiceProvider_t8120 * __this, ByteU5BU5D_t1033* ___rgbKey, ByteU5BU5D_t1033* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateEncryptor_m55773 (DESCryptoServiceProvider_t8120 * __this, ByteU5BU5D_t1033* ___rgbKey, ByteU5BU5D_t1033* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
 void DESCryptoServiceProvider_GenerateIV_m55774 (DESCryptoServiceProvider_t8120 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
 void DESCryptoServiceProvider_GenerateKey_m55775 (DESCryptoServiceProvider_t8120 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
