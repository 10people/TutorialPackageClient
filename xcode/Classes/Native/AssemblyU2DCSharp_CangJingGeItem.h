#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// CangJingGeItem
struct CangJingGeItem_t1886  : public MonoBehaviour_t18
{
	// UISprite CangJingGeItem::m_Bg
	UISprite_t1202 * ___m_Bg;
	// UnityEngine.GameObject CangJingGeItem::m_Lock
	GameObject_t9 * ___m_Lock;
	// UILabel CangJingGeItem::m_Layer
	UILabel_t1176 * ___m_Layer;
	// UILabel CangJingGeItem::m_Enemy
	UILabel_t1176 * ___m_Enemy;
	// System.Int32 CangJingGeItem::m_nTier
	int32_t ___m_nTier;
	// System.String CangJingGeItem::strChooseNor
	String_t* ___strChooseNor;
	// System.String CangJingGeItem::strChoosePush
	String_t* ___strChoosePush;
};
