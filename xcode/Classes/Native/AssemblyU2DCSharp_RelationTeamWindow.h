#pragma once
#include <stdint.h>
// RelationTeamWindow
struct RelationTeamWindow_t1659;
// UnityEngine.GameObject
struct GameObject_t9;
// TabController
struct TabController_t1209;
// UIImageButton
struct UIImageButton_t1204;
// RelationButtionWindowLogic
struct RelationButtionWindowLogic_t1682;
// UILabel
struct UILabel_t1176;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// PlayerListItemLogic
struct PlayerListItemLogic_t1660;
// UIGrid
struct UIGrid_t1199;
// ModelDragLogic
struct ModelDragLogic_t1242;
// Games.FakeObject.OtherFakeObject
struct OtherFakeObject_t1619;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RelationTeamWindow/CurrentSortState
#include "AssemblyU2DCSharp_RelationTeamWindow_CurrentSortState.h"
// RelationTeamWindow
struct RelationTeamWindow_t1659  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject RelationTeamWindow::m_TeamInfoGrid
	GameObject_t9 * ___m_TeamInfoGrid;
	// UnityEngine.GameObject RelationTeamWindow::m_AroundPlayerGrid
	GameObject_t9 * ___m_AroundPlayerGrid;
	// UnityEngine.GameObject RelationTeamWindow::m_AroundTeamGrid
	GameObject_t9 * ___m_AroundTeamGrid;
	// TabController RelationTeamWindow::m_TabController
	TabController_t1209 * ___m_TabController;
	// UIImageButton RelationTeamWindow::m_CreateTeamButton
	UIImageButton_t1204 * ___m_CreateTeamButton;
	// UIImageButton RelationTeamWindow::m_GatherTeamButton
	UIImageButton_t1204 * ___m_GatherTeamButton;
	// UIImageButton RelationTeamWindow::m_TeamFollowButton
	UIImageButton_t1204 * ___m_TeamFollowButton;
	// UnityEngine.GameObject RelationTeamWindow::m_DismissTeamButton
	GameObject_t9 * ___m_DismissTeamButton;
	// RelationButtionWindowLogic RelationTeamWindow::m_ButtonWindow
	RelationButtionWindowLogic_t1682 * ___m_ButtonWindow;
	// UILabel RelationTeamWindow::m_AroundPlayerSumLabel
	UILabel_t1176 * ___m_AroundPlayerSumLabel;
	// UISprite[] RelationTeamWindow::m_TeamMemberSortSprite
	UISpriteU5BU5D_t1201* ___m_TeamMemberSortSprite;
	// UISprite[] RelationTeamWindow::m_AroundPlayerSortSprite
	UISpriteU5BU5D_t1201* ___m_AroundPlayerSortSprite;
	// UISprite[] RelationTeamWindow::m_AroundTeamSortSprite
	UISpriteU5BU5D_t1201* ___m_AroundTeamSortSprite;
	// PlayerListItemLogic RelationTeamWindow::m_SelectPlayerItem
	PlayerListItemLogic_t1660 * ___m_SelectPlayerItem;
	// UIGrid RelationTeamWindow::m_TabGrid
	UIGrid_t1199 * ___m_TabGrid;
	// UnityEngine.GameObject RelationTeamWindow::m_TeamMemberListItem
	GameObject_t9 * ___m_TeamMemberListItem;
	// UnityEngine.GameObject RelationTeamWindow::m_AroundPlayerListItem
	GameObject_t9 * ___m_AroundPlayerListItem;
	// UnityEngine.GameObject RelationTeamWindow::m_AroundTeamListItem
	GameObject_t9 * ___m_AroundTeamListItem;
	// UnityEngine.GameObject RelationTeamWindow::m_TeamMemberMenu
	GameObject_t9 * ___m_TeamMemberMenu;
	// UILabel RelationTeamWindow::m_TeamCombatLabel
	UILabel_t1176 * ___m_TeamCombatLabel;
	// UILabel RelationTeamWindow::m_TeamMemberCountLabel
	UILabel_t1176 * ___m_TeamMemberCountLabel;
	// UILabel RelationTeamWindow::m_TeamLeaderNameLabel
	UILabel_t1176 * ___m_TeamLeaderNameLabel;
	// UnityEngine.GameObject RelationTeamWindow::m_TeamMemberModelViewTopLeft
	GameObject_t9 * ___m_TeamMemberModelViewTopLeft;
	// UnityEngine.GameObject RelationTeamWindow::m_TeamMemberModelViewBottomRight
	GameObject_t9 * ___m_TeamMemberModelViewBottomRight;
	// ModelDragLogic RelationTeamWindow::m_TeamMemberModelDrag
	ModelDragLogic_t1242 * ___m_TeamMemberModelDrag;
	// Games.FakeObject.OtherFakeObject RelationTeamWindow::m_PlayerFakeObj
	OtherFakeObject_t1619 * ___m_PlayerFakeObj;
	// UnityEngine.GameObject RelationTeamWindow::m_FakeObjGameObject
	GameObject_t9 * ___m_FakeObjGameObject;
	// System.Boolean RelationTeamWindow::levelnowTeamSorted
	bool ___levelnowTeamSorted;
	// System.Boolean RelationTeamWindow::levelnowNearbyPlayerSorted
	bool ___levelnowNearbyPlayerSorted;
	// System.Boolean RelationTeamWindow::levelnowNearbyTeamSorted
	bool ___levelnowNearbyTeamSorted;
	// System.Boolean RelationTeamWindow::combatnowTeamSorted
	bool ___combatnowTeamSorted;
	// System.Boolean RelationTeamWindow::combatnowNearbyPlayerSorted
	bool ___combatnowNearbyPlayerSorted;
	// System.Boolean RelationTeamWindow::combatnowNearbyTeamSorted
	bool ___combatnowNearbyTeamSorted;
	// System.Boolean RelationTeamWindow::teamcombatnowNearbyTeamSorted
	bool ___teamcombatnowNearbyTeamSorted;
	// RelationTeamWindow/CurrentSortState RelationTeamWindow::m_currentSortState
	int32_t ___m_currentSortState;
};
struct RelationTeamWindow_t1659_StaticFields{
	// RelationTeamWindow RelationTeamWindow::m_Instance
	RelationTeamWindow_t1659 * ___m_Instance;
};
