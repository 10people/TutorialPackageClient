#pragma once
#include <stdint.h>
// GameTextList
struct GameTextList_t1184;
// GameUIInput
struct GameUIInput_t1185;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// GameChatInput
struct GameChatInput_t1186  : public MonoBehaviour_t18
{
	// GameTextList GameChatInput::textList
	GameTextList_t1184 * ___textList;
	// GameUIInput GameChatInput::mInput
	GameUIInput_t1185 * ___mInput;
	// System.Boolean GameChatInput::mIgnoreNextEnter
	bool ___mIgnoreNextEnter;
};
