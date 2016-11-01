#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UIGrid
struct UIGrid_t1199;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ActiveAwardWindow
struct ActiveAwardWindow_t1965  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject ActiveAwardWindow::m_AwardTip
	GameObject_t9 * ___m_AwardTip;
	// UILabel ActiveAwardWindow::m_AwardTipText
	UILabel_t1176 * ___m_AwardTipText;
	// UIGrid ActiveAwardWindow::m_ItemGrid
	UIGrid_t1199 * ___m_ItemGrid;
	// System.Int32 ActiveAwardWindow::m_nActiveness
	int32_t ___m_nActiveness;
	// UnityEngine.GameObject ActiveAwardWindow::m_AwardItem
	GameObject_t9 * ___m_AwardItem;
};
