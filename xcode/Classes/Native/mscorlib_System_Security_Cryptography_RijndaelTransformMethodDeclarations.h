#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t8136;
// System.Security.Cryptography.Rijndael
struct Rijndael_t6616;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.UInt32[]
struct UInt32U5BU5D_t4794;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelTransform__ctor_m55940 (RijndaelTransform_t8136 * __this, Rijndael_t6616 * ___algo, bool ___encryption, ByteU5BU5D_t1033* ___key, ByteU5BU5D_t1033* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
 void RijndaelTransform__cctor_m55941 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
 void RijndaelTransform_Clear_m55942 (RijndaelTransform_t8136 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
 void RijndaelTransform_ECB_m55943 (RijndaelTransform_t8136 * __this, ByteU5BU5D_t1033* ___input, ByteU5BU5D_t1033* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
 uint32_t RijndaelTransform_SubByte_m55944 (RijndaelTransform_t8136 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt128_m55945 (RijndaelTransform_t8136 * __this, ByteU5BU5D_t1033* ___indata, ByteU5BU5D_t1033* ___outdata, UInt32U5BU5D_t4794* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt192_m55946 (RijndaelTransform_t8136 * __this, ByteU5BU5D_t1033* ___indata, ByteU5BU5D_t1033* ___outdata, UInt32U5BU5D_t4794* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt256_m55947 (RijndaelTransform_t8136 * __this, ByteU5BU5D_t1033* ___indata, ByteU5BU5D_t1033* ___outdata, UInt32U5BU5D_t4794* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt128_m55948 (RijndaelTransform_t8136 * __this, ByteU5BU5D_t1033* ___indata, ByteU5BU5D_t1033* ___outdata, UInt32U5BU5D_t4794* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt192_m55949 (RijndaelTransform_t8136 * __this, ByteU5BU5D_t1033* ___indata, ByteU5BU5D_t1033* ___outdata, UInt32U5BU5D_t4794* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt256_m55950 (RijndaelTransform_t8136 * __this, ByteU5BU5D_t1033* ___indata, ByteU5BU5D_t1033* ___outdata, UInt32U5BU5D_t4794* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
