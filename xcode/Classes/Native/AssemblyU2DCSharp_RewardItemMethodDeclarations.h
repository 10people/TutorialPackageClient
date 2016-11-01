#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RewardItem
struct RewardItem_t1842;
// ItemType
#include "AssemblyU2DCSharp_ItemType.h"

// System.Void RewardItem::.ctor()
 void RewardItem__ctor_m12623 (RewardItem_t1842 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardItem::Start()
 void RewardItem_Start_m12624 (RewardItem_t1842 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RewardItem::SetData(System.Int32,System.Int32,System.Boolean)
 bool RewardItem_SetData_m12625 (RewardItem_t1842 * __this, int32_t ___itemID, int32_t ___itemCount, bool ___isAlwaysShowBack, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RewardItem::SetMoneyData(ItemType,System.Int32)
 bool RewardItem_SetMoneyData_m12626 (RewardItem_t1842 * __this, int32_t ___itemType, int32_t ___moneyCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardItem::OnItemClick()
 void RewardItem_OnItemClick_m12627 (RewardItem_t1842 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
