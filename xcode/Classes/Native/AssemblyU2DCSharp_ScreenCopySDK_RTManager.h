#pragma once
#include <stdint.h>
// ScreenCopySDK.RTManager
struct RTManager_t4810;
// UnityEngine.RenderTexture
struct RenderTexture_t940;
// System.Object
#include "mscorlib_System_Object.h"
// ScreenCopySDK.RTManager
struct RTManager_t4810  : public Object_t
{
	// System.Int32 ScreenCopySDK.RTManager::m_Width
	int32_t ___m_Width;
	// System.Int32 ScreenCopySDK.RTManager::m_Hegiht
	int32_t ___m_Hegiht;
	// System.Boolean ScreenCopySDK.RTManager::m_isChange
	bool ___m_isChange;
	// UnityEngine.RenderTexture ScreenCopySDK.RTManager::m_CopyRT
	RenderTexture_t940 * ___m_CopyRT;
	// UnityEngine.RenderTexture ScreenCopySDK.RTManager::m_SceneRT
	RenderTexture_t940 * ___m_SceneRT;
};
struct RTManager_t4810_StaticFields{
	// ScreenCopySDK.RTManager ScreenCopySDK.RTManager::s_Instance
	RTManager_t4810 * ___s_Instance;
};
