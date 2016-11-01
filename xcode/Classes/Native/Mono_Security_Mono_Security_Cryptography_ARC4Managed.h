#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t1033;
// Mono.Security.Cryptography.RC4
#include "Mono_Security_Mono_Security_Cryptography_RC4.h"
// Mono.Security.Cryptography.ARC4Managed
struct ARC4Managed_t6467  : public RC4_t6468
{
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t1033* ___key;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t1033* ___state;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed;
};
