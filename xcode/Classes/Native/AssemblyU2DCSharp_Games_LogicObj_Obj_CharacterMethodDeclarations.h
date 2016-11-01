#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// Games.LogicObj.Obj_Character/FlyStateData
struct FlyStateData_t4463;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// Games.SkillModle.SkillCore
struct SkillCore_t4465;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<Games.SkillModle.MultiShowDamageBoard>
struct List_1_t4466;
// Games.AI_Logic.AIController
struct AIController_t4467;
// AutoMove
struct AutoMove_t4468;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t4469;
// UniformAcceleratedMotion
struct UniformAcceleratedMotion_t1369;
// Games.Events.GameEvent
struct GameEvent_t2137;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t1252;
// Games.Animation_Modle.AnimationLogic
struct AnimationLogic_t4470;
// BaseAttr
struct BaseAttr_t4471;
// BattleSoulMaker
struct BattleSoulMaker_t4472;
// Obj_Init_Data
struct Obj_Init_Data_t4391;
// GCGame.Table.Tab_ItemVisual
struct Tab_ItemVisual_t509;
// System.Object
struct Object_t;
// GC_BROADCAST_ATTR
struct GC_BROADCAST_ATTR_t2985;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_ANI.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_DAMAGEB.h"
// Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_TYP.h"

