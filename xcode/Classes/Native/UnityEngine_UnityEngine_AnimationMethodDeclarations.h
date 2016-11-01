#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animation
struct Animation_t1252;
// UnityEngine.AnimationState
struct AnimationState_t4530;
// System.String
struct String_t;
// UnityEngine.AnimationClip
struct AnimationClip_t2149;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UnityEngine.WrapMode
#include "UnityEngine_UnityEngine_WrapMode.h"
// UnityEngine.AnimationCullingType
#include "UnityEngine_UnityEngine_AnimationCullingType.h"
// UnityEngine.PlayMode
#include "UnityEngine_UnityEngine_PlayMode.h"

// System.Void UnityEngine.Animation::set_wrapMode(UnityEngine.WrapMode)
 void Animation_set_wrapMode_m39087 (Animation_t1252 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Stop()
 void Animation_Stop_m40677 (Animation_t1252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)
 void Animation_INTERNAL_CALL_Stop_m51801 (Object_t * __this/* static, unused */, Animation_t1252 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Stop(System.String)
 void Animation_Stop_m40778 (Animation_t1252 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Internal_StopByName(System.String)
 void Animation_Internal_StopByName_m51802 (Animation_t1252 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::Sample()
 void Animation_Sample_m42034 (Animation_t1252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
 void Animation_INTERNAL_CALL_Sample_m51803 (Object_t * __this/* static, unused */, Animation_t1252 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::get_isPlaying()
 bool Animation_get_isPlaying_m40669 (Animation_t1252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
 bool Animation_IsPlaying_m40684 (Animation_t1252 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
 AnimationState_t4530 * Animation_get_Item_m40764 (Animation_t1252 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play()
 bool Animation_Play_m42035 (Animation_t1252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
 bool Animation_Play_m51804 (Animation_t1252 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
 bool Animation_Play_m51805 (Animation_t1252 * __this, String_t* ___animation, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::Play(System.String)
 bool Animation_Play_m39600 (Animation_t1252 * __this, String_t* ___animation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
 void Animation_CrossFade_m40777 (Animation_t1252 * __this, String_t* ___animation, float ___fadeLength, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::CrossFade(System.String)
 void Animation_CrossFade_m41297 (Animation_t1252 * __this, String_t* ___animation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
 void Animation_AddClip_m40774 (Animation_t1252 * __this, AnimationClip_t2149 * ___clip, String_t* ___newName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
 void Animation_AddClip_m51806 (Animation_t1252 * __this, AnimationClip_t2149 * ___clip, String_t* ___newName, int32_t ___firstFrame, int32_t ___lastFrame, bool ___addLoopFrame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
 void Animation_AddClip_m51807 (Animation_t1252 * __this, AnimationClip_t2149 * ___clip, String_t* ___newName, int32_t ___firstFrame, int32_t ___lastFrame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
 bool Animation_PlayDefaultAnimation_m51808 (Animation_t1252 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
 Object_t * Animation_GetEnumerator_m41948 (Animation_t1252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
 AnimationState_t4530 * Animation_GetState_m51809 (Animation_t1252 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
 AnimationState_t4530 * Animation_GetStateAtIndex_m51810 (Animation_t1252 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animation::GetStateCount()
 int32_t Animation_GetStateCount_m51811 (Animation_t1252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationClip UnityEngine.Animation::GetClip(System.String)
 AnimationClip_t2149 * Animation_GetClip_m39599 (Animation_t1252 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animation::set_cullingType(UnityEngine.AnimationCullingType)
 void Animation_set_cullingType_m40759 (Animation_t1252 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
