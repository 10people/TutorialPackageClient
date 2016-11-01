#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Transform
struct Transform_t78;
// UILabel
struct UILabel_t1176;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// System.Collections.Generic.List`1<GCGame.Table.Tab_HelpItem>
struct List_1_t494;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// HelpPageItem
struct HelpPageItem_t1890  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject HelpPageItem::prefCard
	GameObject_t9 * ___prefCard;
	// UnityEngine.Transform HelpPageItem::m_HelpGrid_Card
	Transform_t78 * ___m_HelpGrid_Card;
	// UnityEngine.GameObject HelpPageItem::m_HelpCardWindow
	GameObject_t9 * ___m_HelpCardWindow;
	// UnityEngine.GameObject HelpPageItem::m_HelpWindow
	GameObject_t9 * ___m_HelpWindow;
	// UILabel HelpPageItem::m_HelpCardHeadTitle
	UILabel_t1176 * ___m_HelpCardHeadTitle;
	// UILabel[] HelpPageItem::m_LableHelpItemName
	UILabelU5BU5D_t1203* ___m_LableHelpItemName;
	// UnityEngine.GameObject[] HelpPageItem::m_HelpItemButton
	GameObjectU5BU5D_t1200* ___m_HelpItemButton;
	// System.Collections.Generic.List`1<GCGame.Table.Tab_HelpItem> HelpPageItem::m_PageHelpItems
	List_1_t494 * ___m_PageHelpItems;
};
