#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t5344;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// BMSymbol
struct BMSymbol_t5345  : public Object_t
{
	// System.String BMSymbol::sequence
	String_t* ___sequence;
	// System.String BMSymbol::spriteName
	String_t* ___spriteName;
	// UISpriteData BMSymbol::mSprite
	UISpriteData_t5344 * ___mSprite;
	// System.Boolean BMSymbol::mIsValid
	bool ___mIsValid;
	// System.Int32 BMSymbol::mLength
	int32_t ___mLength;
	// System.Int32 BMSymbol::mOffsetX
	int32_t ___mOffsetX;
	// System.Int32 BMSymbol::mOffsetY
	int32_t ___mOffsetY;
	// System.Int32 BMSymbol::mWidth
	int32_t ___mWidth;
	// System.Int32 BMSymbol::mHeight
	int32_t ___mHeight;
	// System.Int32 BMSymbol::mAdvance
	int32_t ___mAdvance;
	// UnityEngine.Rect BMSymbol::mUV
	Rect_t5068  ___mUV;
};
