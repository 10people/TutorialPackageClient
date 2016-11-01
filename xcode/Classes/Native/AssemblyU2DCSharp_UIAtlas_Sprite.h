#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UIAtlas/Sprite
struct Sprite_t5392  : public Object_t
{
	// System.String UIAtlas/Sprite::name
	String_t* ___name;
	// UnityEngine.Rect UIAtlas/Sprite::outer
	Rect_t5068  ___outer;
	// UnityEngine.Rect UIAtlas/Sprite::inner
	Rect_t5068  ___inner;
	// System.Boolean UIAtlas/Sprite::rotated
	bool ___rotated;
	// System.Single UIAtlas/Sprite::paddingLeft
	float ___paddingLeft;
	// System.Single UIAtlas/Sprite::paddingRight
	float ___paddingRight;
	// System.Single UIAtlas/Sprite::paddingTop
	float ___paddingTop;
	// System.Single UIAtlas/Sprite::paddingBottom
	float ___paddingBottom;
};
