#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpringRewardItem
struct SpringRewardItem_t2072;
// UnityEngine.GameObject
struct GameObject_t9;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Games.AwardActivity.ActivityRewardData
#include "AssemblyU2DCSharp_Games_AwardActivity_ActivityRewardData.h"
// AcitivityRewardState
#include "AssemblyU2DCSharp_AcitivityRewardState.h"

// System.Void SpringRewardItem::.ctor()
 void SpringRewardItem__ctor_m13979 (SpringRewardItem_t2072 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringRewardItem::Start()
 void SpringRewardItem_Start_m13980 (SpringRewardItem_t2072 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime SpringRewardItem::get_CurDateTime()
 DateTime_t1171  SpringRewardItem_get_CurDateTime_m13981 (SpringRewardItem_t2072 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringRewardItem::SetRewardInfo(Games.AwardActivity.ActivityRewardData)
 void SpringRewardItem_SetRewardInfo_m13982 (SpringRewardItem_t2072 * __this, ActivityRewardData_t2067  ___rewardData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SpringRewardItem::get_IsChoose()
 bool SpringRewardItem_get_IsChoose_m13983 (SpringRewardItem_t2072 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringRewardItem::set_IsChoose(System.Boolean)
 void SpringRewardItem_set_IsChoose_m13984 (SpringRewardItem_t2072 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringRewardItem::SetShowState(AcitivityRewardState)
 void SpringRewardItem_SetShowState_m13985 (SpringRewardItem_t2072 * __this, int32_t ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringRewardItem::OnRewardItemClick(UnityEngine.GameObject)
 void SpringRewardItem_OnRewardItemClick_m13986 (SpringRewardItem_t2072 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
