#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t6476;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t6473;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Security.Cryptography.AsymmetricSignatureFormatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"
// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct RSASslSignatureFormatter_t6551  : public AsymmetricSignatureFormatter_t6552
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t6476 * ___key;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t6473 * ___hash;
};
struct RSASslSignatureFormatter_t6551_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t944 * ___U3CU3Ef__switch$map16;
};
