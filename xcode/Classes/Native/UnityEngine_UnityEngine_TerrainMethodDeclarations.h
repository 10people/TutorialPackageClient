#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Terrain
struct Terrain_t7549;
// UnityEngine.TerrainData
struct TerrainData_t7527;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t7550;
// UnityEngine.GameObject
struct GameObject_t9;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TerrainRenderFlags
#include "UnityEngine_UnityEngine_TerrainRenderFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.TreeInstance
#include "UnityEngine_UnityEngine_TreeInstance.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TerrainChangedFlags
#include "UnityEngine_UnityEngine_TerrainChangedFlags.h"

// System.Void UnityEngine.Terrain::.ctor()
 void Terrain__ctor_m51844 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Terrain::get_InstanceObject()
 IntPtr_t24 Terrain_get_InstanceObject_m51845 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_InstanceObject(System.IntPtr)
 void Terrain_set_InstanceObject_m51846 (Terrain_t7549 * __this, IntPtr_t24 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnDestroy()
 void Terrain_OnDestroy_m51847 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::MakeSureObjectIsAlive()
 void Terrain_MakeSureObjectIsAlive_m51848 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Cleanup(System.IntPtr)
 void Terrain_Cleanup_m51849 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainRenderFlags UnityEngine.Terrain::get_editorRenderFlags()
 int32_t Terrain_get_editorRenderFlags_m51850 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_editorRenderFlags(UnityEngine.TerrainRenderFlags)
 void Terrain_set_editorRenderFlags_m51851 (Terrain_t7549 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::GetEditorRenderFlags(System.IntPtr)
 int32_t Terrain_GetEditorRenderFlags_m51852 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetEditorRenderFlags(System.IntPtr,System.Int32)
 void Terrain_SetEditorRenderFlags_m51853 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
 TerrainData_t7527 * Terrain_get_terrainData_m51854 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_terrainData(UnityEngine.TerrainData)
 void Terrain_set_terrainData_m51855 (Terrain_t7549 * __this, TerrainData_t7527 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TerrainData UnityEngine.Terrain::Internal_GetTerrainData(System.IntPtr)
 TerrainData_t7527 * Terrain_Internal_GetTerrainData_m51856 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTerrainData(System.IntPtr,UnityEngine.TerrainData)
 void Terrain_Internal_SetTerrainData_m51857 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, TerrainData_t7527 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeDistance()
 float Terrain_get_treeDistance_m51858 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeDistance(System.Single)
 void Terrain_set_treeDistance_m51859 (Terrain_t7549 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeDistance(System.IntPtr)
 float Terrain_Internal_GetTreeDistance_m51860 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeDistance(System.IntPtr,System.Single)
 void Terrain_Internal_SetTreeDistance_m51861 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeBillboardDistance()
 float Terrain_get_treeBillboardDistance_m51862 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeBillboardDistance(System.Single)
 void Terrain_set_treeBillboardDistance_m51863 (Terrain_t7549 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeBillboardDistance(System.IntPtr)
 float Terrain_Internal_GetTreeBillboardDistance_m51864 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeBillboardDistance(System.IntPtr,System.Single)
 void Terrain_Internal_SetTreeBillboardDistance_m51865 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_treeCrossFadeLength()
 float Terrain_get_treeCrossFadeLength_m51866 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeCrossFadeLength(System.Single)
 void Terrain_set_treeCrossFadeLength_m51867 (Terrain_t7549 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetTreeCrossFadeLength(System.IntPtr)
 float Terrain_Internal_GetTreeCrossFadeLength_m51868 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeCrossFadeLength(System.IntPtr,System.Single)
 void Terrain_Internal_SetTreeCrossFadeLength_m51869 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_treeMaximumFullLODCount()
 int32_t Terrain_get_treeMaximumFullLODCount_m51870 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_treeMaximumFullLODCount(System.Int32)
 void Terrain_set_treeMaximumFullLODCount_m51871 (Terrain_t7549 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetTreeMaximumFullLODCount(System.IntPtr)
 int32_t Terrain_Internal_GetTreeMaximumFullLODCount_m51872 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetTreeMaximumFullLODCount(System.IntPtr,System.Int32)
 void Terrain_Internal_SetTreeMaximumFullLODCount_m51873 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_detailObjectDistance()
 float Terrain_get_detailObjectDistance_m51874 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_detailObjectDistance(System.Single)
 void Terrain_set_detailObjectDistance_m51875 (Terrain_t7549 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetDetailObjectDistance(System.IntPtr)
 float Terrain_Internal_GetDetailObjectDistance_m51876 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDetailObjectDistance(System.IntPtr,System.Single)
 void Terrain_Internal_SetDetailObjectDistance_m51877 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_detailObjectDensity()
 float Terrain_get_detailObjectDensity_m51878 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_detailObjectDensity(System.Single)
 void Terrain_set_detailObjectDensity_m51879 (Terrain_t7549 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetDetailObjectDensity(System.IntPtr)
 float Terrain_Internal_GetDetailObjectDensity_m51880 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDetailObjectDensity(System.IntPtr,System.Single)
 void Terrain_Internal_SetDetailObjectDensity_m51881 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_heightmapPixelError()
 float Terrain_get_heightmapPixelError_m51882 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_heightmapPixelError(System.Single)
 void Terrain_set_heightmapPixelError_m51883 (Terrain_t7549 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetHeightmapPixelError(System.IntPtr)
 float Terrain_Internal_GetHeightmapPixelError_m51884 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetHeightmapPixelError(System.IntPtr,System.Single)
 void Terrain_Internal_SetHeightmapPixelError_m51885 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_heightmapMaximumLOD()
 int32_t Terrain_get_heightmapMaximumLOD_m51886 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_heightmapMaximumLOD(System.Int32)
 void Terrain_set_heightmapMaximumLOD_m51887 (Terrain_t7549 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetHeightmapMaximumLOD(System.IntPtr)
 int32_t Terrain_Internal_GetHeightmapMaximumLOD_m51888 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetHeightmapMaximumLOD(System.IntPtr,System.Int32)
 void Terrain_Internal_SetHeightmapMaximumLOD_m51889 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_basemapDistance()
 float Terrain_get_basemapDistance_m51890 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_basemapDistance(System.Single)
 void Terrain_set_basemapDistance_m51891 (Terrain_t7549 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_GetBasemapDistance(System.IntPtr)
 float Terrain_Internal_GetBasemapDistance_m51892 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetBasemapDistance(System.IntPtr,System.Single)
 void Terrain_Internal_SetBasemapDistance_m51893 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::get_splatmapDistance()
 float Terrain_get_splatmapDistance_m51894 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_splatmapDistance(System.Single)
 void Terrain_set_splatmapDistance_m51895 (Terrain_t7549 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_lightmapIndex()
 int32_t Terrain_get_lightmapIndex_m51896 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_lightmapIndex(System.Int32)
 void Terrain_set_lightmapIndex_m51897 (Terrain_t7549 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetLightmapIndex(System.Int32)
 void Terrain_SetLightmapIndex_m51898 (Terrain_t7549 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ShiftLightmapIndex(System.Int32)
 void Terrain_ShiftLightmapIndex_m51899 (Terrain_t7549 * __this, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetLightmapIndex(System.IntPtr)
 int32_t Terrain_Internal_GetLightmapIndex_m51900 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetLightmapIndex(System.IntPtr,System.Int32)
 void Terrain_Internal_SetLightmapIndex_m51901 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::get_lightmapSize()
 int32_t Terrain_get_lightmapSize_m51902 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_lightmapSize(System.Int32)
 void Terrain_set_lightmapSize_m51903 (Terrain_t7549 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Terrain::Internal_GetLightmapSize(System.IntPtr)
 int32_t Terrain_Internal_GetLightmapSize_m51904 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetLightmapSize(System.IntPtr,System.Int32)
 void Terrain_Internal_SetLightmapSize_m51905 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_castShadows()
 bool Terrain_get_castShadows_m51906 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_castShadows(System.Boolean)
 void Terrain_set_castShadows_m51907 (Terrain_t7549 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetCastShadows(System.IntPtr)
 bool Terrain_Internal_GetCastShadows_m51908 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetCastShadows(System.IntPtr,System.Boolean)
 void Terrain_Internal_SetCastShadows_m51909 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Terrain::get_materialTemplate()
 Material_t133 * Terrain_get_materialTemplate_m51910 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_materialTemplate(UnityEngine.Material)
 void Terrain_set_materialTemplate_m51911 (Terrain_t7549 * __this, Material_t133 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Terrain::Internal_GetMaterialTemplate(System.IntPtr)
 Material_t133 * Terrain_Internal_GetMaterialTemplate_m51912 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetMaterialTemplate(System.IntPtr,UnityEngine.Material)
 void Terrain_Internal_SetMaterialTemplate_m51913 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, Material_t133 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_drawTreesAndFoliage()
 bool Terrain_get_drawTreesAndFoliage_m51914 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_drawTreesAndFoliage(System.Boolean)
 void Terrain_set_drawTreesAndFoliage_m51915 (Terrain_t7549 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetDrawTreesAndFoliage(System.IntPtr)
 bool Terrain_Internal_GetDrawTreesAndFoliage_m51916 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetDrawTreesAndFoliage(System.IntPtr,System.Boolean)
 void Terrain_Internal_SetDrawTreesAndFoliage_m51917 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::get_collectDetailPatches()
 bool Terrain_get_collectDetailPatches_m51918 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::set_collectDetailPatches(System.Boolean)
 void Terrain_set_collectDetailPatches_m51919 (Terrain_t7549 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Terrain::Internal_GetCollectDetailPatches(System.IntPtr)
 bool Terrain_Internal_GetCollectDetailPatches_m51920 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetCollectDetailPatches(System.IntPtr,System.Boolean)
 void Terrain_Internal_SetCollectDetailPatches_m51921 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::SampleHeight(UnityEngine.Vector3)
 float Terrain_SampleHeight_m51922 (Terrain_t7549 * __this, Vector3_t121  ___worldPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::Internal_SampleHeight(System.IntPtr,UnityEngine.Vector3)
 float Terrain_Internal_SampleHeight_m51923 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, Vector3_t121  ___worldPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Terrain::INTERNAL_CALL_Internal_SampleHeight(UnityEngine.Terrain,System.IntPtr,UnityEngine.Vector3&)
 float Terrain_INTERNAL_CALL_Internal_SampleHeight_m51924 (Object_t * __this/* static, unused */, Terrain_t7549 * ___self, IntPtr_t24 ___terrainInstance, Vector3_t121 * ___worldPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ApplyDelayedHeightmapModification()
 void Terrain_ApplyDelayedHeightmapModification_m51925 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_ApplyDelayedHeightmapModification(System.IntPtr)
 void Terrain_Internal_ApplyDelayedHeightmapModification_m51926 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::AddTreeInstance(UnityEngine.TreeInstance)
 void Terrain_AddTreeInstance_m51927 (Terrain_t7549 * __this, TreeInstance_t7546  ___instance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_AddTreeInstance(System.IntPtr,UnityEngine.TreeInstance)
 void Terrain_Internal_AddTreeInstance_m51928 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, TreeInstance_t7546  ___instance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::INTERNAL_CALL_Internal_AddTreeInstance(UnityEngine.Terrain,System.IntPtr,UnityEngine.TreeInstance&)
 void Terrain_INTERNAL_CALL_Internal_AddTreeInstance_m51929 (Object_t * __this/* static, unused */, Terrain_t7549 * ___self, IntPtr_t24 ___terrainInstance, TreeInstance_t7546 * ___instance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
 void Terrain_SetNeighbors_m51930 (Terrain_t7549 * __this, Terrain_t7549 * ___left, Terrain_t7549 * ___top, Terrain_t7549 * ___right, Terrain_t7549 * ___bottom, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_SetNeighbors(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
 void Terrain_Internal_SetNeighbors_m51931 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, IntPtr_t24 ___left, IntPtr_t24 ___top, IntPtr_t24 ___right, IntPtr_t24 ___bottom, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Terrain::GetPosition()
 Vector3_t121  Terrain_GetPosition_m51932 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Terrain::Internal_GetPosition(System.IntPtr)
 Vector3_t121  Terrain_Internal_GetPosition_m51933 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Flush()
 void Terrain_Flush_m51934 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_Flush(System.IntPtr)
 void Terrain_Internal_Flush_m51935 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::RemoveTrees(UnityEngine.Vector2,System.Single,System.Int32)
 void Terrain_RemoveTrees_m51936 (Terrain_t7549 * __this, Vector2_t12  ___position, float ___radius, int32_t ___prototypeIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_RemoveTrees(System.IntPtr,UnityEngine.Vector2,System.Single,System.Int32)
 void Terrain_Internal_RemoveTrees_m51937 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, Vector2_t12  ___position, float ___radius, int32_t ___prototypeIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::INTERNAL_CALL_Internal_RemoveTrees(UnityEngine.Terrain,System.IntPtr,UnityEngine.Vector2&,System.Single,System.Int32)
 void Terrain_INTERNAL_CALL_Internal_RemoveTrees_m51938 (Object_t * __this/* static, unused */, Terrain_t7549 * ___self, IntPtr_t24 ___terrainInstance, Vector2_t12 * ___position, float ___radius, int32_t ___prototypeIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnTerrainChanged(UnityEngine.TerrainChangedFlags)
 void Terrain_OnTerrainChanged_m51939 (Terrain_t7549 * __this, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnTerrainChanged(System.IntPtr,UnityEngine.TerrainChangedFlags)
 void Terrain_Internal_OnTerrainChanged_m51940 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Terrain::Construct()
 IntPtr_t24 Terrain_Construct_m51941 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnEnable()
 void Terrain_OnEnable_m51942 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnEnable(System.IntPtr)
 void Terrain_Internal_OnEnable_m51943 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::OnDisable()
 void Terrain_OnDisable_m51944 (Terrain_t7549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::Internal_OnDisable(System.IntPtr)
 void Terrain_Internal_OnDisable_m51945 (Terrain_t7549 * __this, IntPtr_t24 ___terrainInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Terrain UnityEngine.Terrain::get_activeTerrain()
 Terrain_t7549 * Terrain_get_activeTerrain_m51946 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
 TerrainU5BU5D_t7550* Terrain_get_activeTerrains_m51947 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Terrain::CreateTerrainGameObject(UnityEngine.TerrainData)
 GameObject_t9 * Terrain_CreateTerrainGameObject_m51948 (Object_t * __this/* static, unused */, TerrainData_t7527 * ___assignTerrain, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Terrain::ReconnectTerrainData()
 void Terrain_ReconnectTerrainData_m51949 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
