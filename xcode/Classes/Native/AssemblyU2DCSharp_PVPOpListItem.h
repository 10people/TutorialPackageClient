#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UITexture[]
struct UITextureU5BU5D_t1558;
// PVPFindOpWindow
struct PVPFindOpWindow_t1908;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PVPData/OpponentInfo
#include "AssemblyU2DCSharp_PVPData_OpponentInfo.h"
// PVPOpListItem
struct PVPOpListItem_t1909  : public MonoBehaviour_t18
{
	// UILabel PVPOpListItem::LabelName
	UILabel_t1176 * ___LabelName;
	// UILabel PVPOpListItem::LabelLevel
	UILabel_t1176 * ___LabelLevel;
	// UILabel PVPOpListItem::LabelPower
	UILabel_t1176 * ___LabelPower;
	// UILabel PVPOpListItem::LabelProfession
	UILabel_t1176 * ___LabelProfession;
	// UILabel PVPOpListItem::LabelRange
	UILabel_t1176 * ___LabelRange;
	// UnityEngine.GameObject PVPOpListItem::SprHightlight
	GameObject_t9 * ___SprHightlight;
	// UITexture[] PVPOpListItem::ProfessionSprites
	UITextureU5BU5D_t1558* ___ProfessionSprites;
	// PVPFindOpWindow PVPOpListItem::m_parent
	PVPFindOpWindow_t1908 * ___m_parent;
	// PVPData/OpponentInfo PVPOpListItem::m_data
	OpponentInfo_t1910  ___m_data;
	// UnityEngine.GameObject PVPOpListItem::m_TiaozhanObj
	GameObject_t9 * ___m_TiaozhanObj;
};
