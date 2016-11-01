#pragma once
#include <stdint.h>
// CostRebateItemLogic[]
struct CostRebateItemLogicU5BU5D_t1359;
// UIGrid
struct UIGrid_t1199;
// UILabel
struct UILabel_t1176;
// CostRebateLogic
struct CostRebateLogic_t1360;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CostRebateLogic
struct CostRebateLogic_t1360  : public MonoBehaviour_t18
{
	// CostRebateItemLogic[] CostRebateLogic::m_RebateUnit
	CostRebateItemLogicU5BU5D_t1359* ___m_RebateUnit;
	// UIGrid CostRebateLogic::m_UnitGrid
	UIGrid_t1199 * ___m_UnitGrid;
	// UILabel CostRebateLogic::m_RebateValue
	UILabel_t1176 * ___m_RebateValue;
	// UILabel CostRebateLogic::m_StartEndTime
	UILabel_t1176 * ___m_StartEndTime;
	// UILabel CostRebateLogic::m_CostTypeDesc
	UILabel_t1176 * ___m_CostTypeDesc;
};
struct CostRebateLogic_t1360_StaticFields{
	// CostRebateLogic CostRebateLogic::m_Instance
	CostRebateLogic_t1360 * ___m_Instance;
};
