#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t6453;
// Mono.Math.BigInteger
struct BigInteger_t6451;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t6454;
// System.UInt32[]
struct UInt32U5BU5D_t4794;
// Mono.Math.BigInteger/Sign
#include "Mono_Security_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t6451 * Kernel_AddSameSign_m44784 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___bi1, BigInteger_t6451 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t6451 * Kernel_Subtract_m44785 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___big, BigInteger_t6451 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_MinusEq_m44786 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___big, BigInteger_t6451 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_PlusEq_m44787 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___bi1, BigInteger_t6451 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
 int32_t Kernel_Compare_m44788 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___bi1, BigInteger_t6451 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_SingleByteDivideInPlace_m44789 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_DwordMod_m44790 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
 BigIntegerU5BU5D_t6454* Kernel_DwordDivMod_m44791 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigIntegerU5BU5D_t6454* Kernel_multiByteDivide_m44792 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___bi1, BigInteger_t6451 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t6451 * Kernel_LeftShift_m44793 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t6451 * Kernel_RightShift_m44794 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
 void Kernel_Multiply_m44795 (Object_t * __this/* static, unused */, UInt32U5BU5D_t4794* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t4794* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t4794* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
 void Kernel_MultiplyMod2p32pmod_m44796 (Object_t * __this/* static, unused */, UInt32U5BU5D_t4794* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t4794* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t4794* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_modInverse_m44797 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t6451 * Kernel_modInverse_m44798 (Object_t * __this/* static, unused */, BigInteger_t6451 * ___bi, BigInteger_t6451 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
