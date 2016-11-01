#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1116;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<FXController>>
struct Dictionary_2_t2113;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BaseEffectBehaviourController
struct BaseEffectBehaviourController_t2114  : public MonoBehaviour_t18
{
	// UnityEngine.Transform BaseEffectBehaviourController::m_BaseEffectBindPoint
	Transform_t78 * ___m_BaseEffectBindPoint;
	// UnityEngine.Transform BaseEffectBehaviourController::m_EffectGameObjTrans
	Transform_t78 * ___m_EffectGameObjTrans;
	// UnityEngine.GameObject BaseEffectBehaviourController::m_EffectGameObj
	GameObject_t9 * ___m_EffectGameObj;
	// UnityEngine.Transform BaseEffectBehaviourController::m_CachedTrans
	Transform_t78 * ___m_CachedTrans;
	// System.Boolean BaseEffectBehaviourController::m_hasInited
	bool ___m_hasInited;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> BaseEffectBehaviourController::m_EffectCountCache
	Dictionary_2_t1116 * ___m_EffectCountCache;
	// System.Collections.Generic.List`1<System.Int32> BaseEffectBehaviourController::m_NeedPlayEffectIdCacheList
	List_1_t90 * ___m_NeedPlayEffectIdCacheList;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<FXController>> BaseEffectBehaviourController::m_dicEffectCache
	Dictionary_2_t2113 * ___m_dicEffectCache;
};
