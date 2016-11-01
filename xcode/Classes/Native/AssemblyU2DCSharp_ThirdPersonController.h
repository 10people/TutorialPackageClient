#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// Games.LogicObj.Obj_MainPlayer
struct Obj_MainPlayer_t1732;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ThirdPersonController
struct ThirdPersonController_t4487  : public MonoBehaviour_t18
{
	// System.Single ThirdPersonController::m_fWalkSpeed
	float ___m_fWalkSpeed;
	// System.Single ThirdPersonController::m_fSpeedSmoothing
	float ___m_fSpeedSmoothing;
	// System.Single ThirdPersonController::m_fRrotateSpeed
	float ___m_fRrotateSpeed;
	// System.Single ThirdPersonController::m_fLockCameraTimer
	float ___m_fLockCameraTimer;
	// UnityEngine.Vector3 ThirdPersonController::m_vecMoveDirection
	Vector3_t121  ___m_vecMoveDirection;
	// System.Single ThirdPersonController::m_fMoveSpeed
	float ___m_fMoveSpeed;
	// System.Boolean ThirdPersonController::m_IsJoyMoving
	bool ___m_IsJoyMoving;
	// System.Boolean ThirdPersonController::m_bIsMoving
	bool ___m_bIsMoving;
	// System.Single ThirdPersonController::m_fVerticalRaw
	float ___m_fVerticalRaw;
	// System.Single ThirdPersonController::m_fHorizonRaw
	float ___m_fHorizonRaw;
	// UnityEngine.Transform ThirdPersonController::m_CameraTransform
	Transform_t78 * ___m_CameraTransform;
	// UnityEngine.Transform ThirdPersonController::m_MainPlayerTransform
	Transform_t78 * ___m_MainPlayerTransform;
	// Games.LogicObj.Obj_MainPlayer ThirdPersonController::m_MainPlayer
	Obj_MainPlayer_t1732 * ___m_MainPlayer;
};
