#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenTransform
struct TweenTransform_t5385;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;

// System.Void TweenTransform::.ctor()
 void TweenTransform__ctor_m38186 (TweenTransform_t5385 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenTransform::OnUpdate(System.Single,System.Boolean)
 void TweenTransform_OnUpdate_m38187 (TweenTransform_t5385 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform)
 TweenTransform_t5385 * TweenTransform_Begin_m38188 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, float ___duration, Transform_t78 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenTransform TweenTransform::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Transform,UnityEngine.Transform)
 TweenTransform_t5385 * TweenTransform_Begin_m38189 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, float ___duration, Transform_t78 * ___from, Transform_t78 * ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
