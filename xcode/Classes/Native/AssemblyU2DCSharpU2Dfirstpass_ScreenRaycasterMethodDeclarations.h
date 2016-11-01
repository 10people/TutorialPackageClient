#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ScreenRaycaster
struct ScreenRaycaster_t17;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void ScreenRaycaster::.ctor()
 void ScreenRaycaster__ctor_m83 (ScreenRaycaster_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenRaycaster::Start()
 void ScreenRaycaster_Start_m84 (ScreenRaycaster_t17 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ScreenRaycaster::Raycast(UnityEngine.Vector2,UnityEngine.RaycastHit&)
 bool ScreenRaycaster_Raycast_m85 (ScreenRaycaster_t17 * __this, Vector2_t12  ___screenPos, RaycastHit_t11 * ___hit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ScreenRaycaster::Raycast(UnityEngine.Camera,UnityEngine.Vector2,UnityEngine.RaycastHit&)
 bool ScreenRaycaster_Raycast_m86 (ScreenRaycaster_t17 * __this, Camera_t38 * ___cam, Vector2_t12  ___screenPos, RaycastHit_t11 * ___hit, MethodInfo* method) IL2CPP_METHOD_ATTR;
