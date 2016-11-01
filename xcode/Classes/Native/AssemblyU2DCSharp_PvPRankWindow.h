#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// PvPRankListItem
struct PvPRankListItem_t1916;
// PvPRankWindow
struct PvPRankWindow_t1915;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PVPData/PvPRankListItemInfo
#include "AssemblyU2DCSharp_PVPData_PvPRankListItemInfo.h"
// PvPRankWindow
struct PvPRankWindow_t1915  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject PvPRankWindow::RankMemberList
	GameObject_t9 * ___RankMemberList;
	// UILabel PvPRankWindow::PageTip
	UILabel_t1176 * ___PageTip;
	// UnityEngine.GameObject PvPRankWindow::PrePageButton
	GameObject_t9 * ___PrePageButton;
	// UnityEngine.GameObject PvPRankWindow::NextPageButton
	GameObject_t9 * ___NextPageButton;
	// UnityEngine.GameObject PvPRankWindow::MenuOp
	GameObject_t9 * ___MenuOp;
	// PvPRankListItem PvPRankWindow::CurItem
	PvPRankListItem_t1916 * ___CurItem;
	// PVPData/PvPRankListItemInfo PvPRankWindow::m_CurData
	PvPRankListItemInfo_t1917  ___m_CurData;
	// UILabel PvPRankWindow::m_PaiMing
	UILabel_t1176 * ___m_PaiMing;
	// UILabel PvPRankWindow::m_JiFen
	UILabel_t1176 * ___m_JiFen;
};
struct PvPRankWindow_t1915_StaticFields{
	// System.Int32 PvPRankWindow::VIP_CHALLENGE_COST
	int32_t ___VIP_CHALLENGE_COST;
	// PvPRankWindow PvPRankWindow::m_Instance
	PvPRankWindow_t1915 * ___m_Instance;
};
