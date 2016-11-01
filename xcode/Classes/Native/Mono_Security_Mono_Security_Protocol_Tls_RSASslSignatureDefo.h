#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t6476;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t6473;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct RSASslSignatureDeformatter_t6549  : public AsymmetricSignatureDeformatter_t6550
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t6476 * ___key;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t6473 * ___hash;
};
struct RSASslSignatureDeformatter_t6549_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t944 * ___U3CU3Ef__switch$map15;
};
