#pragma once
#include <stdint.h>
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// ParticleSystemScaleController
struct ParticleSystemScaleController_t932;
// ObjEffectBehaviourController
#include "AssemblyU2DCSharp_ObjEffectBehaviourController.h"
// CharacterEffectBehaviourController
struct CharacterEffectBehaviourController_t2121  : public ObjEffectBehaviourController_t2122
{
	// Games.LogicObj.Obj_Character CharacterEffectBehaviourController::m_cachedObjCharacter
	Obj_Character_t1772 * ___m_cachedObjCharacter;
	// System.Collections.Generic.List`1<System.Int32> CharacterEffectBehaviourController::m_effectBindToMountList
	List_1_t90 * ___m_effectBindToMountList;
	// System.Collections.Generic.List`1<System.String> CharacterEffectBehaviourController::m_effectBindPointsOnMountList
	List_1_t1333 * ___m_effectBindPointsOnMountList;
	// System.Collections.Generic.List`1<System.Int32> CharacterEffectBehaviourController::m_effectBindToWeaponList
	List_1_t90 * ___m_effectBindToWeaponList;
	// System.Collections.Generic.List`1<System.String> CharacterEffectBehaviourController::m_effectBindPointsOnWeaponList
	List_1_t1333 * ___m_effectBindPointsOnWeaponList;
	// System.Collections.Generic.List`1<System.String> CharacterEffectBehaviourController::m_effectBindPointsOnFlyWingList
	List_1_t1333 * ___m_effectBindPointsOnFlyWingList;
	// ParticleSystemScaleController CharacterEffectBehaviourController::m_cachedParticleScaler
	ParticleSystemScaleController_t932 * ___m_cachedParticleScaler;
};
