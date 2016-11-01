#pragma once
#include <stdint.h>
// QianKunDaiLogic
struct QianKunDaiLogic_t1243;
// ItemSlotLogic[]
struct ItemSlotLogicU5BU5D_t1679;
// UnityEngine.GameObject
struct GameObject_t9;
// UIInput
struct UIInput_t1231;
// UILabel
struct UILabel_t1176;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// TabController
struct TabController_t1209;
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1116;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// GCGame.Table.Tab_QianKunDaiFormula
struct Tab_QianKunDaiFormula_t599;
// System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo>
struct Dictionary_2_t1680;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// QianKunDaiLogic
struct QianKunDaiLogic_t1243  : public MonoBehaviour_t18
{
	// ItemSlotLogic[] QianKunDaiLogic::m_StuffSlotArray
	ItemSlotLogicU5BU5D_t1679* ___m_StuffSlotArray;
	// UnityEngine.GameObject QianKunDaiLogic::m_FormulaRoot
	GameObject_t9 * ___m_FormulaRoot;
	// UnityEngine.GameObject QianKunDaiLogic::m_FormulaContent
	GameObject_t9 * ___m_FormulaContent;
	// UnityEngine.GameObject QianKunDaiLogic::m_NumChoose
	GameObject_t9 * ___m_NumChoose;
	// UIInput QianKunDaiLogic::m_NumChooseInput
	UIInput_t1231 * ___m_NumChooseInput;
	// UILabel QianKunDaiLogic::m_MaxCombineCountLabel
	UILabel_t1176 * ___m_MaxCombineCountLabel;
	// UILabel QianKunDaiLogic::m_TotalMoneyLabel
	UILabel_t1176 * ___m_TotalMoneyLabel;
	// UnityEngine.GameObject QianKunDaiLogic::m_NumChooseOK
	GameObject_t9 * ___m_NumChooseOK;
	// ItemSlotLogic QianKunDaiLogic::m_ProductSlot
	ItemSlotLogic_t1237 * ___m_ProductSlot;
	// TabController QianKunDaiLogic::m_TabIntroduction
	TabController_t1209 * ___m_TabIntroduction;
	// UILabel QianKunDaiLogic::m_IntroductionLabel
	UILabel_t1176 * ___m_IntroductionLabel;
	// UnityEngine.GameObject QianKunDaiLogic::m_FilterRoot
	GameObject_t9 * ___m_FilterRoot;
	// UnityEngine.GameObject QianKunDaiLogic::m_FilterContent
	GameObject_t9 * ___m_FilterContent;
	// TabController QianKunDaiLogic::m_TabFilter
	TabController_t1209 * ___m_TabFilter;
	// UnityEngine.GameObject QianKunDaiLogic::m_NullIntroduction
	GameObject_t9 * ___m_NullIntroduction;
	// UnityEngine.GameObject QianKunDaiLogic::m_ProductPanel
	GameObject_t9 * ___m_ProductPanel;
	// ItemSlotLogic[] QianKunDaiLogic::m_ProductSlotArray
	ItemSlotLogicU5BU5D_t1679* ___m_ProductSlotArray;
	// UILabel QianKunDaiLogic::m_FilterContentLabel
	UILabel_t1176 * ___m_FilterContentLabel;
	// UnityEngine.BoxCollider QianKunDaiLogic::m_FilterContentBox
	BoxCollider_t128 * ___m_FilterContentBox;
	// UILabel QianKunDaiLogic::m_FormulaContentLabel
	UILabel_t1176 * ___m_FormulaContentLabel;
	// UnityEngine.BoxCollider QianKunDaiLogic::m_FormulaContentBox
	BoxCollider_t128 * ___m_FormulaContentBox;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> QianKunDaiLogic::m_ChooseStuffKinds
	Dictionary_2_t1116 * ___m_ChooseStuffKinds;
	// System.Collections.Generic.List`1<System.UInt64> QianKunDaiLogic::m_ChooseStuffGuid
	List_1_t1393 * ___m_ChooseStuffGuid;
	// System.Int32 QianKunDaiLogic::m_CurCombineNum
	int32_t ___m_CurCombineNum;
	// GCGame.Table.Tab_QianKunDaiFormula QianKunDaiLogic::m_RightFormula
	Tab_QianKunDaiFormula_t599 * ___m_RightFormula;
	// System.Int32 QianKunDaiLogic::m_MaxCombineCount
	int32_t ___m_MaxCombineCount;
	// System.Boolean QianKunDaiLogic::m_CombineCD
	bool ___m_CombineCD;
	// System.Collections.Generic.List`1<System.UInt64> QianKunDaiLogic::deleGuid
	List_1_t1393 * ___deleGuid;
	// System.Collections.Generic.Dictionary`2<System.Int32,QianKunDaiLogic/ProductInfo> QianKunDaiLogic::m_ProductDictionary
	Dictionary_2_t1680 * ___m_ProductDictionary;
};
struct QianKunDaiLogic_t1243_StaticFields{
	// System.Int32 QianKunDaiLogic::StuffSlotMax
	int32_t ___StuffSlotMax;
	// System.Int32 QianKunDaiLogic::MAX_PRODUCT_SLOT_COUNT
	int32_t ___MAX_PRODUCT_SLOT_COUNT;
	// System.Int32 QianKunDaiLogic::MAX_FILTER_TYPE_COUNT
	int32_t ___MAX_FILTER_TYPE_COUNT;
	// QianKunDaiLogic QianKunDaiLogic::m_Instance
	QianKunDaiLogic_t1243 * ___m_Instance;
	// System.Boolean QianKunDaiLogic::m_bOopenFromChristmas
	bool ___m_bOopenFromChristmas;
};
