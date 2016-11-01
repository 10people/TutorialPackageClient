#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BePowerData/BePowerListItemData
#include "AssemblyU2DCSharp_BePowerData_BePowerListItemData.h"
// BePowerListItem
struct BePowerListItem_t1862  : public MonoBehaviour_t18
{
	// BePowerData/BePowerListItemData BePowerListItem::m_data
	BePowerListItemData_t1863  ___m_data;
	// UILabel BePowerListItem::m_labelTitle
	UILabel_t1176 * ___m_labelTitle;
	// UILabel BePowerListItem::m_labelDesc
	UILabel_t1176 * ___m_labelDesc;
	// UILabel BePowerListItem::m_labelFuncBtn1
	UILabel_t1176 * ___m_labelFuncBtn1;
	// UnityEngine.GameObject BePowerListItem::m_FunctionButton1
	GameObject_t9 * ___m_FunctionButton1;
	// UILabel BePowerListItem::m_labelFuncBtn2
	UILabel_t1176 * ___m_labelFuncBtn2;
	// UnityEngine.GameObject BePowerListItem::m_FunctionButton2
	GameObject_t9 * ___m_FunctionButton2;
};
