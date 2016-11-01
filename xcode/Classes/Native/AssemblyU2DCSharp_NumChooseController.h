#pragma once
#include <stdint.h>
// UIInput
struct UIInput_t1231;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// NumChooseController/OKClickDelegate
struct OKClickDelegate_t1813;
// UIControllerBase`1<NumChooseController>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_30.h"
// NumChooseController
struct NumChooseController_t1815  : public UIControllerBase_1_t1816
{
	// UIInput NumChooseController::inputNum
	UIInput_t1231 * ___inputNum;
	// UILabel NumChooseController::title
	UILabel_t1176 * ___title;
	// UILabel NumChooseController::m_TotalTitle
	UILabel_t1176 * ___m_TotalTitle;
	// UILabel NumChooseController::m_OkButomTitle
	UILabel_t1176 * ___m_OkButomTitle;
	// UnityEngine.GameObject NumChooseController::m_ComsumePart
	GameObject_t9 * ___m_ComsumePart;
	// UILabel NumChooseController::m_ComsumeName
	UILabel_t1176 * ___m_ComsumeName;
	// UISprite NumChooseController::m_ComsumeIcon
	UISprite_t1202 * ___m_ComsumeIcon;
	// UILabel NumChooseController::m_ComsumeNum
	UILabel_t1176 * ___m_ComsumeNum;
	// NumChooseController/OKClickDelegate NumChooseController::delOkClick
	OKClickDelegate_t1813 * ___delOkClick;
	// System.Int32 NumChooseController::m_minValue
	int32_t ___m_minValue;
	// System.Int32 NumChooseController::m_maxValue
	int32_t ___m_maxValue;
	// System.Int32 NumChooseController::m_curNum
	int32_t ___m_curNum;
	// System.Int32 NumChooseController::m_stepValue
	int32_t ___m_stepValue;
	// System.Boolean NumChooseController::m_isAdd
	bool ___m_isAdd;
	// System.Boolean NumChooseController::m_isDel
	bool ___m_isDel;
};
