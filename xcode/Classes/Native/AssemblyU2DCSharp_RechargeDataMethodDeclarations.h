#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RechargeData
struct RechargeData_t4959;
// System.String
struct String_t;
// RechargeData/GoodInfo
struct GoodInfo_t4503;

// System.Void RechargeData::.ctor()
 void RechargeData__ctor_m35548 (RechargeData_t4959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeData::.cctor()
 void RechargeData__cctor_m35549 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeData::PayUI()
 void RechargeData_PayUI_m35550 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeData::RechareStateUpdate(System.Boolean)
 void RechargeData_RechareStateUpdate_m35551 (Object_t * __this/* static, unused */, bool ___bEnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RechargeData::InitGoodInfo(System.String)
 void RechargeData_InitGoodInfo_m35552 (Object_t * __this/* static, unused */, String_t* ___goodInfoList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RechargeData/GoodInfo RechargeData::GetGoodInfo(System.String)
 GoodInfo_t4503 * RechargeData_GetGoodInfo_m35553 (Object_t * __this/* static, unused */, String_t* ___registerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
