#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.LogicObj.Obj_OtherPlayer
struct Obj_OtherPlayer_t1655;
// System.String
struct String_t;
// Obj_Mount
struct Obj_Mount_t4395;
// Obj_FlyWing
struct Obj_FlyWing_t4493;
// Obj_Init_Data
struct Obj_Init_Data_t4391;
// UnityEngine.GameObject
struct GameObject_t9;
// GC_BROADCAST_ATTR
struct GC_BROADCAST_ATTR_t2985;
// GCGame.Table.Tab_WeaponModel
struct Tab_WeaponModel_t707;
// Games.Events.GameEvent
struct GameEvent_t2137;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Games.LogicObj.Obj_OtherPlayer::.ctor()
 void Obj_OtherPlayer__ctor_m32081 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Games.LogicObj.Obj_OtherPlayer::get_GUID()
 uint64_t Obj_OtherPlayer_get_GUID_m32082 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_GUID(System.UInt64)
 void Obj_OtherPlayer_set_GUID_m32083 (Obj_OtherPlayer_t1655 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Games.LogicObj.Obj_OtherPlayer::get_GuildGUID()
 uint64_t Obj_OtherPlayer_get_GuildGUID_m32084 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_GuildGUID(System.UInt64)
 void Obj_OtherPlayer_set_GuildGUID_m32085 (Obj_OtherPlayer_t1655 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_FellowID()
 int32_t Obj_OtherPlayer_get_FellowID_m32086 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_FellowID(System.Int32)
 void Obj_OtherPlayer_set_FellowID_m32087 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::get_IsWildEnemyForMainPlayer()
 bool Obj_OtherPlayer_get_IsWildEnemyForMainPlayer_m32088 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_IsWildEnemyForMainPlayer(System.Boolean)
 void Obj_OtherPlayer_set_IsWildEnemyForMainPlayer_m32089 (Obj_OtherPlayer_t1655 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::Init(Obj_Init_Data)
 bool Obj_OtherPlayer_Init_m32090 (Obj_OtherPlayer_t1655 * __this, Obj_Init_Data_t4391 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::OnReloadModle()
 void Obj_OtherPlayer_OnReloadModle_m32091 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::OnBecameVisible()
 void Obj_OtherPlayer_OnBecameVisible_m32092 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::OnBecameInvisible()
 void Obj_OtherPlayer_OnBecameInvisible_m32093 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::Update()
 void Obj_OtherPlayer_Update_m32094 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::FixedUpdate()
 void Obj_OtherPlayer_FixedUpdate_m32095 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::InitNameBoard()
 void Obj_OtherPlayer_InitNameBoard_m32096 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::OnLoadNameBoard(UnityEngine.GameObject)
 void Obj_OtherPlayer_OnLoadNameBoard_m32097 (Obj_OtherPlayer_t1655 * __this, GameObject_t9 * ___objNameBoard, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::UpdateCombatValue()
 void Obj_OtherPlayer_UpdateCombatValue_m32098 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::UpdateVipInfo()
 void Obj_OtherPlayer_UpdateVipInfo_m32099 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.LogicObj.Obj_OtherPlayer::get_StrTitleInvestitive()
 String_t* Obj_OtherPlayer_get_StrTitleInvestitive_m32100 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_StrTitleInvestitive(System.String)
 void Obj_OtherPlayer_set_StrTitleInvestitive_m32101 (Obj_OtherPlayer_t1655 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_CurTitleID()
 int32_t Obj_OtherPlayer_get_CurTitleID_m32102 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_CurTitleID(System.Int32)
 void Obj_OtherPlayer_set_CurTitleID_m32103 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::ShowTitleInvestitive()
 void Obj_OtherPlayer_ShowTitleInvestitive_m32104 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_Profession()
 int32_t Obj_OtherPlayer_get_Profession_m32105 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_Profession(System.Int32)
 void Obj_OtherPlayer_set_Profession_m32106 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_VipCost()
 int32_t Obj_OtherPlayer_get_VipCost_m32107 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_VipCost(System.Int32)
 void Obj_OtherPlayer_set_VipCost_m32108 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_OtherCombatValue()
 int32_t Obj_OtherPlayer_get_OtherCombatValue_m32109 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_OtherCombatValue(System.Int32)
 void Obj_OtherPlayer_set_OtherCombatValue_m32110 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_PkModle()
 int32_t Obj_OtherPlayer_get_PkModle_m32111 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_PkModle(System.Int32)
 void Obj_OtherPlayer_set_PkModle_m32112 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::get_IsInMainPlayerPKList()
 bool Obj_OtherPlayer_get_IsInMainPlayerPKList_m32113 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_IsInMainPlayerPKList(System.Boolean)
 void Obj_OtherPlayer_set_IsInMainPlayerPKList_m32114 (Obj_OtherPlayer_t1655 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Games.LogicObj.Obj_OtherPlayer::GetNameBoardColor()
 Color_t939  Obj_OtherPlayer_GetNameBoardColor_m32115 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::OptChangPKModle()
 void Obj_OtherPlayer_OptChangPKModle_m32116 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::UpdateAttrBroadcastPackt(GC_BROADCAST_ATTR)
 void Obj_OtherPlayer_UpdateAttrBroadcastPackt_m32117 (Obj_OtherPlayer_t1655 * __this, GC_BROADCAST_ATTR_t2985 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::get_ShowRideOnEffect()
 bool Obj_OtherPlayer_get_ShowRideOnEffect_m32118 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_ShowRideOnEffect(System.Boolean)
 void Obj_OtherPlayer_set_ShowRideOnEffect_m32119 (Obj_OtherPlayer_t1655 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Obj_Mount Games.LogicObj.Obj_OtherPlayer::get_MountObj()
 Obj_Mount_t4395 * Obj_OtherPlayer_get_MountObj_m32120 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_MountObj(Obj_Mount)
 void Obj_OtherPlayer_set_MountObj_m32121 (Obj_OtherPlayer_t1655 * __this, Obj_Mount_t4395 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_MountID()
 int32_t Obj_OtherPlayer_get_MountID_m32122 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_MountID(System.Int32)
 void Obj_OtherPlayer_set_MountID_m32123 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::get_IsNeedUnMount()
 bool Obj_OtherPlayer_get_IsNeedUnMount_m32124 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_IsNeedUnMount(System.Boolean)
 void Obj_OtherPlayer_set_IsNeedUnMount_m32125 (Obj_OtherPlayer_t1655 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.LogicObj.Obj_OtherPlayer::GetMountNameBoardHeight()
 float Obj_OtherPlayer_GetMountNameBoardHeight_m32126 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::RideOrUnMount(System.Int32)
 void Obj_OtherPlayer_RideOrUnMount_m32127 (Obj_OtherPlayer_t1655 * __this, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::RideMount(System.Int32)
 void Obj_OtherPlayer_RideMount_m32128 (Obj_OtherPlayer_t1655 * __this, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::RideMountWeapon()
 void Obj_OtherPlayer_RideMountWeapon_m32129 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::RideMountWeapon_L(UnityEngine.GameObject)
 void Obj_OtherPlayer_RideMountWeapon_L_m32130 (Obj_OtherPlayer_t1655 * __this, GameObject_t9 * ___bindPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::RideMountWeapon_R(UnityEngine.GameObject)
 void Obj_OtherPlayer_RideMountWeapon_R_m32131 (Obj_OtherPlayer_t1655 * __this, GameObject_t9 * ___bindPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::ClearRideMountWeapon()
 void Obj_OtherPlayer_ClearRideMountWeapon_m32132 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::ClearUnMountWeapon()
 void Obj_OtherPlayer_ClearUnMountWeapon_m32133 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_WeaponModel Games.LogicObj.Obj_OtherPlayer::GetTabWeaponModel()
 Tab_WeaponModel_t707 * Obj_OtherPlayer_GetTabWeaponModel_m32134 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.LogicObj.Obj_OtherPlayer::GetWeaponPointName_PutOff(System.String,GCGame.Table.Tab_WeaponModel)
 String_t* Obj_OtherPlayer_GetWeaponPointName_PutOff_m32135 (Obj_OtherPlayer_t1655 * __this, String_t* ___hand, Tab_WeaponModel_t707 * ___tabWeaponModel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.LogicObj.Obj_OtherPlayer::GetWeaponPointPath_PutOn(System.String,GCGame.Table.Tab_WeaponModel)
 String_t* Obj_OtherPlayer_GetWeaponPointPath_PutOn_m32136 (Obj_OtherPlayer_t1655 * __this, String_t* ___hand, Tab_WeaponModel_t707 * ___tabWeaponModel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::UnMountWeapon()
 void Obj_OtherPlayer_UnMountWeapon_m32137 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::UnMount()
 void Obj_OtherPlayer_UnMount_m32138 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::OptNameChange()
 void Obj_OtherPlayer_OptNameChange_m32139 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::OptForceChange()
 void Obj_OtherPlayer_OptForceChange_m32140 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::OnCorpse()
 bool Obj_OtherPlayer_OnCorpse_m32141 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::OnDie()
 bool Obj_OtherPlayer_OnDie_m32142 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::OnRelife()
 bool Obj_OtherPlayer_OnRelife_m32143 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_ModelVisualID()
 int32_t Obj_OtherPlayer_get_ModelVisualID_m32144 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_ModelVisualID(System.Int32)
 void Obj_OtherPlayer_set_ModelVisualID_m32145 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_CurWeaponDataID()
 int32_t Obj_OtherPlayer_get_CurWeaponDataID_m32146 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_CurWeaponDataID(System.Int32)
 void Obj_OtherPlayer_set_CurWeaponDataID_m32147 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_WeaponEffectGem()
 int32_t Obj_OtherPlayer_get_WeaponEffectGem_m32148 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_WeaponEffectGem(System.Int32)
 void Obj_OtherPlayer_set_WeaponEffectGem_m32149 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::ReloadWeaponEffectGem()
 void Obj_OtherPlayer_ReloadWeaponEffectGem_m32150 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::UpdateVisualAfterSkill()
 void Obj_OtherPlayer_UpdateVisualAfterSkill_m32151 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::get_QingGongState()
 bool Obj_OtherPlayer_get_QingGongState_m32152 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_QingGongState(System.Boolean)
 void Obj_OtherPlayer_set_QingGongState_m32153 (Obj_OtherPlayer_t1655 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_QingGongPointID()
 int32_t Obj_OtherPlayer_get_QingGongPointID_m32154 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::BeginQingGong(Games.Events.GameEvent)
 void Obj_OtherPlayer_BeginQingGong_m32155 (Obj_OtherPlayer_t1655 * __this, GameEvent_t2137 * ____event, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::EndQingGong()
 void Obj_OtherPlayer_EndQingGong_m32156 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::UpdateQingGong()
 void Obj_OtherPlayer_UpdateQingGong_m32157 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::ShowChatBubble(Games.ChatHistory.ChatHistoryItem)
 void Obj_OtherPlayer_ShowChatBubble_m32158 (Obj_OtherPlayer_t1655 * __this, ChatHistoryItem_t1179  ___history, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::SetVisible(System.Boolean)
 void Obj_OtherPlayer_SetVisible_m32159 (Obj_OtherPlayer_t1655 * __this, bool ___bVisible, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_PaoShangState()
 int32_t Obj_OtherPlayer_get_PaoShangState_m32160 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_PaoShangState(System.Int32)
 void Obj_OtherPlayer_set_PaoShangState_m32161 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::UpdatePaoShangStateEffect(System.Int32)
 void Obj_OtherPlayer_UpdatePaoShangStateEffect_m32162 (Obj_OtherPlayer_t1655 * __this, int32_t ___nState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::get_IsInTeamFollow()
 bool Obj_OtherPlayer_get_IsInTeamFollow_m32163 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_IsInTeamFollow(System.Boolean)
 void Obj_OtherPlayer_set_IsInTeamFollow_m32164 (Obj_OtherPlayer_t1655 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::UpdateTeamFormation()
 void Obj_OtherPlayer_UpdateTeamFormation_m32165 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::OnBindOpt(Games.LogicObj.Obj_Character)
 void Obj_OtherPlayer_OnBindOpt_m32166 (Obj_OtherPlayer_t1655 * __this, Obj_Character_t1772 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::OnUnBindOpt(UnityEngine.Vector3)
 void Obj_OtherPlayer_OnUnBindOpt_m32167 (Obj_OtherPlayer_t1655 * __this, Vector3_t121  ___parentPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::IsPhysicsProfession(System.Int32)
 bool Obj_OtherPlayer_IsPhysicsProfession_m32168 (Object_t * __this/* static, unused */, int32_t ___nProfessionType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::IsMagicAttackProfession(System.Int32)
 bool Obj_OtherPlayer_IsMagicAttackProfession_m32169 (Object_t * __this/* static, unused */, int32_t ___nProfessionType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_CurChangeState()
 int32_t Obj_OtherPlayer_get_CurChangeState_m32170 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_CurChangeState(System.Int32)
 void Obj_OtherPlayer_set_CurChangeState_m32171 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_OtherPlayer::get_IsLoadingModel()
 bool Obj_OtherPlayer_get_IsLoadingModel_m32172 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_IsLoadingModel(System.Boolean)
 void Obj_OtherPlayer_set_IsLoadingModel_m32173 (Obj_OtherPlayer_t1655 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_WaitChangeState()
 int32_t Obj_OtherPlayer_get_WaitChangeState_m32174 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_WaitChangeState(System.Int32)
 void Obj_OtherPlayer_set_WaitChangeState_m32175 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::ChangeModeVisual(System.Int32)
 void Obj_OtherPlayer_ChangeModeVisual_m32176 (Obj_OtherPlayer_t1655 * __this, int32_t ___nChangeState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::ChangeOtherPlayerModel()
 void Obj_OtherPlayer_ChangeOtherPlayerModel_m32177 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::ChangeOtherPlayerModelToNormal()
 void Obj_OtherPlayer_ChangeOtherPlayerModelToNormal_m32178 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Obj_FlyWing Games.LogicObj.Obj_OtherPlayer::get_FlyWingObj()
 Obj_FlyWing_t4493 * Obj_OtherPlayer_get_FlyWingObj_m32179 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_FlyWingObj(Obj_FlyWing)
 void Obj_OtherPlayer_set_FlyWingObj_m32180 (Obj_OtherPlayer_t1655 * __this, Obj_FlyWing_t4493 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::ShowHideFlyWing(System.Int32,System.Boolean)
 void Obj_OtherPlayer_ShowHideFlyWing_m32181 (Obj_OtherPlayer_t1655 * __this, int32_t ___flyWingId, bool ___isShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::EquipFlyWing(System.Int32)
 void Obj_OtherPlayer_EquipFlyWing_m32182 (Obj_OtherPlayer_t1655 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::CancelEquipFlyWing()
 void Obj_OtherPlayer_CancelEquipFlyWing_m32183 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_OtherPlayer::set_OtherPlayerFlyWingModelId(System.Int32)
 void Obj_OtherPlayer_set_OtherPlayerFlyWingModelId_m32184 (Obj_OtherPlayer_t1655 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_OtherPlayer::get_OtherPlayerFlyWingModelId()
 int32_t Obj_OtherPlayer_get_OtherPlayerFlyWingModelId_m32185 (Obj_OtherPlayer_t1655 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
