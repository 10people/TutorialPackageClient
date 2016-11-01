#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t6476;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t6473;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct RSAPKCS1SignatureFormatter_t8134  : public AsymmetricSignatureFormatter_t6552
{
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t6476 * ___rsa;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t6473 * ___hash;
};
