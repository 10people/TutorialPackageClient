#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// FXController
struct FXController_t2115;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Bullet
struct Bullet_t5017  : public MonoBehaviour_t18
{
	// System.Single Bullet::m_speed
	float ___m_speed;
	// System.Single Bullet::minDistance
	float ___minDistance;
	// System.Single Bullet::m_duration
	float ___m_duration;
	// System.Single Bullet::startHeight
	float ___startHeight;
	// UnityEngine.Vector3 Bullet::m_startPos
	Vector3_t121  ___m_startPos;
	// UnityEngine.Vector3 Bullet::m_dir
	Vector3_t121  ___m_dir;
	// UnityEngine.Vector3 Bullet::m_targetPos
	Vector3_t121  ___m_targetPos;
	// System.Int32 Bullet::m_targetID
	int32_t ___m_targetID;
	// UnityEngine.Transform Bullet::mTrans
	Transform_t78 * ___mTrans;
	// FXController Bullet::mFxController
	FXController_t2115 * ___mFxController;
	// UnityEngine.Transform Bullet::mTargetTrans
	Transform_t78 * ___mTargetTrans;
	// System.Single Bullet::m_targetGetTimer
	float ___m_targetGetTimer;
};
