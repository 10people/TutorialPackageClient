#pragma once
#include <stdint.h>
// ThirdPersonCamera
struct ThirdPersonCamera_t4573;
// CameraDefine/CameraMoveDoneCallback
struct CameraMoveDoneCallback_t4571;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// iTween/EaseType
#include "AssemblyU2DCSharp_iTween_EaseType.h"
// CameraStateChangeToStarePos
struct CameraStateChangeToStarePos_t4577  : public Object_t
{
	// ThirdPersonCamera CameraStateChangeToStarePos::m_ThirdPersonCamera
	ThirdPersonCamera_t4573 * ___m_ThirdPersonCamera;
	// UnityEngine.Vector3 CameraStateChangeToStarePos::m_CameraPos
	Vector3_t121  ___m_CameraPos;
	// UnityEngine.Vector3 CameraStateChangeToStarePos::m_StarePos
	Vector3_t121  ___m_StarePos;
	// UnityEngine.Vector3 CameraStateChangeToStarePos::m_TargetPos
	Vector3_t121  ___m_TargetPos;
	// UnityEngine.Vector3 CameraStateChangeToStarePos::m_OldPos
	Vector3_t121  ___m_OldPos;
	// UnityEngine.Vector3 CameraStateChangeToStarePos::m_LastValidTargetPos
	Vector3_t121  ___m_LastValidTargetPos;
	// System.Single CameraStateChangeToStarePos::m_fDuration
	float ___m_fDuration;
	// System.Single CameraStateChangeToStarePos::m_fTimer
	float ___m_fTimer;
	// CameraDefine/CameraMoveDoneCallback CameraStateChangeToStarePos::m_OnFinish
	CameraMoveDoneCallback_t4571 * ___m_OnFinish;
	// iTween/EaseType CameraStateChangeToStarePos::m_EaseType
	int32_t ___m_EaseType;
};
