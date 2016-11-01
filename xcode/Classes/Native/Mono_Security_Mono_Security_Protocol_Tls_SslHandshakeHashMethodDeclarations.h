#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t6562;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Security.Cryptography.RSA
struct RSA_t6476;

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
 void SslHandshakeHash__ctor_m45408 (SslHandshakeHash_t6562 * __this, ByteU5BU5D_t1033* ___secret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
 void SslHandshakeHash_Initialize_m45409 (SslHandshakeHash_t6562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
 ByteU5BU5D_t1033* SslHandshakeHash_HashFinal_m45410 (SslHandshakeHash_t6562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
 void SslHandshakeHash_HashCore_m45411 (SslHandshakeHash_t6562 * __this, ByteU5BU5D_t1033* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
 ByteU5BU5D_t1033* SslHandshakeHash_CreateSignature_m45412 (SslHandshakeHash_t6562 * __this, RSA_t6476 * ___rsa, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
 void SslHandshakeHash_initializePad_m45413 (SslHandshakeHash_t6562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
