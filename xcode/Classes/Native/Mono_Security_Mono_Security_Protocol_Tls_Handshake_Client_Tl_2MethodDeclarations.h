#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello
struct TlsClientHello_t6571;
// Mono.Security.Protocol.Tls.Context
struct Context_t6522;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientHello__ctor_m45555 (TlsClientHello_t6571 * __this, Context_t6522 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::Update()
 void TlsClientHello_Update_m45556 (TlsClientHello_t6571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsSsl3()
 void TlsClientHello_ProcessAsSsl3_m45557 (TlsClientHello_t6571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsTls1()
 void TlsClientHello_ProcessAsTls1_m45558 (TlsClientHello_t6571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
