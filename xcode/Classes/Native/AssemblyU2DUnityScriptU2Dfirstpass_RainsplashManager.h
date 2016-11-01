#pragma once
#include <stdint.h>
// UnityEngine.Mesh[]
struct MeshU5BU5D_t5968;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RainsplashManager
struct RainsplashManager_t5969  : public MonoBehaviour_t18
{
	// System.Int32 RainsplashManager::numberOfParticles
	int32_t ___numberOfParticles;
	// System.Single RainsplashManager::areaSize
	float ___areaSize;
	// System.Single RainsplashManager::areaHeight
	float ___areaHeight;
	// System.Single RainsplashManager::fallingSpeed
	float ___fallingSpeed;
	// System.Single RainsplashManager::flakeWidth
	float ___flakeWidth;
	// System.Single RainsplashManager::flakeHeight
	float ___flakeHeight;
	// System.Single RainsplashManager::flakeRandom
	float ___flakeRandom;
	// UnityEngine.Mesh[] RainsplashManager::preGennedMeshes
	MeshU5BU5D_t5968* ___preGennedMeshes;
	// System.Int32 RainsplashManager::preGennedIndex
	int32_t ___preGennedIndex;
	// System.Boolean RainsplashManager::generateNewAssetsOnStart
	bool ___generateNewAssetsOnStart;
};
