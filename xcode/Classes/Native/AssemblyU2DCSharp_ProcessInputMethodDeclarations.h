#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ProcessInput
struct ProcessInput_t1500;
// PinchGesture
struct PinchGesture_t87;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"

// System.Void ProcessInput::.ctor()
 void ProcessInput__ctor_m32943 (ProcessInput_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::.cctor()
 void ProcessInput__cctor_m32944 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProcessInput::get_SceneTouchFingerID()
 int32_t ProcessInput_get_SceneTouchFingerID_m32945 (ProcessInput_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::set_SceneTouchFingerID(System.Int32)
 void ProcessInput_set_SceneTouchFingerID_m32946 (ProcessInput_t1500 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::ResetStickState()
 void ProcessInput_ResetStickState_m32947 (ProcessInput_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProcessInput ProcessInput::Instance()
 ProcessInput_t1500 * ProcessInput_Instance_m32948 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::Awake()
 void ProcessInput_Awake_m32949 (ProcessInput_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::Update()
 void ProcessInput_Update_m32950 (ProcessInput_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::OnDestroy()
 void ProcessInput_OnDestroy_m32951 (ProcessInput_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProcessInput::UpdateButtonStay(System.Boolean,System.Int32)
 bool ProcessInput_UpdateButtonStay_m32952 (ProcessInput_t1500 * __this, bool ___isTouch, int32_t ___nTouchIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProcessInput::AnalyseMousePos_Stay(UnityEngine.Vector3)
 bool ProcessInput_AnalyseMousePos_Stay_m32953 (ProcessInput_t1500 * __this, Vector3_t121  ___posPressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProcessInput::AnalyseTouchPos_Stay(UnityEngine.Vector3,UnityEngine.Touch)
 bool ProcessInput_AnalyseTouchPos_Stay_m32954 (ProcessInput_t1500 * __this, Vector3_t121  ___posPressed, Touch_t118  ___touch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::UpdateButton(System.Boolean,System.Int32)
 void ProcessInput_UpdateButton_m32955 (ProcessInput_t1500 * __this, bool ___isTouch, int32_t ___nTouchIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::AnalyseMousePos_Click(UnityEngine.Vector3)
 void ProcessInput_AnalyseMousePos_Click_m32956 (ProcessInput_t1500 * __this, Vector3_t121  ___posPressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::AnalyseTouchPos_Click(UnityEngine.Vector3,UnityEngine.Touch)
 void ProcessInput_AnalyseTouchPos_Click_m32957 (ProcessInput_t1500 * __this, Vector3_t121  ___posPressed, Touch_t118  ___touch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::UpdateMouseDBClick()
 void ProcessInput_UpdateMouseDBClick_m32958 (ProcessInput_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::ReleaseTouch()
 void ProcessInput_ReleaseTouch_m32959 (ProcessInput_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProcessInput::OnPinch(PinchGesture)
 void ProcessInput_OnPinch_m32960 (ProcessInput_t1500 * __this, PinchGesture_t87 * ___gesture, MethodInfo* method) IL2CPP_METHOD_ATTR;
