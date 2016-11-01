#pragma once
#include <stdint.h>
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// RelationFriendWindow
struct RelationFriendWindow_t1658;
// RelationTeamWindow
struct RelationTeamWindow_t1659;
// TeamMember
struct TeamMember_t1543;
// NearbyPlayer
struct NearbyPlayer_t1211;
// NearbyTeam
struct NearbyTeam_t1213;
// Relation
struct Relation_t1442;
// UIButton
struct UIButton_t1578;
// UIToggle
struct UIToggle_t1220;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PlayerListItemLogic/PlayerListItemType
#include "AssemblyU2DCSharp_PlayerListItemLogic_PlayerListItemType.h"
// PlayerListItemLogic
struct PlayerListItemLogic_t1660  : public MonoBehaviour_t18
{
	// UISprite PlayerListItemLogic::m_PlayerProLabel
	UISprite_t1202 * ___m_PlayerProLabel;
	// UISprite PlayerListItemLogic::m_PlayerHeadPic
	UISprite_t1202 * ___m_PlayerHeadPic;
	// UILabel PlayerListItemLogic::m_PlayerNameLabel
	UILabel_t1176 * ___m_PlayerNameLabel;
	// UILabel PlayerListItemLogic::m_PlayerLevelLabel
	UILabel_t1176 * ___m_PlayerLevelLabel;
	// UILabel PlayerListItemLogic::m_PlayerCombatNumLabel
	UILabel_t1176 * ___m_PlayerCombatNumLabel;
	// UILabel PlayerListItemLogic::m_PlayerStateLable
	UILabel_t1176 * ___m_PlayerStateLable;
	// UnityEngine.GameObject PlayerListItemLogic::m_SelectSprite
	GameObject_t9 * ___m_SelectSprite;
	// System.Int32 PlayerListItemLogic::m_nTeamID
	int32_t ___m_nTeamID;
	// System.Int32 PlayerListItemLogic::m_nTeamPosIndex
	int32_t ___m_nTeamPosIndex;
	// System.UInt64 PlayerListItemLogic::m_Guid
	uint64_t ___m_Guid;
	// System.String PlayerListItemLogic::m_PlayerName
	String_t* ___m_PlayerName;
	// PlayerListItemLogic/PlayerListItemType PlayerListItemLogic::m_ItemType
	int32_t ___m_ItemType;
	// RelationFriendWindow PlayerListItemLogic::m_FriendParent
	RelationFriendWindow_t1658 * ___m_FriendParent;
	// RelationTeamWindow PlayerListItemLogic::m_TeamParent
	RelationTeamWindow_t1659 * ___m_TeamParent;
	// TeamMember PlayerListItemLogic::m_selfTeamMember
	TeamMember_t1543 * ___m_selfTeamMember;
	// NearbyPlayer PlayerListItemLogic::m_nearbyPlayer
	NearbyPlayer_t1211 * ___m_nearbyPlayer;
	// NearbyTeam PlayerListItemLogic::m_nearbyTeam
	NearbyTeam_t1213 * ___m_nearbyTeam;
	// Relation PlayerListItemLogic::m_relationFriend
	Relation_t1442 * ___m_relationFriend;
	// Relation PlayerListItemLogic::m_relationBlack
	Relation_t1442 * ___m_relationBlack;
	// Relation PlayerListItemLogic::m_relationHate
	Relation_t1442 * ___m_relationHate;
	// UIButton PlayerListItemLogic::m_chatPrivate
	UIButton_t1578 * ___m_chatPrivate;
	// UIButton PlayerListItemLogic::m_requestTeam
	UIButton_t1578 * ___m_requestTeam;
	// UIButton PlayerListItemLogic::m_checkAllInfo
	UIButton_t1578 * ___m_checkAllInfo;
	// UIButton PlayerListItemLogic::m_deletBtn_black
	UIButton_t1578 * ___m_deletBtn_black;
	// UIButton PlayerListItemLogic::m_deletBtn_Hite
	UIButton_t1578 * ___m_deletBtn_Hite;
	// UIButton PlayerListItemLogic::m_fellowBtn_Hite
	UIButton_t1578 * ___m_fellowBtn_Hite;
	// UIButton PlayerListItemLogic::m_otherBtn
	UIButton_t1578 * ___m_otherBtn;
	// UIToggle PlayerListItemLogic::m_toggleBtn
	UIToggle_t1220 * ___m_toggleBtn;
	// System.Boolean PlayerListItemLogic::mIsClick
	bool ___mIsClick;
};
struct PlayerListItemLogic_t1660_StaticFields{
	// UnityEngine.Color PlayerListItemLogic::m_SelfColor
	Color_t939  ___m_SelfColor;
	// UnityEngine.Color PlayerListItemLogic::m_OtherColor
	Color_t939  ___m_OtherColor;
};
