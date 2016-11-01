#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UIGrid
struct UIGrid_t1199;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// RankItemMenu
struct RankItemMenu_t1681  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject RankItemMenu::m_CharmFlowerBt
	GameObject_t9 * ___m_CharmFlowerBt;
	// UnityEngine.GameObject RankItemMenu::m_CharmEggBt
	GameObject_t9 * ___m_CharmEggBt;
	// UIGrid RankItemMenu::m_UIGrid
	UIGrid_t1199 * ___m_UIGrid;
	// UnityEngine.GameObject RankItemMenu::m_MenuPanel
	GameObject_t9 * ___m_MenuPanel;
	// System.String RankItemMenu::m_name
	String_t* ___m_name;
	// UnityEngine.Vector3 RankItemMenu::m_MenuPanelPos
	Vector3_t121  ___m_MenuPanelPos;
	// UnityEngine.Vector4 RankItemMenu::m_MenuClipRange
	Vector4_t942  ___m_MenuClipRange;
	// System.UInt64 RankItemMenu::m_Guid
	uint64_t ___m_Guid;
};