// System.Void Games.LogicObj.Obj_Character::.ctor()
 void Obj_Character__ctor_m31369 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::.cctor()
 void Obj_Character__cctor_m31370 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.LogicObj.Obj_Character/FlyStateData Games.LogicObj.Obj_Character::get__FlyStateData()
 FlyStateData_t4463 * Obj_Character_get__FlyStateData_m31371 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set__FlyStateData(Games.LogicObj.Obj_Character/FlyStateData)
 void Obj_Character_set__FlyStateData_m31372 (Obj_Character_t1772 * __this, FlyStateData_t4463 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Character::get_BindParent()
 int32_t Obj_Character_get_BindParent_m31373 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_BindParent(System.Int32)
 void Obj_Character_set_BindParent_m31374 (Obj_Character_t1772 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Games.LogicObj.Obj_Character::get_BindChildren()
 List_1_t90 * Obj_Character_get_BindChildren_m31375 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Character::GetBindChildIndex(System.Int32)
 int32_t Obj_Character_GetBindChildIndex_m31376 (Obj_Character_t1772 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::UpdateAllBind()
 void Obj_Character_UpdateAllBind_m31377 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::UpdateBindChildren(System.Collections.Generic.List`1<System.Int32>)
 void Obj_Character_UpdateBindChildren_m31378 (Obj_Character_t1772 * __this, List_1_t90 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnBindParentChange(System.Int32,System.Int32)
 void Obj_Character_OnBindParentChange_m31379 (Obj_Character_t1772 * __this, int32_t ___oldID, int32_t ___newID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnBindChildChange(System.Int32,System.Int32)
 void Obj_Character_OnBindChildChange_m31380 (Obj_Character_t1772 * __this, int32_t ___oldID, int32_t ___newID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnBindOpt(Games.LogicObj.Obj_Character)
 void Obj_Character_OnBindOpt_m31381 (Obj_Character_t1772 * __this, Obj_Character_t1772 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnUnBindOpt(UnityEngine.Vector3)
 void Obj_Character_OnUnBindOpt_m31382 (Obj_Character_t1772 * __this, Vector3_t121  ___parentPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::InitBindFromData(Obj_Init_Data)
 void Obj_Character_InitBindFromData_m31383 (Obj_Character_t1772 * __this, Obj_Init_Data_t4391 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.SkillModle.SkillCore Games.LogicObj.Obj_Character::get_SkillCore()
 SkillCore_t4465 * Obj_Character_get_SkillCore_m31384 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Character::get_CurUseSkillId()
 int32_t Obj_Character_get_CurUseSkillId_m31385 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_CurUseSkillId(System.Int32)
 void Obj_Character_set_CurUseSkillId_m31386 (Obj_Character_t1772 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::Init(Obj_Init_Data)
 bool Obj_Character_Init_m31387 (Obj_Character_t1772 * __this, Obj_Init_Data_t4391 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::OnCorpse()
 bool Obj_Character_OnCorpse_m31388 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::OnDie()
 bool Obj_Character_OnDie_m31389 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::OnRelife()
 bool Obj_Character_OnRelife_m31390 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::IsDie()
 bool Obj_Character_IsDie_m31391 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::get_AutoLife()
 bool Obj_Character_get_AutoLife_m31392 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_AutoLife(System.Boolean)
 void Obj_Character_set_AutoLife_m31393 (Obj_Character_t1772 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Games.LogicObj.Obj_Character::get_AutoLifeTime()
 int16_t Obj_Character_get_AutoLifeTime_m31394 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_AutoLifeTime(System.Int16)
 void Obj_Character_set_AutoLifeTime_m31395 (Obj_Character_t1772 * __this, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Games.LogicObj.Obj_Character::get_HeadInfoBoard()
 GameObject_t9 * Obj_Character_get_HeadInfoBoard_m31396 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Character::get_NameBoardIndex()
 int32_t Obj_Character_get_NameBoardIndex_m31397 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_NameBoardIndex(System.Int32)
 void Obj_Character_set_NameBoardIndex_m31398 (Obj_Character_t1772 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.LogicObj.Obj_Character::get_DeltaHeight()
 float Obj_Character_get_DeltaHeight_m31399 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_DeltaHeight(System.Single)
 void Obj_Character_set_DeltaHeight_m31400 (Obj_Character_t1772 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::ShowNameBoard()
 void Obj_Character_ShowNameBoard_m31401 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::CloseNameBoard()
 void Obj_Character_CloseNameBoard_m31402 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::SetNameBoardColor()
 void Obj_Character_SetNameBoardColor_m31403 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Games.LogicObj.Obj_Character::GetNameBoardColor()
 Color_t939  Obj_Character_GetNameBoardColor_m31404 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.SkillModle.MultiShowDamageBoard> Games.LogicObj.Obj_Character::get_MultiShowDamageInfo()
 List_1_t4466 * Obj_Character_get_MultiShowDamageInfo_m31405 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_MultiShowDamageInfo(System.Collections.Generic.List`1<Games.SkillModle.MultiShowDamageBoard>)
 void Obj_Character_set_MultiShowDamageInfo_m31406 (Obj_Character_t1772 * __this, List_1_t4466 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::UpdateShowMultiShowDamageBoard()
 void Obj_Character_UpdateShowMultiShowDamageBoard_m31407 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::ShowDamageBoard(Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE,System.Int32)
 void Obj_Character_ShowDamageBoard_m31408 (Obj_Character_t1772 * __this, int32_t ___eType, int32_t ___nValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::ShowDamageBoard_SkillName(Games.GlobeDefine.GameDefine_Globe/DAMAGEBOARD_TYPE,System.String,System.Boolean)
 void Obj_Character_ShowDamageBoard_SkillName_m31409 (Obj_Character_t1772 * __this, int32_t ___eType, String_t* ___strValue, bool ___isProfessionSkill, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::UpdateTargetFrame(Games.LogicObj.Obj_Character)
 void Obj_Character_UpdateTargetFrame_m31410 (Obj_Character_t1772 * __this, Obj_Character_t1772 * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Character::get_ReputationID()
 int32_t Obj_Character_get_ReputationID_m31411 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_ReputationID(System.Int32)
 void Obj_Character_set_ReputationID_m31412 (Obj_Character_t1772 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.AI_Logic.AIController Games.LogicObj.Obj_Character::get_Controller()
 AIController_t4467 * Obj_Character_get_Controller_m31413 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_Controller(Games.AI_Logic.AIController)
 void Obj_Character_set_Controller_m31414 (Obj_Character_t1772 * __this, AIController_t4467 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AutoMove Games.LogicObj.Obj_Character::get_AutoMoveComponent()
 AutoMove_t4468 * Obj_Character_get_AutoMoveComponent_m31415 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::InitAI()
 void Obj_Character_InitAI_m31416 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnEnterCombat(Games.LogicObj.Obj_Character)
 void Obj_Character_OnEnterCombat_m31417 (Obj_Character_t1772 * __this, Obj_Character_t1772 * ___Attacker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnLevelCombat(Games.LogicObj.Obj_Character)
 void Obj_Character_OnLevelCombat_m31418 (Obj_Character_t1772 * __this, Obj_Character_t1772 * ___Attacker, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Games.LogicObj.Obj_Character::DefaultPosition()
 Vector3_t121  Obj_Character_DefaultPosition_m31419 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::ReloadPlayerModelVisual(System.Int32,System.Int32)
 void Obj_Character_ReloadPlayerModelVisual_m31420 (Obj_Character_t1772 * __this, int32_t ___nModelVisualID, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::RealoadPlayerWeaponVisual(System.Int32,System.Int32,System.Int32,System.Int32)
 void Obj_Character_RealoadPlayerWeaponVisual_m31421 (Obj_Character_t1772 * __this, int32_t ___nWeaponDataID, int32_t ___nProfession, int32_t ___nWeaponEffectGem, int32_t ___nCurChangeState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Character::GetCharModelID(GCGame.Table.Tab_ItemVisual,System.Int32)
 int32_t Obj_Character_GetCharModelID_m31422 (Obj_Character_t1772 * __this, Tab_ItemVisual_t509 * ___tabItemVisual, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Character::GetCharModelIDByChangeState(System.Int32,System.Int32)
 int32_t Obj_Character_GetCharModelIDByChangeState_m31423 (Obj_Character_t1772 * __this, int32_t ___nProfession, int32_t ___nCurChangeState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Character::GetWeaponModelID(GCGame.Table.Tab_ItemVisual,System.Int32)
 int32_t Obj_Character_GetWeaponModelID_m31424 (Obj_Character_t1772 * __this, Tab_ItemVisual_t509 * ___tabItemVisual, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Character::GetWeaponModelIDByCurState(System.Int32,System.Int32)
 int32_t Obj_Character_GetWeaponModelIDByCurState_m31425 (Obj_Character_t1772 * __this, int32_t ___nCurState, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.LogicObj.Obj_Character::GetAnimIdByState(System.Int32,System.Int32,System.Int32)
 int32_t Obj_Character_GetAnimIdByState_m31426 (Obj_Character_t1772 * __this, int32_t ___nProfession, int32_t ___nCurChangeState, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::SetVisible(System.Boolean)
 void Obj_Character_SetVisible_m31427 (Obj_Character_t1772 * __this, bool ___bVisible, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::IsVisibleChar()
 bool Obj_Character_IsVisibleChar_m31428 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnReloadModle()
 void Obj_Character_OnReloadModle_m31429 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OptAfterInitMaterialInfo()
 void Obj_Character_OptAfterInitMaterialInfo_m31430 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::get_ModelInViewPort()
 bool Obj_Character_get_ModelInViewPort_m31431 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_ModelInViewPort(System.Boolean)
 void Obj_Character_set_ModelInViewPort_m31432 (Obj_Character_t1772 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::PlaySkillRangeEffect()
 void Obj_Character_PlaySkillRangeEffect_m31433 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnLoadSkillRangeEffect(UnityEngine.GameObject,System.Object)
 void Obj_Character_OnLoadSkillRangeEffect_m31434 (Obj_Character_t1772 * __this, GameObject_t9 * ___SkillRangeEffect, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::StopSkillRangeEffect()
 void Obj_Character_StopSkillRangeEffect_m31435 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnModelInitOk()
 void Obj_Character_OnModelInitOk_m31436 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnAnimationIsHit()
 void Obj_Character_OnAnimationIsHit_m31437 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::RealoadPlayerFlyWingModel()
 void Obj_Character_RealoadPlayerFlyWingModel_m31438 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::onAsyLoadFlyWing(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void Obj_Character_onAsyLoadFlyWing_m31439 (Object_t * __this/* static, unused */, String_t* ___modeName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::DestroyFlyWingObj()
 void Obj_Character_DestroyFlyWingObj_m31440 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::get_IsMoving()
 bool Obj_Character_get_IsMoving_m31441 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_IsMoving(System.Boolean)
 void Obj_Character_set_IsMoving_m31442 (Obj_Character_t1772 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::get_IsTracing()
 bool Obj_Character_get_IsTracing_m31443 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_IsTracing(System.Boolean)
 void Obj_Character_set_IsTracing_m31444 (Obj_Character_t1772 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Games.LogicObj.Obj_Character::get_VecTargetPos()
 Vector3_t121  Obj_Character_get_VecTargetPos_m31445 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_VecTargetPos(UnityEngine.Vector3)
 void Obj_Character_set_VecTargetPos_m31446 (Obj_Character_t1772 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NavMeshAgent Games.LogicObj.Obj_Character::get_NavAgent()
 NavMeshAgent_t4469 * Obj_Character_get_NavAgent_m31447 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_NavAgent(UnityEngine.NavMeshAgent)
 void Obj_Character_set_NavAgent_m31448 (Obj_Character_t1772 * __this, NavMeshAgent_t4469 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::InitNavAgent()
 void Obj_Character_InitNavAgent_m31449 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::IsMoveNavAgent(UnityEngine.Vector3)
 bool Obj_Character_IsMoveNavAgent_m31450 (Obj_Character_t1772 * __this, Vector3_t121  ___targetVector3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::get_IsMoveToNoFaceTo()
 bool Obj_Character_get_IsMoveToNoFaceTo_m31451 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_IsMoveToNoFaceTo(System.Boolean)
 void Obj_Character_set_IsMoveToNoFaceTo_m31452 (Obj_Character_t1772 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UniformAcceleratedMotion Games.LogicObj.Obj_Character::get_AcceleratedMotion()
 UniformAcceleratedMotion_t1369 * Obj_Character_get_AcceleratedMotion_m31453 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_AcceleratedMotion(UniformAcceleratedMotion)
 void Obj_Character_set_AcceleratedMotion_m31454 (Obj_Character_t1772 * __this, UniformAcceleratedMotion_t1369 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::EnableMovingRotation(System.Boolean)
 void Obj_Character_EnableMovingRotation_m31455 (Obj_Character_t1772 * __this, bool ___bEnable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Games.LogicObj.Obj_Character::get_MoveTarget()
 GameObject_t9 * Obj_Character_get_MoveTarget_m31456 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_MoveTarget(UnityEngine.GameObject)
 void Obj_Character_set_MoveTarget_m31457 (Obj_Character_t1772 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.LogicObj.Obj_Character::get_StopRange()
 float Obj_Character_get_StopRange_m31458 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_StopRange(System.Single)
 void Obj_Character_set_StopRange_m31459 (Obj_Character_t1772 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Events.GameEvent Games.LogicObj.Obj_Character::get_MoveOverEvent()
 GameEvent_t2137 * Obj_Character_get_MoveOverEvent_m31460 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_MoveOverEvent(Games.Events.GameEvent)
 void Obj_Character_set_MoveOverEvent_m31461 (Obj_Character_t1772 * __this, GameEvent_t2137 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::ResetMoveOverEvent()
 void Obj_Character_ResetMoveOverEvent_m31462 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::BeforeMoveTo(System.Boolean)
 void Obj_Character_BeforeMoveTo_m31463 (Obj_Character_t1772 * __this, bool ___bIsAutoSearch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::MoveTo(UnityEngine.Vector3,UnityEngine.GameObject,System.Single,System.Boolean)
 void Obj_Character_MoveTo_m31464 (Obj_Character_t1772 * __this, Vector3_t121  ___targetPos, GameObject_t9 * ___targetObj, float ___fStopRange, bool ___bIsAutoSearch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::StopMove()
 void Obj_Character_StopMove_m31465 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::FaceToScreen()
 void Obj_Character_FaceToScreen_m31466 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::FaceTo(UnityEngine.Vector3)
 void Obj_Character_FaceTo_m31467 (Obj_Character_t1772 * __this, Vector3_t121  ___facePos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::UpdateTargetMove()
 void Obj_Character_UpdateTargetMove_m31468 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::CrashMove()
 void Obj_Character_CrashMove_m31469 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnMoveOver()
 void Obj_Character_OnMoveOver_m31470 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::IsInObstacles()
 bool Obj_Character_IsInObstacles_m31471 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::MoveToPosition(UnityEngine.Vector3,System.Single)
 void Obj_Character_MoveToPosition_m31472 (Obj_Character_t1772 * __this, Vector3_t121  ___targetPos, float ___fStopRange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OtherPlayerMove()
 void Obj_Character_OtherPlayerMove_m31473 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::OtherPlayerIsMove(UnityEngine.Vector3,System.Single)
 bool Obj_Character_OtherPlayerIsMove_m31474 (Obj_Character_t1772 * __this, Vector3_t121  ___targetPos, float ___fStopRange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::get_InDizzy()
 bool Obj_Character_get_InDizzy_m31475 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_InDizzy(System.Boolean)
 void Obj_Character_set_InDizzy_m31476 (Obj_Character_t1772 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE Games.LogicObj.Obj_Character::get_CurObjAnimState()
 int32_t Obj_Character_get_CurObjAnimState_m31477 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_CurObjAnimState(Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE)
 void Obj_Character_set_CurObjAnimState_m31478 (Obj_Character_t1772 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Games.LogicObj.Obj_Character::get_AnimationFilePath()
 String_t* Obj_Character_get_AnimationFilePath_m31479 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_AnimationFilePath(System.String)
 void Obj_Character_set_AnimationFilePath_m31480 (Obj_Character_t1772 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animation Games.LogicObj.Obj_Character::get_Objanimation()
 Animation_t1252 * Obj_Character_get_Objanimation_m31481 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Animation_Modle.AnimationLogic Games.LogicObj.Obj_Character::get_AnimLogic()
 AnimationLogic_t4470 * Obj_Character_get_AnimLogic_m31482 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_AnimLogic(Games.Animation_Modle.AnimationLogic)
 void Obj_Character_set_AnimLogic_m31483 (Obj_Character_t1772 * __this, AnimationLogic_t4470 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::InitAnimation(System.String)
 void Obj_Character_InitAnimation_m31484 (Obj_Character_t1772 * __this, String_t* ___strChildName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::UpdateAnimation()
 void Obj_Character_UpdateAnimation_m31485 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnSwithObjAnimState(Games.GlobeDefine.GameDefine_Globe/OBJ_ANIMSTATE,System.Boolean)
 void Obj_Character_OnSwithObjAnimState_m31486 (Obj_Character_t1772 * __this, int32_t ___ObjState, bool ___playEffectImmediately, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::ProcessIdleAnimState(System.Boolean)
 void Obj_Character_ProcessIdleAnimState_m31487 (Obj_Character_t1772 * __this, bool ___playEffectImmediately, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::ProcessCombatAnimState()
 void Obj_Character_ProcessCombatAnimState_m31488 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::ProcessWalkAnimState()
 void Obj_Character_ProcessWalkAnimState_m31489 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::PlaySoundAtPos(Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE,System.Int32,UnityEngine.Vector3)
 void Obj_Character_PlaySoundAtPos_m31490 (Obj_Character_t1772 * __this, int32_t ___ObjType, int32_t ___nSoundID, Vector3_t121  ___playingPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::ProcessDeathAnimState()
 void Obj_Character_ProcessDeathAnimState_m31491 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::ProcessDeathAnimStateEx()
 void Obj_Character_ProcessDeathAnimStateEx_m31492 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::ProcessHitAnimState()
 void Obj_Character_ProcessHitAnimState_m31493 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::AttackFly(System.Int32,System.Int32,System.Single)
 void Obj_Character_AttackFly_m31494 (Obj_Character_t1772 * __this, int32_t ___nDis, int32_t ___nHight, float ___fTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::UpdateAttckFly()
 void Obj_Character_UpdateAttckFly_m31495 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnAnimationFinish(System.Int32)
 void Obj_Character_OnAnimationFinish_m31496 (Obj_Character_t1772 * __this, int32_t ___animationID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnAnimationStop(System.Int32)
 void Obj_Character_OnAnimationStop_m31497 (Obj_Character_t1772 * __this, int32_t ___aninationID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Games.LogicObj.Obj_Character::GetCurFlyStartAnimTime(System.Int32)
 float Obj_Character_GetCurFlyStartAnimTime_m31498 (Obj_Character_t1772 * __this, int32_t ___nStartAniId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BaseAttr Games.LogicObj.Obj_Character::get_BaseAttr()
 BaseAttr_t4471 * Obj_Character_get_BaseAttr_m31499 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_BaseAttr(BaseAttr)
 void Obj_Character_set_BaseAttr_m31500 (Obj_Character_t1772 * __this, BaseAttr_t4471 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OptHPChange()
 void Obj_Character_OptHPChange_m31501 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OptMPChange()
 void Obj_Character_OptMPChange_m31502 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OptXPChange()
 void Obj_Character_OptXPChange_m31503 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OptLevelChange()
 void Obj_Character_OptLevelChange_m31504 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OptHeadPicChange()
 void Obj_Character_OptHeadPicChange_m31505 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OptNameChange()
 void Obj_Character_OptNameChange_m31506 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OptForceChange()
 void Obj_Character_OptForceChange_m31507 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OptStealthLevChange()
 void Obj_Character_OptStealthLevChange_m31508 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::OnExpChange()
 void Obj_Character_OnExpChange_m31509 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::UpdateAttrBroadcastPackt(GC_BROADCAST_ATTR)
 void Obj_Character_UpdateAttrBroadcastPackt_m31510 (Obj_Character_t1772 * __this, GC_BROADCAST_ATTR_t2985 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::UpdateOtherPlayerChangeState(System.Int32)
 void Obj_Character_UpdateOtherPlayerChangeState_m31511 (Obj_Character_t1772 * __this, int32_t ___nChangeState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::UpdateObjVisiabelState(System.Int32)
 void Obj_Character_UpdateObjVisiabelState_m31512 (Obj_Character_t1772 * __this, int32_t ___nVisiable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Obj_Character::get_IsLightState()
 bool Obj_Character_get_IsLightState_m31513 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_IsLightState(System.Boolean)
 void Obj_Character_set_IsLightState_m31514 (Obj_Character_t1772 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BattleSoulMaker Games.LogicObj.Obj_Character::get_BattleSoul()
 BattleSoulMaker_t4472 * Obj_Character_get_BattleSoul_m31515 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_BattleSoul(BattleSoulMaker)
 void Obj_Character_set_BattleSoul_m31516 (Obj_Character_t1772 * __this, BattleSoulMaker_t4472 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Games.LogicObj.Obj_Character::get_LightSkillTargetPos()
 Vector3_t121  Obj_Character_get_LightSkillTargetPos_m31517 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::set_LightSkillTargetPos(UnityEngine.Vector3)
 void Obj_Character_set_LightSkillTargetPos_m31518 (Obj_Character_t1772 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::PlayLightSkill(UnityEngine.Vector3,System.Int32)
 void Obj_Character_PlayLightSkill_m31519 (Obj_Character_t1772 * __this, Vector3_t121  ___dstPos, int32_t ___nStep, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::StartLightSkillMove(System.Int32,UnityEngine.Vector3)
 void Obj_Character_StartLightSkillMove_m31520 (Obj_Character_t1772 * __this, int32_t ___nAnimID, Vector3_t121  ___vecTargetPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::EndLightSkillMove()
 void Obj_Character_EndLightSkillMove_m31521 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::UpdateLightSkill()
 void Obj_Character_UpdateLightSkill_m31522 (Obj_Character_t1772 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.LogicObj.Obj_Character::BeginTeleMoveInLight(UnityEngine.Vector3)
 void Obj_Character_BeginTeleMoveInLight_m31523 (Obj_Character_t1772 * __this, Vector3_t121  ___targetPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
