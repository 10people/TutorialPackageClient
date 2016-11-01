#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// NcEffectBehaviour
#include "AssemblyU2DCSharp_NcEffectBehaviour.h"
// NcParticleSpiral/SpiralSettings
#include "AssemblyU2DCSharp_NcParticleSpiral_SpiralSettings.h"
// NcParticleSpiral
struct NcParticleSpiral_t5079  : public NcEffectBehaviour_t5021
{
	// System.Single NcParticleSpiral::m_fDelayTime
	float ___m_fDelayTime;
	// System.Single NcParticleSpiral::m_fStartTime
	float ___m_fStartTime;
	// UnityEngine.GameObject NcParticleSpiral::m_ParticlePrefab
	GameObject_t9 * ___m_ParticlePrefab;
	// System.Int32 NcParticleSpiral::m_nNumberOfArms
	int32_t ___m_nNumberOfArms;
	// System.Int32 NcParticleSpiral::m_nParticlesPerArm
	int32_t ___m_nParticlesPerArm;
	// System.Single NcParticleSpiral::m_fParticleSeparation
	float ___m_fParticleSeparation;
	// System.Single NcParticleSpiral::m_fTurnDistance
	float ___m_fTurnDistance;
	// System.Single NcParticleSpiral::m_fVerticalTurnDistance
	float ___m_fVerticalTurnDistance;
	// System.Single NcParticleSpiral::m_fOriginOffset
	float ___m_fOriginOffset;
	// System.Single NcParticleSpiral::m_fTurnSpeed
	float ___m_fTurnSpeed;
	// System.Single NcParticleSpiral::m_fFadeValue
	float ___m_fFadeValue;
	// System.Single NcParticleSpiral::m_fSizeValue
	float ___m_fSizeValue;
	// System.Int32 NcParticleSpiral::m_nNumberOfSpawns
	int32_t ___m_nNumberOfSpawns;
	// System.Single NcParticleSpiral::m_fSpawnRate
	float ___m_fSpawnRate;
	// System.Single NcParticleSpiral::timeOfLastSpawn
	float ___timeOfLastSpawn;
	// System.Int32 NcParticleSpiral::spawnCount
	int32_t ___spawnCount;
	// NcParticleSpiral/SpiralSettings NcParticleSpiral::defaultSettings
	SpiralSettings_t5078  ___defaultSettings;
};
