#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UITexture
struct UITexture_t1378;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// BelleUnOwnWindow
struct BelleUnOwnWindow_t1975  : public MonoBehaviour_t18
{
	// UILabel BelleUnOwnWindow::m_belleName
	UILabel_t1176 * ___m_belleName;
	// UILabel BelleUnOwnWindow::m_belleDesc
	UILabel_t1176 * ___m_belleDesc;
	// UITexture BelleUnOwnWindow::m_belleTextTure
	UITexture_t1378 * ___m_belleTextTure;
	// UILabel[] BelleUnOwnWindow::m_AttrTypes
	UILabelU5BU5D_t1203* ___m_AttrTypes;
	// UILabel[] BelleUnOwnWindow::m_AttrValues
	UILabelU5BU5D_t1203* ___m_AttrValues;
	// UISprite BelleUnOwnWindow::m_processBar
	UISprite_t1202 * ___m_processBar;
	// UISprite BelleUnOwnWindow::m_belleIcon
	UISprite_t1202 * ___m_belleIcon;
	// UILabel BelleUnOwnWindow::m_belleCurCount
	UILabel_t1176 * ___m_belleCurCount;
	// UILabel BelleUnOwnWindow::m_getBelleItemBtn
	UILabel_t1176 * ___m_getBelleItemBtn;
	// UnityEngine.Color BelleUnOwnWindow::m_disAbleBelleTextTure
	Color_t939  ___m_disAbleBelleTextTure;
	// UnityEngine.Color BelleUnOwnWindow::m_ColorDisable
	Color_t939  ___m_ColorDisable;
	// UnityEngine.GameObject BelleUnOwnWindow::m_redGetBelle
	GameObject_t9 * ___m_redGetBelle;
	// UnityEngine.GameObject BelleUnOwnWindow::m_getBelleItemWin
	GameObject_t9 * ___m_getBelleItemWin;
};
