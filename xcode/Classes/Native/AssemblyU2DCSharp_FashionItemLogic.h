#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FashionItemLogic
struct FashionItemLogic_t1401  : public MonoBehaviour_t18
{
	// UISprite FashionItemLogic::m_ItemIcon
	UISprite_t1202 * ___m_ItemIcon;
	// UILabel FashionItemLogic::m_ItemName
	UILabel_t1176 * ___m_ItemName;
	// UILabel FashionItemLogic::m_ItemName2
	UILabel_t1176 * ___m_ItemName2;
	// UISprite FashionItemLogic::m_Highlight
	UISprite_t1202 * ___m_Highlight;
	// UnityEngine.GameObject FashionItemLogic::m_ChosenSprite
	GameObject_t9 * ___m_ChosenSprite;
	// System.Int32 FashionItemLogic::m_FashionID
	int32_t ___m_FashionID;
};
