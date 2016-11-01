#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// RelationNamePopController
struct RelationNamePopController_t1821;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RelationNameListItem
struct RelationNameListItem_t1823  : public MonoBehaviour_t18
{
	// UILabel RelationNameListItem::labelName
	UILabel_t1176 * ___labelName;
	// RelationNamePopController RelationNameListItem::m_parentWindow
	RelationNamePopController_t1821 * ___m_parentWindow;
	// UnityEngine.GameObject RelationNameListItem::m_VisitSprite
	GameObject_t9 * ___m_VisitSprite;
	// System.UInt64 RelationNameListItem::m_Guid
	uint64_t ___m_Guid;
	// UnityEngine.GameObject RelationNameListItem::restaurantInfo
	GameObject_t9 * ___restaurantInfo;
	// UISprite RelationNameListItem::restauranIcon
	UISprite_t1202 * ___restauranIcon;
	// UILabel RelationNameListItem::restaurantLevel
	UILabel_t1176 * ___restaurantLevel;
	// UnityEngine.GameObject RelationNameListItem::restaurantButtom
	GameObject_t9 * ___restaurantButtom;
};
