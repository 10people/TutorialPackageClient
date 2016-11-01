#pragma once
#include <stdint.h>
// UIInput
struct UIInput_t1231;
// UILabel
struct UILabel_t1176;
// UseFlowerNumChooseController/OKClickDelegate
struct OKClickDelegate_t1850;
// System.String
struct String_t;
// UIControllerBase`1<UseFlowerNumChooseController>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_38.h"
// UseFlowerNumChooseController
struct UseFlowerNumChooseController_t1852  : public UIControllerBase_1_t1853
{
	// UIInput UseFlowerNumChooseController::inputNum
	UIInput_t1231 * ___inputNum;
	// UILabel UseFlowerNumChooseController::title
	UILabel_t1176 * ___title;
	// UILabel UseFlowerNumChooseController::info
	UILabel_t1176 * ___info;
	// UseFlowerNumChooseController/OKClickDelegate UseFlowerNumChooseController::delOkClick
	OKClickDelegate_t1850 * ___delOkClick;
	// System.Int32 UseFlowerNumChooseController::m_minValue
	int32_t ___m_minValue;
	// System.Int32 UseFlowerNumChooseController::m_maxValue
	int32_t ___m_maxValue;
	// System.Int32 UseFlowerNumChooseController::m_curNum
	int32_t ___m_curNum;
	// System.Int32 UseFlowerNumChooseController::m_stepValue
	int32_t ___m_stepValue;
	// System.Boolean UseFlowerNumChooseController::m_isAdd
	bool ___m_isAdd;
	// System.Boolean UseFlowerNumChooseController::m_isDel
	bool ___m_isDel;
	// System.String UseFlowerNumChooseController::m_itemName
	String_t* ___m_itemName;
	// System.Int32 UseFlowerNumChooseController::m_dataid
	int32_t ___m_dataid;
};
