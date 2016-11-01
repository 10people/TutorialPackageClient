#pragma once
#include <stdint.h>
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// UISprite
struct UISprite_t1202;
// PvPRankWindow
struct PvPRankWindow_t1915;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PVPData/PvPRankListItemInfo
#include "AssemblyU2DCSharp_PVPData_PvPRankListItemInfo.h"
// PvPRankListItem
struct PvPRankListItem_t1916  : public MonoBehaviour_t18
{
	// UILabel PvPRankListItem::m_Label1
	UILabel_t1176 * ___m_Label1;
	// UILabel PvPRankListItem::m_Label2
	UILabel_t1176 * ___m_Label2;
	// UILabel PvPRankListItem::m_Label3
	UILabel_t1176 * ___m_Label3;
	// UILabel PvPRankListItem::m_Label4
	UILabel_t1176 * ___m_Label4;
	// UILabel PvPRankListItem::m_Label5
	UILabel_t1176 * ___m_Label5;
	// UILabel PvPRankListItem::m_Label6
	UILabel_t1176 * ___m_Label6;
	// UnityEngine.GameObject PvPRankListItem::m_Hilight
	GameObject_t9 * ___m_Hilight;
	// UISprite PvPRankListItem::m_proIcon
	UISprite_t1202 * ___m_proIcon;
	// PvPRankWindow PvPRankListItem::m_Parent
	PvPRankWindow_t1915 * ___m_Parent;
	// PVPData/PvPRankListItemInfo PvPRankListItem::m_data
	PvPRankListItemInfo_t1917  ___m_data;
	// UISprite PvPRankListItem::m_RankIcon
	UISprite_t1202 * ___m_RankIcon;
	// UILabel PvPRankListItem::m_RankPlayerName
	UILabel_t1176 * ___m_RankPlayerName;
	// UISprite PvPRankListItem::m_RankPlayerIcon
	UISprite_t1202 * ___m_RankPlayerIcon;
	// UILabel PvPRankListItem::m_RankPlayerLevel
	UILabel_t1176 * ___m_RankPlayerLevel;
};
