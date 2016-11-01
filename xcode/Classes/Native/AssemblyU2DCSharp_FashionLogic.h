#pragma once
#include <stdint.h>
// FashionLogic
struct FashionLogic_t1403;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// TabController
struct TabController_t1209;
// ModelDragLogic
struct ModelDragLogic_t1242;
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// GCGame.Table.Tab_FashionData
struct Tab_FashionData_t453;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FashionLogic
struct FashionLogic_t1403  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject FashionLogic::m_FashionItemGrid
	GameObject_t9 * ___m_FashionItemGrid;
	// UILabel FashionLogic::m_ChooseFashionName
	UILabel_t1176 * ___m_ChooseFashionName;
	// UILabel FashionLogic::m_TimeLeftLabel
	UILabel_t1176 * ___m_TimeLeftLabel;
	// UILabel FashionLogic::m_DescLabel
	UILabel_t1176 * ___m_DescLabel;
	// UILabel FashionLogic::m_RubyLabel
	UILabel_t1176 * ___m_RubyLabel;
	// UILabel FashionLogic::m_SourceLabel
	UILabel_t1176 * ___m_SourceLabel;
	// UnityEngine.GameObject FashionLogic::m_EquipButton
	GameObject_t9 * ___m_EquipButton;
	// UnityEngine.GameObject FashionLogic::m_TakeOffButton
	GameObject_t9 * ___m_TakeOffButton;
	// UnityEngine.GameObject FashionLogic::m_RenewButton
	GameObject_t9 * ___m_RenewButton;
	// UnityEngine.GameObject FashionLogic::m_BuyButton
	GameObject_t9 * ___m_BuyButton;
	// UnityEngine.GameObject FashionLogic::m_FashionItem
	GameObject_t9 * ___m_FashionItem;
	// UnityEngine.GameObject FashionLogic::buySuitDialog
	GameObject_t9 * ___buySuitDialog;
	// UnityEngine.GameObject FashionLogic::btnOKBuy
	GameObject_t9 * ___btnOKBuy;
	// UnityEngine.GameObject FashionLogic::btnCancelBuy
	GameObject_t9 * ___btnCancelBuy;
	// UILabel FashionLogic::lblBuyTitle
	UILabel_t1176 * ___lblBuyTitle;
	// UILabel FashionLogic::lblBuyDesc
	UILabel_t1176 * ___lblBuyDesc;
	// UILabel FashionLogic::lblBuyCost
	UILabel_t1176 * ___lblBuyCost;
	// TabController FashionLogic::buyOptions
	TabController_t1209 * ___buyOptions;
	// UnityEngine.GameObject FashionLogic::m_FakeObjTopLeft
	GameObject_t9 * ___m_FakeObjTopLeft;
	// UnityEngine.GameObject FashionLogic::m_FakeObjBottomRight
	GameObject_t9 * ___m_FakeObjBottomRight;
	// ModelDragLogic FashionLogic::m_ModelDrag
	ModelDragLogic_t1242 * ___m_ModelDrag;
	// Games.FakeObject.FakeObject FashionLogic::m_PlayerFakeObj
	FakeObject_t1241 * ___m_PlayerFakeObj;
	// System.Int32 FashionLogic::m_PlayerFakeObjID
	int32_t ___m_PlayerFakeObjID;
	// UnityEngine.GameObject FashionLogic::m_FakeObjGameObject
	GameObject_t9 * ___m_FakeObjGameObject;
	// System.Boolean FashionLogic::m_IsFitOn
	bool ___m_IsFitOn;
	// System.Int32 FashionLogic::m_BuyType
	int32_t ___m_BuyType;
	// System.Int32 FashionLogic::m_curChooseFashion
	int32_t ___m_curChooseFashion;
	// GCGame.Table.Tab_FashionData FashionLogic::mCurFashion
	Tab_FashionData_t453 * ___mCurFashion;
	// System.Boolean FashionLogic::isFirst
	bool ___isFirst;
};
struct FashionLogic_t1403_StaticFields{
	// FashionLogic FashionLogic::m_Instance
	FashionLogic_t1403 * ___m_Instance;
};
