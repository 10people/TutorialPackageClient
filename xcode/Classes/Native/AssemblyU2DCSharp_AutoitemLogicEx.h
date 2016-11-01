#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UISprite
struct UISprite_t1202;
// UnityEngine.GameObject
struct GameObject_t9;
// AutoDrugWindow
struct AutoDrugWindow_t1215;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AutoitemLogicEx
struct AutoitemLogicEx_t1222  : public MonoBehaviour_t18
{
	// UILabel AutoitemLogicEx::m_ItemName
	UILabel_t1176 * ___m_ItemName;
	// UILabel AutoitemLogicEx::m_ItemLevel
	UILabel_t1176 * ___m_ItemLevel;
	// UISprite AutoitemLogicEx::m_ItemIcon
	UISprite_t1202 * ___m_ItemIcon;
	// UILabel AutoitemLogicEx::m_ItemHasChooseText
	UILabel_t1176 * ___m_ItemHasChooseText;
	// UISprite AutoitemLogicEx::m_ItemHasChoosePic
	UISprite_t1202 * ___m_ItemHasChoosePic;
	// UnityEngine.GameObject AutoitemLogicEx::m_ItemHasChooseBtn
	GameObject_t9 * ___m_ItemHasChooseBtn;
	// System.Int32 AutoitemLogicEx::m_nId
	int32_t ___m_nId;
	// System.UInt64 AutoitemLogicEx::m_ItemGuid
	uint64_t ___m_ItemGuid;
	// AutoDrugWindow AutoitemLogicEx::m_parent
	AutoDrugWindow_t1215 * ___m_parent;
	// System.Int32 AutoitemLogicEx::m_Type
	int32_t ___m_Type;
};
