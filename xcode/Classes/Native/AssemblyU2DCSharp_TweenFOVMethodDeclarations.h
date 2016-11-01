#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenFOV
struct TweenFOV_t5381;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void TweenFOV::.ctor()
 void TweenFOV__ctor_m38134 (TweenFOV_t5381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TweenFOV::get_cachedCamera()
 Camera_t38 * TweenFOV_get_cachedCamera_m38135 (TweenFOV_t5381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenFOV::get_fov()
 float TweenFOV_get_fov_m38136 (TweenFOV_t5381 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::set_fov(System.Single)
 void TweenFOV_set_fov_m38137 (TweenFOV_t5381 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenFOV::OnUpdate(System.Single,System.Boolean)
 void TweenFOV_OnUpdate_m38138 (TweenFOV_t5381 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenFOV TweenFOV::Begin(UnityEngine.GameObject,System.Single,System.Single)
 TweenFOV_t5381 * TweenFOV_Begin_m38139 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, float ___duration, float ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
