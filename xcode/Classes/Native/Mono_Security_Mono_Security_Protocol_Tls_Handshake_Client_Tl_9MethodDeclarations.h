#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct TlsServerKeyExchange_t6578;
// Mono.Security.Protocol.Tls.Context
struct Context_t6522;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerKeyExchange__ctor_m45589 (TlsServerKeyExchange_t6578 * __this, Context_t6522 * ___context, ByteU5BU5D_t1033* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
 void TlsServerKeyExchange_Update_m45590 (TlsServerKeyExchange_t6578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
 void TlsServerKeyExchange_ProcessAsSsl3_m45591 (TlsServerKeyExchange_t6578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
 void TlsServerKeyExchange_ProcessAsTls1_m45592 (TlsServerKeyExchange_t6578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
 void TlsServerKeyExchange_verifySignature_m45593 (TlsServerKeyExchange_t6578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
