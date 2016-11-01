#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel
struct UILabel_t1176;
// GCGame.Table.Tab_HelpItem
struct Tab_HelpItem_t495;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// HelpCardItem
struct HelpCardItem_t1889  : public MonoBehaviour_t18
{
	// UISprite HelpCardItem::m_IconSprite
	UISprite_t1202 * ___m_IconSprite;
	// UISprite[] HelpCardItem::m_StarIconSprite
	UISpriteU5BU5D_t1201* ___m_StarIconSprite;
	// UILabel HelpCardItem::m_DescLable
	UILabel_t1176 * ___m_DescLable;
	// UILabel HelpCardItem::m_TitleLable
	UILabel_t1176 * ___m_TitleLable;
	// GCGame.Table.Tab_HelpItem HelpCardItem::m_helpItem
	Tab_HelpItem_t495 * ___m_helpItem;
	// System.Int32 HelpCardItem::m_nRecommendIndex
	int32_t ___m_nRecommendIndex;
};
