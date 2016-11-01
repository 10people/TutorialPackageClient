#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// MountItem
struct MountItem_t1587;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// MountItem
struct MountItem_t1587  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject MountItem::m_ItemActive
	GameObject_t9 * ___m_ItemActive;
	// UnityEngine.GameObject MountItem::m_ItemNormal
	GameObject_t9 * ___m_ItemNormal;
	// UILabel MountItem::m_ItemName
	UILabel_t1176 * ___m_ItemName;
	// UnityEngine.Color MountItem::normalColor
	Color_t939  ___normalColor;
	// UnityEngine.Color MountItem::highLightColor
	Color_t939  ___highLightColor;
	// UISprite MountItem::m_Icon
	UISprite_t1202 * ___m_Icon;
	// UnityEngine.GameObject MountItem::m_GetItemLabel
	GameObject_t9 * ___m_GetItemLabel;
	// UnityEngine.GameObject MountItem::m_NoGetItemLabel
	GameObject_t9 * ___m_NoGetItemLabel;
	// UnityEngine.GameObject MountItem::m_RemindPoint
	GameObject_t9 * ___m_RemindPoint;
	// System.Int32 MountItem::m_MountID
	int32_t ___m_MountID;
};
struct MountItem_t1587_StaticFields{
	// MountItem MountItem::m_Instance
	MountItem_t1587 * ___m_Instance;
};
