#pragma once
#include <stdint.h>
// System.UInt32[]
struct UInt32U5BU5D_t4794;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t6455;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Math.BigInteger
struct BigInteger_t7791  : public Object_t
{
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t4794* ___data;
};
struct BigInteger_t7791_StaticFields{
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t4794* ___smallPrimes;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t6455 * ___rng;
};
