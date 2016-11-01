#pragma once
#include <stdint.h>
// ThirdPersonController
struct ThirdPersonController_t4487;
// ProcessInput
struct ProcessInput_t1500;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ProcessInput
struct ProcessInput_t1500  : public MonoBehaviour_t18
{
	// System.Single ProcessInput::m_IntervalTime
	float ___m_IntervalTime;
	// System.Single ProcessInput::m_CurOverAnimation
	float ___m_CurOverAnimation;
	// System.Boolean ProcessInput::m_bIsMouseDBClick
	bool ___m_bIsMouseDBClick;
	// System.Int32 ProcessInput::m_SceneTouchFingerID
	int32_t ___m_SceneTouchFingerID;
	// ThirdPersonController ProcessInput::m_Controller
	ThirdPersonController_t4487 * ___m_Controller;
	// System.Boolean ProcessInput::m_bPinching
	bool ___m_bPinching;
	// UnityEngine.GameObject ProcessInput::m_SceneObject
	GameObject_t9 * ___m_SceneObject;
};
struct ProcessInput_t1500_StaticFields{
	// System.Boolean ProcessInput::IsProcessInput
	bool ___IsProcessInput;
	// ProcessInput ProcessInput::m_Instance
	ProcessInput_t1500 * ___m_Instance;
};
