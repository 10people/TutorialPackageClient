﻿#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t6523;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct TlsServerHello_t6576  : public HandshakeMessage_t6533
{
	// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::compressionMethod
	int32_t ___compressionMethod;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::random
	ByteU5BU5D_t1033* ___random;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::sessionId
	ByteU5BU5D_t1033* ___sessionId;
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::cipherSuite
	CipherSuite_t6523 * ___cipherSuite;
};
