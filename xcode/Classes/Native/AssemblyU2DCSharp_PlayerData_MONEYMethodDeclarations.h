#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerData/MONEY
struct MONEY_t4946;
// MONEYTYPE
#include "AssemblyU2DCSharp_MONEYTYPE.h"

// System.Void PlayerData/MONEY::.ctor()
 void MONEY__ctor_m35031 (MONEY_t4946 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData/MONEY::GetMoney_Coin()
 int32_t MONEY_GetMoney_Coin_m35032 (MONEY_t4946 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData/MONEY::GetMoney_YuanBao()
 int32_t MONEY_GetMoney_YuanBao_m35033 (MONEY_t4946 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData/MONEY::GetMoney_YuanBaoBind()
 int32_t MONEY_GetMoney_YuanBaoBind_m35034 (MONEY_t4946 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData/MONEY::SetMoney(MONEYTYPE,System.Int32)
 void MONEY_SetMoney_m35035 (MONEY_t4946 * __this, int32_t ___nType, int32_t ___nValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData/MONEY::GetMoneyByType(MONEYTYPE)
 int32_t MONEY_GetMoneyByType_m35036 (MONEY_t4946 * __this, int32_t ___nType, MethodInfo* method) IL2CPP_METHOD_ATTR;
