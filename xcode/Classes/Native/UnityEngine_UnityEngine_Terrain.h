#pragma once
#include <stdint.h>
// UnityEngine.TerrainData
struct TerrainData_t7527;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Terrain
struct Terrain_t7549  : public MonoBehaviour_t18
{
	// UnityEngine.TerrainData UnityEngine.Terrain::m_TerrainData
	TerrainData_t7527 * ___m_TerrainData;
	// System.Single UnityEngine.Terrain::m_TreeDistance
	float ___m_TreeDistance;
	// System.Single UnityEngine.Terrain::m_TreeBillboardDistance
	float ___m_TreeBillboardDistance;
	// System.Single UnityEngine.Terrain::m_TreeCrossFadeLength
	float ___m_TreeCrossFadeLength;
	// System.Int32 UnityEngine.Terrain::m_TreeMaximumFullLODCount
	int32_t ___m_TreeMaximumFullLODCount;
	// System.Single UnityEngine.Terrain::m_DetailObjectDistance
	float ___m_DetailObjectDistance;
	// System.Single UnityEngine.Terrain::m_DetailObjectDensity
	float ___m_DetailObjectDensity;
	// System.Single UnityEngine.Terrain::m_HeightmapPixelError
	float ___m_HeightmapPixelError;
	// System.Single UnityEngine.Terrain::m_SplatMapDistance
	float ___m_SplatMapDistance;
	// System.Int32 UnityEngine.Terrain::m_HeightmapMaximumLOD
	int32_t ___m_HeightmapMaximumLOD;
	// System.Boolean UnityEngine.Terrain::m_CastShadows
	bool ___m_CastShadows;
	// System.Int32 UnityEngine.Terrain::m_LightmapIndex
	int32_t ___m_LightmapIndex;
	// System.Int32 UnityEngine.Terrain::m_LightmapSize
	int32_t ___m_LightmapSize;
	// System.Boolean UnityEngine.Terrain::m_DrawTreesAndFoliage
	bool ___m_DrawTreesAndFoliage;
	// System.Boolean UnityEngine.Terrain::m_CollectDetailPatches
	bool ___m_CollectDetailPatches;
	// UnityEngine.Material UnityEngine.Terrain::m_MaterialTemplate
	Material_t133 * ___m_MaterialTemplate;
	// System.IntPtr UnityEngine.Terrain::m_TerrainInstance
	IntPtr_t24 ___m_TerrainInstance;
};
