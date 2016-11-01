#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// NcDuplicator
struct NcDuplicator_t5075  : public NcEffectBehaviour_t5021
{
	// System.Single NcDuplicator::m_fDuplicateTime
	float ___m_fDuplicateTime;
	// System.Int32 NcDuplicator::m_nDuplicateCount
	int32_t ___m_nDuplicateCount;
	// System.Single NcDuplicator::m_fDuplicateLifeTime
	float ___m_fDuplicateLifeTime;
	// UnityEngine.Vector3 NcDuplicator::m_AddStartPos
	Vector3_t121  ___m_AddStartPos;
	// UnityEngine.Vector3 NcDuplicator::m_AccumStartRot
	Vector3_t121  ___m_AccumStartRot;
	// UnityEngine.Vector3 NcDuplicator::m_RandomRange
	Vector3_t121  ___m_RandomRange;
	// System.Int32 NcDuplicator::m_nCreateCount
	int32_t ___m_nCreateCount;
	// System.Single NcDuplicator::m_fStartTime
	float ___m_fStartTime;
	// UnityEngine.GameObject NcDuplicator::m_ClonObject
	GameObject_t9 * ___m_ClonObject;
	// System.Boolean NcDuplicator::m_bInvoke
	bool ___m_bInvoke;
};
