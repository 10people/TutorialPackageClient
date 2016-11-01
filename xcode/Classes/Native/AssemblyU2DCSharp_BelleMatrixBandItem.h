#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BelleMatrixBandItem
struct BelleMatrixBandItem_t1869  : public MonoBehaviour_t18
{
	// UISprite BelleMatrixBandItem::m_SprIcon
	UISprite_t1202 * ___m_SprIcon;
	// UISprite BelleMatrixBandItem::m_plusIcon
	UISprite_t1202 * ___m_plusIcon;
	// UnityEngine.GameObject BelleMatrixBandItem::m_recommondFlag
	GameObject_t9 * ___m_recommondFlag;
	// System.Int32 BelleMatrixBandItem::belleID
	int32_t ___belleID;
	// System.Int32 BelleMatrixBandItem::curMatrixIndex
	int32_t ___curMatrixIndex;
};
