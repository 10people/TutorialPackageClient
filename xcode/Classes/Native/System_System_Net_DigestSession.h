#pragma once
#include <stdint.h>
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t6455;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t6473;
// System.Net.DigestHeaderParser
struct DigestHeaderParser_t7168;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Net.DigestSession
struct DigestSession_t7169  : public Object_t
{
	// System.DateTime System.Net.DigestSession::lastUse
	DateTime_t1171  ___lastUse;
	// System.Int32 System.Net.DigestSession::_nc
	int32_t ____nc;
	// System.Security.Cryptography.HashAlgorithm System.Net.DigestSession::hash
	HashAlgorithm_t6473 * ___hash;
	// System.Net.DigestHeaderParser System.Net.DigestSession::parser
	DigestHeaderParser_t7168 * ___parser;
	// System.String System.Net.DigestSession::_cnonce
	String_t* ____cnonce;
};
struct DigestSession_t7169_StaticFields{
	// System.Security.Cryptography.RandomNumberGenerator System.Net.DigestSession::rng
	RandomNumberGenerator_t6455 * ___rng;
};
