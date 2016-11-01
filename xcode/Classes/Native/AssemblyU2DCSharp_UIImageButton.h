#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIImageButton
struct UIImageButton_t1204  : public MonoBehaviour_t18
{
	// UISprite UIImageButton::target
	UISprite_t1202 * ___target;
	// System.String UIImageButton::normalSprite
	String_t* ___normalSprite;
	// System.String UIImageButton::hoverSprite
	String_t* ___hoverSprite;
	// System.String UIImageButton::pressedSprite
	String_t* ___pressedSprite;
	// System.String UIImageButton::disabledSprite
	String_t* ___disabledSprite;
	// System.Boolean UIImageButton::m_IsNeedGreyColour
	bool ___m_IsNeedGreyColour;
};
