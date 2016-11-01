#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FGTouchInputProvider
struct FGTouchInputProvider_t117;
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void FGTouchInputProvider::.ctor()
 void FGTouchInputProvider__ctor_m341 (FGTouchInputProvider_t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGTouchInputProvider::Start()
 void FGTouchInputProvider_Start_m342 (FGTouchInputProvider_t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGTouchInputProvider::Update()
 void FGTouchInputProvider_Update_m343 (FGTouchInputProvider_t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGTouchInputProvider::UpdateFingerTouchMap()
 void FGTouchInputProvider_UpdateFingerTouchMap_m344 (FGTouchInputProvider_t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FGTouchInputProvider::HasValidTouch(System.Int32)
 bool FGTouchInputProvider_HasValidTouch_m345 (FGTouchInputProvider_t117 * __this, int32_t ___fingerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch FGTouchInputProvider::GetTouch(System.Int32)
 Touch_t118  FGTouchInputProvider_GetTouch_m346 (FGTouchInputProvider_t117 * __this, int32_t ___fingerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FGTouchInputProvider::get_MaxSimultaneousFingers()
 int32_t FGTouchInputProvider_get_MaxSimultaneousFingers_m347 (FGTouchInputProvider_t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGTouchInputProvider::GetInputState(System.Int32,System.Boolean&,UnityEngine.Vector2&)
 void FGTouchInputProvider_GetInputState_m348 (FGTouchInputProvider_t117 * __this, int32_t ___fingerIndex, bool* ___down, Vector2_t12 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
