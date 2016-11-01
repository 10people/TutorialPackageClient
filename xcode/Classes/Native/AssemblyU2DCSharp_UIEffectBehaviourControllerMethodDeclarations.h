#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIEffectBehaviourController
struct UIEffectBehaviourController_t1731;
// GCGame.Table.Tab_Effect
struct Tab_Effect_t433;
// PlayEffectDelegate
struct PlayEffectDelegate_t2116;
// System.Object
struct Object_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UIEffectBehaviourController::.ctor()
 void UIEffectBehaviourController__ctor_m14430 (UIEffectBehaviourController_t1731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEffectBehaviourController::Play(System.Int32,UnityEngine.Vector2)
 void UIEffectBehaviourController_Play_m14431 (UIEffectBehaviourController_t1731 * __this, int32_t ___effectId, Vector2_t12  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIEffectBehaviourController::LoadEffect(GCGame.Table.Tab_Effect,PlayEffectDelegate,System.Object)
 void UIEffectBehaviourController_LoadEffect_m14432 (UIEffectBehaviourController_t1731 * __this, Tab_Effect_t433 * ___effectData, PlayEffectDelegate_t2116 * ___delPlayEffect, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
