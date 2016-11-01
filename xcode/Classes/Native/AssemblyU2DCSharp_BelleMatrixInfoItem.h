#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// BelleMatrixInfoWindow
struct BelleMatrixInfoWindow_t1876;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// BelleMatrixInfoItem
struct BelleMatrixInfoItem_t1877  : public MonoBehaviour_t18
{
	// UISprite BelleMatrixInfoItem::m_matrixIcon
	UISprite_t1202 * ___m_matrixIcon;
	// UISprite BelleMatrixInfoItem::m_backgroundPic
	UISprite_t1202 * ___m_backgroundPic;
	// UILabel BelleMatrixInfoItem::m_matrixName
	UILabel_t1176 * ___m_matrixName;
	// BelleMatrixInfoWindow BelleMatrixInfoItem::m_parentWindow
	BelleMatrixInfoWindow_t1876 * ___m_parentWindow;
	// UnityEngine.Color BelleMatrixInfoItem::m_ColorHighlight
	Color_t939  ___m_ColorHighlight;
	// UnityEngine.Color BelleMatrixInfoItem::m_ColorDisable
	Color_t939  ___m_ColorDisable;
};
