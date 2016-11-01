#pragma once
#include <stdint.h>
// RelationFriendWindow
struct RelationFriendWindow_t1658;
// UnityEngine.GameObject
struct GameObject_t9;
// TabController
struct TabController_t1209;
// RelationButtionWindowLogic
struct RelationButtionWindowLogic_t1682;
// UILabel
struct UILabel_t1176;
// PlayerListItemLogic
struct PlayerListItemLogic_t1660;
// UISprite
struct UISprite_t1202;
// System.String
struct String_t;
// UIImageButton
struct UIImageButton_t1204;
// UIPanel
struct UIPanel_t1364;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// RelationFriendWindow
struct RelationFriendWindow_t1658  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject RelationFriendWindow::friendListGrid
	GameObject_t9 * ___friendListGrid;
	// TabController RelationFriendWindow::m_TabController
	TabController_t1209 * ___m_TabController;
	// RelationButtionWindowLogic RelationFriendWindow::m_ButtonWindow
	RelationButtionWindowLogic_t1682 * ___m_ButtonWindow;
	// UILabel RelationFriendWindow::m_lableFriendNum
	UILabel_t1176 * ___m_lableFriendNum;
	// UnityEngine.GameObject RelationFriendWindow::m_tabSNSWindow
	GameObject_t9 * ___m_tabSNSWindow;
	// PlayerListItemLogic RelationFriendWindow::m_SelectPlayerItem
	PlayerListItemLogic_t1660 * ___m_SelectPlayerItem;
	// System.Int32 RelationFriendWindow::m_TrailSceneClass
	int32_t ___m_TrailSceneClass;
	// System.Int32 RelationFriendWindow::m_TrailSceneInst
	int32_t ___m_TrailSceneInst;
	// System.Int32 RelationFriendWindow::m_TrailPosX
	int32_t ___m_TrailPosX;
	// System.Int32 RelationFriendWindow::m_TrailPosZ
	int32_t ___m_TrailPosZ;
	// UISprite RelationFriendWindow::mOtherWindows
	UISprite_t1202 * ___mOtherWindows;
	// System.UInt64 RelationFriendWindow::m_playerGuid
	uint64_t ___m_playerGuid;
	// System.String RelationFriendWindow::m_playerName
	String_t* ___m_playerName;
	// UIImageButton RelationFriendWindow::m_knowOtherBtn
	UIImageButton_t1204 * ___m_knowOtherBtn;
	// UIImageButton RelationFriendWindow::m_flowerBtn
	UIImageButton_t1204 * ___m_flowerBtn;
	// UIImageButton RelationFriendWindow::m_eggBtn
	UIImageButton_t1204 * ___m_eggBtn;
	// UIImageButton RelationFriendWindow::m_deleteFriendBtn
	UIImageButton_t1204 * ___m_deleteFriendBtn;
	// UIImageButton RelationFriendWindow::m_secretChatBtn
	UIImageButton_t1204 * ___m_secretChatBtn;
	// UILabel RelationFriendWindow::m_friendNumStr
	UILabel_t1176 * ___m_friendNumStr;
	// System.Int32 RelationFriendWindow::m_cureType
	int32_t ___m_cureType;
	// UIPanel RelationFriendWindow::m_Enemydelete
	UIPanel_t1364 * ___m_Enemydelete;
	// UILabel RelationFriendWindow::m_deleteFriendLabel
	UILabel_t1176 * ___m_deleteFriendLabel;
	// UnityEngine.GameObject RelationFriendWindow::m_lotDeleteBtn
	GameObject_t9 * ___m_lotDeleteBtn;
	// System.Boolean RelationFriendWindow::m_isClickLotDelete
	bool ___m_isClickLotDelete;
	// System.Collections.Generic.List`1<System.UInt64> RelationFriendWindow::m_delHateList
	List_1_t1393 * ___m_delHateList;
	// UnityEngine.GameObject RelationFriendWindow::m_findFriendWin
	GameObject_t9 * ___m_findFriendWin;
	// UnityEngine.GameObject RelationFriendWindow::m_titleWinPlayerList
	GameObject_t9 * ___m_titleWinPlayerList;
	// UnityEngine.GameObject RelationFriendWindow::m_titleWinEnemy
	GameObject_t9 * ___m_titleWinEnemy;
	// UnityEngine.GameObject RelationFriendWindow::m_finderNormalBackGround
	GameObject_t9 * ___m_finderNormalBackGround;
	// UnityEngine.GameObject RelationFriendWindow::m_finderHightBackGround
	GameObject_t9 * ___m_finderHightBackGround;
	// UILabel RelationFriendWindow::m_findNameStr
	UILabel_t1176 * ___m_findNameStr;
};
struct RelationFriendWindow_t1658_StaticFields{
	// RelationFriendWindow RelationFriendWindow::m_Instance
	RelationFriendWindow_t1658 * ___m_Instance;
};
