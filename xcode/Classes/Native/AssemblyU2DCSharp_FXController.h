#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// BaseEffectBehaviourController
struct BaseEffectBehaviourController_t2114;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// FXController
struct FXController_t2115  : public MonoBehaviour_t18
{
	// System.String FXController::m_Path
	String_t* ___m_Path;
	// System.Single FXController::m_fDuration
	float ___m_fDuration;
	// System.Boolean FXController::m_bOnlyDeactivate
	bool ___m_bOnlyDeactivate;
	// System.Int32 FXController::m_nEffectID
	int32_t ___m_nEffectID;
	// System.Single FXController::m_fDelay
	float ___m_fDelay;
	// System.Single FXController::m_fRemainduration
	float ___m_fRemainduration;
	// System.Single FXController::m_fRemaindelay
	float ___m_fRemaindelay;
	// UnityEngine.GameObject FXController::m_fxObject
	GameObject_t9 * ___m_fxObject;
	// UnityEngine.GameObject FXController::m_EffectGameObj
	GameObject_t9 * ___m_EffectGameObj;
	// UnityEngine.Vector3 FXController::m_StartFXPos
	Vector3_t121  ___m_StartFXPos;
	// UnityEngine.Quaternion FXController::m_StartRotation
	Quaternion_t120  ___m_StartRotation;
	// System.Boolean FXController::m_bIsFellowOwner
	bool ___m_bIsFellowOwner;
	// BaseEffectBehaviourController FXController::m_curEffectController
	BaseEffectBehaviourController_t2114 * ___m_curEffectController;
	// UnityEngine.GameObject FXController::m_FirstChild
	GameObject_t9 * ___m_FirstChild;
	// System.Single FXController::PlayerFinishTime
	float ___PlayerFinishTime;
	// UnityEngine.Transform FXController::m_cachedTransform
	Transform_t78 * ___m_cachedTransform;
	// System.Boolean FXController::m_bAreaEffect
	bool ___m_bAreaEffect;
	// UnityEngine.Vector3 FXController::m_AreaEffectPos
	Vector3_t121  ___m_AreaEffectPos;
};
