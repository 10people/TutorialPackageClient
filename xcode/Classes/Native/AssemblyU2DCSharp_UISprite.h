#pragma once
#include <stdint.h>
// UIAtlas
struct UIAtlas_t1593;
// System.String
struct String_t;
// UISprite/OnPostFillCallback
struct OnPostFillCallback_t5433;
// UISprite/OnRenderCallback
struct OnRenderCallback_t5434;
// UISpriteData
struct UISpriteData_t5344;
// UIWidget
#include "AssemblyU2DCSharp_UIWidget.h"
// UISprite/Type
#include "AssemblyU2DCSharp_UISprite_Type.h"
// UISprite/FillDirection
#include "AssemblyU2DCSharp_UISprite_FillDirection.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UISprite
struct UISprite_t1202  : public UIWidget_t5195
{
	// UIAtlas UISprite::mAtlas
	UIAtlas_t1593 * ___mAtlas;
	// System.String UISprite::mSpriteName
	String_t* ___mSpriteName;
	// System.Boolean UISprite::mFillCenter
	bool ___mFillCenter;
	// UISprite/Type UISprite::mType
	int32_t ___mType;
	// UISprite/FillDirection UISprite::mFillDirection
	int32_t ___mFillDirection;
	// System.Single UISprite::mFillAmount
	float ___mFillAmount;
	// System.Boolean UISprite::mInvert
	bool ___mInvert;
	// UISprite/OnPostFillCallback UISprite::onPostFill
	OnPostFillCallback_t5433 * ___onPostFill;
	// UISprite/OnRenderCallback UISprite::onRender
	OnRenderCallback_t5434 * ___onRender;
	// UISpriteData UISprite::mSprite
	UISpriteData_t5344 * ___mSprite;
	// UnityEngine.Rect UISprite::mInnerUV
	Rect_t5068  ___mInnerUV;
	// UnityEngine.Rect UISprite::mOuterUV
	Rect_t5068  ___mOuterUV;
	// System.Boolean UISprite::mSpriteSet
	bool ___mSpriteSet;
};
