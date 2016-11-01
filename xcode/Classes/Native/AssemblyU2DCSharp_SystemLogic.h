#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// TabController
struct TabController_t1209;
// UIToggle
struct UIToggle_t1220;
// UILabel
struct UILabel_t1176;
// UISlider
struct UISlider_t1219;
// UIGrid
struct UIGrid_t1199;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// SystemLogic
struct SystemLogic_t1769  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject SystemLogic::SystemStupWindow
	GameObject_t9 * ___SystemStupWindow;
	// UnityEngine.GameObject SystemLogic::QuestionWindow
	GameObject_t9 * ___QuestionWindow;
	// UnityEngine.GameObject SystemLogic::CustomerWindow
	GameObject_t9 * ___CustomerWindow;
	// UnityEngine.GameObject SystemLogic::UserCenterButton
	GameObject_t9 * ___UserCenterButton;
	// UnityEngine.GameObject SystemLogic::BtnCustomServiceCN
	GameObject_t9 * ___BtnCustomServiceCN;
	// UnityEngine.GameObject[] SystemLogic::BtnTWGroup
	GameObjectU5BU5D_t1200* ___BtnTWGroup;
	// TabController SystemLogic::m_TabTableau
	TabController_t1209 * ___m_TabTableau;
	// UIToggle SystemLogic::m_NameEdition
	UIToggle_t1220 * ___m_NameEdition;
	// UIToggle SystemLogic::m_Floodlight
	UIToggle_t1220 * ___m_Floodlight;
	// UIToggle SystemLogic::m_ScreenMove
	UIToggle_t1220 * ___m_ScreenMove;
	// UIToggle SystemLogic::m_NewPlayerGuide
	UIToggle_t1220 * ___m_NewPlayerGuide;
	// UIToggle SystemLogic::m_DeathPushEnable
	UIToggle_t1220 * ___m_DeathPushEnable;
	// UIToggle SystemLogic::m_KillNpcExp
	UIToggle_t1220 * ___m_KillNpcExp;
	// UIToggle SystemLogic::m_SkillEffect
	UIToggle_t1220 * ___m_SkillEffect;
	// UIToggle SystemLogic::m_DamageBoard
	UIToggle_t1220 * ___m_DamageBoard;
	// UIToggle SystemLogic::m_WallVision
	UIToggle_t1220 * ___m_WallVision;
	// UIToggle SystemLogic::m_RefuseAllAddFriend
	UIToggle_t1220 * ___m_RefuseAllAddFriend;
	// UIToggle SystemLogic::m_RefuseDuel
	UIToggle_t1220 * ___m_RefuseDuel;
	// TabController SystemLogic::m_TabQuestion
	TabController_t1209 * ___m_TabQuestion;
	// UIToggle SystemLogic::m_Bug
	UIToggle_t1220 * ___m_Bug;
	// UIToggle SystemLogic::m_Complain
	UIToggle_t1220 * ___m_Complain;
	// UIToggle SystemLogic::m_propose
	UIToggle_t1220 * ___m_propose;
	// System.Int32 SystemLogic::m_curShowPlayerNum
	int32_t ___m_curShowPlayerNum;
	// UILabel SystemLogic::m_LabelHideOtherPlayerNum
	UILabel_t1176 * ___m_LabelHideOtherPlayerNum;
	// UISlider SystemLogic::m_SliderHideOtherPlayer
	UISlider_t1219 * ___m_SliderHideOtherPlayer;
	// System.Boolean SystemLogic::m_bSystemTableau
	bool ___m_bSystemTableau;
	// UIGrid SystemLogic::gridSystenButtons
	UIGrid_t1199 * ___gridSystenButtons;
	// System.Single SystemLogic::m_fSendCYpay
	float ___m_fSendCYpay;
	// UnityEngine.Color SystemLogic::m_ChooseColor
	Color_t939  ___m_ChooseColor;
	// UnityEngine.Color SystemLogic::m_NoChooseColor
	Color_t939  ___m_NoChooseColor;
	// UILabel SystemLogic::m_NameEdition_Lab
	UILabel_t1176 * ___m_NameEdition_Lab;
	// UILabel SystemLogic::m_Floodlight_Lab
	UILabel_t1176 * ___m_Floodlight_Lab;
	// UILabel SystemLogic::m_ScreenMove_Lab
	UILabel_t1176 * ___m_ScreenMove_Lab;
	// UILabel SystemLogic::m_NewPlayerGuide_Lab
	UILabel_t1176 * ___m_NewPlayerGuide_Lab;
	// UILabel SystemLogic::m_DeathPushEnable_Lab
	UILabel_t1176 * ___m_DeathPushEnable_Lab;
	// UILabel SystemLogic::m_KillNpcExp_Lab
	UILabel_t1176 * ___m_KillNpcExp_Lab;
	// UILabel SystemLogic::m_SkillEffect_Lab
	UILabel_t1176 * ___m_SkillEffect_Lab;
	// UILabel SystemLogic::m_DamageBoard_Lab
	UILabel_t1176 * ___m_DamageBoard_Lab;
	// UILabel SystemLogic::m_WallVision_Lab
	UILabel_t1176 * ___m_WallVision_Lab;
	// UILabel SystemLogic::m_RefuseAllAddFriend_Lab
	UILabel_t1176 * ___m_RefuseAllAddFriend_Lab;
	// UILabel SystemLogic::m_RefuseDuel_Lab
	UILabel_t1176 * ___m_RefuseDuel_Lab;
};
struct SystemLogic_t1769_StaticFields{
	// System.Int32 SystemLogic::m_ShowPlayerNumMax
	int32_t ___m_ShowPlayerNumMax;
};
