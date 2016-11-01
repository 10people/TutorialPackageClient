#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationInfo
struct AnimationInfo_t7540;
// UnityEngine.AnimationClip
struct AnimationClip_t2149;

// UnityEngine.AnimationClip UnityEngine.AnimationInfo::get_clip()
 AnimationClip_t2149 * AnimationInfo_get_clip_m51821 (AnimationInfo_t7540 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationInfo::get_weight()
 float AnimationInfo_get_weight_m51822 (AnimationInfo_t7540 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationClip UnityEngine.AnimationInfo::ClipInstanceToScriptingObject(System.Int32)
 AnimationClip_t2149 * AnimationInfo_ClipInstanceToScriptingObject_m51823 (Object_t * __this/* static, unused */, int32_t ___instanceID, MethodInfo* method) IL2CPP_METHOD_ATTR;
