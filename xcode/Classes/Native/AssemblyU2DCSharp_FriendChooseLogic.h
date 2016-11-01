#pragma once
#include <stdint.h>
// ItemSlotLogic
struct ItemSlotLogic_t1237;
// UnityEngine.GameObject
struct GameObject_t9;
// UIInput
struct UIInput_t1231;
// UILabel
struct UILabel_t1176;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FriendChooseLogic
struct FriendChooseLogic_t1413  : public MonoBehaviour_t18
{
	// ItemSlotLogic FriendChooseLogic::m_ItemSlot
	ItemSlotLogic_t1237 * ___m_ItemSlot;
	// UnityEngine.GameObject FriendChooseLogic::m_ButtonGrid
	GameObject_t9 * ___m_ButtonGrid;
	// UnityEngine.GameObject FriendChooseLogic::m_ChooseFriend
	GameObject_t9 * ___m_ChooseFriend;
	// UnityEngine.GameObject FriendChooseLogic::m_ButtonClose
	GameObject_t9 * ___m_ButtonClose;
	// UIInput FriendChooseLogic::inputNum
	UIInput_t1231 * ___inputNum;
	// UILabel FriendChooseLogic::m_LabelName
	UILabel_t1176 * ___m_LabelName;
	// System.UInt64 FriendChooseLogic::m_FriendGuid
	uint64_t ___m_FriendGuid;
	// System.Int32 FriendChooseLogic::m_minValue
	int32_t ___m_minValue;
	// System.Int32 FriendChooseLogic::m_maxValue
	int32_t ___m_maxValue;
	// System.Int32 FriendChooseLogic::m_curNum
	int32_t ___m_curNum;
	// System.Int32 FriendChooseLogic::m_stepValue
	int32_t ___m_stepValue;
	// System.Boolean FriendChooseLogic::m_isAdd
	bool ___m_isAdd;
	// System.Boolean FriendChooseLogic::m_isDel
	bool ___m_isDel;
};
struct FriendChooseLogic_t1413_StaticFields{
	// System.Int32 FriendChooseLogic::RoseDataId0
	int32_t ___RoseDataId0;
	// System.Int32 FriendChooseLogic::RoseDataId1
	int32_t ___RoseDataId1;
	// System.Int32 FriendChooseLogic::RoseDataId2
	int32_t ___RoseDataId2;
	// System.Int32 FriendChooseLogic::RoseDataId3
	int32_t ___RoseDataId3;
	// System.Int32 FriendChooseLogic::RoseDataId4
	int32_t ___RoseDataId4;
	// System.Int32 FriendChooseLogic::RoseDataId5
	int32_t ___RoseDataId5;
	// System.Int32 FriendChooseLogic::RoseDataId6
	int32_t ___RoseDataId6;
	// System.Int32 FriendChooseLogic::RoseDataId7
	int32_t ___RoseDataId7;
};
