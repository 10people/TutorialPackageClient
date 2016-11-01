#pragma once
#include <stdint.h>
// NsSharedManager
struct NsSharedManager_t5046;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1289;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t5047;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.AudioSource>>
struct List_1_t5048;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// NsSharedManager
struct NsSharedManager_t5046  : public MonoBehaviour_t18
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> NsSharedManager::m_SharedPrefabs
	List_1_t1289 * ___m_SharedPrefabs;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> NsSharedManager::m_SharedGameObjects
	List_1_t1289 * ___m_SharedGameObjects;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> NsSharedManager::m_SharedAudioClip
	List_1_t5047 * ___m_SharedAudioClip;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.AudioSource>> NsSharedManager::m_SharedAudioSources
	List_1_t5048 * ___m_SharedAudioSources;
};
struct NsSharedManager_t5046_StaticFields{
	// NsSharedManager NsSharedManager::_inst
	NsSharedManager_t5046 * ____inst;
};
