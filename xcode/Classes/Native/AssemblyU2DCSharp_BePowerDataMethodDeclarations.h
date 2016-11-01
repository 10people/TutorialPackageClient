#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BePowerData
struct BePowerData_t4851;
// GC_RES_POWERUP
struct GC_RES_POWERUP_t3339;
// System.Object
struct Object_t;
// GC_POWERUP_LIST
struct GC_POWERUP_LIST_t3340;

// System.Void BePowerData::.ctor()
 void BePowerData__ctor_m34467 (BePowerData_t4851 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerData::.cctor()
 void BePowerData__cctor_m34468 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerData::set_curBePowerType(System.Int32)
 void BePowerData_set_curBePowerType_m34469 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BePowerData::get_curBePowerType()
 int32_t BePowerData_get_curBePowerType_m34470 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerData::ReciveResPowerData(GC_RES_POWERUP)
 void BePowerData_ReciveResPowerData_m34471 (Object_t * __this/* static, unused */, GC_RES_POWERUP_t3339 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerData::AfterLoadUI(System.Boolean,System.Object)
 void BePowerData_AfterLoadUI_m34472 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerData::ShowBePowerWithData(GC_POWERUP_LIST)
 void BePowerData_ShowBePowerWithData_m34473 (Object_t * __this/* static, unused */, GC_POWERUP_LIST_t3340 * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BePowerData::ShowBePowerItemList()
 void BePowerData_ShowBePowerItemList_m34474 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
