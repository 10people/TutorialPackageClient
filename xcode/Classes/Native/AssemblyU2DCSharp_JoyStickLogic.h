#pragma once
#include <stdint.h>
// JoyStickLogic
struct JoyStickLogic_t1499;
// UISprite
struct UISprite_t1202;
// ProcessInput
struct ProcessInput_t1500;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// JoyStickLogic
struct JoyStickLogic_t1499  : public MonoBehaviour_t18
{
	// UISprite JoyStickLogic::m_JoyStickSprite
	UISprite_t1202 * ___m_JoyStickSprite;
	// UISprite JoyStickLogic::m_BackGround1
	UISprite_t1202 * ___m_BackGround1;
	// UISprite JoyStickLogic::m_BackGround2
	UISprite_t1202 * ___m_BackGround2;
	// UnityEngine.Vector3 JoyStickLogic::m_nTouchPos
	Vector3_t121  ___m_nTouchPos;
	// UnityEngine.Vector3 JoyStickLogic::m_nJoyStickOrigin
	Vector3_t121  ___m_nJoyStickOrigin;
	// System.Single JoyStickLogic::m_MaxRadius
	float ___m_MaxRadius;
	// ProcessInput JoyStickLogic::m_ProcessInput
	ProcessInput_t1500 * ___m_ProcessInput;
	// UnityEngine.Vector3 JoyStickLogic::m_MouseBuffer
	Vector3_t121  ___m_MouseBuffer;
	// System.Int32 JoyStickLogic::m_FingerID
	int32_t ___m_FingerID;
	// System.Int32 JoyStickLogic::m_NewPlayerStep
	int32_t ___m_NewPlayerStep;
};
struct JoyStickLogic_t1499_StaticFields{
	// JoyStickLogic JoyStickLogic::m_Instance
	JoyStickLogic_t1499 * ___m_Instance;
};
