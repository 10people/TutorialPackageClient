#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BoomChain
struct BoomChain_t5016  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject BoomChain::m_BoomObject
	GameObject_t9 * ___m_BoomObject;
	// System.Single BoomChain::m_DelayMax
	float ___m_DelayMax;
	// System.Single BoomChain::m_DelayMin
	float ___m_DelayMin;
	// System.Int32 BoomChain::m_Count
	int32_t ___m_Count;
	// System.Single BoomChain::m_DistanceMax
	float ___m_DistanceMax;
	// System.Single BoomChain::m_DistanceMin
	float ___m_DistanceMin;
	// System.Single BoomChain::m_Direction
	float ___m_Direction;
	// System.Int32 BoomChain::m_curIndex
	int32_t ___m_curIndex;
	// System.Single BoomChain::m_timer
	float ___m_timer;
	// UnityEngine.GameObject[] BoomChain::m_objArray
	GameObjectU5BU5D_t1200* ___m_objArray;
};
