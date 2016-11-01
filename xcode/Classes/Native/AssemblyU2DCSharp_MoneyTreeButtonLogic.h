#pragma once
#include <stdint.h>
// UIButton
struct UIButton_t1578;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// System.Collections.Generic.List`1<TweenAlpha>
struct List_1_t1579;
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// UIControllerBase`1<MoneyTreeButtonLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_13.h"
// MoneyTreeButtonLogic
struct MoneyTreeButtonLogic_t1580  : public UIControllerBase_1_t1581
{
	// System.Single MoneyTreeButtonLogic::m_fOld_X
	float ___m_fOld_X;
	// System.Single MoneyTreeButtonLogic::m_fOld_Y
	float ___m_fOld_Y;
	// System.Single MoneyTreeButtonLogic::m_fNew_X
	float ___m_fNew_X;
	// System.Single MoneyTreeButtonLogic::m_fNew_Y
	float ___m_fNew_Y;
	// System.Single MoneyTreeButtonLogic::m_fDiff_X
	float ___m_fDiff_X;
	// System.Single MoneyTreeButtonLogic::m_fDiff_Y
	float ___m_fDiff_Y;
	// UIButton MoneyTreeButtonLogic::m_MoneyTreeButton
	UIButton_t1578 * ___m_MoneyTreeButton;
	// UISprite MoneyTreeButtonLogic::m_ButtonSprit
	UISprite_t1202 * ___m_ButtonSprit;
	// UILabel MoneyTreeButtonLogic::m_TimerText
	UILabel_t1176 * ___m_TimerText;
	// UnityEngine.GameObject MoneyTreeButtonLogic::m_TipGameObj
	GameObject_t9 * ___m_TipGameObj;
	// UILabel MoneyTreeButtonLogic::m_TipText
	UILabel_t1176 * ___m_TipText;
	// System.String MoneyTreeButtonLogic::m_ButtonNormalName
	String_t* ___m_ButtonNormalName;
	// System.String MoneyTreeButtonLogic::m_ButtonActiveName
	String_t* ___m_ButtonActiveName;
	// System.Int32 MoneyTreeButtonLogic::m_CurMoneyTreeID
	int32_t ___m_CurMoneyTreeID;
	// System.Int32 MoneyTreeButtonLogic::m_CDTime
	int32_t ___m_CDTime;
	// System.Collections.Generic.List`1<TweenAlpha> MoneyTreeButtonLogic::m_FoldTween
	List_1_t1579 * ___m_FoldTween;
	// UnityEngine.BoxCollider MoneyTreeButtonLogic::m_BtnCollider
	BoxCollider_t128 * ___m_BtnCollider;
	// System.Boolean MoneyTreeButtonLogic::m_ShakeUpFlag
	bool ___m_ShakeUpFlag;
};
