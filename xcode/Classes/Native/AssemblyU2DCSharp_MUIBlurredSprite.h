#pragma once
#include <stdint.h>
// UnityEngine.AnimationCurve
struct AnimationCurve_t4583;
struct AnimationCurve_t4583_marshaled;
// MUIBlurredSprite/VoidDelegate
struct VoidDelegate_t5194;
// UISprite
struct UISprite_t1202;
// MUITweenValue
struct MUITweenValue_t5189;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MUIBlurredSprite
struct MUIBlurredSprite_t5193  : public MonoBehaviour_t18
{
	// UnityEngine.AnimationCurve MUIBlurredSprite::heightCurve
	AnimationCurve_t4583 * ___heightCurve;
	// UnityEngine.AnimationCurve MUIBlurredSprite::alphaCurve
	AnimationCurve_t4583 * ___alphaCurve;
	// System.Single MUIBlurredSprite::duration
	float ___duration;
	// System.Int32 MUIBlurredSprite::pieceCount
	int32_t ___pieceCount;
	// System.Int32 MUIBlurredSprite::shakeRange
	int32_t ___shakeRange;
	// System.Single MUIBlurredSprite::redMove
	float ___redMove;
	// MUIBlurredSprite/VoidDelegate MUIBlurredSprite::onBlurredFinish
	VoidDelegate_t5194 * ___onBlurredFinish;
	// UISprite MUIBlurredSprite::mSp
	UISprite_t1202 * ___mSp;
	// MUITweenValue MUIBlurredSprite::tweenValue
	MUITweenValue_t5189 * ___tweenValue;
	// System.Boolean MUIBlurredSprite::isEnd
	bool ___isEnd;
	// System.Boolean MUIBlurredSprite::isChange
	bool ___isChange;
	// System.Boolean MUIBlurredSprite::isReverse
	bool ___isReverse;
	// System.Int32 MUIBlurredSprite::timeCount
	int32_t ___timeCount;
	// System.Single MUIBlurredSprite::spriteHeight
	float ___spriteHeight;
};
