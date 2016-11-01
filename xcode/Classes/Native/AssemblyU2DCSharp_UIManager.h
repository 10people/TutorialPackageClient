#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t78;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1530;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// UIManager
struct UIManager_t1959;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIManager
struct UIManager_t1959  : public MonoBehaviour_t18
{
	// UnityEngine.Transform UIManager::BaseUIRoot
	Transform_t78 * ___BaseUIRoot;
	// UnityEngine.Transform UIManager::PopUIRoot
	Transform_t78 * ___PopUIRoot;
	// UnityEngine.Transform UIManager::StoryUIRoot
	Transform_t78 * ___StoryUIRoot;
	// UnityEngine.Transform UIManager::TipUIRoot
	Transform_t78 * ___TipUIRoot;
	// UnityEngine.Transform UIManager::MenuPopUIRoot
	Transform_t78 * ___MenuPopUIRoot;
	// UnityEngine.Transform UIManager::MessageUIRoot
	Transform_t78 * ___MessageUIRoot;
	// UnityEngine.Transform UIManager::DeathUIRoot
	Transform_t78 * ___DeathUIRoot;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> UIManager::m_dicTipUI
	Dictionary_2_t1530 * ___m_dicTipUI;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> UIManager::m_dicBaseUI
	Dictionary_2_t1530 * ___m_dicBaseUI;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> UIManager::m_dicPopUI
	Dictionary_2_t1530 * ___m_dicPopUI;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> UIManager::m_dicStoryUI
	Dictionary_2_t1530 * ___m_dicStoryUI;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> UIManager::m_dicMenuPopUI
	Dictionary_2_t1530 * ___m_dicMenuPopUI;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> UIManager::m_dicMessageUI
	Dictionary_2_t1530 * ___m_dicMessageUI;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> UIManager::m_dicDeathUI
	Dictionary_2_t1530 * ___m_dicDeathUI;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> UIManager::m_dicCacheUI
	Dictionary_2_t1530 * ___m_dicCacheUI;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UIManager::m_dicWaitLoad
	Dictionary_2_t944 * ___m_dicWaitLoad;
};
struct UIManager_t1959_StaticFields{
	// System.Int32 UIManager::GCCollectTime
	int32_t ___GCCollectTime;
	// UIManager UIManager::m_instance
	UIManager_t1959 * ___m_instance;
};
