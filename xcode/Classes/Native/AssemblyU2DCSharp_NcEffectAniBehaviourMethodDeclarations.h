#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcEffectAniBehaviour
struct NcEffectAniBehaviour_t5026;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;

// System.Void NcEffectAniBehaviour::.ctor()
 void NcEffectAniBehaviour__ctor_m35912 (NcEffectAniBehaviour_t5026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::SetCallBackEndAnimation(UnityEngine.GameObject)
 void NcEffectAniBehaviour_SetCallBackEndAnimation_m35913 (NcEffectAniBehaviour_t5026 * __this, GameObject_t9 * ___callBackGameObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::SetCallBackEndAnimation(UnityEngine.GameObject,System.String)
 void NcEffectAniBehaviour_SetCallBackEndAnimation_m35914 (NcEffectAniBehaviour_t5026 * __this, GameObject_t9 * ___callBackGameObj, String_t* ___nameFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcEffectAniBehaviour::IsEndAnimation()
 bool NcEffectAniBehaviour_IsEndAnimation_m35915 (NcEffectAniBehaviour_t5026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::InitAnimationTimer()
 void NcEffectAniBehaviour_InitAnimationTimer_m35916 (NcEffectAniBehaviour_t5026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::ResetAnimation()
 void NcEffectAniBehaviour_ResetAnimation_m35917 (NcEffectAniBehaviour_t5026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::PauseAnimation()
 void NcEffectAniBehaviour_PauseAnimation_m35918 (NcEffectAniBehaviour_t5026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::ResumeAnimation()
 void NcEffectAniBehaviour_ResumeAnimation_m35919 (NcEffectAniBehaviour_t5026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::MoveAnimation(System.Single)
 void NcEffectAniBehaviour_MoveAnimation_m35920 (NcEffectAniBehaviour_t5026 * __this, float ___fElapsedTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcEffectAniBehaviour::OnEndAnimation()
 void NcEffectAniBehaviour_OnEndAnimation_m35921 (NcEffectAniBehaviour_t5026 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
