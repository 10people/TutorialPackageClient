#pragma once
#include <stdint.h>
// System.Security.Cryptography.RSA
struct RSA_t6476;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.StrongName
struct StrongName_t7828  : public Object_t
{
	// System.Security.Cryptography.RSA Mono.Security.StrongName::rsa
	RSA_t6476 * ___rsa;
	// System.Byte[] Mono.Security.StrongName::publicKey
	ByteU5BU5D_t1033* ___publicKey;
	// System.Byte[] Mono.Security.StrongName::keyToken
	ByteU5BU5D_t1033* ___keyToken;
	// System.String Mono.Security.StrongName::tokenAlgorithm
	String_t* ___tokenAlgorithm;
};
struct StrongName_t7828_StaticFields{
	// System.Object Mono.Security.StrongName::lockObject
	Object_t * ___lockObject;
	// System.Boolean Mono.Security.StrongName::initialized
	bool ___initialized;
};
