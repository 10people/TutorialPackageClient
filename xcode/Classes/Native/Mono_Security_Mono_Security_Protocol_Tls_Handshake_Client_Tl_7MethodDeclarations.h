#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct TlsServerHello_t6576;
// Mono.Security.Protocol.Tls.Context
struct Context_t6522;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerHello__ctor_m45581 (TlsServerHello_t6576 * __this, Context_t6522 * ___context, ByteU5BU5D_t1033* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
 void TlsServerHello_Update_m45582 (TlsServerHello_t6576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
 void TlsServerHello_ProcessAsSsl3_m45583 (TlsServerHello_t6576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
 void TlsServerHello_ProcessAsTls1_m45584 (TlsServerHello_t6576 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
 void TlsServerHello_processProtocol_m45585 (TlsServerHello_t6576 * __this, int16_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
