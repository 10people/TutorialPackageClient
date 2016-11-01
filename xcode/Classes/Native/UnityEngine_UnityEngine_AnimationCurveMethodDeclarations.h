#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t5758;
// UnityEngine.Keyframe
#include "UnityEngine_UnityEngine_Keyframe.h"
// UnityEngine.WrapMode
#include "UnityEngine_UnityEngine_WrapMode.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
 void AnimationCurve__ctor_m40849 (AnimationCurve_t4583 * __this, KeyframeU5BU5D_t5758* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
 void AnimationCurve__ctor_m40838 (AnimationCurve_t4583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
 void AnimationCurve_Cleanup_m51790 (AnimationCurve_t4583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
 void AnimationCurve_Finalize_m51791 (AnimationCurve_t4583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
 float AnimationCurve_Evaluate_m40853 (AnimationCurve_t4583 * __this, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::get_keys()
 KeyframeU5BU5D_t5758* AnimationCurve_get_keys_m41336 (AnimationCurve_t4583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::AddKey(UnityEngine.Keyframe)
 int32_t AnimationCurve_AddKey_m41492 (AnimationCurve_t4583 * __this, Keyframe_t5759  ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::AddKey_Internal(UnityEngine.Keyframe)
 int32_t AnimationCurve_AddKey_Internal_m51792 (AnimationCurve_t4583 * __this, Keyframe_t5759  ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::INTERNAL_CALL_AddKey_Internal(UnityEngine.AnimationCurve,UnityEngine.Keyframe&)
 int32_t AnimationCurve_INTERNAL_CALL_AddKey_Internal_m51793 (Object_t * __this/* static, unused */, AnimationCurve_t4583 * ___self, Keyframe_t5759 * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::RemoveKey(System.Int32)
 void AnimationCurve_RemoveKey_m41491 (AnimationCurve_t4583 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::get_Item(System.Int32)
 Keyframe_t5759  AnimationCurve_get_Item_m41480 (AnimationCurve_t4583 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationCurve::get_length()
 int32_t AnimationCurve_get_length_m41335 (AnimationCurve_t4583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe UnityEngine.AnimationCurve::GetKey_Internal(System.Int32)
 Keyframe_t5759  AnimationCurve_GetKey_Internal_m51794 (AnimationCurve_t4583 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
 KeyframeU5BU5D_t5758* AnimationCurve_GetKeys_m51795 (AnimationCurve_t4583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationCurve UnityEngine.AnimationCurve::Linear(System.Single,System.Single,System.Single,System.Single)
 AnimationCurve_t4583 * AnimationCurve_Linear_m41510 (Object_t * __this/* static, unused */, float ___timeStart, float ___valueStart, float ___timeEnd, float ___valueEnd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_preWrapMode()
 int32_t AnimationCurve_get_preWrapMode_m41342 (AnimationCurve_t4583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::set_preWrapMode(UnityEngine.WrapMode)
 void AnimationCurve_set_preWrapMode_m40850 (AnimationCurve_t4583 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WrapMode UnityEngine.AnimationCurve::get_postWrapMode()
 int32_t AnimationCurve_get_postWrapMode_m41343 (AnimationCurve_t4583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::set_postWrapMode(UnityEngine.WrapMode)
 void AnimationCurve_set_postWrapMode_m40851 (AnimationCurve_t4583 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
 void AnimationCurve_Init_m51796 (AnimationCurve_t4583 * __this, KeyframeU5BU5D_t5758* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t4583_marshal(const AnimationCurve_t4583& unmarshaled, AnimationCurve_t4583_marshaled& marshaled);
void AnimationCurve_t4583_marshal_back(const AnimationCurve_t4583_marshaled& marshaled, AnimationCurve_t4583& unmarshaled);
void AnimationCurve_t4583_marshal_cleanup(AnimationCurve_t4583_marshaled& marshaled);
