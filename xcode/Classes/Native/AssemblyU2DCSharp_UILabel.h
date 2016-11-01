#pragma once
#include <stdint.h>
// UIFont
struct UIFont_t1286;
// System.String
struct String_t;
// UIWidget
#include "AssemblyU2DCSharp_UIWidget.h"
// UILabel/Effect
#include "AssemblyU2DCSharp_UILabel_Effect.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UIFont/SymbolStyle
#include "AssemblyU2DCSharp_UIFont_SymbolStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UILabel/Overflow
#include "AssemblyU2DCSharp_UILabel_Overflow.h"
// UILabel
struct UILabel_t1176  : public UIWidget_t5195
{
	// UIFont UILabel::mFont
	UIFont_t1286 * ___mFont;
	// System.String UILabel::mText
	String_t* ___mText;
	// System.Boolean UILabel::mEncoding
	bool ___mEncoding;
	// System.Int32 UILabel::mMaxLineCount
	int32_t ___mMaxLineCount;
	// System.Boolean UILabel::mPassword
	bool ___mPassword;
	// System.Boolean UILabel::mShowLastChar
	bool ___mShowLastChar;
	// UILabel/Effect UILabel::mEffectStyle
	int32_t ___mEffectStyle;
	// UnityEngine.Color UILabel::mEffectColor
	Color_t939  ___mEffectColor;
	// UIFont/SymbolStyle UILabel::mSymbols
	int32_t ___mSymbols;
	// UnityEngine.Vector2 UILabel::mEffectDistance
	Vector2_t12  ___mEffectDistance;
	// UILabel/Overflow UILabel::mOverflow
	int32_t ___mOverflow;
	// System.Boolean UILabel::mShrinkToFit
	bool ___mShrinkToFit;
	// System.Int32 UILabel::mMaxLineWidth
	int32_t ___mMaxLineWidth;
	// System.Int32 UILabel::mMaxLineHeight
	int32_t ___mMaxLineHeight;
	// System.Single UILabel::mLineWidth
	float ___mLineWidth;
	// System.Boolean UILabel::mMultiline
	bool ___mMultiline;
	// System.Boolean UILabel::mShouldBeProcessed
	bool ___mShouldBeProcessed;
	// System.String UILabel::mProcessedText
	String_t* ___mProcessedText;
	// System.Boolean UILabel::mPremultiply
	bool ___mPremultiply;
	// UnityEngine.Vector2 UILabel::mSize
	Vector2_t12  ___mSize;
	// System.Single UILabel::mScale
	float ___mScale;
	// System.Int32 UILabel::mLastWidth
	int32_t ___mLastWidth;
	// System.Int32 UILabel::mLastHeight
	int32_t ___mLastHeight;
	// System.Boolean UILabel::useDicTable
	bool ___useDicTable;
	// System.Int32 UILabel::curDicID
	int32_t ___curDicID;
};
