#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPacket.SocketInstance.XorCrypto
struct XorCrypto_t4377;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void SPacket.SocketInstance.XorCrypto::.ctor()
 void XorCrypto__ctor_m31034 (XorCrypto_t4377 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.XorCrypto::.cctor()
 void XorCrypto__cctor_m31035 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.XorCrypto::_Xor(System.Byte[],System.UInt32)
 void XorCrypto__Xor_m31036 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___Buf, uint32_t ___nSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.XorCrypto::XorEncrypt(System.Byte[],System.UInt32)
 void XorCrypto_XorEncrypt_m31037 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___Buf, uint32_t ___nSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.XorCrypto::XorDecrypt(System.Byte[],System.UInt32)
 void XorCrypto_XorDecrypt_m31038 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___Buf, uint32_t ___nSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
