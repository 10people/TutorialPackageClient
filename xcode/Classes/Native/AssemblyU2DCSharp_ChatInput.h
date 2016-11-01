#pragma once
#include <stdint.h>
// UITextList
struct UITextList_t5254;
// UIInput
struct UIInput_t1231;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ChatInput
struct ChatInput_t5255  : public MonoBehaviour_t18
{
	// UITextList ChatInput::textList
	UITextList_t5254 * ___textList;
	// System.Boolean ChatInput::fillWithDummyData
	bool ___fillWithDummyData;
	// UIInput ChatInput::mInput
	UIInput_t1231 * ___mInput;
	// System.Boolean ChatInput::mIgnoreNextEnter
	bool ___mIgnoreNextEnter;
};
