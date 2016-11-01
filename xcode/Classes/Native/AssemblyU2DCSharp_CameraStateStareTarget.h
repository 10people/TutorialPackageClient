#pragma once
#include <stdint.h>
// ThirdPersonCamera
struct ThirdPersonCamera_t4573;
// Games.LogicObj.Obj
struct Obj_t2130;
// UnityEngine.Transform
struct Transform_t78;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// CameraStateStareTarget
struct CameraStateStareTarget_t4581  : public Object_t
{
	// ThirdPersonCamera CameraStateStareTarget::m_ThirdPersonCamera
	ThirdPersonCamera_t4573 * ___m_ThirdPersonCamera;
	// UnityEngine.Vector3 CameraStateStareTarget::m_CameraPos
	Vector3_t121  ___m_CameraPos;
	// UnityEngine.Vector3 CameraStateStareTarget::m_StarePos
	Vector3_t121  ___m_StarePos;
	// Games.LogicObj.Obj CameraStateStareTarget::m_Target
	Obj_t2130 * ___m_Target;
	// UnityEngine.Transform CameraStateStareTarget::m_TargetTransformCache
	Transform_t78 * ___m_TargetTransformCache;
	// UnityEngine.Vector3 CameraStateStareTarget::m_LastValidTargetPos
	Vector3_t121  ___m_LastValidTargetPos;
};
