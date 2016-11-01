#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenWidth
struct TweenWidth_t5387;
// UIWidget
struct UIWidget_t5195;

// System.Void TweenWidth::.ctor()
 void TweenWidth__ctor_m38196 (TweenWidth_t5387 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget TweenWidth::get_cachedWidget()
 UIWidget_t5195 * TweenWidth_get_cachedWidget_m38197 (TweenWidth_t5387 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TweenWidth::get_width()
 int32_t TweenWidth_get_width_m38198 (TweenWidth_t5387 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::set_width(System.Int32)
 void TweenWidth_set_width_m38199 (TweenWidth_t5387 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenWidth::OnUpdate(System.Single,System.Boolean)
 void TweenWidth_OnUpdate_m38200 (TweenWidth_t5387 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenWidth TweenWidth::Begin(UIWidget,System.Single,System.Int32)
 TweenWidth_t5387 * TweenWidth_Begin_m38201 (Object_t * __this/* static, unused */, UIWidget_t5195 * ___widget, float ___duration, int32_t ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
