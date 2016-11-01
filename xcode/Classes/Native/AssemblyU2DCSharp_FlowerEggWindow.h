#pragma once
#include <stdint.h>
// FlowerEggWindow
struct FlowerEggWindow_t1408;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIInput
struct UIInput_t1231;
// UIGrid
struct UIGrid_t1199;
// FlowerEggItemSlot
struct FlowerEggItemSlot_t1409;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FlowerEggWindow/ShowType
#include "AssemblyU2DCSharp_FlowerEggWindow_ShowType.h"
// FlowerEggWindow
struct FlowerEggWindow_t1408  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject FlowerEggWindow::m_prefItem
	GameObject_t9 * ___m_prefItem;
	// UILabel FlowerEggWindow::m_LableNumber
	UILabel_t1176 * ___m_LableNumber;
	// UIInput FlowerEggWindow::m_NumInput
	UIInput_t1231 * ___m_NumInput;
	// UIGrid FlowerEggWindow::m_DynamicItemGrid
	UIGrid_t1199 * ___m_DynamicItemGrid;
	// System.UInt64 FlowerEggWindow::m_Guid
	uint64_t ___m_Guid;
	// FlowerEggWindow/ShowType FlowerEggWindow::m_Type
	int32_t ___m_Type;
	// System.Int32 FlowerEggWindow::m_nItemNum
	int32_t ___m_nItemNum;
	// FlowerEggItemSlot FlowerEggWindow::m_CurSelect
	FlowerEggItemSlot_t1409 * ___m_CurSelect;
};
struct FlowerEggWindow_t1408_StaticFields{
	// System.Int32 FlowerEggWindow::CHARM_ITEM_ID
	int32_t ___CHARM_ITEM_ID;
	// FlowerEggWindow FlowerEggWindow::m_Instance
	FlowerEggWindow_t1408 * ___m_Instance;
	// System.UInt64 FlowerEggWindow::m_sGuid
	uint64_t ___m_sGuid;
	// FlowerEggWindow/ShowType FlowerEggWindow::m_sType
	int32_t ___m_sType;
};
