#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenHeight
struct TweenHeight_t1589;
// UIWidget
struct UIWidget_t5195;

// System.Void TweenHeight::.ctor()
 void TweenHeight__ctor_m38147 (TweenHeight_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIWidget TweenHeight::get_cachedWidget()
 UIWidget_t5195 * TweenHeight_get_cachedWidget_m38148 (TweenHeight_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TweenHeight::get_height()
 int32_t TweenHeight_get_height_m38149 (TweenHeight_t1589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::set_height(System.Int32)
 void TweenHeight_set_height_m38150 (TweenHeight_t1589 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenHeight::OnUpdate(System.Single,System.Boolean)
 void TweenHeight_OnUpdate_m38151 (TweenHeight_t1589 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenHeight TweenHeight::Begin(UIWidget,System.Single,System.Int32)
 TweenHeight_t1589 * TweenHeight_Begin_m38152 (Object_t * __this/* static, unused */, UIWidget_t5195 * ___widget, float ___duration, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
