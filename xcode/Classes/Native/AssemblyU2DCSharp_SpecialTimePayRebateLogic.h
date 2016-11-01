#pragma once
#include <stdint.h>
// SpecialTimePayRebateItemLogic[]
struct SpecialTimePayRebateItemLogicU5BU5D_t1755;
// UIGrid
struct UIGrid_t1199;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// SpecialTimePayAwardItem
struct SpecialTimePayAwardItem_t1753;
// SpecialTimePayRebateLogic
struct SpecialTimePayRebateLogic_t1756;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SpecialTimePayRebateLogic
struct SpecialTimePayRebateLogic_t1756  : public MonoBehaviour_t18
{
	// SpecialTimePayRebateItemLogic[] SpecialTimePayRebateLogic::m_RebateUnit
	SpecialTimePayRebateItemLogicU5BU5D_t1755* ___m_RebateUnit;
	// UIGrid SpecialTimePayRebateLogic::m_UnitGrid
	UIGrid_t1199 * ___m_UnitGrid;
	// UILabel SpecialTimePayRebateLogic::m_RebateValue
	UILabel_t1176 * ___m_RebateValue;
	// UILabel SpecialTimePayRebateLogic::m_StartEndTime
	UILabel_t1176 * ___m_StartEndTime;
	// UILabel SpecialTimePayRebateLogic::m_CostTypeDesc
	UILabel_t1176 * ___m_CostTypeDesc;
	// UnityEngine.GameObject SpecialTimePayRebateLogic::m_RewardDescWindow
	GameObject_t9 * ___m_RewardDescWindow;
	// SpecialTimePayAwardItem SpecialTimePayRebateLogic::m_SpecialTimePayAwardItem
	SpecialTimePayAwardItem_t1753 * ___m_SpecialTimePayAwardItem;
	// UIGrid SpecialTimePayRebateLogic::m_RewardItemGrid
	UIGrid_t1199 * ___m_RewardItemGrid;
};
struct SpecialTimePayRebateLogic_t1756_StaticFields{
	// SpecialTimePayRebateLogic SpecialTimePayRebateLogic::m_Instance
	SpecialTimePayRebateLogic_t1756 * ___m_Instance;
};
