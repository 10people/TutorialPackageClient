#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t133;
// BMFont
struct BMFont_t5342;
// UIAtlas
struct UIAtlas_t1593;
// UIFont
struct UIFont_t1286;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t5413;
// UnityEngine.Font
struct Font_t5414;
// UISpriteData
struct UISpriteData_t5344;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t5358;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"
// UIFont
struct UIFont_t1286  : public MonoBehaviour_t18
{
	// UnityEngine.Material UIFont::mMat
	Material_t133 * ___mMat;
	// UnityEngine.Rect UIFont::mUVRect
	Rect_t5068  ___mUVRect;
	// BMFont UIFont::mFont
	BMFont_t5342 * ___mFont;
	// System.Int32 UIFont::mSpacingX
	int32_t ___mSpacingX;
	// System.Int32 UIFont::mSpacingY
	int32_t ___mSpacingY;
	// UIAtlas UIFont::mAtlas
	UIAtlas_t1593 * ___mAtlas;
	// UIFont UIFont::mReplacement
	UIFont_t1286 * ___mReplacement;
	// System.Single UIFont::mPixelSize
	float ___mPixelSize;
	// System.Collections.Generic.List`1<BMSymbol> UIFont::mSymbols
	List_1_t5413 * ___mSymbols;
	// UnityEngine.Font UIFont::mDynamicFont
	Font_t5414 * ___mDynamicFont;
	// System.Int32 UIFont::mDynamicFontSize
	int32_t ___mDynamicFontSize;
	// UnityEngine.FontStyle UIFont::mDynamicFontStyle
	int32_t ___mDynamicFontStyle;
	// System.Single UIFont::mDynamicFontOffset
	float ___mDynamicFontOffset;
	// UISpriteData UIFont::mSprite
	UISpriteData_t5344 * ___mSprite;
	// System.Int32 UIFont::mPMA
	int32_t ___mPMA;
	// System.Boolean UIFont::mSpriteSet
	bool ___mSpriteSet;
	// System.Collections.Generic.List`1<UnityEngine.Color> UIFont::mColors
	List_1_t5358 * ___mColors;
};
struct UIFont_t1286_StaticFields{
	// UnityEngine.CharacterInfo UIFont::mTemp
	CharacterInfo_t5415  ___mTemp;
	// UnityEngine.CharacterInfo UIFont::mChar
	CharacterInfo_t5415  ___mChar;
};
