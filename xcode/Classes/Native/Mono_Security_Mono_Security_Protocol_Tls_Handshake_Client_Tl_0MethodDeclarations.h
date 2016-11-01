#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t6569;
// Mono.Security.Protocol.Tls.Context
struct Context_t6522;
// System.Security.Cryptography.RSA
struct RSA_t6476;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificateVerify__ctor_m45544 (TlsClientCertificateVerify_t6569 * __this, Context_t6522 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
 void TlsClientCertificateVerify_Update_m45545 (TlsClientCertificateVerify_t6569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
 void TlsClientCertificateVerify_ProcessAsSsl3_m45546 (TlsClientCertificateVerify_t6569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
 void TlsClientCertificateVerify_ProcessAsTls1_m45547 (TlsClientCertificateVerify_t6569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
 RSA_t6476 * TlsClientCertificateVerify_getClientCertRSA_m45548 (TlsClientCertificateVerify_t6569 * __this, RSA_t6476 * ___privKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t1033* TlsClientCertificateVerify_getUnsignedBigInteger_m45549 (TlsClientCertificateVerify_t6569 * __this, ByteU5BU5D_t1033* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
