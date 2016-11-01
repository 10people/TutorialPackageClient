#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenOrthoSize
struct TweenOrthoSize_t5384;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void TweenOrthoSize::.ctor()
 void TweenOrthoSize__ctor_m38162 (TweenOrthoSize_t5384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera TweenOrthoSize::get_cachedCamera()
 Camera_t38 * TweenOrthoSize_get_cachedCamera_m38163 (TweenOrthoSize_t5384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenOrthoSize::get_orthoSize()
 float TweenOrthoSize_get_orthoSize_m38164 (TweenOrthoSize_t5384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::set_orthoSize(System.Single)
 void TweenOrthoSize_set_orthoSize_m38165 (TweenOrthoSize_t5384 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenOrthoSize::OnUpdate(System.Single,System.Boolean)
 void TweenOrthoSize_OnUpdate_m38166 (TweenOrthoSize_t5384 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenOrthoSize TweenOrthoSize::Begin(UnityEngine.GameObject,System.Single,System.Single)
 TweenOrthoSize_t5384 * TweenOrthoSize_Begin_m38167 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, float ___duration, float ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
