#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t6533;
// Mono.Security.Protocol.Tls.Context
struct Context_t6522;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 void HandshakeMessage__ctor_m45526 (HandshakeMessage_t6533 * __this, Context_t6522 * ___context, uint8_t ___handshakeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,Mono.Security.Protocol.Tls.ContentType)
 void HandshakeMessage__ctor_m45527 (HandshakeMessage_t6533 * __this, Context_t6522 * ___context, uint8_t ___handshakeType, uint8_t ___contentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
 void HandshakeMessage__ctor_m45528 (HandshakeMessage_t6533 * __this, Context_t6522 * ___context, uint8_t ___handshakeType, ByteU5BU5D_t1033* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_Context()
 Context_t6522 * HandshakeMessage_get_Context_m45529 (HandshakeMessage_t6533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_HandshakeType()
 uint8_t HandshakeMessage_get_HandshakeType_m45530 (HandshakeMessage_t6533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_ContentType()
 uint8_t HandshakeMessage_get_ContentType_m45531 (HandshakeMessage_t6533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsTls1()
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsSsl3()
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Process()
 void HandshakeMessage_Process_m45532 (HandshakeMessage_t6533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Update()
 void HandshakeMessage_Update_m45533 (HandshakeMessage_t6533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::EncodeMessage()
 ByteU5BU5D_t1033* HandshakeMessage_EncodeMessage_m45534 (HandshakeMessage_t6533 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Compare(System.Byte[],System.Byte[])
 bool HandshakeMessage_Compare_m45535 (Object_t * __this/* static, unused */, ByteU5BU5D_t1033* ___buffer1, ByteU5BU5D_t1033* ___buffer2, MethodInfo* method) IL2CPP_METHOD_ATTR;
