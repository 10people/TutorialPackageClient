#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RechargeItem
struct RechargeItem_t1925  : public MonoBehaviour_t18
{
	// UISprite RechargeItem::m_SprIcon
	UISprite_t1202 * ___m_SprIcon;
	// UILabel RechargeItem::m_LabelPrice
	UILabel_t1176 * ___m_LabelPrice;
	// UILabel RechargeItem::m_LabelYuanbao
	UILabel_t1176 * ___m_LabelYuanbao;
	// UISprite RechargeItem::m_SprYuanBaoIcon
	UISprite_t1202 * ___m_SprYuanBaoIcon;
	// UISprite RechargeItem::m_SprOnlyShowOnce
	UISprite_t1202 * ___m_SprOnlyShowOnce;
	// UnityEngine.GameObject RechargeItem::m_objYuanSprite
	GameObject_t9 * ___m_objYuanSprite;
	// UILabel RechargeItem::m_LabelHotTip
	UILabel_t1176 * ___m_LabelHotTip;
	// System.Boolean RechargeItem::m_bEnableTimes
	bool ___m_bEnableTimes;
};
