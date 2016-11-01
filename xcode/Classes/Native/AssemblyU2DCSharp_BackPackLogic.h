#pragma once
#include <stdint.h>
// BackPackLogic
struct BackPackLogic_t1240;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel[]
struct UILabelU5BU5D_t1203;
// ModelDragLogic
struct ModelDragLogic_t1242;
// QianKunDaiLogic
struct QianKunDaiLogic_t1243;
// TabController
struct TabController_t1209;
// System.Collections.Generic.List`1<Games.Item.GameItem>
struct List_1_t1244;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BackPackLogic/ITEM_TAB_PAGE
#include "AssemblyU2DCSharp_BackPackLogic_ITEM_TAB_PAGE.h"
// BackPackLogic/OPEN_WAY
#include "AssemblyU2DCSharp_BackPackLogic_OPEN_WAY.h"
// BackPackLogic
struct BackPackLogic_t1240  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject BackPackLogic::m_FirstChild
	GameObject_t9 * ___m_FirstChild;
	// UnityEngine.GameObject BackPackLogic::m_BackPackItems
	GameObject_t9 * ___m_BackPackItems;
	// UnityEngine.GameObject BackPackLogic::m_BackPackItemGrid
	GameObject_t9 * ___m_BackPackItemGrid;
	// UnityEngine.GameObject BackPackLogic::m_EquipPackGrid
	GameObject_t9 * ___m_EquipPackGrid;
	// UILabel BackPackLogic::m_PlayerName
	UILabel_t1176 * ___m_PlayerName;
	// UILabel BackPackLogic::m_PlayerCombatValue
	UILabel_t1176 * ___m_PlayerCombatValue;
	// UILabel BackPackLogic::m_PlayerLevel
	UILabel_t1176 * ___m_PlayerLevel;
	// UILabel BackPackLogic::m_BackPakcSize
	UILabel_t1176 * ___m_BackPakcSize;
	// UILabel BackPackLogic::m_Moneyinfo_CoinLable
	UILabel_t1176 * ___m_Moneyinfo_CoinLable;
	// UILabel BackPackLogic::m_Moneyinfo_YuanBaoLable
	UILabel_t1176 * ___m_Moneyinfo_YuanBaoLable;
	// UILabel BackPackLogic::m_Moneyinfo_YuanBaoBindLable
	UILabel_t1176 * ___m_Moneyinfo_YuanBaoBindLable;
	// UnityEngine.GameObject BackPackLogic::m_FakeObjTopLeft
	GameObject_t9 * ___m_FakeObjTopLeft;
	// UnityEngine.GameObject BackPackLogic::m_FakeObjBottomRight
	GameObject_t9 * ___m_FakeObjBottomRight;
	// Games.FakeObject.FakeObject BackPackLogic::m_PlayerFakeObj
	FakeObject_t1241 * ___m_PlayerFakeObj;
	// System.Int32 BackPackLogic::m_PlayerFakeObjID
	int32_t ___m_PlayerFakeObjID;
	// UnityEngine.GameObject BackPackLogic::m_FakeObjGameObject
	GameObject_t9 * ___m_FakeObjGameObject;
	// System.UInt64 BackPackLogic::m_TakeOffGuid
	uint64_t ___m_TakeOffGuid;
	// System.Int32 BackPackLogic::m_NewPlayerGuideFlag_Step
	int32_t ___m_NewPlayerGuideFlag_Step;
	// UnityEngine.GameObject BackPackLogic::m_CloseButton
	GameObject_t9 * ___m_CloseButton;
	// System.Int32 BackPackLogic::m_PlayerCombatBuffer
	int32_t ___m_PlayerCombatBuffer;
	// UnityEngine.GameObject BackPackLogic::m_EquipView
	GameObject_t9 * ___m_EquipView;
	// UnityEngine.GameObject BackPackLogic::m_QianKunDaiView
	GameObject_t9 * ___m_QianKunDaiView;
	// UISprite[] BackPackLogic::m_EquipSlotIcon
	UISpriteU5BU5D_t1201* ___m_EquipSlotIcon;
	// UISprite[] BackPackLogic::m_EquipSlotQualityFrame
	UISpriteU5BU5D_t1201* ___m_EquipSlotQualityFrame;
	// UILabel[] BackPackLogic::m_EquipSlotEnhanceLevel
	UILabelU5BU5D_t1203* ___m_EquipSlotEnhanceLevel;
	// ModelDragLogic BackPackLogic::m_ModelDrag
	ModelDragLogic_t1242 * ___m_ModelDrag;
	// BackPackLogic/ITEM_TAB_PAGE BackPackLogic::m_CurTabPage
	int32_t ___m_CurTabPage;
	// QianKunDaiLogic BackPackLogic::m_QianKunDai
	QianKunDaiLogic_t1243 * ___m_QianKunDai;
	// TabController BackPackLogic::m_TabController
	TabController_t1209 * ___m_TabController;
	// TabController BackPackLogic::m_TabController2
	TabController_t1209 * ___m_TabController2;
	// System.Int32 BackPackLogic::m_Cur_StartItem
	int32_t ___m_Cur_StartItem;
	// System.Int32 BackPackLogic::m_Cur_EndItem
	int32_t ___m_Cur_EndItem;
	// System.Collections.Generic.List`1<Games.Item.GameItem> BackPackLogic::CurItemList
	List_1_t1244 * ___CurItemList;
};
struct BackPackLogic_t1240_StaticFields{
	// System.Int32 BackPackLogic::ITEMOBJECT_COUNT
	int32_t ___ITEMOBJECT_COUNT;
	// System.Int32 BackPackLogic::ITEMPACK_SIZE
	int32_t ___ITEMPACK_SIZE;
	// System.Int32 BackPackLogic::ITEMOBJECT_WIDTH
	int32_t ___ITEMOBJECT_WIDTH;
	// BackPackLogic BackPackLogic::m_Instance
	BackPackLogic_t1240 * ___m_Instance;
	// BackPackLogic/OPEN_WAY BackPackLogic::m_OpenWay
	int32_t ___m_OpenWay;
};
