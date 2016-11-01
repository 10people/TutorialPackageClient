#pragma once
#include <stdint.h>
// SpringActivityRewardWindow
struct SpringActivityRewardWindow_t2065;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UILabel
struct UILabel_t1176;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t2066;
// System.Single[]
struct SingleU5BU5D_t744;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// SpringActivityRewardWindow
struct SpringActivityRewardWindow_t2065  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject SpringActivityRewardWindow::ShowListGrid
	GameObject_t9 * ___ShowListGrid;
	// UnityEngine.GameObject SpringActivityRewardWindow::ActivityRewardItem
	GameObject_t9 * ___ActivityRewardItem;
	// UISprite SpringActivityRewardWindow::m_CommonBarGreenSprite
	UISprite_t1202 * ___m_CommonBarGreenSprite;
	// UnityEngine.GameObject[] SpringActivityRewardWindow::m_ArrowList
	GameObjectU5BU5D_t1200* ___m_ArrowList;
	// UISprite SpringActivityRewardWindow::m_RedInfo
	UISprite_t1202 * ___m_RedInfo;
	// UILabel SpringActivityRewardWindow::m_ButtonInfo
	UILabel_t1176 * ___m_ButtonInfo;
	// System.Int32 SpringActivityRewardWindow::CurrentReceiveIndex
	int32_t ___CurrentReceiveIndex;
	// UILabel SpringActivityRewardWindow::m_JoinNumLab
	UILabel_t1176 * ___m_JoinNumLab;
	// UILabel SpringActivityRewardWindow::m_ActivityRewardLab
	UILabel_t1176 * ___m_ActivityRewardLab;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> SpringActivityRewardWindow::m_ItemList
	Dictionary_2_t2066 * ___m_ItemList;
	// System.Single[] SpringActivityRewardWindow::m_TagArray
	SingleU5BU5D_t744* ___m_TagArray;
	// System.Int32 SpringActivityRewardWindow::m_AllJoinNum
	int32_t ___m_AllJoinNum;
	// System.Single SpringActivityRewardWindow::m_BarLength
	float ___m_BarLength;
	// System.DateTime SpringActivityRewardWindow::m_CurrentDateTime
	DateTime_t1171  ___m_CurrentDateTime;
	// System.Single SpringActivityRewardWindow::m_ForTime
	float ___m_ForTime;
	// System.Single SpringActivityRewardWindow::m_UpdateNum
	float ___m_UpdateNum;
};
struct SpringActivityRewardWindow_t2065_StaticFields{
	// SpringActivityRewardWindow SpringActivityRewardWindow::m_Instance
	SpringActivityRewardWindow_t2065 * ___m_Instance;
};
