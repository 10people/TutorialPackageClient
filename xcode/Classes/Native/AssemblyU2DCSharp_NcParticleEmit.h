#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.ParticleSystem
struct ParticleSystem_t929;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcParticleEmit/AttachType
#include "AssemblyU2DCSharp_NcParticleEmit_AttachType.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// NcParticleEmit
struct NcParticleEmit_t5077  : public NcEffectBehaviour_t5021
{
	// NcParticleEmit/AttachType NcParticleEmit::m_AttachType
	int32_t ___m_AttachType;
	// System.Single NcParticleEmit::m_fDelayTime
	float ___m_fDelayTime;
	// System.Single NcParticleEmit::m_fRepeatTime
	float ___m_fRepeatTime;
	// System.Int32 NcParticleEmit::m_nRepeatCount
	int32_t ___m_nRepeatCount;
	// UnityEngine.GameObject NcParticleEmit::m_ParticlePrefab
	GameObject_t9 * ___m_ParticlePrefab;
	// System.Int32 NcParticleEmit::m_EmitCount
	int32_t ___m_EmitCount;
	// UnityEngine.Vector3 NcParticleEmit::m_AddStartPos
	Vector3_t121  ___m_AddStartPos;
	// UnityEngine.Vector3 NcParticleEmit::m_RandomRange
	Vector3_t121  ___m_RandomRange;
	// System.Single NcParticleEmit::m_fStartTime
	float ___m_fStartTime;
	// System.Int32 NcParticleEmit::m_nCreateCount
	int32_t ___m_nCreateCount;
	// System.Boolean NcParticleEmit::m_bStartAttach
	bool ___m_bStartAttach;
	// UnityEngine.GameObject NcParticleEmit::m_CreateGameObject
	GameObject_t9 * ___m_CreateGameObject;
	// System.Boolean NcParticleEmit::m_bEnabled
	bool ___m_bEnabled;
	// UnityEngine.ParticleSystem NcParticleEmit::m_ps
	ParticleSystem_t929 * ___m_ps;
};
