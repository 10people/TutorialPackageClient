#pragma once
#include <stdint.h>
// ShareRewardItem[]
struct ShareRewardItemU5BU5D_t2063;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// ShareRootWindow
struct ShareRootWindow_t2064;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ShareType
#include "AssemblyU2DCSharp_ShareType.h"
// OpenType
#include "AssemblyU2DCSharp_OpenType.h"
// ShareRootWindow
struct ShareRootWindow_t2064  : public MonoBehaviour_t18
{
	// ShareRewardItem[] ShareRootWindow::m_JoinRewardItem
	ShareRewardItemU5BU5D_t2063* ___m_JoinRewardItem;
	// ShareRewardItem[] ShareRootWindow::m_ShareRewardItem
	ShareRewardItemU5BU5D_t2063* ___m_ShareRewardItem;
	// UILabel ShareRootWindow::m_labelTimes
	UILabel_t1176 * ___m_labelTimes;
	// UILabel ShareRootWindow::m_inputCode
	UILabel_t1176 * ___m_inputCode;
	// UILabel ShareRootWindow::m_labelDesc
	UILabel_t1176 * ___m_labelDesc;
	// UnityEngine.GameObject ShareRootWindow::m_ActiviteGameObject
	GameObject_t9 * ___m_ActiviteGameObject;
	// UnityEngine.GameObject ShareRootWindow::m_ShareGameObject
	GameObject_t9 * ___m_ShareGameObject;
	// ShareType ShareRootWindow::m_nShareType
	int32_t ___m_nShareType;
	// OpenType ShareRootWindow::m_nOpenType
	int32_t ___m_nOpenType;
};
struct ShareRootWindow_t2064_StaticFields{
	// System.Int32 ShareRootWindow::REWARD_ITEMCOUNT_MAX
	int32_t ___REWARD_ITEMCOUNT_MAX;
	// ShareRootWindow ShareRootWindow::m_Instance
	ShareRootWindow_t2064 * ___m_Instance;
	// ShareType ShareRootWindow::m_sShareType
	int32_t ___m_sShareType;
	// OpenType ShareRootWindow::m_sOpenType
	int32_t ___m_sOpenType;
};
