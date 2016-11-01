#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.ParticleSystem
struct ParticleSystem_t929;
// UnityEngine.ParticleEmitter
struct ParticleEmitter_t5081;
// UnityEngine.ParticleAnimator
struct ParticleAnimator_t5082;
// UnityEngine.ParticleRenderer
struct ParticleRenderer_t5083;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t5084;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// NcParticleSystem/ParticleDestruct
#include "AssemblyU2DCSharp_NcParticleSystem_ParticleDestruct.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// NcParticleSystem
struct NcParticleSystem_t5086  : public NcEffectBehaviour_t5021
{
	// System.Boolean NcParticleSystem::m_bDisabledEmit
	bool ___m_bDisabledEmit;
	// System.Single NcParticleSystem::m_fStartDelayTime
	float ___m_fStartDelayTime;
	// System.Boolean NcParticleSystem::m_bBurst
	bool ___m_bBurst;
	// System.Single NcParticleSystem::m_fBurstRepeatTime
	float ___m_fBurstRepeatTime;
	// System.Int32 NcParticleSystem::m_nBurstRepeatCount
	int32_t ___m_nBurstRepeatCount;
	// System.Int32 NcParticleSystem::m_fBurstEmissionCount
	int32_t ___m_fBurstEmissionCount;
	// System.Single NcParticleSystem::m_fEmitTime
	float ___m_fEmitTime;
	// System.Single NcParticleSystem::m_fSleepTime
	float ___m_fSleepTime;
	// System.Boolean NcParticleSystem::m_bScaleWithTransform
	bool ___m_bScaleWithTransform;
	// System.Boolean NcParticleSystem::m_bWorldSpace
	bool ___m_bWorldSpace;
	// System.Single NcParticleSystem::m_fStartSizeRate
	float ___m_fStartSizeRate;
	// System.Single NcParticleSystem::m_fStartLifeTimeRate
	float ___m_fStartLifeTimeRate;
	// System.Single NcParticleSystem::m_fStartEmissionRate
	float ___m_fStartEmissionRate;
	// System.Single NcParticleSystem::m_fStartSpeedRate
	float ___m_fStartSpeedRate;
	// System.Single NcParticleSystem::m_fRenderLengthRate
	float ___m_fRenderLengthRate;
	// System.Single NcParticleSystem::m_fLegacyMinMeshNormalVelocity
	float ___m_fLegacyMinMeshNormalVelocity;
	// System.Single NcParticleSystem::m_fLegacyMaxMeshNormalVelocity
	float ___m_fLegacyMaxMeshNormalVelocity;
	// System.Single NcParticleSystem::m_fShurikenSpeedRate
	float ___m_fShurikenSpeedRate;
	// System.Boolean NcParticleSystem::m_bStart
	bool ___m_bStart;
	// UnityEngine.Vector3 NcParticleSystem::m_OldPos
	Vector3_t121  ___m_OldPos;
	// System.Boolean NcParticleSystem::m_bLegacyRuntimeScale
	bool ___m_bLegacyRuntimeScale;
	// NcParticleSystem/ParticleDestruct NcParticleSystem::m_ParticleDestruct
	int32_t ___m_ParticleDestruct;
	// UnityEngine.LayerMask NcParticleSystem::m_CollisionLayer
	LayerMask_t39  ___m_CollisionLayer;
	// System.Single NcParticleSystem::m_fCollisionRadius
	float ___m_fCollisionRadius;
	// System.Single NcParticleSystem::m_fDestructPosY
	float ___m_fDestructPosY;
	// UnityEngine.GameObject NcParticleSystem::m_AttachPrefab
	GameObject_t9 * ___m_AttachPrefab;
	// System.Single NcParticleSystem::m_fPrefabScale
	float ___m_fPrefabScale;
	// System.Single NcParticleSystem::m_fPrefabSpeed
	float ___m_fPrefabSpeed;
	// System.Single NcParticleSystem::m_fPrefabLifeTime
	float ___m_fPrefabLifeTime;
	// System.Boolean NcParticleSystem::m_bSleep
	bool ___m_bSleep;
	// System.Single NcParticleSystem::m_fStartTime
	float ___m_fStartTime;
	// System.Single NcParticleSystem::m_fDurationStartTime
	float ___m_fDurationStartTime;
	// System.Single NcParticleSystem::m_fEmitStartTime
	float ___m_fEmitStartTime;
	// System.Int32 NcParticleSystem::m_nCreateCount
	int32_t ___m_nCreateCount;
	// System.Boolean NcParticleSystem::m_bScalePreRender
	bool ___m_bScalePreRender;
	// System.Boolean NcParticleSystem::m_bMeshParticleEmitter
	bool ___m_bMeshParticleEmitter;
	// UnityEngine.ParticleSystem NcParticleSystem::m_ps
	ParticleSystem_t929 * ___m_ps;
	// UnityEngine.ParticleEmitter NcParticleSystem::m_pe
	ParticleEmitter_t5081 * ___m_pe;
	// UnityEngine.ParticleAnimator NcParticleSystem::m_pa
	ParticleAnimator_t5082 * ___m_pa;
	// UnityEngine.ParticleRenderer NcParticleSystem::m_pr
	ParticleRenderer_t5083 * ___m_pr;
	// UnityEngine.ParticleSystem/Particle[] NcParticleSystem::m_BufPsParts
	ParticleU5BU5D_t5084* ___m_BufPsParts;
	// UnityEngine.ParticleSystem/Particle[] NcParticleSystem::m_BufColliderOriParts
	ParticleU5BU5D_t5084* ___m_BufColliderOriParts;
	// UnityEngine.ParticleSystem/Particle[] NcParticleSystem::m_BufColliderConParts
	ParticleU5BU5D_t5084* ___m_BufColliderConParts;
	// UnityEngine.ParticleSystem NcParticleSystem::m_ParticleSystem
	ParticleSystem_t929 * ___m_ParticleSystem;
};
