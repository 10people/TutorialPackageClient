#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t8135;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t6469;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
 void RijndaelManaged__ctor_m55935 (RijndaelManaged_t8135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
 void RijndaelManaged_GenerateIV_m55936 (RijndaelManaged_t8135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
 void RijndaelManaged_GenerateKey_m55937 (RijndaelManaged_t8135 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateDecryptor_m55938 (RijndaelManaged_t8135 * __this, ByteU5BU5D_t1033* ___rgbKey, ByteU5BU5D_t1033* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateEncryptor_m55939 (RijndaelManaged_t8135 * __this, ByteU5BU5D_t1033* ___rgbKey, ByteU5BU5D_t1033* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
