#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityPortMD5.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t5209;
// System.Byte[]
struct ByteU5BU5D_t1033;
// UnityPortMD5.Digest
struct Digest_t5204;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t1038;

// System.Void UnityPortMD5.MD5CryptoServiceProvider::.ctor()
 void MD5CryptoServiceProvider__ctor_m37171 (MD5CryptoServiceProvider_t5209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortMD5.MD5CryptoServiceProvider::.cctor()
 void MD5CryptoServiceProvider__cctor_m37172 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityPortMD5.MD5CryptoServiceProvider::CreatePaddedBuffer()
 ByteU5BU5D_t1033* MD5CryptoServiceProvider_CreatePaddedBuffer_m37173 (MD5CryptoServiceProvider_t5209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortMD5.MD5CryptoServiceProvider::CopyBlock(System.Byte[],System.UInt32)
 void MD5CryptoServiceProvider_CopyBlock_m37174 (MD5CryptoServiceProvider_t5209 * __this, ByteU5BU5D_t1033* ___bMsg, uint32_t ___block, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortMD5.MD5CryptoServiceProvider::TransF(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt16,System.UInt32)
 void MD5CryptoServiceProvider_TransF_m37175 (MD5CryptoServiceProvider_t5209 * __this, uint32_t* ___a, uint32_t ___b, uint32_t ___c, uint32_t ___d, uint32_t ___k, uint16_t ___s, uint32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortMD5.MD5CryptoServiceProvider::TransG(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt16,System.UInt32)
 void MD5CryptoServiceProvider_TransG_m37176 (MD5CryptoServiceProvider_t5209 * __this, uint32_t* ___a, uint32_t ___b, uint32_t ___c, uint32_t ___d, uint32_t ___k, uint16_t ___s, uint32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortMD5.MD5CryptoServiceProvider::TransH(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt16,System.UInt32)
 void MD5CryptoServiceProvider_TransH_m37177 (MD5CryptoServiceProvider_t5209 * __this, uint32_t* ___a, uint32_t ___b, uint32_t ___c, uint32_t ___d, uint32_t ___k, uint16_t ___s, uint32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortMD5.MD5CryptoServiceProvider::TransI(System.UInt32&,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt16,System.UInt32)
 void MD5CryptoServiceProvider_TransI_m37178 (MD5CryptoServiceProvider_t5209 * __this, uint32_t* ___a, uint32_t ___b, uint32_t ___c, uint32_t ___d, uint32_t ___k, uint16_t ___s, uint32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityPortMD5.MD5CryptoServiceProvider::PerformTransformation(System.UInt32&,System.UInt32&,System.UInt32&,System.UInt32&)
 void MD5CryptoServiceProvider_PerformTransformation_m37179 (MD5CryptoServiceProvider_t5209 * __this, uint32_t* ___A, uint32_t* ___B, uint32_t* ___C, uint32_t* ___D, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityPortMD5.Digest UnityPortMD5.MD5CryptoServiceProvider::CaculateMD5Value()
 Digest_t5204 * MD5CryptoServiceProvider_CaculateMD5Value_m37180 (MD5CryptoServiceProvider_t5209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityPortMD5.MD5CryptoServiceProvider::ComputeHash(System.IO.Stream)
 String_t* MD5CryptoServiceProvider_ComputeHash_m37181 (MD5CryptoServiceProvider_t5209 * __this, Stream_t1038 * ___inputStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
