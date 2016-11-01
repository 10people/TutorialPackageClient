#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// JoyStickLogic
struct JoyStickLogic_t1499;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void JoyStickLogic::.ctor()
 void JoyStickLogic__ctor_m9167 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::.cctor()
 void JoyStickLogic__cctor_m9168 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JoyStickLogic JoyStickLogic::Instance()
 JoyStickLogic_t1499 * JoyStickLogic_Instance_m9169 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JoyStickLogic::get_FingerID()
 int32_t JoyStickLogic_get_FingerID_m9170 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JoyStickLogic::get_NewPlayerStep()
 int32_t JoyStickLogic_get_NewPlayerStep_m9171 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::set_NewPlayerStep(System.Int32)
 void JoyStickLogic_set_NewPlayerStep_m9172 (JoyStickLogic_t1499 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::Awake()
 void JoyStickLogic_Awake_m9173 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::Start()
 void JoyStickLogic_Start_m9174 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::Update()
 void JoyStickLogic_Update_m9175 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::OnDestroy()
 void JoyStickLogic_OnDestroy_m9176 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::UpdateWithTouch()
 void JoyStickLogic_UpdateWithTouch_m9177 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::OnDrag()
 void JoyStickLogic_OnDrag_m9178 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::OnPress(System.Boolean)
 void JoyStickLogic_OnPress_m9179 (JoyStickLogic_t1499 * __this, bool ___bPressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::JoyStickStartMove()
 void JoyStickLogic_JoyStickStartMove_m9180 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::JoyStickInMoving(UnityEngine.Vector3)
 void JoyStickLogic_JoyStickInMoving_m9181 (JoyStickLogic_t1499 * __this, Vector3_t121  ___vecDeltaPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::JoyStickEndMove()
 void JoyStickLogic_JoyStickEndMove_m9182 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JoyStickLogic::GetDistance(System.Single,System.Single,System.Single,System.Single)
 float JoyStickLogic_GetDistance_m9183 (JoyStickLogic_t1499 * __this, float ___x1, float ___y1, float ___x2, float ___y2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::SendMoveDirection()
 void JoyStickLogic_SendMoveDirection_m9184 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::DoSendMoveDirection(System.Single,System.Single)
 void JoyStickLogic_DoSendMoveDirection_m9185 (JoyStickLogic_t1499 * __this, float ___nPosY, float ___nPosX, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::CloseWindow()
 void JoyStickLogic_CloseWindow_m9186 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::OpenWindow()
 void JoyStickLogic_OpenWindow_m9187 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::ReleaseJoyStick()
 void JoyStickLogic_ReleaseJoyStick_m9188 (JoyStickLogic_t1499 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JoyStickLogic::NewPlayerGuide(System.Int32)
 void JoyStickLogic_NewPlayerGuide_m9189 (JoyStickLogic_t1499 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
