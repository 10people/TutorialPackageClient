#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenColor
struct TweenColor_t5380;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void TweenColor::.ctor()
 void TweenColor__ctor_m38128 (TweenColor_t5380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TweenColor::get_color()
 Color_t939  TweenColor_get_color_m38129 (TweenColor_t5380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::set_color(UnityEngine.Color)
 void TweenColor_set_color_m38130 (TweenColor_t5380 * __this, Color_t939  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::Awake()
 void TweenColor_Awake_m38131 (TweenColor_t5380 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::OnUpdate(System.Single,System.Boolean)
 void TweenColor_OnUpdate_m38132 (TweenColor_t5380 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenColor TweenColor::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Color)
 TweenColor_t5380 * TweenColor_Begin_m38133 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, float ___duration, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
