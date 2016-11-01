#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// RankSubClassItem
struct RankSubClassItem_t1920  : public MonoBehaviour_t18
{
	// UILabel RankSubClassItem::m_NameLabel
	UILabel_t1176 * ___m_NameLabel;
	// UnityEngine.GameObject RankSubClassItem::m_ClickSprite
	GameObject_t9 * ___m_ClickSprite;
	// UnityEngine.GameObject RankSubClassItem::m_NornalSprite
	GameObject_t9 * ___m_NornalSprite;
	// UnityEngine.Color RankSubClassItem::normalColor
	Color_t939  ___normalColor;
	// UnityEngine.Color RankSubClassItem::clickColor
	Color_t939  ___clickColor;
	// System.Int32 RankSubClassItem::m_nClass
	int32_t ___m_nClass;
	// System.Int32 RankSubClassItem::m_nRanType
	int32_t ___m_nRanType;
};
