#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UniformAcceleratedMotion
struct UniformAcceleratedMotion_t1369  : public MonoBehaviour_t18
{
	// UnityEngine.Vector3 UniformAcceleratedMotion::m_OriginPosition
	Vector3_t121  ___m_OriginPosition;
	// UnityEngine.Vector3 UniformAcceleratedMotion::m_Velocity
	Vector3_t121  ___m_Velocity;
	// UnityEngine.Vector3 UniformAcceleratedMotion::m_Acceleration
	Vector3_t121  ___m_Acceleration;
	// System.Single UniformAcceleratedMotion::m_StartTime
	float ___m_StartTime;
	// System.Single UniformAcceleratedMotion::m_MotionTime
	float ___m_MotionTime;
	// System.Boolean UniformAcceleratedMotion::m_bGoing
	bool ___m_bGoing;
	// UnityEngine.Vector3 UniformAcceleratedMotion::m_OriginVelocity
	Vector3_t121  ___m_OriginVelocity;
	// System.Boolean UniformAcceleratedMotion::m_bObjMove
	bool ___m_bObjMove;
	// UnityEngine.Transform UniformAcceleratedMotion::m_transform
	Transform_t78 * ___m_transform;
};
