#pragma once
#include <stdint.h>
// JuYiYiTangWindow
struct JuYiYiTangWindow_t1505;
// UILabel
struct UILabel_t1176;
// JuYiRewardItemLogic[]
struct JuYiRewardItemLogicU5BU5D_t1506;
// UISprite
struct UISprite_t1202;
// System.Int32[]
struct Int32U5BU5D_t116;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// JuYiYiTangWindow
struct JuYiYiTangWindow_t1505  : public MonoBehaviour_t18
{
	// UILabel JuYiYiTangWindow::m_OpenTimeLabel
	UILabel_t1176 * ___m_OpenTimeLabel;
	// JuYiRewardItemLogic[] JuYiYiTangWindow::m_JuYiReward
	JuYiRewardItemLogicU5BU5D_t1506* ___m_JuYiReward;
	// UISprite JuYiYiTangWindow::m_JuYiProgress
	UISprite_t1202 * ___m_JuYiProgress;
	// System.Int32[] JuYiYiTangWindow::JUYILINGAWARD_COUNT
	Int32U5BU5D_t116* ___JUYILINGAWARD_COUNT;
};
struct JuYiYiTangWindow_t1505_StaticFields{
	// System.Int32 JuYiYiTangWindow::JUYIYITANG_RECEIVERMAX
	int32_t ___JUYIYITANG_RECEIVERMAX;
	// System.Int32 JuYiYiTangWindow::JUYIYITANG_AWARDCOUNT
	int32_t ___JUYIYITANG_AWARDCOUNT;
	// JuYiYiTangWindow JuYiYiTangWindow::m_Instance
	JuYiYiTangWindow_t1505 * ___m_Instance;
};
