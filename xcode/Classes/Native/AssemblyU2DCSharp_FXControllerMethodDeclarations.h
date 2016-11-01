#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FXController
struct FXController_t2115;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// BaseEffectBehaviourController
struct BaseEffectBehaviourController_t2114;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void FXController::.ctor()
 void FXController__ctor_m36396 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FXController::get_Duration()
 float FXController_get_Duration_m36397 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::set_Duration(System.Single)
 void FXController_set_Duration_m36398 (FXController_t2115 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FXController::get_OnlyDeactivate()
 bool FXController_get_OnlyDeactivate_m36399 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::set_OnlyDeactivate(System.Boolean)
 void FXController_set_OnlyDeactivate_m36400 (FXController_t2115 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FXController::get_EffectID()
 int32_t FXController_get_EffectID_m36401 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::set_EffectID(System.Int32)
 void FXController_set_EffectID_m36402 (FXController_t2115 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FXController::get_Delay()
 float FXController_get_Delay_m36403 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::set_Delay(System.Single)
 void FXController_set_Delay_m36404 (FXController_t2115 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FXController::get_Remainduration()
 float FXController_get_Remainduration_m36405 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::set_Remainduration(System.Single)
 void FXController_set_Remainduration_m36406 (FXController_t2115 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FXController::get_Remaindelay()
 float FXController_get_Remaindelay_m36407 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FXController::get_IsFellowOwner()
 bool FXController_get_IsFellowOwner_m36408 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::set_IsFellowOwner(System.Boolean)
 void FXController_set_IsFellowOwner_m36409 (FXController_t2115 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject FXController::get_EffectGameObj()
 GameObject_t9 * FXController_get_EffectGameObj_m36410 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::set_EffectGameObj(UnityEngine.GameObject)
 void FXController_set_EffectGameObj_m36411 (FXController_t2115 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform FXController::get_CachedTransform()
 Transform_t78 * FXController_get_CachedTransform_m36412 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::Awake()
 void FXController_Awake_m36413 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::ChangePositionForAreaEffect(UnityEngine.Vector3)
 void FXController_ChangePositionForAreaEffect_m36414 (FXController_t2115 * __this, Vector3_t121  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::ResetAreaEffect()
 void FXController_ResetAreaEffect_m36415 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 FXController::GetPosition()
 Vector3_t121  FXController_GetPosition_m36416 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::Play(BaseEffectBehaviourController)
 void FXController_Play_m36417 (FXController_t2115 * __this, BaseEffectBehaviourController_t2114 * ___curEffectHandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::Stop()
 void FXController_Stop_m36418 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::DoPlay()
 void FXController_DoPlay_m36419 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::OnEnable()
 void FXController_OnEnable_m36420 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::Update()
 void FXController_Update_m36421 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::RemoveParticle()
 void FXController_RemoveParticle_m36422 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FXController::OnDestroy()
 void FXController_OnDestroy_m36423 (FXController_t2115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
