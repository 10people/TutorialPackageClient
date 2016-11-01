#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t6535;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.Protocol.Tls.Context
struct Context_t6522;

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
 void ClientSessionInfo__ctor_m45231 (ClientSessionInfo_t6535 * __this, String_t* ___hostname, ByteU5BU5D_t1033* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
 void ClientSessionInfo__cctor_m45232 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
 void ClientSessionInfo_Finalize_m45233 (ClientSessionInfo_t6535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
 String_t* ClientSessionInfo_get_HostName_m45234 (ClientSessionInfo_t6535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
 ByteU5BU5D_t1033* ClientSessionInfo_get_Id_m45235 (ClientSessionInfo_t6535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
 bool ClientSessionInfo_get_Valid_m45236 (ClientSessionInfo_t6535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
 void ClientSessionInfo_GetContext_m45237 (ClientSessionInfo_t6535 * __this, Context_t6522 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
 void ClientSessionInfo_SetContext_m45238 (ClientSessionInfo_t6535 * __this, Context_t6522 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
 void ClientSessionInfo_KeepAlive_m45239 (ClientSessionInfo_t6535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
 void ClientSessionInfo_Dispose_m45240 (ClientSessionInfo_t6535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
 void ClientSessionInfo_Dispose_m45241 (ClientSessionInfo_t6535 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
 void ClientSessionInfo_CheckDisposed_m45242 (ClientSessionInfo_t6535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
