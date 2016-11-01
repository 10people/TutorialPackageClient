#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t7796;
// Mono.Math.BigInteger
struct BigInteger_t7791;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m53688 (ModulusRing_t7796 * __this, BigInteger_t7791 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m53689 (ModulusRing_t7796 * __this, BigInteger_t7791 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t7791 * ModulusRing_Multiply_m53690 (ModulusRing_t7796 * __this, BigInteger_t7791 * ___a, BigInteger_t7791 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t7791 * ModulusRing_Difference_m53691 (ModulusRing_t7796 * __this, BigInteger_t7791 * ___a, BigInteger_t7791 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t7791 * ModulusRing_Pow_m53692 (ModulusRing_t7796 * __this, BigInteger_t7791 * ___a, BigInteger_t7791 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t7791 * ModulusRing_Pow_m53693 (ModulusRing_t7796 * __this, uint32_t ___b, BigInteger_t7791 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
