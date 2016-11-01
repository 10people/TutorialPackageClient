#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RewardAwardItem
struct RewardAwardItem_t1376;
// DaySignAwardLogic
struct DaySignAwardLogic_t1228;
// UnityEngine.GameObject
struct GameObject_t9;
// RewardAwardItem/ItemType
#include "AssemblyU2DCSharp_RewardAwardItem_ItemType.h"
// RewardAwardItem/AwardState
#include "AssemblyU2DCSharp_RewardAwardItem_AwardState.h"

// System.Void RewardAwardItem::.ctor()
 void RewardAwardItem__ctor_m10901 (RewardAwardItem_t1376 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardAwardItem::Start()
 void RewardAwardItem_Start_m10902 (RewardAwardItem_t1376 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardAwardItem::CleanUp()
 void RewardAwardItem_CleanUp_m10903 (RewardAwardItem_t1376 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardAwardItem::AddItem(RewardAwardItem/ItemType,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,DaySignAwardLogic)
 void RewardAwardItem_AddItem_m10904 (RewardAwardItem_t1376 * __this, int32_t ___nItemType, int32_t ___nItemID, int32_t ___nItemCount, int32_t ___itemIndex, int32_t ___itemStatus, int32_t ___vipLevel, DaySignAwardLogic_t1228 * ___ins, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardAwardItem::DealWithSignInItem(System.Int32,System.Int32,System.Int32,DaySignAwardLogic)
 void RewardAwardItem_DealWithSignInItem_m10905 (RewardAwardItem_t1376 * __this, int32_t ___itemIndex, int32_t ___itemStatus, int32_t ___vipLevel, DaySignAwardLogic_t1228 * ___ins, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardAwardItem::UpdateItemState(RewardAwardItem/AwardState)
 void RewardAwardItem_UpdateItemState_m10906 (RewardAwardItem_t1376 * __this, int32_t ___ItemState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardAwardItem::SetSignInItemRewarded(System.Boolean)
 void RewardAwardItem_SetSignInItemRewarded_m10907 (RewardAwardItem_t1376 * __this, bool ___bactive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardAwardItem::SetSignInItemHalfVipRewarded(System.Boolean)
 void RewardAwardItem_SetSignInItemHalfVipRewarded_m10908 (RewardAwardItem_t1376 * __this, bool ___bactive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardAwardItem::SetChooseState(System.Boolean)
 void RewardAwardItem_SetChooseState_m10909 (RewardAwardItem_t1376 * __this, bool ___bActive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardAwardItem::ItemTipClick(UnityEngine.GameObject)
 void RewardAwardItem_ItemTipClick_m10910 (RewardAwardItem_t1376 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardAwardItem::ChangeChooseItem()
 void RewardAwardItem_ChangeChooseItem_m10911 (RewardAwardItem_t1376 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RewardAwardItem::PlayEffect()
 void RewardAwardItem_PlayEffect_m10912 (RewardAwardItem_t1376 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
