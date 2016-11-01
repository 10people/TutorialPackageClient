#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA512Managed
struct SHA512Managed_t8146;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Security.Cryptography.SHA512Managed::.ctor()
 void SHA512Managed__ctor_m55999 (SHA512Managed_t8146 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize(System.Boolean)
 void SHA512Managed_Initialize_m56000 (SHA512Managed_t8146 * __this, bool ___reuse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::Initialize()
 void SHA512Managed_Initialize_m56001 (SHA512Managed_t8146 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::HashCore(System.Byte[],System.Int32,System.Int32)
 void SHA512Managed_HashCore_m56002 (SHA512Managed_t8146 * __this, ByteU5BU5D_t1033* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA512Managed::HashFinal()
 ByteU5BU5D_t1033* SHA512Managed_HashFinal_m56003 (SHA512Managed_t8146 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::update(System.Byte)
 void SHA512Managed_update_m56004 (SHA512Managed_t8146 * __this, uint8_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processWord(System.Byte[],System.Int32)
 void SHA512Managed_processWord_m56005 (SHA512Managed_t8146 * __this, ByteU5BU5D_t1033* ___input, int32_t ___inOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::unpackWord(System.UInt64,System.Byte[],System.Int32)
 void SHA512Managed_unpackWord_m56006 (SHA512Managed_t8146 * __this, uint64_t ___word, ByteU5BU5D_t1033* ___output, int32_t ___outOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::adjustByteCounts()
 void SHA512Managed_adjustByteCounts_m56007 (SHA512Managed_t8146 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processLength(System.UInt64,System.UInt64)
 void SHA512Managed_processLength_m56008 (SHA512Managed_t8146 * __this, uint64_t ___lowW, uint64_t ___hiW, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA512Managed::processBlock()
 void SHA512Managed_processBlock_m56009 (SHA512Managed_t8146 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::rotateRight(System.UInt64,System.Int32)
 uint64_t SHA512Managed_rotateRight_m56010 (SHA512Managed_t8146 * __this, uint64_t ___x, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Ch(System.UInt64,System.UInt64,System.UInt64)
 uint64_t SHA512Managed_Ch_m56011 (SHA512Managed_t8146 * __this, uint64_t ___x, uint64_t ___y, uint64_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Maj(System.UInt64,System.UInt64,System.UInt64)
 uint64_t SHA512Managed_Maj_m56012 (SHA512Managed_t8146 * __this, uint64_t ___x, uint64_t ___y, uint64_t ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum0(System.UInt64)
 uint64_t SHA512Managed_Sum0_m56013 (SHA512Managed_t8146 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sum1(System.UInt64)
 uint64_t SHA512Managed_Sum1_m56014 (SHA512Managed_t8146 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma0(System.UInt64)
 uint64_t SHA512Managed_Sigma0_m56015 (SHA512Managed_t8146 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Security.Cryptography.SHA512Managed::Sigma1(System.UInt64)
 uint64_t SHA512Managed_Sigma1_m56016 (SHA512Managed_t8146 * __this, uint64_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
