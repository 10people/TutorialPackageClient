#pragma once
#include <stdint.h>
// ICameraState
struct ICameraState_t4585;
// CameraStateInit
struct CameraStateInit_t4579;
// CameraStateStareTarget
struct CameraStateStareTarget_t4581;
// CameraStateChangeToStareTarget
struct CameraStateChangeToStareTarget_t4578;
// CameraStateStarePos
struct CameraStateStarePos_t4580;
// CameraStateChangeToStarePos
struct CameraStateChangeToStarePos_t4577;
// System.Collections.Generic.List`1<ThirdPersonCamera/CameraRockInfo>
struct List_1_t4586;
// CameraBase
#include "AssemblyU2DCSharp_CameraBase.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// ThirdPersonCamera
struct ThirdPersonCamera_t4573  : public CameraBase_t4570
{
	// System.Single ThirdPersonCamera::m_fPitch
	float ___m_fPitch;
	// System.Single ThirdPersonCamera::m_fYaw
	float ___m_fYaw;
	// System.Single ThirdPersonCamera::m_fDistance
	float ___m_fDistance;
	// UnityEngine.Vector3 ThirdPersonCamera::m_TargetOffset
	Vector3_t121  ___m_TargetOffset;
	// System.Boolean ThirdPersonCamera::m_bDirty
	bool ___m_bDirty;
	// System.Single ThirdPersonCamera::m_fRestTimer
	float ___m_fRestTimer;
	// System.Single ThirdPersonCamera::m_fRestTime
	float ___m_fRestTime;
	// System.Single ThirdPersonCamera::m_fOldPitch
	float ___m_fOldPitch;
	// System.Single ThirdPersonCamera::m_fOldYaw
	float ___m_fOldYaw;
	// System.Single ThirdPersonCamera::m_fOldDistance
	float ___m_fOldDistance;
	// System.Single ThirdPersonCamera::m_fOldTargetPffsetY
	float ___m_fOldTargetPffsetY;
	// ICameraState ThirdPersonCamera::m_State
	Object_t * ___m_State;
	// CameraStateInit ThirdPersonCamera::m_StateInit
	CameraStateInit_t4579 * ___m_StateInit;
	// CameraStateStareTarget ThirdPersonCamera::m_StateStareTarget
	CameraStateStareTarget_t4581 * ___m_StateStareTarget;
	// CameraStateChangeToStareTarget ThirdPersonCamera::m_StateChangeToStareTarget
	CameraStateChangeToStareTarget_t4578 * ___m_StateChangeToStareTarget;
	// CameraStateStarePos ThirdPersonCamera::m_StateStarePos
	CameraStateStarePos_t4580 * ___m_StateStarePos;
	// CameraStateChangeToStarePos ThirdPersonCamera::m_StateChangeToStarePos
	CameraStateChangeToStarePos_t4577 * ___m_StateChangeToStarePos;
	// System.Collections.Generic.List`1<ThirdPersonCamera/CameraRockInfo> ThirdPersonCamera::m_CameraRockInfoList
	List_1_t4586 * ___m_CameraRockInfoList;
	// System.Single ThirdPersonCamera::m_fPitchRock
	float ___m_fPitchRock;
	// System.Single ThirdPersonCamera::m_fYawRock
	float ___m_fYawRock;
	// System.Single ThirdPersonCamera::m_fDistanceRock
	float ___m_fDistanceRock;
	// System.Single ThirdPersonCamera::m_fOffsetRock
	float ___m_fOffsetRock;
	// System.Collections.Generic.List`1<ThirdPersonCamera/CameraRockInfo> ThirdPersonCamera::m_CameraAnimInfoList
	List_1_t4586 * ___m_CameraAnimInfoList;
	// System.Single ThirdPersonCamera::m_fPitchAnim
	float ___m_fPitchAnim;
	// System.Single ThirdPersonCamera::m_fYawAnim
	float ___m_fYawAnim;
	// System.Single ThirdPersonCamera::m_fDistanceAnim
	float ___m_fDistanceAnim;
	// System.Single ThirdPersonCamera::m_fOffsetAnim
	float ___m_fOffsetAnim;
};
