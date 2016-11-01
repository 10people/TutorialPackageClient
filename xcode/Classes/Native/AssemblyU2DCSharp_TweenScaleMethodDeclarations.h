#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenScale
struct TweenScale_t1259;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TweenScale::.ctor()
 void TweenScale__ctor_m38180 (TweenScale_t1259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenScale::get_cachedTransform()
 Transform_t78 * TweenScale_get_cachedTransform_m38181 (TweenScale_t1259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenScale::get_scale()
 Vector3_t121  TweenScale_get_scale_m38182 (TweenScale_t1259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::set_scale(UnityEngine.Vector3)
 void TweenScale_set_scale_m38183 (TweenScale_t1259 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenScale::OnUpdate(System.Single,System.Boolean)
 void TweenScale_OnUpdate_m38184 (TweenScale_t1259 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenScale TweenScale::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
 TweenScale_t1259 * TweenScale_Begin_m38185 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, float ___duration, Vector3_t121  ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
