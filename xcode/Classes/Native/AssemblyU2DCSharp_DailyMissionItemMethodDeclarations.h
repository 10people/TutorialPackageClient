#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DailyMissionItem
struct DailyMissionItem_t1557;
// GCGame.Table.Tab_DailyMission
struct Tab_DailyMission_t421;
// UnityEngine.GameObject
struct GameObject_t9;
// DailyMissionItem/ItemType
#include "AssemblyU2DCSharp_DailyMissionItem_ItemType.h"

// System.Void DailyMissionItem::.ctor()
 void DailyMissionItem__ctor_m9644 (DailyMissionItem_t1557 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItem::SetData(GCGame.Table.Tab_DailyMission)
 void DailyMissionItem_SetData_m9645 (DailyMissionItem_t1557 * __this, Tab_DailyMission_t421 * ___mission, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItem::SetRewards(GCGame.Table.Tab_DailyMission)
 void DailyMissionItem_SetRewards_m9646 (DailyMissionItem_t1557 * __this, Tab_DailyMission_t421 * ___mission, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItem::SetRewardItem(System.Int32,DailyMissionItem/ItemType,System.Int32,System.Int32)
 void DailyMissionItem_SetRewardItem_m9647 (DailyMissionItem_t1557 * __this, int32_t ___index, int32_t ___type, int32_t ___id, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItem::UpdateProgress(System.Int32,System.Int32)
 void DailyMissionItem_UpdateProgress_m9648 (DailyMissionItem_t1557 * __this, int32_t ___progress, int32_t ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItem::ClaimReward(UnityEngine.GameObject)
 void DailyMissionItem_ClaimReward_m9649 (DailyMissionItem_t1557 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItem::ShowRewardDetail(UnityEngine.GameObject)
 void DailyMissionItem_ShowRewardDetail_m9650 (DailyMissionItem_t1557 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
