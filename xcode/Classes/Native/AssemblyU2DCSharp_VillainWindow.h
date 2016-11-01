#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// VillainWindow
struct VillainWindow_t1793  : public MonoBehaviour_t18
{
	// UILabel VillainWindow::m_LableTime
	UILabel_t1176 * ___m_LableTime;
	// UILabel VillainWindow::m_LableLevel
	UILabel_t1176 * ___m_LableLevel;
	// UILabel VillainWindow::m_LableNormal
	UILabel_t1176 * ___m_LableNormal;
	// UILabel VillainWindow::m_LableSuper
	UILabel_t1176 * ___m_LableSuper;
	// UISprite VillainWindow::m_ItemSprite
	UISprite_t1202 * ___m_ItemSprite;
	// UILabel VillainWindow::m_ButtonAutoTeamLabel
	UILabel_t1176 * ___m_ButtonAutoTeamLabel;
	// UILabel VillainWindow::m_localTimeLabel
	UILabel_t1176 * ___m_localTimeLabel;
	// System.String VillainWindow::m_NormalScene1
	String_t* ___m_NormalScene1;
	// System.String VillainWindow::m_NormalScene2
	String_t* ___m_NormalScene2;
	// System.String VillainWindow::m_NormalScene3
	String_t* ___m_NormalScene3;
	// System.String VillainWindow::m_SuperScene
	String_t* ___m_SuperScene;
	// UnityEngine.GameObject VillainWindow::m_ChangSceneUI
	GameObject_t9 * ___m_ChangSceneUI;
	// UILabel[] VillainWindow::m_SceneLabel
	UILabelU5BU5D_t1203* ___m_SceneLabel;
};
struct VillainWindow_t1793_StaticFields{
	// System.Int32 VillainWindow::RewardItemID
	int32_t ___RewardItemID;
	// System.Int32 VillainWindow::m_nMaxNormalSceneNum
	int32_t ___m_nMaxNormalSceneNum;
};
