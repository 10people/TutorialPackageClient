#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BaseEffectBehaviourController
struct BaseEffectBehaviourController_t2114;
// FXController
struct FXController_t2115;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// PlayEffectDelegate
struct PlayEffectDelegate_t2116;
// System.Object
struct Object_t;
// AddEffectData
struct AddEffectData_t2117;
// GCGame.Table.Tab_Effect
struct Tab_Effect_t433;
// Games.SkillModle.SkillCore/SkillTargetData
struct SkillTargetData_t2118;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// GameRes.LoadedObjData
#include "AssemblyU2DCSharp_GameRes_LoadedObjData.h"
// GameRes.LoadCompleteCallBackParameter
#include "AssemblyU2DCSharp_GameRes_LoadCompleteCallBackParameter.h"

// System.Void BaseEffectBehaviourController::.ctor()
 void BaseEffectBehaviourController__ctor_m14332 (BaseEffectBehaviourController_t2114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BaseEffectBehaviourController::get_EffectCountCacheCount()
 int32_t BaseEffectBehaviourController_get_EffectCountCacheCount_m14333 (BaseEffectBehaviourController_t2114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseEffectBehaviourController::get_IsCanHideEffectObj()
 bool BaseEffectBehaviourController_get_IsCanHideEffectObj_m14334 (BaseEffectBehaviourController_t2114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseEffectBehaviourController::get_EffectHolderVisible()
 bool BaseEffectBehaviourController_get_EffectHolderVisible_m14335 (BaseEffectBehaviourController_t2114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseEffectBehaviourController::get_DoPlayEffectWhenModelInvisible()
 bool BaseEffectBehaviourController_get_DoPlayEffectWhenModelInvisible_m14336 (BaseEffectBehaviourController_t2114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseEffectBehaviourController::get_IsNpcObj()
 bool BaseEffectBehaviourController_get_IsNpcObj_m14337 (BaseEffectBehaviourController_t2114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::Awake()
 void BaseEffectBehaviourController_Awake_m14338 (BaseEffectBehaviourController_t2114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::EffectDestroyed(System.Int32)
 void BaseEffectBehaviourController_EffectDestroyed_m14339 (BaseEffectBehaviourController_t2114 * __this, int32_t ___effectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::EffectDeactive(FXController)
 void BaseEffectBehaviourController_EffectDeactive_m14340 (BaseEffectBehaviourController_t2114 * __this, FXController_t2115 * ___curController, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BaseEffectBehaviourController::IsHaveBindPoint(System.String)
 bool BaseEffectBehaviourController_IsHaveBindPoint_m14341 (BaseEffectBehaviourController_t2114 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::InitEffect(UnityEngine.GameObject)
 void BaseEffectBehaviourController_InitEffect_m14342 (BaseEffectBehaviourController_t2114 * __this, GameObject_t9 * ___effGameObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::ClearEffect()
 void BaseEffectBehaviourController_ClearEffect_m14343 (BaseEffectBehaviourController_t2114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::InitBindPointInfo()
 void BaseEffectBehaviourController_InitBindPointInfo_m14344 (BaseEffectBehaviourController_t2114 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::PlayEffect(System.Int32,PlayEffectDelegate,System.Object)
 void BaseEffectBehaviourController_PlayEffect_m14345 (BaseEffectBehaviourController_t2114 * __this, int32_t ___effectID, PlayEffectDelegate_t2116 * ___delPlayEffect, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::StopEffect(System.Int32,System.Boolean)
 void BaseEffectBehaviourController_StopEffect_m14346 (BaseEffectBehaviourController_t2114 * __this, int32_t ___effectID, bool ___bStopAll, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BaseEffectBehaviourController::GetEffectCountById(System.Int32)
 int32_t BaseEffectBehaviourController_GetEffectCountById_m14347 (BaseEffectBehaviourController_t2114 * __this, int32_t ___effectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::ChangeMaterialColor(System.Int32)
 void BaseEffectBehaviourController_ChangeMaterialColor_m14348 (BaseEffectBehaviourController_t2114 * __this, int32_t ___effectChangeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::OnAddEffectComplete(AddEffectData)
 void BaseEffectBehaviourController_OnAddEffectComplete_m14349 (BaseEffectBehaviourController_t2114 * __this, AddEffectData_t2117 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::LoadEffect(GCGame.Table.Tab_Effect,PlayEffectDelegate,System.Object)
// System.Void BaseEffectBehaviourController::AddEffect(UnityEngine.GameObject,GCGame.Table.Tab_Effect,PlayEffectDelegate,System.Object)
 void BaseEffectBehaviourController_AddEffect_m14350 (BaseEffectBehaviourController_t2114 * __this, GameObject_t9 * ___parentObj, Tab_Effect_t433 * ___effectData, PlayEffectDelegate_t2116 * ___delPlayEffect, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BaseEffectBehaviourController::GetTargetAreaPos(Games.SkillModle.SkillCore/SkillTargetData,UnityEngine.Vector3)
 Vector3_t121  BaseEffectBehaviourController_GetTargetAreaPos_m14351 (BaseEffectBehaviourController_t2114 * __this, SkillTargetData_t2118 * ___targetData, Vector3_t121  ___effectPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::LoadEffectComplete(GameRes.LoadedObjData,GameRes.LoadCompleteCallBackParameter)
 void BaseEffectBehaviourController_LoadEffectComplete_m14352 (BaseEffectBehaviourController_t2114 * __this, LoadedObjData_t2119  ___resObj, LoadCompleteCallBackParameter_t2120  ___parameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::LoadEffectComplete(GameRes.LoadedObjData,AddEffectData)
 void BaseEffectBehaviourController_LoadEffectComplete_m14353 (BaseEffectBehaviourController_t2114 * __this, LoadedObjData_t2119  ___resObj, AddEffectData_t2117 * ___parameter1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::OnEffectOver(System.Int32)
 void BaseEffectBehaviourController_OnEffectOver_m14354 (BaseEffectBehaviourController_t2114 * __this, int32_t ___effectID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BaseEffectBehaviourController::InitBindPointData(UnityEngine.GameObject)
 void BaseEffectBehaviourController_InitBindPointData_m14355 (BaseEffectBehaviourController_t2114 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
