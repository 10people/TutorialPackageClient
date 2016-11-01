#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenPosition
struct TweenPosition_t1255;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void TweenPosition::.ctor()
 void TweenPosition__ctor_m38168 (TweenPosition_t1255 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TweenPosition::get_cachedTransform()
 Transform_t78 * TweenPosition_get_cachedTransform_m38169 (TweenPosition_t1255 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TweenPosition::get_position()
 Vector3_t121  TweenPosition_get_position_m38170 (TweenPosition_t1255 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::set_position(UnityEngine.Vector3)
 void TweenPosition_set_position_m38171 (TweenPosition_t1255 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenPosition::OnUpdate(System.Single,System.Boolean)
 void TweenPosition_OnUpdate_m38172 (TweenPosition_t1255 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenPosition TweenPosition::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Vector3)
 TweenPosition_t1255 * TweenPosition_Begin_m38173 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, float ___duration, Vector3_t121  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
