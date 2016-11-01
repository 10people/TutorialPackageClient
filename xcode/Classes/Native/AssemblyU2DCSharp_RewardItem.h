#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// RewardItem/ItemClickDelegate
struct ItemClickDelegate_t1932;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RewardItem
struct RewardItem_t1842  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject RewardItem::BackSprite
	GameObject_t9 * ___BackSprite;
	// UnityEngine.GameObject RewardItem::FrontSprite
	GameObject_t9 * ___FrontSprite;
	// UnityEngine.GameObject RewardItem::LabelNum
	GameObject_t9 * ___LabelNum;
	// RewardItem/ItemClickDelegate RewardItem::delItemClick
	ItemClickDelegate_t1932 * ___delItemClick;
	// UISprite RewardItem::m_QualitySprite
	UISprite_t1202 * ___m_QualitySprite;
	// UnityEngine.GameObject RewardItem::m_ItemName
	GameObject_t9 * ___m_ItemName;
};
