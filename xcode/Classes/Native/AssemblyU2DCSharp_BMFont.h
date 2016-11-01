#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<BMGlyph>
struct List_1_t5340;
// System.Collections.Generic.Dictionary`2<System.Int32,BMGlyph>
struct Dictionary_2_t5341;
// System.Object
#include "mscorlib_System_Object.h"
// BMFont
struct BMFont_t5342  : public Object_t
{
	// System.Int32 BMFont::mSize
	int32_t ___mSize;
	// System.Int32 BMFont::mBase
	int32_t ___mBase;
	// System.Int32 BMFont::mWidth
	int32_t ___mWidth;
	// System.Int32 BMFont::mHeight
	int32_t ___mHeight;
	// System.String BMFont::mSpriteName
	String_t* ___mSpriteName;
	// System.Collections.Generic.List`1<BMGlyph> BMFont::mSaved
	List_1_t5340 * ___mSaved;
	// System.Collections.Generic.Dictionary`2<System.Int32,BMGlyph> BMFont::mDict
	Dictionary_2_t5341 * ___mDict;
};
