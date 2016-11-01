#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorldBossListItem
struct WorldBossListItem_t1949;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// WorldBossWindow
struct WorldBossWindow_t1948;
// HuaShanPVPData/WorldBossTeamInfo
#include "AssemblyU2DCSharp_HuaShanPVPData_WorldBossTeamInfo.h"

// System.Void WorldBossListItem::.ctor()
 void WorldBossListItem__ctor_m12702 (WorldBossListItem_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldBossListItem::set_CountdownCD(System.Int32)
 void WorldBossListItem_set_CountdownCD_m12703 (WorldBossListItem_t1949 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WorldBossListItem::get_CountdownCD()
 int32_t WorldBossListItem_get_CountdownCD_m12704 (WorldBossListItem_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldBossListItem::Start()
 void WorldBossListItem_Start_m12705 (WorldBossListItem_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldBossListItem::CountdownCDTime()
 void WorldBossListItem_CountdownCDTime_m12706 (WorldBossListItem_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WorldBossListItem::IsCanActiveFightButton()
 bool WorldBossListItem_IsCanActiveFightButton_m12707 (WorldBossListItem_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// WorldBossListItem WorldBossListItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,WorldBossWindow,HuaShanPVPData/WorldBossTeamInfo)
 WorldBossListItem_t1949 * WorldBossListItem_CreateItem_m12708 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, WorldBossWindow_t1948 * ___parent, WorldBossTeamInfo_t1950  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldBossListItem::SetData(WorldBossWindow,HuaShanPVPData/WorldBossTeamInfo)
 void WorldBossListItem_SetData_m12709 (WorldBossListItem_t1949 * __this, WorldBossWindow_t1948 * ___parent, WorldBossTeamInfo_t1950  ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorldBossListItem::OnChallengeTeamButtonClick()
 void WorldBossListItem_OnChallengeTeamButtonClick_m12710 (WorldBossListItem_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// HuaShanPVPData/WorldBossTeamInfo WorldBossListItem::GetData()
 WorldBossTeamInfo_t1950  WorldBossListItem_GetData_m12711 (WorldBossListItem_t1949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
