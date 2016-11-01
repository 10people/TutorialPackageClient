#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FGMouseInputProvider
struct FGMouseInputProvider_t115;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void FGMouseInputProvider::.ctor()
 void FGMouseInputProvider__ctor_m334 (FGMouseInputProvider_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGMouseInputProvider::Start()
 void FGMouseInputProvider_Start_m335 (FGMouseInputProvider_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGMouseInputProvider::Update()
 void FGMouseInputProvider_Update_m336 (FGMouseInputProvider_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGMouseInputProvider::UpdatePinchEmulation()
 void FGMouseInputProvider_UpdatePinchEmulation_m337 (FGMouseInputProvider_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGMouseInputProvider::UpdateTwistEmulation()
 void FGMouseInputProvider_UpdateTwistEmulation_m338 (FGMouseInputProvider_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FGMouseInputProvider::get_MaxSimultaneousFingers()
 int32_t FGMouseInputProvider_get_MaxSimultaneousFingers_m339 (FGMouseInputProvider_t115 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FGMouseInputProvider::GetInputState(System.Int32,System.Boolean&,UnityEngine.Vector2&)
 void FGMouseInputProvider_GetInputState_m340 (FGMouseInputProvider_t115 * __this, int32_t ___fingerIndex, bool* ___down, Vector2_t12 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
