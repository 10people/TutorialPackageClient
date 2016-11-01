#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenNumber
struct TweenNumber_t1838;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void TweenNumber::.ctor()
 void TweenNumber__ctor_m38157 (TweenNumber_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenNumber::get_value()
 float TweenNumber_get_value_m38158 (TweenNumber_t1838 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenNumber::set_value(System.Single)
 void TweenNumber_set_value_m38159 (TweenNumber_t1838 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenNumber::OnUpdate(System.Single,System.Boolean)
 void TweenNumber_OnUpdate_m38160 (TweenNumber_t1838 * __this, float ___factor, bool ___isFinished, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenNumber TweenNumber::Begin(UnityEngine.GameObject,System.Single,System.Single,System.Single)
 TweenNumber_t1838 * TweenNumber_Begin_m38161 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, float ___duration, float ___fromNum, float ___toNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
