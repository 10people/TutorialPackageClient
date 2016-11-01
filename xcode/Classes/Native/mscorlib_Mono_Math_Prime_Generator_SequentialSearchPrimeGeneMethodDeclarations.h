#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t7792;
// Mono.Math.BigInteger
struct BigInteger_t7791;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
 void SequentialSearchPrimeGeneratorBase__ctor_m53679 (SequentialSearchPrimeGeneratorBase_t7792 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
 BigInteger_t7791 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m53680 (SequentialSearchPrimeGeneratorBase_t7792 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
 BigInteger_t7791 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m53681 (SequentialSearchPrimeGeneratorBase_t7792 * __this, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
 BigInteger_t7791 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m53682 (SequentialSearchPrimeGeneratorBase_t7792 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
 bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m53683 (SequentialSearchPrimeGeneratorBase_t7792 * __this, BigInteger_t7791 * ___bi, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
