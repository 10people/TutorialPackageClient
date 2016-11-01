#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t6452;
// Mono.Math.BigInteger
struct BigInteger_t6451;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m44778 (ModulusRing_t6452 * __this, BigInteger_t6451 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m44779 (ModulusRing_t6452 * __this, BigInteger_t6451 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t6451 * ModulusRing_Multiply_m44780 (ModulusRing_t6452 * __this, BigInteger_t6451 * ___a, BigInteger_t6451 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t6451 * ModulusRing_Difference_m44781 (ModulusRing_t6452 * __this, BigInteger_t6451 * ___a, BigInteger_t6451 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t6451 * ModulusRing_Pow_m44782 (ModulusRing_t6452 * __this, BigInteger_t6451 * ___a, BigInteger_t6451 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t6451 * ModulusRing_Pow_m44783 (ModulusRing_t6452 * __this, uint32_t ___b, BigInteger_t6451 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
