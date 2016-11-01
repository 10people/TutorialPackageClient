#pragma once
#include <stdint.h>
// UIGrid
struct UIGrid_t1199;
// System.Int32[]
struct Int32U5BU5D_t116;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UIImageButton
struct UIImageButton_t1204;
// UILabel
struct UILabel_t1176;
// ActivenessAwardItem/ItemType[]
struct ItemTypeU5BU5D_t1205;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Games.AwardActivity.AwardState
#include "AssemblyU2DCSharp_Games_AwardActivity_AwardState.h"
// ActivenessAwardItem
struct ActivenessAwardItem_t1206  : public MonoBehaviour_t18
{
	// UIGrid ActivenessAwardItem::m_ItemGrid
	UIGrid_t1199 * ___m_ItemGrid;
	// System.Int32[] ActivenessAwardItem::m_ItemID
	Int32U5BU5D_t116* ___m_ItemID;
	// UnityEngine.GameObject[] ActivenessAwardItem::m_Items
	GameObjectU5BU5D_t1200* ___m_Items;
	// UISprite[] ActivenessAwardItem::m_ItemsSprite
	UISpriteU5BU5D_t1201* ___m_ItemsSprite;
	// UILabel[] ActivenessAwardItem::m_ItemsDecText
	UILabelU5BU5D_t1203* ___m_ItemsDecText;
	// UISprite[] ActivenessAwardItem::m_ItemsQualitySprite
	UISpriteU5BU5D_t1201* ___m_ItemsQualitySprite;
	// UIImageButton ActivenessAwardItem::m_AwardButton
	UIImageButton_t1204 * ___m_AwardButton;
	// UILabel ActivenessAwardItem::m_AwardButtonDec
	UILabel_t1176 * ___m_AwardButtonDec;
	// UILabel ActivenessAwardItem::m_AwardInfoText
	UILabel_t1176 * ___m_AwardInfoText;
	// Games.AwardActivity.AwardState ActivenessAwardItem::m_AwardButtonState
	int32_t ___m_AwardButtonState;
	// System.Int32 ActivenessAwardItem::m_nTurnID
	int32_t ___m_nTurnID;
	// System.Int32 ActivenessAwardItem::m_ItemKind
	int32_t ___m_ItemKind;
	// ActivenessAwardItem/ItemType[] ActivenessAwardItem::m_ItemType
	ItemTypeU5BU5D_t1205* ___m_ItemType;
	// System.Int32[] ActivenessAwardItem::m_ItemDataID
	Int32U5BU5D_t116* ___m_ItemDataID;
	// System.Int32[] ActivenessAwardItem::m_ItemCount
	Int32U5BU5D_t116* ___m_ItemCount;
};
