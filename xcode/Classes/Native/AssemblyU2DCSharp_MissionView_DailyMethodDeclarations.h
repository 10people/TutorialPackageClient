#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MissionView_Daily
struct MissionView_Daily_t1561;
// UnityEngine.GameObject
struct GameObject_t9;
// GCGame.Table.Tab_ActivenessAward
struct Tab_ActivenessAward_t339;
// MissionView_Daily/ItemType
#include "AssemblyU2DCSharp_MissionView_Daily_ItemType.h"

// System.Void MissionView_Daily::.ctor()
 void MissionView_Daily__ctor_m9670 (MissionView_Daily_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionView_Daily::Init()
 void MissionView_Daily_Init_m9671 (MissionView_Daily_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionView_Daily::AddListeners()
 void MissionView_Daily_AddListeners_m9672 (MissionView_Daily_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionView_Daily::UpdateMissionList()
 void MissionView_Daily_UpdateMissionList_m9673 (MissionView_Daily_t1561 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionView_Daily::UpdateActivePoint(System.Int32)
 void MissionView_Daily_UpdateActivePoint_m9674 (MissionView_Daily_t1561 * __this, int32_t ___progress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionView_Daily::UpdateChests(System.Int32)
 void MissionView_Daily_UpdateChests_m9675 (MissionView_Daily_t1561 * __this, int32_t ___progress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionView_Daily::OpenChest(UnityEngine.GameObject)
 void MissionView_Daily_OpenChest_m9676 (MissionView_Daily_t1561 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionView_Daily::CloseChest(UnityEngine.GameObject)
 void MissionView_Daily_CloseChest_m9677 (MissionView_Daily_t1561 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionView_Daily::ClaimChestAward(UnityEngine.GameObject)
 void MissionView_Daily_ClaimChestAward_m9678 (MissionView_Daily_t1561 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionView_Daily::ShowChestDialog(GCGame.Table.Tab_ActivenessAward)
 void MissionView_Daily_ShowChestDialog_m9679 (MissionView_Daily_t1561 * __this, Tab_ActivenessAward_t339 * ___award, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionView_Daily::UpdateChestRewards(GCGame.Table.Tab_ActivenessAward)
 void MissionView_Daily_UpdateChestRewards_m9680 (MissionView_Daily_t1561 * __this, Tab_ActivenessAward_t339 * ___award, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionView_Daily::SetRewardItem(System.Int32,MissionView_Daily/ItemType,System.Int32,System.Int32)
 void MissionView_Daily_SetRewardItem_m9681 (MissionView_Daily_t1561 * __this, int32_t ___index, int32_t ___type, int32_t ___id, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
