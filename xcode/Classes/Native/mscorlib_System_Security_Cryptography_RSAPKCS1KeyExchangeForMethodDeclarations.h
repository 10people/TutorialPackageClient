#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t6627;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t6495;
// System.Byte[]
struct ByteU5BU5D_t1033;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1KeyExchangeFormatter__ctor_m45844 (RSAPKCS1KeyExchangeFormatter_t6627 * __this, AsymmetricAlgorithm_t6495 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
 ByteU5BU5D_t1033* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m45845 (RSAPKCS1KeyExchangeFormatter_t6627 * __this, ByteU5BU5D_t1033* ___rgbData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
 void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m55924 (RSAPKCS1KeyExchangeFormatter_t6627 * __this, AsymmetricAlgorithm_t6495 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
