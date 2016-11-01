#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MeshFilter
struct MeshFilter_t1418;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t4452;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// NcEffectBehaviour
struct NcEffectBehaviour_t5021  : public MonoBehaviour_t18
{
	// System.Single NcEffectBehaviour::m_fUserTag
	float ___m_fUserTag;
	// UnityEngine.MeshFilter NcEffectBehaviour::m_MeshFilter
	MeshFilter_t1418 * ___m_MeshFilter;
	// System.Collections.Generic.List`1<UnityEngine.Material> NcEffectBehaviour::m_RuntimeMaterials
	List_1_t4452 * ___m_RuntimeMaterials;
};
struct NcEffectBehaviour_t5021_StaticFields{
	// System.Boolean NcEffectBehaviour::m_bShuttingDown
	bool ___m_bShuttingDown;
	// UnityEngine.GameObject NcEffectBehaviour::m_RootInstance
	GameObject_t9 * ___m_RootInstance;
};
