#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SceneData
struct SceneData_t5175;
// GC_UPDATE_SCENE_INSTACTIVATION
struct GC_UPDATE_SCENE_INSTACTIVATION_t3125;
// GC_SYNC_REACHEDSCENE
struct GC_SYNC_REACHEDSCENE_t3150;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void SceneData::.ctor()
 void SceneData__ctor_m37011 (SceneData_t5175 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneData::.cctor()
 void SceneData__cctor_m37012 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneData::set_SceneInst(System.Int32)
 void SceneData_set_SceneInst_m37013 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneData::get_SceneInst()
 int32_t SceneData_get_SceneInst_m37014 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneData::set_SceneInstCount(System.Int32)
 void SceneData_set_SceneInstCount_m37015 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SceneData::get_SceneInstCount()
 int32_t SceneData_get_SceneInstCount_m37016 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color SceneData::GetSceneNameColor(System.Int32)
 Color_t939  SceneData_GetSceneNameColor_m37017 (Object_t * __this/* static, unused */, int32_t ___scneneID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneData::UpdateSceneInst(GC_UPDATE_SCENE_INSTACTIVATION)
 void SceneData_UpdateSceneInst_m37018 (Object_t * __this/* static, unused */, GC_UPDATE_SCENE_INSTACTIVATION_t3125 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneData::UpdateReachedScenes(GC_SYNC_REACHEDSCENE)
 void SceneData_UpdateReachedScenes_m37019 (Object_t * __this/* static, unused */, GC_SYNC_REACHEDSCENE_t3150 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SceneData::RequestChangeScene(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void SceneData_RequestChangeScene_m37020 (Object_t * __this/* static, unused */, int32_t ___nChangeType, int32_t ___nTeleportID, int32_t ___nSceneClassID, int32_t ___nSceneInstID, int32_t ___nPosX, int32_t ___nPosZ, MethodInfo* method) IL2CPP_METHOD_ATTR;
