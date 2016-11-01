#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"
// Mono.Security.Protocol.Tls.SslCipherSuite
struct SslCipherSuite_t6526  : public CipherSuite_t6523
{
	// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::pad1
	ByteU5BU5D_t1033* ___pad1;
	// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::pad2
	ByteU5BU5D_t1033* ___pad2;
	// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::header
	ByteU5BU5D_t1033* ___header;
};
