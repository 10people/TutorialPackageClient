#pragma once
#include <stdint.h>
// SNSItemLogic[]
struct SNSItemLogicU5BU5D_t2056;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SNSWindow
struct SNSWindow_t2057  : public MonoBehaviour_t18
{
	// SNSItemLogic[] SNSWindow::m_LevelRewardItem
	SNSItemLogicU5BU5D_t2056* ___m_LevelRewardItem;
	// SNSItemLogic[] SNSWindow::m_ShareRewardItem
	SNSItemLogicU5BU5D_t2056* ___m_ShareRewardItem;
	// UILabel SNSWindow::m_labelTimes
	UILabel_t1176 * ___m_labelTimes;
	// UILabel SNSWindow::m_inputCode
	UILabel_t1176 * ___m_inputCode;
	// UnityEngine.GameObject SNSWindow::m_NanGuaButton
	GameObject_t9 * ___m_NanGuaButton;
};
