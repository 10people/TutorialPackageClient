#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// ServerListItem
struct ServerListItem_t1935  : public MonoBehaviour_t18
{
	// UILabel ServerListItem::labelServerName
	UILabel_t1176 * ___labelServerName;
	// UISprite ServerListItem::sprState
	UISprite_t1202 * ___sprState;
	// UISprite ServerListItem::sprStateLabel
	UISprite_t1202 * ___sprStateLabel;
	// UISprite[] ServerListItem::serverRolesHead
	UISpriteU5BU5D_t1201* ___serverRolesHead;
	// UILabel[] ServerListItem::serverRolesLevel
	UILabelU5BU5D_t1203* ___serverRolesLevel;
	// UnityEngine.GameObject ServerListItem::sprHeightLight
	GameObject_t9 * ___sprHeightLight;
	// UnityEngine.GameObject ServerListItem::sprNormal
	GameObject_t9 * ___sprNormal;
	// UISprite ServerListItem::sprRecommand
	UISprite_t1202 * ___sprRecommand;
};
