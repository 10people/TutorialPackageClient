#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// MoneyTipsLogic
struct MoneyTipsLogic_t1577;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MoneyTipsLogic/MoneyType
#include "AssemblyU2DCSharp_MoneyTipsLogic_MoneyType.h"
// MoneyTipsLogic
struct MoneyTipsLogic_t1577  : public MonoBehaviour_t18
{
	// UILabel MoneyTipsLogic::m_ItemNameLabel
	UILabel_t1176 * ___m_ItemNameLabel;
	// UILabel MoneyTipsLogic::m_ItemTypeLabel
	UILabel_t1176 * ___m_ItemTypeLabel;
	// UILabel MoneyTipsLogic::m_ItemUseLevelLabel
	UILabel_t1176 * ___m_ItemUseLevelLabel;
	// UILabel MoneyTipsLogic::m_ItemBindLabel
	UILabel_t1176 * ___m_ItemBindLabel;
	// UILabel MoneyTipsLogic::m_ItemDescLabel
	UILabel_t1176 * ___m_ItemDescLabel;
	// UISprite MoneyTipsLogic::m_ItemIconSprite
	UISprite_t1202 * ___m_ItemIconSprite;
	// UILabel MoneyTipsLogic::m_ItemSellLabel
	UILabel_t1176 * ___m_ItemSellLabel;
};
struct MoneyTipsLogic_t1577_StaticFields{
	// MoneyTipsLogic MoneyTipsLogic::m_Instance
	MoneyTipsLogic_t1577 * ___m_Instance;
	// MoneyTipsLogic/MoneyType MoneyTipsLogic::m_curType
	int32_t ___m_curType;
	// System.Int32 MoneyTipsLogic::m_Num
	int32_t ___m_Num;
};
