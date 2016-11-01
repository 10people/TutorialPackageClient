#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcAttachPrefab/AttachType
#include "AssemblyU2DCSharp_NcAttachPrefab_AttachType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// NcAttachPrefab
struct NcAttachPrefab_t5052  : public NcEffectBehaviour_t5021
{
	// NcAttachPrefab/AttachType NcAttachPrefab::m_AttachType
	int32_t ___m_AttachType;
	// System.Single NcAttachPrefab::m_fDelayTime
	float ___m_fDelayTime;
	// System.Single NcAttachPrefab::m_fRepeatTime
	float ___m_fRepeatTime;
	// System.Int32 NcAttachPrefab::m_nRepeatCount
	int32_t ___m_nRepeatCount;
	// UnityEngine.GameObject NcAttachPrefab::m_AttachPrefab
	GameObject_t9 * ___m_AttachPrefab;
	// System.Single NcAttachPrefab::m_fPrefabSpeed
	float ___m_fPrefabSpeed;
	// System.Single NcAttachPrefab::m_fPrefabLifeTime
	float ___m_fPrefabLifeTime;
	// System.Boolean NcAttachPrefab::m_bWorldSpace
	bool ___m_bWorldSpace;
	// UnityEngine.Vector3 NcAttachPrefab::m_AddStartPos
	Vector3_t121  ___m_AddStartPos;
	// UnityEngine.Vector3 NcAttachPrefab::m_AccumStartRot
	Vector3_t121  ___m_AccumStartRot;
	// UnityEngine.Vector3 NcAttachPrefab::m_RandomRange
	Vector3_t121  ___m_RandomRange;
	// System.Int32 NcAttachPrefab::m_nSpriteFactoryIndex
	int32_t ___m_nSpriteFactoryIndex;
	// System.Boolean NcAttachPrefab::m_bDetachParent
	bool ___m_bDetachParent;
	// System.Single NcAttachPrefab::m_fStartTime
	float ___m_fStartTime;
	// System.Int32 NcAttachPrefab::m_nCreateCount
	int32_t ___m_nCreateCount;
	// System.Boolean NcAttachPrefab::m_bStartAttach
	bool ___m_bStartAttach;
	// UnityEngine.GameObject NcAttachPrefab::m_CreateGameObject
	GameObject_t9 * ___m_CreateGameObject;
	// System.Boolean NcAttachPrefab::m_bEnabled
	bool ___m_bEnabled;
};
