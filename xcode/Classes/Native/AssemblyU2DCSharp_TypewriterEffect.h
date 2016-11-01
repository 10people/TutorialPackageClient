#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TypewriterEffect
struct TypewriterEffect_t5274  : public MonoBehaviour_t18
{
	// System.Int32 TypewriterEffect::charsPerSecond
	int32_t ___charsPerSecond;
	// UILabel TypewriterEffect::mLabel
	UILabel_t1176 * ___mLabel;
	// System.String TypewriterEffect::mText
	String_t* ___mText;
	// System.Int32 TypewriterEffect::mOffset
	int32_t ___mOffset;
	// System.Single TypewriterEffect::mNextChar
	float ___mNextChar;
};
