#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ActiveAnimation
struct ActiveAnimation_t5335;
// System.String
struct String_t;
// UnityEngine.Animation
struct Animation_t1252;
// AnimationOrTween.Direction
#include "AssemblyU2DCSharp_AnimationOrTween_Direction.h"
// AnimationOrTween.EnableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_EnableCondition.h"
// AnimationOrTween.DisableCondition
#include "AssemblyU2DCSharp_AnimationOrTween_DisableCondition.h"

// System.Void ActiveAnimation::.ctor()
 void ActiveAnimation__ctor_m37775 (ActiveAnimation_t5335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ActiveAnimation::get_isPlaying()
 bool ActiveAnimation_get_isPlaying_m37776 (ActiveAnimation_t5335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Reset()
 void ActiveAnimation_Reset_m37777 (ActiveAnimation_t5335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Start()
 void ActiveAnimation_Start_m37778 (ActiveAnimation_t5335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Update()
 void ActiveAnimation_Update_m37779 (ActiveAnimation_t5335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ActiveAnimation::Play(System.String,AnimationOrTween.Direction)
 void ActiveAnimation_Play_m37780 (ActiveAnimation_t5335 * __this, String_t* ___clipName, int32_t ___playDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction,AnimationOrTween.EnableCondition,AnimationOrTween.DisableCondition)
 ActiveAnimation_t5335 * ActiveAnimation_Play_m37781 (Object_t * __this/* static, unused */, Animation_t1252 * ___anim, String_t* ___clipName, int32_t ___playDirection, int32_t ___enableBeforePlay, int32_t ___disableCondition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,System.String,AnimationOrTween.Direction)
 ActiveAnimation_t5335 * ActiveAnimation_Play_m37782 (Object_t * __this/* static, unused */, Animation_t1252 * ___anim, String_t* ___clipName, int32_t ___playDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ActiveAnimation ActiveAnimation::Play(UnityEngine.Animation,AnimationOrTween.Direction)
 ActiveAnimation_t5335 * ActiveAnimation_Play_m37783 (Object_t * __this/* static, unused */, Animation_t1252 * ___anim, int32_t ___playDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
