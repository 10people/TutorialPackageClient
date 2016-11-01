#pragma once
#include <stdint.h>
// ThirdPersonCamera
struct ThirdPersonCamera_t4573;
// Games.LogicObj.Obj
struct Obj_t2130;
// UnityEngine.Transform
struct Transform_t78;
// CameraDefine/CameraMoveDoneCallback
struct CameraMoveDoneCallback_t4571;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// iTween/EaseType
#include "AssemblyU2DCSharp_iTween_EaseType.h"
// CameraStateChangeToStareTarget
struct CameraStateChangeToStareTarget_t4578  : public Object_t
{
	// ThirdPersonCamera CameraStateChangeToStareTarget::m_ThirdPersonCamera
	ThirdPersonCamera_t4573 * ___m_ThirdPersonCamera;
	// UnityEngine.Vector3 CameraStateChangeToStareTarget::m_CameraPos
	Vector3_t121  ___m_CameraPos;
	// UnityEngine.Vector3 CameraStateChangeToStareTarget::m_StarePos
	Vector3_t121  ___m_StarePos;
	// Games.LogicObj.Obj CameraStateChangeToStareTarget::m_Target
	Obj_t2130 * ___m_Target;
	// UnityEngine.Transform CameraStateChangeToStareTarget::m_TargetTransformCache
	Transform_t78 * ___m_TargetTransformCache;
	// UnityEngine.Vector3 CameraStateChangeToStareTarget::m_OldPos
	Vector3_t121  ___m_OldPos;
	// UnityEngine.Vector3 CameraStateChangeToStareTarget::m_LastValidTargetPos
	Vector3_t121  ___m_LastValidTargetPos;
	// System.Single CameraStateChangeToStareTarget::m_fDuration
	float ___m_fDuration;
	// System.Single CameraStateChangeToStareTarget::m_fTimer
	float ___m_fTimer;
	// CameraDefine/CameraMoveDoneCallback CameraStateChangeToStareTarget::m_OnFinish
	CameraMoveDoneCallback_t4571 * ___m_OnFinish;
	// iTween/EaseType CameraStateChangeToStareTarget::m_EaseType
	int32_t ___m_EaseType;
};
