#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.LogicObj.Obj_NPC
struct Obj_NPC_t1569;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// Obj_Init_Data
struct Obj_Init_Data_t4391;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UnityEngine.GameObject
struct GameObject_t9;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// Games.GlobeDefine.GameDefine_Globe/NPC_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_NPC_TYP.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void Games.LogicObj.Obj_NPC::.ctor()
 void Obj_NPC__ctor_m32019 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.GlobeDefine.GameDefine_Globe/NPC_TYPE Games.LogicObj.Obj_NPC::get_NpcType()
 int32_t Obj_NPC_get_NpcType_m32020 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_NPC::get_NeedToHideModelWhenInvislble()
 bool Obj_NPC_get_NeedToHideModelWhenInvislble_m32021 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_NPC::Init(Obj_Init_Data)
 bool Obj_NPC_Init_m32022 (Obj_NPC_t1569 * __this, Obj_Init_Data_t4391 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.LogicObj.Obj_NPC::get_BornPosX()
 float Obj_NPC_get_BornPosX_m32023 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_BornPosX(System.Single)
 void Obj_NPC_set_BornPosX_m32024 (Obj_NPC_t1569 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.LogicObj.Obj_NPC::get_BornPosY()
 float Obj_NPC_get_BornPosY_m32025 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_BornPosY(System.Single)
 void Obj_NPC_set_BornPosY_m32026 (Obj_NPC_t1569 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.LogicObj.Obj_NPC::get_BornPosZ()
 float Obj_NPC_get_BornPosZ_m32027 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_BornPosZ(System.Single)
 void Obj_NPC_set_BornPosZ_m32028 (Obj_NPC_t1569 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_NPC::get_Profession()
 int32_t Obj_NPC_get_Profession_m32029 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_Profession(System.Int32)
 void Obj_NPC_set_Profession_m32030 (Obj_NPC_t1569 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_NPC::get_WeaponDataID()
 int32_t Obj_NPC_get_WeaponDataID_m32031 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_WeaponDataID(System.Int32)
 void Obj_NPC_set_WeaponDataID_m32032 (Obj_NPC_t1569 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_NPC::get_ModelVisualID()
 int32_t Obj_NPC_get_ModelVisualID_m32033 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_ModelVisualID(System.Int32)
 void Obj_NPC_set_ModelVisualID_m32034 (Obj_NPC_t1569 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_NPC::get_WeaponEffectGem()
 int32_t Obj_NPC_get_WeaponEffectGem_m32035 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_WeaponEffectGem(System.Int32)
 void Obj_NPC_set_WeaponEffectGem_m32036 (Obj_NPC_t1569 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::StopNPCEffect()
 void Obj_NPC_StopNPCEffect_m32037 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::PlayUnDissolve()
 void Obj_NPC_PlayUnDissolve_m32038 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::ResetEdge()
 void Obj_NPC_ResetEdge_m32039 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_NPC::OnDie()
 bool Obj_NPC_OnDie_m32040 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Games.LogicObj.Obj_NPC::DelaySceond()
 Object_t * Obj_NPC_DelaySceond_m32041 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::OnReloadModle()
 void Obj_NPC_OnReloadModle_m32042 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::OnBecameVisible()
 void Obj_NPC_OnBecameVisible_m32043 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::OnBecameInvisible()
 void Obj_NPC_OnBecameInvisible_m32044 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::FixedUpdate()
 void Obj_NPC_FixedUpdate_m32045 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::AutoShowNPCDialogNear()
 void Obj_NPC_AutoShowNPCDialogNear_m32046 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_NPC::IsAutoShowOptionDialog()
 bool Obj_NPC_IsAutoShowOptionDialog_m32047 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::InitNameBoard()
 void Obj_NPC_InitNameBoard_m32048 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::OnLoadNameBoard(UnityEngine.GameObject)
 void Obj_NPC_OnLoadNameBoard_m32049 (Obj_NPC_t1569 * __this, GameObject_t9 * ___objNameBoard, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_NPC::get_DefaultDialogID()
 int32_t Obj_NPC_get_DefaultDialogID_m32050 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_DefaultDialogID(System.Int32)
 void Obj_NPC_set_DefaultDialogID_m32051 (Obj_NPC_t1569 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Games.LogicObj.Obj_NPC::get_MissionList()
 List_1_t90 * Obj_NPC_get_MissionList_m32052 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::AddMissionToList(System.Int32)
 void Obj_NPC_AddMissionToList_m32053 (Obj_NPC_t1569 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::ClearMissionList()
 void Obj_NPC_ClearMissionList_m32054 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_NPC::IsHaveMission(System.Int32)
 bool Obj_NPC_IsHaveMission_m32055 (Obj_NPC_t1569 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::OnMoveOver()
 void Obj_NPC_OnMoveOver_m32056 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::OnAnimationFinish(System.Int32)
 void Obj_NPC_OnAnimationFinish_m32057 (Obj_NPC_t1569 * __this, int32_t ___animationID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::OnEnterCombat(Games.LogicObj.Obj_Character)
 void Obj_NPC_OnEnterCombat_m32058 (Obj_NPC_t1569 * __this, Obj_Character_t1772 * ___Attacker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::OnLevelCombat(Games.LogicObj.Obj_Character)
 void Obj_NPC_OnLevelCombat_m32059 (Obj_NPC_t1569 * __this, Obj_Character_t1772 * ___Attacker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::AddDialogMission()
 void Obj_NPC_AddDialogMission_m32060 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::OptNameChange()
 void Obj_NPC_OptNameChange_m32061 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::OptForceChange()
 void Obj_NPC_OptForceChange_m32062 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Games.LogicObj.Obj_NPC::GetNameBoardColor()
 Color_t939  Obj_NPC_GetNameBoardColor_m32063 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_NPC::IsNeedBecameVisible()
 bool Obj_NPC_IsNeedBecameVisible_m32064 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::OnBindOpt(Games.LogicObj.Obj_Character)
 void Obj_NPC_OnBindOpt_m32065 (Obj_NPC_t1569 * __this, Obj_Character_t1772 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_NPC::get_BelongTeamID()
 int32_t Obj_NPC_get_BelongTeamID_m32066 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_BelongTeamID(System.Int32)
 void Obj_NPC_set_BelongTeamID_m32067 (Obj_NPC_t1569 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_NPC::get_BelongObjID()
 int32_t Obj_NPC_get_BelongObjID_m32068 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_BelongObjID(System.Int32)
 void Obj_NPC_set_BelongObjID_m32069 (Obj_NPC_t1569 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_NPC::get_IsGuildActivityBoss()
 bool Obj_NPC_get_IsGuildActivityBoss_m32070 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_IsGuildActivityBoss(System.Boolean)
 void Obj_NPC_set_IsGuildActivityBoss_m32071 (Obj_NPC_t1569 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_NPC::IsGuildBoss()
 bool Obj_NPC_IsGuildBoss_m32072 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_NPC::get_SceneNpcId()
 int32_t Obj_NPC_get_SceneNpcId_m32073 (Obj_NPC_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_NPC::set_SceneNpcId(System.Int32)
 void Obj_NPC_set_SceneNpcId_m32074 (Obj_NPC_t1569 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
