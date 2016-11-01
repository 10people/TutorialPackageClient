#pragma once
#include <stdint.h>
// System.Byte[,]
struct ByteU5BU2CU5D_t8118;
// System.Security.Cryptography.SymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h"
// System.Security.Cryptography.DES
struct DES_t6612  : public SymmetricAlgorithm_t6484
{
};
struct DES_t6612_StaticFields{
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t8118* ___weakKeys;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t8118* ___semiWeakKeys;
};
