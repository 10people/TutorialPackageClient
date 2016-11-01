#pragma once
#include <stdint.h>
// UnityEngine.Animation
struct Animation_t1252;
// Games.Animation_Modle.AnimationLogic
struct AnimationLogic_t4470;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// FakeObjEffectBehaviourController
struct FakeObjEffectBehaviourController_t2129;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.ObjAnimModule.ObjAnimModel
struct ObjAnimModel_t4799  : public MonoBehaviour_t18
{
	// UnityEngine.Animation Games.ObjAnimModule.ObjAnimModel::m_ObjAnimation
	Animation_t1252 * ___m_ObjAnimation;
	// Games.Animation_Modle.AnimationLogic Games.ObjAnimModule.ObjAnimModel::m_AnimLogic
	AnimationLogic_t4470 * ___m_AnimLogic;
	// System.String Games.ObjAnimModule.ObjAnimModel::m_AnimationFilePath
	String_t* ___m_AnimationFilePath;
	// UnityEngine.GameObject Games.ObjAnimModule.ObjAnimModel::m_LWeaponObject
	GameObject_t9 * ___m_LWeaponObject;
	// UnityEngine.GameObject Games.ObjAnimModule.ObjAnimModel::m_RWeaponObject
	GameObject_t9 * ___m_RWeaponObject;
	// FakeObjEffectBehaviourController Games.ObjAnimModule.ObjAnimModel::m_FakeObjEffectController
	FakeObjEffectBehaviourController_t2129 * ___m_FakeObjEffectController;
};
