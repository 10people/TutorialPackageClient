#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PresentRootLogic/TAB_INDEX
#include "AssemblyU2DCSharp_PresentRootLogic_TAB_INDEX.h"
// ShoppingListItem
struct ShoppingListItem_t1719  : public MonoBehaviour_t18
{
	// UILabel ShoppingListItem::m_CountLabel
	UILabel_t1176 * ___m_CountLabel;
	// UnityEngine.GameObject ShoppingListItem::m_DeleteButton
	GameObject_t9 * ___m_DeleteButton;
	// ItemSlotLogic ShoppingListItem::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UILabel ShoppingListItem::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// System.Int32 ShoppingListItem::m_GoodsID
	int32_t ___m_GoodsID;
	// System.Int32 ShoppingListItem::m_GoodsCount
	int32_t ___m_GoodsCount;
	// PresentRootLogic/TAB_INDEX ShoppingListItem::m_Type
	int32_t ___m_Type;
	// System.Int32 ShoppingListItem::m_GoodsIndex
	int32_t ___m_GoodsIndex;
};
