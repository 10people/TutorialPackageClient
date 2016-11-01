#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// GCGame.Table.Tab_Belle
struct Tab_Belle_t351;
// BelleInfoWindow
struct BelleInfoWindow_t1883;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// BelleShowItem
struct BelleShowItem_t1884  : public MonoBehaviour_t18
{
	// UISprite BelleShowItem::m_bellePic
	UISprite_t1202 * ___m_bellePic;
	// UISprite BelleShowItem::m_edgePic
	UISprite_t1202 * ___m_edgePic;
	// UILabel BelleShowItem::m_belleName
	UILabel_t1176 * ___m_belleName;
	// UILabel BelleShowItem::m_belleColorLevel
	UILabel_t1176 * ___m_belleColorLevel;
	// UILabel BelleShowItem::m_belleSubLevel
	UILabel_t1176 * ___m_belleSubLevel;
	// UISprite BelleShowItem::m_belleMainColorPic
	UISprite_t1202 * ___m_belleMainColorPic;
	// UISprite BelleShowItem::m_backgroudPic
	UISprite_t1202 * ___m_backgroudPic;
	// GCGame.Table.Tab_Belle BelleShowItem::m_curTabBelle
	Tab_Belle_t351 * ___m_curTabBelle;
	// BelleInfoWindow BelleShowItem::m_parentWindow
	BelleInfoWindow_t1883 * ___m_parentWindow;
	// System.Boolean BelleShowItem::m_isOwn
	bool ___m_isOwn;
	// System.Int32 BelleShowItem::m_NewPlayerGuide_Step
	int32_t ___m_NewPlayerGuide_Step;
	// UnityEngine.GameObject BelleShowItem::m_belleItemObj
	GameObject_t9 * ___m_belleItemObj;
	// UILabel BelleShowItem::m_belleItemCount
	UILabel_t1176 * ___m_belleItemCount;
	// UISprite BelleShowItem::m_BelleProcessBar
	UISprite_t1202 * ___m_BelleProcessBar;
	// UnityEngine.GameObject BelleShowItem::m_lockObj
	GameObject_t9 * ___m_lockObj;
	// UnityEngine.GameObject BelleShowItem::m_redTipObj
	GameObject_t9 * ___m_redTipObj;
	// UnityEngine.GameObject BelleShowItem::m_redItemTipObj
	GameObject_t9 * ___m_redItemTipObj;
	// UnityEngine.GameObject BelleShowItem::m_redCloseTipObj
	GameObject_t9 * ___m_redCloseTipObj;
	// UnityEngine.GameObject BelleShowItem::m_redEvoTipObj
	GameObject_t9 * ___m_redEvoTipObj;
	// System.Int32 BelleShowItem::m_belleId
	int32_t ___m_belleId;
};
