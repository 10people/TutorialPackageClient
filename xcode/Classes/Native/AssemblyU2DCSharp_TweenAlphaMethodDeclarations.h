#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenAlpha
struct TweenAlpha_t1261;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void TweenAlpha::.ctor()
 void TweenAlpha__ctor_m38122 (TweenAlpha_t1261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenAlpha::get_alpha()
 float TweenAlpha_get_alpha_m38123 (TweenAlpha_t1261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::set_alpha(System.Single)
 void TweenAlpha_set_alpha_m38124 (TweenAlpha_t1261 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::Awake()
 void TweenAlpha_Awake_m38125 (TweenAlpha_t1261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenAlpha::OnUpdate(System.Single,System.Boolean)
 void TweenAlpha_OnUpdate_m38126 (TweenAlpha_t1261 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenAlpha TweenAlpha::Begin(UnityEngine.GameObject,System.Single,System.Single)
 TweenAlpha_t1261 * TweenAlpha_Begin_m38127 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, float ___duration, float ___alpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
