#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UISprite
struct UISprite_t1202;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UILabel
struct UILabel_t1176;
// System.Int32[]
struct Int32U5BU5D_t116;
// Games.Item.GameItem
struct GameItem_t1172;
// System.Collections.Generic.List`1<Games.Item.GameItem>
struct List_1_t1244;
// GemLogic
struct GemLogic_t1424;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GemLogic
struct GemLogic_t1424  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject GemLogic::m_Page_UnEquip
	GameObject_t9 * ___m_Page_UnEquip;
	// UnityEngine.GameObject GemLogic::m_Page_Equip
	GameObject_t9 * ___m_Page_Equip;
	// UISprite[] GemLogic::m_GemSlotSprite
	UISpriteU5BU5D_t1201* ___m_GemSlotSprite;
	// UISprite[] GemLogic::m_GemSlotChooseSprite
	UISpriteU5BU5D_t1201* ___m_GemSlotChooseSprite;
	// UISprite[] GemLogic::m_GemItemQualitySprite
	UISpriteU5BU5D_t1201* ___m_GemItemQualitySprite;
	// UISprite[] GemLogic::m_GemRemindPoint
	UISpriteU5BU5D_t1201* ___m_GemRemindPoint;
	// UILabel[] GemLogic::m_SelectedGemName
	UILabelU5BU5D_t1203* ___m_SelectedGemName;
	// UILabel[] GemLogic::m_SelectedGemLevel
	UILabelU5BU5D_t1203* ___m_SelectedGemLevel;
	// UILabel[] GemLogic::m_SelectedGemAttr
	UILabelU5BU5D_t1203* ___m_SelectedGemAttr;
	// UISprite GemLogic::m_SelectedEquipChoose
	UISprite_t1202 * ___m_SelectedEquipChoose;
	// UISprite GemLogic::m_SelectedEquipIcon
	UISprite_t1202 * ___m_SelectedEquipIcon;
	// UISprite GemLogic::m_SelectedEquipQuality
	UISprite_t1202 * ___m_SelectedEquipQuality;
	// ItemSlotLogic GemLogic::m_ChooseGem
	ItemSlotLogic_t1237 * ___m_ChooseGem;
	// UILabel GemLogic::m_ChooseGemNameLabel
	UILabel_t1176 * ___m_ChooseGemNameLabel;
	// UILabel GemLogic::m_ChooseGemAttrLabel
	UILabel_t1176 * ___m_ChooseGemAttrLabel;
	// UILabel GemLogic::m_EquipGemNameLabel
	UILabel_t1176 * ___m_EquipGemNameLabel;
	// UILabel GemLogic::m_EquipGemAttrLable
	UILabel_t1176 * ___m_EquipGemAttrLable;
	// UILabel GemLogic::m_EquipGemLvLabel
	UILabel_t1176 * ___m_EquipGemLvLabel;
	// UILabel GemLogic::m_EquipGemCoinNum
	UILabel_t1176 * ___m_EquipGemCoinNum;
	// UISprite GemLogic::m_EquipProGress
	UISprite_t1202 * ___m_EquipProGress;
	// System.Int32[] GemLogic::m_GemSlotId
	Int32U5BU5D_t116* ___m_GemSlotId;
	// System.Int32 GemLogic::m_CurEquipSlot
	int32_t ___m_CurEquipSlot;
	// System.Int32 GemLogic::m_CurGemSlot
	int32_t ___m_CurGemSlot;
	// Games.Item.GameItem GemLogic::m_CurGemItem
	GameItem_t1172 * ___m_CurGemItem;
	// System.Collections.Generic.List`1<Games.Item.GameItem> GemLogic::m_GemItemList
	List_1_t1244 * ___m_GemItemList;
	// System.Int32 GemLogic::m_CurGemItemPage
	int32_t ___m_CurGemItemPage;
	// System.Single GemLogic::m_Delay_Time
	float ___m_Delay_Time;
	// System.Int32 GemLogic::m_Delay_CurEquipSlot
	int32_t ___m_Delay_CurEquipSlot;
	// System.Int32 GemLogic::m_Delay_CurGemSlot
	int32_t ___m_Delay_CurGemSlot;
	// System.UInt64 GemLogic::m_Delay_GemGuid
	uint64_t ___m_Delay_GemGuid;
	// System.Int32 GemLogic::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// UnityEngine.GameObject GemLogic::m_SlotHole_1
	GameObject_t9 * ___m_SlotHole_1;
	// UnityEngine.GameObject GemLogic::m_BtnMount
	GameObject_t9 * ___m_BtnMount;
	// UILabel GemLogic::m_CoinNum
	UILabel_t1176 * ___m_CoinNum;
	// UnityEngine.GameObject GemLogic::m_GemListGrid
	GameObject_t9 * ___m_GemListGrid;
	// UnityEngine.GameObject GemLogic::m_GemListObj
	GameObject_t9 * ___m_GemListObj;
	// UnityEngine.GameObject[] GemLogic::m_GemSlotMark
	GameObjectU5BU5D_t1200* ___m_GemSlotMark;
	// UnityEngine.GameObject GemLogic::m_GemHelpInfo
	GameObject_t9 * ___m_GemHelpInfo;
	// UnityEngine.GameObject GemLogic::m_GemPreView
	GameObject_t9 * ___m_GemPreView;
};
struct GemLogic_t1424_StaticFields{
	// GemLogic GemLogic::m_Instance
	GemLogic_t1424 * ___m_Instance;
};
