#pragma once
#include <stdint.h>
// UnityEngine.Mesh[]
struct MeshU5BU5D_t5968;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RainManager
struct RainManager_t5966  : public MonoBehaviour_t18
{
	// System.Single RainManager::minYPosition
	float ___minYPosition;
	// System.Int32 RainManager::numberOfParticles
	int32_t ___numberOfParticles;
	// System.Single RainManager::areaSize
	float ___areaSize;
	// System.Single RainManager::areaHeight
	float ___areaHeight;
	// System.Single RainManager::fallingSpeed
	float ___fallingSpeed;
	// System.Single RainManager::particleSize
	float ___particleSize;
	// System.Single RainManager::flakeRandom
	float ___flakeRandom;
	// UnityEngine.Mesh[] RainManager::preGennedMeshes
	MeshU5BU5D_t5968* ___preGennedMeshes;
	// System.Int32 RainManager::preGennedIndex
	int32_t ___preGennedIndex;
	// System.Boolean RainManager::generateNewAssetsOnStart
	bool ___generateNewAssetsOnStart;
};
