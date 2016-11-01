#pragma once
#include <stdint.h>
// TeamPlatformWindow
struct TeamPlatformWindow_t1789;
// TabController
struct TabController_t1209;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>
struct List_1_t2078;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>
struct Dictionary_2_t2079;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TeamPlatformWindow
struct TeamPlatformWindow_t1789  : public MonoBehaviour_t18
{
	// TabController TeamPlatformWindow::m_TabTeamType
	TabController_t1209 * ___m_TabTeamType;
	// UnityEngine.GameObject TeamPlatformWindow::ItemParent
	GameObject_t9 * ___ItemParent;
	// UnityEngine.GameObject TeamPlatformWindow::ApplicationTeam
	GameObject_t9 * ___ApplicationTeam;
	// UnityEngine.GameObject TeamPlatformWindow::InvitedTeam
	GameObject_t9 * ___InvitedTeam;
	// UILabel TeamPlatformWindow::m_title
	UILabel_t1176 * ___m_title;
	// System.Int32 TeamPlatformWindow::Diffcult
	int32_t ___Diffcult;
	// System.Int32 TeamPlatformWindow::CopyMode
	int32_t ___CopyMode;
	// System.Int32 TeamPlatformWindow::CopySceneId
	int32_t ___CopySceneId;
	// System.UInt64 TeamPlatformWindow::playerGUID
	uint64_t ___playerGUID;
	// System.Int32 TeamPlatformWindow::teamID
	int32_t ___teamID;
	// System.Int32 TeamPlatformWindow::modeType
	int32_t ___modeType;
	// System.Single TeamPlatformWindow::timeSend
	float ___timeSend;
	// System.Boolean TeamPlatformWindow::CG_REQ_TEAM_INVITESend
	bool ___CG_REQ_TEAM_INVITESend;
	// System.Boolean TeamPlatformWindow::CG_ASK_AUTOTEAMSend
	bool ___CG_ASK_AUTOTEAMSend;
	// System.Boolean TeamPlatformWindow::CG_REQ_TEAM_JOINSend
	bool ___CG_REQ_TEAM_JOINSend;
};
struct TeamPlatformWindow_t1789_StaticFields{
	// TeamPlatformWindow TeamPlatformWindow::m_Instance
	TeamPlatformWindow_t1789 * ___m_Instance;
	// System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo> TeamPlatformWindow::playerList
	List_1_t2078 * ___playerList;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>> TeamPlatformWindow::TeamMap
	Dictionary_2_t2079 * ___TeamMap;
};
