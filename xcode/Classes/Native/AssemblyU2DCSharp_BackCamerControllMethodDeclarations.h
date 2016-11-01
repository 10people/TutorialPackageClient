#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BackCamerControll
struct BackCamerControll_t4813;
// SceneEffectBehaviourController
struct SceneEffectBehaviourController_t2131;
// PlayEffectDelegate
struct PlayEffectDelegate_t2116;
// System.Object
struct Object_t;
// Callback
struct Callback_t2196;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void BackCamerControll::.ctor()
 void BackCamerControll__ctor_m34226 (BackCamerControll_t4813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::.cctor()
 void BackCamerControll__cctor_m34227 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SceneEffectBehaviourController BackCamerControll::get_SceneEffecLogic()
 SceneEffectBehaviourController_t2131 * BackCamerControll_get_SceneEffecLogic_m34228 (BackCamerControll_t4813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::set_SceneEffecLogic(SceneEffectBehaviourController)
 void BackCamerControll_set_SceneEffecLogic_m34229 (BackCamerControll_t4813 * __this, SceneEffectBehaviourController_t2131 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BackCamerControll::get_IsCloseIdle()
 bool BackCamerControll_get_IsCloseIdle_m34230 (BackCamerControll_t4813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::set_IsCloseIdle(System.Boolean)
 void BackCamerControll_set_IsCloseIdle_m34231 (BackCamerControll_t4813 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::Awake()
 void BackCamerControll_Awake_m34232 (BackCamerControll_t4813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BackCamerControll BackCamerControll::Instance()
 BackCamerControll_t4813 * BackCamerControll_Instance_m34233 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::Start()
 void BackCamerControll_Start_m34234 (BackCamerControll_t4813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::AttackToMainCamera()
 void BackCamerControll_AttackToMainCamera_m34235 (BackCamerControll_t4813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::Update()
 void BackCamerControll_Update_m34236 (BackCamerControll_t4813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::StopSceneEffect(System.Int32,System.Boolean)
 void BackCamerControll_StopSceneEffect_m34237 (BackCamerControll_t4813 * __this, int32_t ___effectID, bool ___bStopAll, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::StopEffectWithId(System.Int32,System.Boolean)
 void BackCamerControll_StopEffectWithId_m34238 (BackCamerControll_t4813 * __this, int32_t ___effectID, bool ___StopAll, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::PlaySceneEffect(System.Int32,PlayEffectDelegate,System.Object)
 void BackCamerControll_PlaySceneEffect_m34239 (BackCamerControll_t4813 * __this, int32_t ___effectID, PlayEffectDelegate_t2116 * ___delPlayEffect, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::InitAndPlayBlackScreenTween(UnityEngine.Color,System.Single,Callback,System.Single,System.Single,System.Boolean,System.Single)
 void BackCamerControll_InitAndPlayBlackScreenTween_m34240 (BackCamerControll_t4813 * __this, Color_t939  ___color, float ___duration, Callback_t2196 * ___finishCallback, float ___from, float ___to, bool ___autoClose, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::InitBlackScreenTween(UnityEngine.Color,System.Single,System.Single,System.Single,System.Single)
 void BackCamerControll_InitBlackScreenTween_m34241 (BackCamerControll_t4813 * __this, Color_t939  ___color, float ___duration, float ___from, float ___to, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::PlayBlackScreenTween(Callback)
 void BackCamerControll_PlayBlackScreenTween_m34242 (BackCamerControll_t4813 * __this, Callback_t2196 * ___finishCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::AfterPlayBlackScreen()
 void BackCamerControll_AfterPlayBlackScreen_m34243 (BackCamerControll_t4813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::SetAutoClose(System.Boolean)
 void BackCamerControll_SetAutoClose_m34244 (BackCamerControll_t4813 * __this, bool ___bSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::AfterPlayBlackScreenLable()
 void BackCamerControll_AfterPlayBlackScreenLable_m34245 (BackCamerControll_t4813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::InitBlackScreenLabel(System.String)
 void BackCamerControll_InitBlackScreenLabel_m34246 (BackCamerControll_t4813 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::InitBlackScreenLabelTween(System.Single,System.Single,System.Single)
 void BackCamerControll_InitBlackScreenLabelTween_m34247 (BackCamerControll_t4813 * __this, float ___duration, float ___to, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BackCamerControll::PlayBlackScreenLabelTween()
 void BackCamerControll_PlayBlackScreenLabelTween_m34248 (BackCamerControll_t4813 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
