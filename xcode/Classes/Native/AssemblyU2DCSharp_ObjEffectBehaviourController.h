#pragma once
#include <stdint.h>
// Games.LogicObj.Obj
struct Obj_t2130;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1530;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// BaseEffectBehaviourController
#include "AssemblyU2DCSharp_BaseEffectBehaviourController.h"
// ObjEffectBehaviourController
struct ObjEffectBehaviourController_t2122  : public BaseEffectBehaviourController_t2114
{
	// Games.LogicObj.Obj ObjEffectBehaviourController::m_EffectHolder
	Obj_t2130 * ___m_EffectHolder;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> ObjEffectBehaviourController::m_effectBindPointCache
	Dictionary_2_t1530 * ___m_effectBindPointCache;
	// System.Boolean ObjEffectBehaviourController::m_IsOk
	bool ___m_IsOk;
};
struct ObjEffectBehaviourController_t2122_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ObjEffectBehaviourController::<>f__switch$map5
	Dictionary_2_t944 * ___U3CU3Ef__switch$map5;
};
