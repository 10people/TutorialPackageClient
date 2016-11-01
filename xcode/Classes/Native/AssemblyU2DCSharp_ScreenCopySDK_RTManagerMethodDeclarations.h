#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ScreenCopySDK.RTManager
struct RTManager_t4810;
// UnityEngine.RenderTexture
struct RenderTexture_t940;

// System.Void ScreenCopySDK.RTManager::.ctor()
 void RTManager__ctor_m34212 (RTManager_t4810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ScreenCopySDK.RTManager ScreenCopySDK.RTManager::get_Instance()
 RTManager_t4810 * RTManager_get_Instance_m34213 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenCopySDK.RTManager::Update()
 void RTManager_Update_m34214 (RTManager_t4810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ScreenCopySDK.RTManager::isScreenSizeChange()
 bool RTManager_isScreenSizeChange_m34215 (RTManager_t4810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture ScreenCopySDK.RTManager::GetCopy()
 RenderTexture_t940 * RTManager_GetCopy_m34216 (RTManager_t4810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture ScreenCopySDK.RTManager::GetScene()
 RenderTexture_t940 * RTManager_GetScene_m34217 (RTManager_t4810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenCopySDK.RTManager::Discard()
 void RTManager_Discard_m34218 (RTManager_t4810 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
