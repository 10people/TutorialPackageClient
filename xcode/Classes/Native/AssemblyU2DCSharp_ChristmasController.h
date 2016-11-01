#pragma once
#include <stdint.h>
// ChristmasController
struct ChristmasController_t1979;
// TabController
struct TabController_t1209;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UISlider
struct UISlider_t1219;
// UITexture
struct UITexture_t1378;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ChristmasController/Tab_Index
#include "AssemblyU2DCSharp_ChristmasController_Tab_Index.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// ChristmasController
struct ChristmasController_t1979  : public MonoBehaviour_t18
{
	// TabController ChristmasController::m_TabController
	TabController_t1209 * ___m_TabController;
	// UnityEngine.GameObject ChristmasController::m_RewardDescWindow
	GameObject_t9 * ___m_RewardDescWindow;
	// UnityEngine.GameObject ChristmasController::m_TreeWindow
	GameObject_t9 * ___m_TreeWindow;
	// UnityEngine.GameObject ChristmasController::m_SocksWindow
	GameObject_t9 * ___m_SocksWindow;
	// UnityEngine.GameObject ChristmasController::m_SpringWindow
	GameObject_t9 * ___m_SpringWindow;
	// UILabel ChristmasController::m_LabelActivityTime
	UILabel_t1176 * ___m_LabelActivityTime;
	// UILabel ChristmasController::m_LabelActivityDesc
	UILabel_t1176 * ___m_LabelActivityDesc;
	// UILabel ChristmasController::m_LableTreeExp
	UILabel_t1176 * ___m_LableTreeExp;
	// UILabel ChristmasController::m_LableTreeLevel
	UILabel_t1176 * ___m_LableTreeLevel;
	// UILabel ChristmasController::m_LableTreeLevelTitle
	UILabel_t1176 * ___m_LableTreeLevelTitle;
	// UILabel ChristmasController::m_LablePlayerDecoration
	UILabel_t1176 * ___m_LablePlayerDecoration;
	// UILabel ChristmasController::m_LablePlayerDecorationRank
	UILabel_t1176 * ___m_LablePlayerDecorationRank;
	// UISlider ChristmasController::m_SliderExp
	UISlider_t1219 * ___m_SliderExp;
	// UITexture ChristmasController::m_TreeTexture
	UITexture_t1378 * ___m_TreeTexture;
	// UnityEngine.Color ChristmasController::m_WhiteColor
	Color_t939  ___m_WhiteColor;
	// UnityEngine.Color ChristmasController::m_GreenColor
	Color_t939  ___m_GreenColor;
	// UnityEngine.Color ChristmasController::m_BlueColor
	Color_t939  ___m_BlueColor;
	// UnityEngine.Color ChristmasController::m_PurpleColor
	Color_t939  ___m_PurpleColor;
	// UnityEngine.Color ChristmasController::m_OrangeColor
	Color_t939  ___m_OrangeColor;
};
struct ChristmasController_t1979_StaticFields{
	// ChristmasController ChristmasController::m_Instance
	ChristmasController_t1979 * ___m_Instance;
	// ChristmasController/Tab_Index ChristmasController::m_nTab
	int32_t ___m_nTab;
};
