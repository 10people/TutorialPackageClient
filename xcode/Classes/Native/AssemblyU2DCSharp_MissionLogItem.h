#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UITexture[]
struct UITextureU5BU5D_t1558;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MissionLogItem
struct MissionLogItem_t1559  : public MonoBehaviour_t18
{
	// UILabel MissionLogItem::m_MissionName
	UILabel_t1176 * ___m_MissionName;
	// UnityEngine.GameObject MissionLogItem::m_Active
	GameObject_t9 * ___m_Active;
	// UITexture[] MissionLogItem::m_MissionState
	UITextureU5BU5D_t1558* ___m_MissionState;
	// System.Int32 MissionLogItem::m_MissionID
	int32_t ___m_MissionID;
};
