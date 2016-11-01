#pragma once
#include <stdint.h>
// MovieUI
struct MovieUI_t1588;
// UISprite
struct UISprite_t1202;
// TweenHeight
struct TweenHeight_t1589;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MovieUI
struct MovieUI_t1588  : public MonoBehaviour_t18
{
	// UISprite MovieUI::m_StoryDialogMovieUp
	UISprite_t1202 * ___m_StoryDialogMovieUp;
	// UISprite MovieUI::m_StoryDialogMovieDn
	UISprite_t1202 * ___m_StoryDialogMovieDn;
	// TweenHeight MovieUI::m_cahcedMoveBgUpTweener
	TweenHeight_t1589 * ___m_cahcedMoveBgUpTweener;
	// TweenHeight MovieUI::m_cahcedMoveBgDownTweener
	TweenHeight_t1589 * ___m_cahcedMoveBgDownTweener;
};
struct MovieUI_t1588_StaticFields{
	// MovieUI MovieUI::m_Instance
	MovieUI_t1588 * ___m_Instance;
};
