#pragma once
#include <stdint.h>
// MissionDialogAndLeftTabsLogic
struct MissionDialogAndLeftTabsLogic_t1572;
// TabController
struct TabController_t1209;
// UIGrid
struct UIGrid_t1199;
// UITopGrid
struct UITopGrid_t1343;
// System.Collections.Generic.List`1<MissionItemLogic>
struct List_1_t1573;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Int32[]
struct Int32U5BU5D_t116;
// TweenPosition
struct TweenPosition_t1255;
// UIDraggablePanel
struct UIDraggablePanel_t1165;
// UISprite
struct UISprite_t1202;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t944;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// MissionDialogAndLeftTabsLogic
struct MissionDialogAndLeftTabsLogic_t1572  : public MonoBehaviour_t18
{
	// TabController MissionDialogAndLeftTabsLogic::m_TabController
	TabController_t1209 * ___m_TabController;
	// UIGrid MissionDialogAndLeftTabsLogic::m_MissionsList
	UIGrid_t1199 * ___m_MissionsList;
	// UITopGrid MissionDialogAndLeftTabsLogic::m_MissionsTopList
	UITopGrid_t1343 * ___m_MissionsTopList;
	// System.Collections.Generic.List`1<MissionItemLogic> MissionDialogAndLeftTabsLogic::m_MissionItemsList
	List_1_t1573 * ___m_MissionItemsList;
	// System.Int32 MissionDialogAndLeftTabsLogic::m_CommpletedItemCount
	int32_t ___m_CommpletedItemCount;
	// UnityEngine.GameObject MissionDialogAndLeftTabsLogic::m_ControlButton
	GameObject_t9 * ___m_ControlButton;
	// UnityEngine.GameObject MissionDialogAndLeftTabsLogic::m_LeftTablesRoot
	GameObject_t9 * ___m_LeftTablesRoot;
	// UnityEngine.GameObject MissionDialogAndLeftTabsLogic::m_LeftTabsOffset
	GameObject_t9 * ___m_LeftTabsOffset;
	// UnityEngine.GameObject MissionDialogAndLeftTabsLogic::m_ContentMission
	GameObject_t9 * ___m_ContentMission;
	// UnityEngine.GameObject MissionDialogAndLeftTabsLogic::m_ContentTeam
	GameObject_t9 * ___m_ContentTeam;
	// System.Boolean MissionDialogAndLeftTabsLogic::m_TabsFold
	bool ___m_TabsFold;
	// System.Boolean MissionDialogAndLeftTabsLogic::m_bFold
	bool ___m_bFold;
	// System.Int32[] MissionDialogAndLeftTabsLogic::m_GuideMissionID
	Int32U5BU5D_t116* ___m_GuideMissionID;
	// System.Boolean MissionDialogAndLeftTabsLogic::m_GuideMissionFlag
	bool ___m_GuideMissionFlag;
	// TweenPosition MissionDialogAndLeftTabsLogic::m_TabTweenPos
	TweenPosition_t1255 * ___m_TabTweenPos;
	// TweenPosition MissionDialogAndLeftTabsLogic::m_ContentTweenPos
	TweenPosition_t1255 * ___m_ContentTweenPos;
	// UIDraggablePanel MissionDialogAndLeftTabsLogic::m_dragPanel
	UIDraggablePanel_t1165 * ___m_dragPanel;
	// UnityEngine.GameObject MissionDialogAndLeftTabsLogic::m_TeamButton
	GameObject_t9 * ___m_TeamButton;
	// UnityEngine.GameObject MissionDialogAndLeftTabsLogic::m_LeaveTeamButton
	GameObject_t9 * ___m_LeaveTeamButton;
	// UnityEngine.GameObject MissionDialogAndLeftTabsLogic::m_MissionItemRes
	GameObject_t9 * ___m_MissionItemRes;
	// UnityEngine.Vector3 MissionDialogAndLeftTabsLogic::vOffset
	Vector3_t121  ___vOffset;
	// UnityEngine.GameObject MissionDialogAndLeftTabsLogic::m_ButtonTeamFollow
	GameObject_t9 * ___m_ButtonTeamFollow;
	// UISprite MissionDialogAndLeftTabsLogic::m_TeamFollowState
	UISprite_t1202 * ___m_TeamFollowState;
	// System.Boolean MissionDialogAndLeftTabsLogic::m_isShowVictorNewGuild
	bool ___m_isShowVictorNewGuild;
};
struct MissionDialogAndLeftTabsLogic_t1572_StaticFields{
	// MissionDialogAndLeftTabsLogic MissionDialogAndLeftTabsLogic::m_Instance
	MissionDialogAndLeftTabsLogic_t1572 * ___m_Instance;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> MissionDialogAndLeftTabsLogic::<>f__switch$map1
	Dictionary_2_t944 * ___U3CU3Ef__switch$map1;
};
