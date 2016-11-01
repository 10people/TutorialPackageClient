#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UIInput
struct UIInput_t1231;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RebuyChooseWindow
struct RebuyChooseWindow_t1921  : public MonoBehaviour_t18
{
	// UILabel RebuyChooseWindow::m_LabelName
	UILabel_t1176 * ___m_LabelName;
	// UIInput RebuyChooseWindow::m_InputNum
	UIInput_t1231 * ___m_InputNum;
	// UILabel RebuyChooseWindow::m_Yuanbao
	UILabel_t1176 * ___m_Yuanbao;
	// System.Int32 RebuyChooseWindow::m_RebuyCopySceneId
	int32_t ___m_RebuyCopySceneId;
	// System.Boolean RebuyChooseWindow::m_RebuyCopySceneSingle
	bool ___m_RebuyCopySceneSingle;
	// System.Int32 RebuyChooseWindow::m_curNum
	int32_t ___m_curNum;
	// System.Int32 RebuyChooseWindow::m_minValue
	int32_t ___m_minValue;
	// System.Int32 RebuyChooseWindow::m_maxValue
	int32_t ___m_maxValue;
	// System.Boolean RebuyChooseWindow::m_isAdd
	bool ___m_isAdd;
	// System.Boolean RebuyChooseWindow::m_isDel
	bool ___m_isDel;
	// System.Int32 RebuyChooseWindow::m_stepValue
	int32_t ___m_stepValue;
	// System.Int32 RebuyChooseWindow::m_nYuanbBao
	int32_t ___m_nYuanbBao;
};
