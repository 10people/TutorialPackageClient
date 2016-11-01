#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<ItemSlotLogic>
struct List_1_t1780;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TooltipsEquipGem
struct TooltipsEquipGem_t1336  : public MonoBehaviour_t18
{
	// System.Collections.Generic.List`1<ItemSlotLogic> TooltipsEquipGem::m_GemSlot
	List_1_t1780 * ___m_GemSlot;
	// UnityEngine.GameObject TooltipsEquipGem::m_GemTips
	GameObject_t9 * ___m_GemTips;
	// UILabel TooltipsEquipGem::m_GemNameLabel
	UILabel_t1176 * ___m_GemNameLabel;
	// UILabel TooltipsEquipGem::m_GemAttrLabel
	UILabel_t1176 * ___m_GemAttrLabel;
	// System.String TooltipsEquipGem::m_GemClickSlot
	String_t* ___m_GemClickSlot;
	// System.Int32 TooltipsEquipGem::m_EquipSlotIndex
	int32_t ___m_EquipSlotIndex;
};
