#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenRotation
struct TweenRotation_t1257;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void TweenRotation::.ctor()
 void TweenRotation__ctor_m38174 (TweenRotation_t1257 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenRotation::get_cachedTransform()
 Transform_t78 * TweenRotation_get_cachedTransform_m38175 (TweenRotation_t1257 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TweenRotation::get_rotation()
 Quaternion_t120  TweenRotation_get_rotation_m38176 (TweenRotation_t1257 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::set_rotation(UnityEngine.Quaternion)
 void TweenRotation_set_rotation_m38177 (TweenRotation_t1257 * __this, Quaternion_t120  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenRotation::OnUpdate(System.Single,System.Boolean)
 void TweenRotation_OnUpdate_m38178 (TweenRotation_t1257 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenRotation TweenRotation::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Quaternion)
 TweenRotation_t1257 * TweenRotation_Begin_m38179 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, float ___duration, Quaternion_t120  ___rot, MethodInfo* method) IL2CPP_METHOD_ATTR;
