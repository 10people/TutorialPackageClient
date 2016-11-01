#pragma once
#include <stdint.h>
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t6482;
// System.Security.Cryptography.SymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h"
// Mono.Security.Cryptography.RC4
struct RC4_t6468  : public SymmetricAlgorithm_t6484
{
};
struct RC4_t6468_StaticFields{
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t6482* ___s_legalBlockSizes;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t6482* ___s_legalKeySizes;
};
