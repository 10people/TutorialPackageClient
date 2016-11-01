#pragma once
#include <stdint.h>
// UILongPressButton/OnLongPressHandler
struct OnLongPressHandler_t5314;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UILongPressButton
struct UILongPressButton_t5315  : public MonoBehaviour_t18
{
	// System.Single UILongPressButton::pressAndHoldDelay
	float ___pressAndHoldDelay;
	// UILongPressButton/OnLongPressHandler UILongPressButton::OnLongPress
	OnLongPressHandler_t5314 * ___OnLongPress;
	// System.Single UILongPressButton::mPressTime
	float ___mPressTime;
	// System.Boolean UILongPressButton::mIsNotify
	bool ___mIsNotify;
};
