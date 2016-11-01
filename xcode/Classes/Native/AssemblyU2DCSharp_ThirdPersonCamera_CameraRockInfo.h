#pragma once
#include <stdint.h>
// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// Callback
struct Callback_t2196;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// ThirdPersonCamera/CameraRockInfo
struct CameraRockInfo_t4584 
{
	// System.Int32 ThirdPersonCamera/CameraRockInfo::m_nCameraRockId
	int32_t ___m_nCameraRockId;
	// System.Single ThirdPersonCamera/CameraRockInfo::m_fRockTime
	float ___m_fRockTime;
	// System.Single ThirdPersonCamera/CameraRockInfo::m_fNeedRockTime
	float ___m_fNeedRockTime;
	// System.Single ThirdPersonCamera/CameraRockInfo::m_fDelayTime
	float ___m_fDelayTime;
	// System.Boolean ThirdPersonCamera/CameraRockInfo::m_bContinueRockDie
	bool ___m_bContinueRockDie;
	// UnityEngine.AnimationCurve ThirdPersonCamera/CameraRockInfo::m_PitchRockOff
	AnimationCurve_t4583 * ___m_PitchRockOff;
	// UnityEngine.AnimationCurve ThirdPersonCamera/CameraRockInfo::m_YawRockOff
	AnimationCurve_t4583 * ___m_YawRockOff;
	// UnityEngine.AnimationCurve ThirdPersonCamera/CameraRockInfo::m_DistanceRockOff
	AnimationCurve_t4583 * ___m_DistanceRockOff;
	// UnityEngine.AnimationCurve ThirdPersonCamera/CameraRockInfo::m_OffsetYRockOff
	AnimationCurve_t4583 * ___m_OffsetYRockOff;
	// Callback ThirdPersonCamera/CameraRockInfo::m_RockFinishCallback
	Callback_t2196 * ___m_RockFinishCallback;
};
