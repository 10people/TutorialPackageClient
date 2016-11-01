#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// System.Single[]
struct SingleU5BU5D_t744;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.Transform
struct Transform_t78;
// System.Collections.Generic.List`1<Fireworks/ParticalData>
struct List_1_t5111;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Fireworks
struct Fireworks_t5112  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject Fireworks::m_ResObj
	GameObject_t9 * ___m_ResObj;
	// System.Single[] Fireworks::m_delays
	SingleU5BU5D_t744* ___m_delays;
	// System.Single[] Fireworks::m_durations
	SingleU5BU5D_t744* ___m_durations;
	// UnityEngine.Vector3[] Fireworks::m_rotations
	Vector3U5BU5D_t1262* ___m_rotations;
	// UnityEngine.Vector3[] Fireworks::m_positions
	Vector3U5BU5D_t1262* ___m_positions;
	// UnityEngine.Transform Fireworks::m_Trans
	Transform_t78 * ___m_Trans;
	// System.Int32 Fireworks::m_totalNum
	int32_t ___m_totalNum;
	// System.Int32 Fireworks::m_curIndex
	int32_t ___m_curIndex;
	// System.Single Fireworks::m_curDelay
	float ___m_curDelay;
	// System.Collections.Generic.List`1<Fireworks/ParticalData> Fireworks::m_usingObj
	List_1_t5111 * ___m_usingObj;
};
