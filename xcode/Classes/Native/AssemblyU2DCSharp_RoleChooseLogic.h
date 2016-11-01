#pragma once
#include <stdint.h>
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// UIControllerBase`1<RoleChooseLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_21.h"
// RoleChooseLogic
struct RoleChooseLogic_t1688  : public UIControllerBase_1_t1691
{
	// UISprite[] RoleChooseLogic::m_Roles
	UISpriteU5BU5D_t1201* ___m_Roles;
	// UISprite[] RoleChooseLogic::m_HeardPic
	UISpriteU5BU5D_t1201* ___m_HeardPic;
	// UILabel[] RoleChooseLogic::m_RoleNames
	UILabelU5BU5D_t1203* ___m_RoleNames;
	// UILabel[] RoleChooseLogic::m_RoleLevels
	UILabelU5BU5D_t1203* ___m_RoleLevels;
	// UnityEngine.GameObject[] RoleChooseLogic::m_lastLoginBac
	GameObjectU5BU5D_t1200* ___m_lastLoginBac;
	// System.Boolean RoleChooseLogic::m_bBeginHeartBeat
	bool ___m_bBeginHeartBeat;
	// System.Single RoleChooseLogic::m_HeartBeatTimer
	float ___m_HeartBeatTimer;
	// System.Int32 RoleChooseLogic::m_chooseIndex
	int32_t ___m_chooseIndex;
	// Games.FakeObject.FakeObject RoleChooseLogic::m_PlayerFakeObj
	FakeObject_t1241 * ___m_PlayerFakeObj;
	// UnityEngine.GameObject RoleChooseLogic::m_FakeObjTopLeft
	GameObject_t9 * ___m_FakeObjTopLeft;
	// UnityEngine.GameObject RoleChooseLogic::m_FakeObjBottomRight
	GameObject_t9 * ___m_FakeObjBottomRight;
	// UnityEngine.GameObject[] RoleChooseLogic::m_NoRoleObj
	GameObjectU5BU5D_t1200* ___m_NoRoleObj;
	// UISprite[] RoleChooseLogic::m_ProSprite
	UISpriteU5BU5D_t1201* ___m_ProSprite;
	// System.Int32 RoleChooseLogic::firtPlaceIndex
	int32_t ___firtPlaceIndex;
	// System.Collections.Generic.List`1<System.Int32> RoleChooseLogic::otherPlaceIndexList
	List_1_t90 * ___otherPlaceIndexList;
	// System.Int32 RoleChooseLogic::m_choosePlace
	int32_t ___m_choosePlace;
	// System.Int32 RoleChooseLogic::m_RoleWeaponId
	int32_t ___m_RoleWeaponId;
	// System.Int32 RoleChooseLogic::m_RoleProfess
	int32_t ___m_RoleProfess;
	// System.Int32 RoleChooseLogic::m_playerCurEquipFlyWingId
	int32_t ___m_playerCurEquipFlyWingId;
	// System.Int32 RoleChooseLogic::m_playerCurDreamFlyWingId
	int32_t ___m_playerCurDreamFlyWingId;
	// System.Boolean RoleChooseLogic::m_playerIsShowHideFlyWing
	bool ___m_playerIsShowHideFlyWing;
};
