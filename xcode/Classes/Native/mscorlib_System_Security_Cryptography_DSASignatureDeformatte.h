#pragma once
#include <stdint.h>
// System.Security.Cryptography.DSA
struct DSA_t6478;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t6604  : public AsymmetricSignatureDeformatter_t6550
{
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t6478 * ___dsa;
};
