#pragma once
#include <stdint.h>
// UIToggle[]
struct UIToggleU5BU5D_t1221;
// UILabel
struct UILabel_t1176;
// UIInput
struct UIInput_t1231;
// UIControllerBase`1<MakeHongBaoWindow>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_43.h"
// MakeHongBaoWindow
struct MakeHongBaoWindow_t2019  : public UIControllerBase_1_t2020
{
	// UIToggle[] MakeHongBaoWindow::m_TypeToggle
	UIToggleU5BU5D_t1221* ___m_TypeToggle;
	// UIToggle[] MakeHongBaoWindow::m_ChannelToggle
	UIToggleU5BU5D_t1221* ___m_ChannelToggle;
	// UILabel MakeHongBaoWindow::m_ScoreLabel
	UILabel_t1176 * ___m_ScoreLabel;
	// System.Int32 MakeHongBaoWindow::m_YuanBao
	int32_t ___m_YuanBao;
	// System.Int32 MakeHongBaoWindow::m_Score
	int32_t ___m_Score;
	// System.Boolean MakeHongBaoWindow::m_isAdd
	bool ___m_isAdd;
	// System.Boolean MakeHongBaoWindow::m_isDel
	bool ___m_isDel;
	// UIInput MakeHongBaoWindow::m_InputNum
	UIInput_t1231 * ___m_InputNum;
	// System.Int32 MakeHongBaoWindow::m_maxValue
	int32_t ___m_maxValue;
	// System.Int32 MakeHongBaoWindow::m_MinValue
	int32_t ___m_MinValue;
};
