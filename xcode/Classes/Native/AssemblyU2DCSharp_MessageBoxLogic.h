#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UIFont
struct UIFont_t1286;
// MessageBoxLogic/OnOKClick
struct OnOKClick_t1546;
// MessageBoxLogic/OnCancelClick
struct OnCancelClick_t1547;
// MessageBoxLogic/OnWaitTimeOut
struct OnWaitTimeOut_t1549;
// System.String[]
struct StringU5BU5D_t333;
// MessageBoxLogic/CostBoxInfo
struct CostBoxInfo_t1551;
// UIControllerBase`1<MessageBoxLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_12.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MessageBoxLogic/PASSWORD
#include "AssemblyU2DCSharp_MessageBoxLogic_PASSWORD.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// MessageBoxLogic
struct MessageBoxLogic_t1552  : public UIControllerBase_1_t1553
{
	// UILabel MessageBoxLogic::labelTitle
	UILabel_t1176 * ___labelTitle;
	// UILabel MessageBoxLogic::labelText
	UILabel_t1176 * ___labelText;
	// UnityEngine.GameObject MessageBoxLogic::m_MessageBoxOKButton
	GameObject_t9 * ___m_MessageBoxOKButton;
	// UnityEngine.GameObject MessageBoxLogic::m_MessageBoxCancelButton
	GameObject_t9 * ___m_MessageBoxCancelButton;
	// UnityEngine.GameObject MessageBoxLogic::detailBandRoot
	GameObject_t9 * ___detailBandRoot;
	// UISprite MessageBoxLogic::sprBackGround
	UISprite_t1202 * ___sprBackGround;
	// UIFont MessageBoxLogic::m_Font
	UIFont_t1286 * ___m_Font;
	// UnityEngine.GameObject MessageBoxLogic::m_MessageInfo
	GameObject_t9 * ___m_MessageInfo;
	// System.Int32 MessageBoxLogic::m_Type
	int32_t ___m_Type;
	// UnityEngine.Vector3 MessageBoxLogic::btnLelfPos
	Vector3_t121  ___btnLelfPos;
	// UnityEngine.Vector3 MessageBoxLogic::btnCenterPos
	Vector3_t121  ___btnCenterPos;
	// UnityEngine.Vector3 MessageBoxLogic::btnRightPos
	Vector3_t121  ___btnRightPos;
	// UILabel MessageBoxLogic::m_CountTextLabel
	UILabel_t1176 * ___m_CountTextLabel;
	// UnityEngine.GameObject MessageBoxLogic::m_MessageBoxIcon
	GameObject_t9 * ___m_MessageBoxIcon;
	// UnityEngine.GameObject MessageBoxLogic::m_TypeCost
	GameObject_t9 * ___m_TypeCost;
	// UILabel MessageBoxLogic::m_TypeCostLabel
	UILabel_t1176 * ___m_TypeCostLabel;
	// UILabel MessageBoxLogic::m_TypeCostSupplementLabel
	UILabel_t1176 * ___m_TypeCostSupplementLabel;
	// UILabel MessageBoxLogic::m_TypeCostDesc
	UILabel_t1176 * ___m_TypeCostDesc;
	// UILabel MessageBoxLogic::m_TypeCostCount
	UILabel_t1176 * ___m_TypeCostCount;
	// UISprite MessageBoxLogic::m_TypeCostIcon
	UISprite_t1202 * ___m_TypeCostIcon;
	// MessageBoxLogic/OnOKClick MessageBoxLogic::deleOK
	OnOKClick_t1546 * ___deleOK;
	// MessageBoxLogic/OnCancelClick MessageBoxLogic::deleCancel
	OnCancelClick_t1547 * ___deleCancel;
	// MessageBoxLogic/OnWaitTimeOut MessageBoxLogic::delWaitTimeOut
	OnWaitTimeOut_t1549 * ___delWaitTimeOut;
	// System.Single MessageBoxLogic::m_waitTimer
	float ___m_waitTimer;
	// System.Single MessageBoxLogic::m_delayTimer
	float ___m_delayTimer;
	// System.Single MessageBoxLogic::m_fCountDown
	float ___m_fCountDown;
	// System.Single MessageBoxLogic::m_fCountDonwTime
	float ___m_fCountDonwTime;
	// System.Int32 MessageBoxLogic::m_nCountDownDicID
	int32_t ___m_nCountDownDicID;
	// System.Single MessageBoxLogic::TextHeight
	float ___TextHeight;
	// MessageBoxLogic/PASSWORD MessageBoxLogic::m_ePassword
	int32_t ___m_ePassword;
	// System.String[] MessageBoxLogic::symbols
	StringU5BU5D_t333* ___symbols;
	// System.String[] MessageBoxLogic::icons
	StringU5BU5D_t333* ___icons;
	// MessageBoxLogic/CostBoxInfo MessageBoxLogic::m_costInfo
	CostBoxInfo_t1551 * ___m_costInfo;
};
struct MessageBoxLogic_t1552_StaticFields{
	// UnityEngine.Color MessageBoxLogic::transColor
	Color_t939  ___transColor;
};
