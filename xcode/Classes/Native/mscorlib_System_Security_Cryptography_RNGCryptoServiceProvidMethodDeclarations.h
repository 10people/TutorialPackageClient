#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t8133;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
 void RNGCryptoServiceProvider__ctor_m55900 (RNGCryptoServiceProvider_t8133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.cctor()
 void RNGCryptoServiceProvider__cctor_m55901 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Check()
 void RNGCryptoServiceProvider_Check_m55902 (RNGCryptoServiceProvider_t8133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RNGCryptoServiceProvider::RngOpen()
 bool RNGCryptoServiceProvider_RngOpen_m55903 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngInitialize(System.Byte[])
 IntPtr_t24 RNGCryptoServiceProvider_RngInitialize_m55904 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___seed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngGetBytes(System.IntPtr,System.Byte[])
 IntPtr_t24 RNGCryptoServiceProvider_RngGetBytes_m55905 (Object_t * __this/* static, unused */, IntPtr_t24 ___handle, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::RngClose(System.IntPtr)
 void RNGCryptoServiceProvider_RngClose_m55906 (Object_t * __this/* static, unused */, IntPtr_t24 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetBytes(System.Byte[])
 void RNGCryptoServiceProvider_GetBytes_m55907 (RNGCryptoServiceProvider_t8133 * __this, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetNonZeroBytes(System.Byte[])
 void RNGCryptoServiceProvider_GetNonZeroBytes_m55908 (RNGCryptoServiceProvider_t8133 * __this, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Finalize()
 void RNGCryptoServiceProvider_Finalize_m55909 (RNGCryptoServiceProvider_t8133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
