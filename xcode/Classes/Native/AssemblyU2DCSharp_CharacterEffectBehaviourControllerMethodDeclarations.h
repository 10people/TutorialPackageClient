#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CharacterEffectBehaviourController
struct CharacterEffectBehaviourController_t2121;
// UnityEngine.GameObject
struct GameObject_t9;
// AddEffectData
struct AddEffectData_t2117;
// System.Object
struct Object_t;
// GCGame.Table.Tab_WeaponModel
struct Tab_WeaponModel_t707;

// System.Void CharacterEffectBehaviourController::.ctor()
 void CharacterEffectBehaviourController__ctor_m14356 (CharacterEffectBehaviourController_t2121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterEffectBehaviourController::get_DoPlayEffectWhenModelInvisible()
 bool CharacterEffectBehaviourController_get_DoPlayEffectWhenModelInvisible_m14357 (CharacterEffectBehaviourController_t2121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CharacterEffectBehaviourController::get_EffectHolderVisible()
 bool CharacterEffectBehaviourController_get_EffectHolderVisible_m14358 (CharacterEffectBehaviourController_t2121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterEffectBehaviourController::InitBindPointData(UnityEngine.GameObject)
 void CharacterEffectBehaviourController_InitBindPointData_m14359 (CharacterEffectBehaviourController_t2121 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterEffectBehaviourController::OnAddEffectComplete(AddEffectData)
 void CharacterEffectBehaviourController_OnAddEffectComplete_m14360 (CharacterEffectBehaviourController_t2121 * __this, AddEffectData_t2117 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterEffectBehaviourController::OnMove()
 void CharacterEffectBehaviourController_OnMove_m14361 (CharacterEffectBehaviourController_t2121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterEffectBehaviourController::OnIdle()
 void CharacterEffectBehaviourController_OnIdle_m14362 (CharacterEffectBehaviourController_t2121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterEffectBehaviourController::OnMountModelOk()
 void CharacterEffectBehaviourController_OnMountModelOk_m14363 (CharacterEffectBehaviourController_t2121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterEffectBehaviourController::OnMountOff(System.Int32)
 void CharacterEffectBehaviourController_OnMountOff_m14364 (CharacterEffectBehaviourController_t2121 * __this, int32_t ___mountId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterEffectBehaviourController::OnMountMoveEffectAdd(UnityEngine.GameObject,System.Object)
 void CharacterEffectBehaviourController_OnMountMoveEffectAdd_m14365 (CharacterEffectBehaviourController_t2121 * __this, GameObject_t9 * ___go, Object_t * ___parameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterEffectBehaviourController::OnFlyWingOk(System.Int32,UnityEngine.GameObject)
 void CharacterEffectBehaviourController_OnFlyWingOk_m14366 (CharacterEffectBehaviourController_t2121 * __this, int32_t ___id, GameObject_t9 * ___flyWingModObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterEffectBehaviourController::OnCancalFlyWing()
 void CharacterEffectBehaviourController_OnCancalFlyWing_m14367 (CharacterEffectBehaviourController_t2121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterEffectBehaviourController::OnWeaponEquOk(GCGame.Table.Tab_WeaponModel)
 void CharacterEffectBehaviourController_OnWeaponEquOk_m14368 (CharacterEffectBehaviourController_t2121 * __this, Tab_WeaponModel_t707 * ___tabData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CharacterEffectBehaviourController::OnWeaponUnEquOk()
 void CharacterEffectBehaviourController_OnWeaponUnEquOk_m14369 (CharacterEffectBehaviourController_t2121 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
