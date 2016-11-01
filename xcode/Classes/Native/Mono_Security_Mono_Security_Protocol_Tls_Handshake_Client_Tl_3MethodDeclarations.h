#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange
struct TlsClientKeyExchange_t6572;
// Mono.Security.Protocol.Tls.Context
struct Context_t6522;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientKeyExchange__ctor_m45559 (TlsClientKeyExchange_t6572 * __this, Context_t6522 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsSsl3()
 void TlsClientKeyExchange_ProcessAsSsl3_m45560 (TlsClientKeyExchange_t6572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsTls1()
 void TlsClientKeyExchange_ProcessAsTls1_m45561 (TlsClientKeyExchange_t6572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessCommon(System.Boolean)
 void TlsClientKeyExchange_ProcessCommon_m45562 (TlsClientKeyExchange_t6572 * __this, bool ___sendLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
