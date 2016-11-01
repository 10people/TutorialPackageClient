#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t5522;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.ctor()
 void MD5CryptoServiceProvider__ctor_m38986 (MD5CryptoServiceProvider_t5522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.cctor()
 void MD5CryptoServiceProvider__cctor_m55852 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Finalize()
 void MD5CryptoServiceProvider_Finalize_m55853 (MD5CryptoServiceProvider_t5522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Dispose(System.Boolean)
 void MD5CryptoServiceProvider_Dispose_m55854 (MD5CryptoServiceProvider_t5522 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::HashCore(System.Byte[],System.Int32,System.Int32)
 void MD5CryptoServiceProvider_HashCore_m55855 (MD5CryptoServiceProvider_t5522 * __this, ByteU5BU5D_t1033* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::HashFinal()
 ByteU5BU5D_t1033* MD5CryptoServiceProvider_HashFinal_m55856 (MD5CryptoServiceProvider_t5522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Initialize()
 void MD5CryptoServiceProvider_Initialize_m55857 (MD5CryptoServiceProvider_t5522 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessBlock(System.Byte[],System.Int32)
 void MD5CryptoServiceProvider_ProcessBlock_m55858 (MD5CryptoServiceProvider_t5522 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
 void MD5CryptoServiceProvider_ProcessFinalBlock_m55859 (MD5CryptoServiceProvider_t5522 * __this, ByteU5BU5D_t1033* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::AddLength(System.UInt64,System.Byte[],System.Int32)
 void MD5CryptoServiceProvider_AddLength_m55860 (MD5CryptoServiceProvider_t5522 * __this, uint64_t ___length, ByteU5BU5D_t1033* ___buffer, int32_t ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
