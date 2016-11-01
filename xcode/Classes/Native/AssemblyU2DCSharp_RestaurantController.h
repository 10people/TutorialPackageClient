#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UILabel
struct UILabel_t1176;
// UISlider
struct UISlider_t1219;
// RestaurantData/RestaurantInfo
struct RestaurantInfo_t1825;
// RestaurantDesk
struct RestaurantDesk_t1826;
// UIToggle
struct UIToggle_t1220;
// UIControllerBase`1<RestaurantController>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_33.h"
// RestaurantController
struct RestaurantController_t1827  : public UIControllerBase_1_t1828
{
	// UnityEngine.GameObject RestaurantController::m_FoodWindow
	GameObject_t9 * ___m_FoodWindow;
	// UnityEngine.GameObject[] RestaurantController::m_Desks
	GameObjectU5BU5D_t1200* ___m_Desks;
	// UILabel RestaurantController::m_LabelRestaurantLevel
	UILabel_t1176 * ___m_LabelRestaurantLevel;
	// UISlider RestaurantController::m_SliderLevel
	UISlider_t1219 * ___m_SliderLevel;
	// UILabel RestaurantController::m_LabelEarnings
	UILabel_t1176 * ___m_LabelEarnings;
	// UnityEngine.GameObject RestaurantController::m_BtnFriendRestaurant
	GameObject_t9 * ___m_BtnFriendRestaurant;
	// UnityEngine.GameObject RestaurantController::m_BtnPrepareAll
	GameObject_t9 * ___m_BtnPrepareAll;
	// UnityEngine.GameObject RestaurantController::m_BtnFinishPrepareAll
	GameObject_t9 * ___m_BtnFinishPrepareAll;
	// UnityEngine.GameObject RestaurantController::m_DetailInfoParent
	GameObject_t9 * ___m_DetailInfoParent;
	// UnityEngine.GameObject RestaurantController::m_BackButton
	GameObject_t9 * ___m_BackButton;
	// UILabel RestaurantController::m_LabelTitle
	UILabel_t1176 * ___m_LabelTitle;
	// UILabel RestaurantController::m_LabelExp
	UILabel_t1176 * ___m_LabelExp;
	// UILabel RestaurantController::m_LabelVisitFriend
	UILabel_t1176 * ___m_LabelVisitFriend;
	// UILabel RestaurantController::m_BindYuanBaoNum
	UILabel_t1176 * ___m_BindYuanBaoNum;
	// RestaurantData/RestaurantInfo RestaurantController::m_curRestaurant
	RestaurantInfo_t1825 * ___m_curRestaurant;
	// RestaurantDesk RestaurantController::m_curOperationDesk
	RestaurantDesk_t1826 * ___m_curOperationDesk;
	// System.Boolean RestaurantController::m_bSelfData
	bool ___m_bSelfData;
	// System.Single RestaurantController::m_lastRequestFriendTime
	float ___m_lastRequestFriendTime;
	// UnityEngine.GameObject RestaurantController::m_GiftWindow
	GameObject_t9 * ___m_GiftWindow;
	// System.Int32 RestaurantController::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// UnityEngine.GameObject RestaurantController::m_BtnClose
	GameObject_t9 * ___m_BtnClose;
	// UIToggle RestaurantController::m_PushToggle
	UIToggle_t1220 * ___m_PushToggle;
};
