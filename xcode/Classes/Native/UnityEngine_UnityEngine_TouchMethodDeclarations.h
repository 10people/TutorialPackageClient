#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t118;
struct Touch_t118_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
 int32_t Touch_get_fingerId_m4454 (Touch_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
 Vector2_t12  Touch_get_position_m4457 (Touch_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
 Vector2_t12  Touch_get_deltaPosition_m39404 (Touch_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Touch::get_tapCount()
 int32_t Touch_get_tapCount_m42227 (Touch_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
 int32_t Touch_get_phase_m4456 (Touch_t118 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t118_marshal(const Touch_t118& unmarshaled, Touch_t118_marshaled& marshaled);
void Touch_t118_marshal_back(const Touch_t118_marshaled& marshaled, Touch_t118& unmarshaled);
void Touch_t118_marshal_cleanup(Touch_t118_marshaled& marshaled);
