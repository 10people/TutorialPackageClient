#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t133;
// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer>
struct List_1_t5010;
// System.Collections.Generic.List`1<UnityEngine.Mesh>
struct List_1_t5011;
// System.Collections.Generic.List`1<BattleSoul>
struct List_1_t5012;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// BattleSoulMaker
struct BattleSoulMaker_t4472  : public MonoBehaviour_t18
{
	// UnityEngine.Material BattleSoulMaker::m_soulMat
	Material_t133 * ___m_soulMat;
	// System.Single BattleSoulMaker::m_interval
	float ___m_interval;
	// System.Single BattleSoulMaker::m_distance
	float ___m_distance;
	// System.Single BattleSoulMaker::m_soulLife
	float ___m_soulLife;
	// System.Int32 BattleSoulMaker::m_maxSoulNum
	int32_t ___m_maxSoulNum;
	// System.Collections.Generic.List`1<UnityEngine.SkinnedMeshRenderer> BattleSoulMaker::skinmeshList
	List_1_t5010 * ___skinmeshList;
	// System.Collections.Generic.List`1<UnityEngine.Mesh> BattleSoulMaker::m_meshBuffer
	List_1_t5011 * ___m_meshBuffer;
	// System.Int32 BattleSoulMaker::m_meshIndex
	int32_t ___m_meshIndex;
	// System.Single BattleSoulMaker::m_timer
	float ___m_timer;
	// UnityEngine.Vector3 BattleSoulMaker::m_lastPos
	Vector3_t121  ___m_lastPos;
	// System.Collections.Generic.List`1<BattleSoul> BattleSoulMaker::m_soulList
	List_1_t5012 * ___m_soulList;
	// System.Int32 BattleSoulMaker::m_soulCount
	int32_t ___m_soulCount;
};
