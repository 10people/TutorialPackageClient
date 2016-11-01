#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ObjEffectBehaviourController
struct ObjEffectBehaviourController_t2122;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// GCGame.Table.Tab_Effect
struct Tab_Effect_t433;
// PlayEffectDelegate
struct PlayEffectDelegate_t2116;
// System.Object
struct Object_t;
// GCGame.Table.Tab_WeaponModel
struct Tab_WeaponModel_t707;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// EEffectBindTargetType
#include "AssemblyU2DCSharp_EEffectBindTargetType.h"

// System.Void ObjEffectBehaviourController::.ctor()
 void ObjEffectBehaviourController__ctor_m14388 (ObjEffectBehaviourController_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjEffectBehaviourController::get_IsNpcObj()
 bool ObjEffectBehaviourController_get_IsNpcObj_m14389 (ObjEffectBehaviourController_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjEffectBehaviourController::GetBindPointObj(System.String)
 GameObject_t9 * ObjEffectBehaviourController_GetBindPointObj_m14390 (ObjEffectBehaviourController_t2122 * __this, String_t* ___pointName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ObjEffectBehaviourController::GetBindPathByName(System.Int32,System.String)
 String_t* ObjEffectBehaviourController_GetBindPathByName_m14391 (ObjEffectBehaviourController_t2122 * __this, int32_t ___id, String_t* ___szName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::InitBindPointData(UnityEngine.GameObject)
 void ObjEffectBehaviourController_InitBindPointData_m14392 (ObjEffectBehaviourController_t2122 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::ClearEffect()
 void ObjEffectBehaviourController_ClearEffect_m14393 (ObjEffectBehaviourController_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjEffectBehaviourController::IsHaveBindPoint(System.String)
 bool ObjEffectBehaviourController_IsHaveBindPoint_m14394 (ObjEffectBehaviourController_t2122 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::InitBindPointInfo()
 void ObjEffectBehaviourController_InitBindPointInfo_m14395 (ObjEffectBehaviourController_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::StopEffect(System.Int32,System.Boolean)
 void ObjEffectBehaviourController_StopEffect_m14396 (ObjEffectBehaviourController_t2122 * __this, int32_t ___effectID, bool ___bStopAll, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::LoadEffect(GCGame.Table.Tab_Effect,PlayEffectDelegate,System.Object)
 void ObjEffectBehaviourController_LoadEffect_m14397 (ObjEffectBehaviourController_t2122 * __this, Tab_Effect_t433 * ___effectData, PlayEffectDelegate_t2116 * ___delPlayEffect, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::ChangeMaterialColor(System.Int32)
 void ObjEffectBehaviourController_ChangeMaterialColor_m14398 (ObjEffectBehaviourController_t2122 * __this, int32_t ___effectChangeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::ClearBindPoint(UnityEngine.GameObject)
 void ObjEffectBehaviourController_ClearBindPoint_m14399 (ObjEffectBehaviourController_t2122 * __this, GameObject_t9 * ___bindPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjEffectBehaviourController::ChangeColorEffct()
 bool ObjEffectBehaviourController_ChangeColorEffct_m14400 (ObjEffectBehaviourController_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::NPCStopEffect()
 void ObjEffectBehaviourController_NPCStopEffect_m14401 (ObjEffectBehaviourController_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::OnMountModelOk()
 void ObjEffectBehaviourController_OnMountModelOk_m14402 (ObjEffectBehaviourController_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::OnMountOff(System.Int32)
 void ObjEffectBehaviourController_OnMountOff_m14403 (ObjEffectBehaviourController_t2122 * __this, int32_t ___mountId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::OnWeaponEquOk(GCGame.Table.Tab_WeaponModel)
 void ObjEffectBehaviourController_OnWeaponEquOk_m14404 (ObjEffectBehaviourController_t2122 * __this, Tab_WeaponModel_t707 * ___tabData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::OnWeaponUnEquOk()
 void ObjEffectBehaviourController_OnWeaponUnEquOk_m14405 (ObjEffectBehaviourController_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::OnFlyWingOk(System.Int32,UnityEngine.GameObject)
 void ObjEffectBehaviourController_OnFlyWingOk_m14406 (ObjEffectBehaviourController_t2122 * __this, int32_t ___id, GameObject_t9 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::OnCancalFlyWing()
 void ObjEffectBehaviourController_OnCancalFlyWing_m14407 (ObjEffectBehaviourController_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::AddCharModelEffects(Games.LogicObj.Obj_Character,EEffectBindTargetType)
 void ObjEffectBehaviourController_AddCharModelEffects_m14408 (Object_t * __this/* static, unused */, Obj_Character_t1772 * ___obj, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::OnMove()
 void ObjEffectBehaviourController_OnMove_m14409 (ObjEffectBehaviourController_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::OnIdle()
 void ObjEffectBehaviourController_OnIdle_m14410 (ObjEffectBehaviourController_t2122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjEffectBehaviourController::PlaySkillWarningEffect(System.Int32)
 void ObjEffectBehaviourController_PlaySkillWarningEffect_m14411 (ObjEffectBehaviourController_t2122 * __this, int32_t ___skillExId, MethodInfo* method) IL2CPP_METHOD_ATTR;
