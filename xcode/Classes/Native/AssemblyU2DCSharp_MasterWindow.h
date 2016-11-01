#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// TabController
struct TabController_t1209;
// UILabel
struct UILabel_t1176;
// UIInput
struct UIInput_t1231;
// UISprite[]
struct UISpriteU5BU5D_t1201;
// UILabel[]
struct UILabelU5BU5D_t1203;
// UIImageButton
struct UIImageButton_t1204;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Boolean[]
struct BooleanU5BU5D_t102;
// MasterWindow
struct MasterWindow_t2021;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MasterWindow
struct MasterWindow_t2021  : public MonoBehaviour_t18
{
	// UnityEngine.GameObject MasterWindow::m_CreateMaster
	GameObject_t9 * ___m_CreateMaster;
	// TabController MasterWindow::m_MasterTabController
	TabController_t1209 * ___m_MasterTabController;
	// UnityEngine.GameObject MasterWindow::m_MasterMemberGrid
	GameObject_t9 * ___m_MasterMemberGrid;
	// UnityEngine.GameObject MasterWindow::m_MasterMenberItem
	GameObject_t9 * ___m_MasterMenberItem;
	// UnityEngine.GameObject MasterWindow::m_MasterReserveMemberGrid
	GameObject_t9 * ___m_MasterReserveMemberGrid;
	// UnityEngine.GameObject MasterWindow::m_MasterReserveMemberItem
	GameObject_t9 * ___m_MasterReserveMemberItem;
	// UnityEngine.GameObject MasterWindow::m_MasterPreviewGrid
	GameObject_t9 * ___m_MasterPreviewGrid;
	// UnityEngine.GameObject MasterWindow::m_MasterPreviewItem
	GameObject_t9 * ___m_MasterPreviewItem;
	// UILabel MasterWindow::m_MasterName
	UILabel_t1176 * ___m_MasterName;
	// UILabel MasterWindow::m_MasterCheifName
	UILabel_t1176 * ___m_MasterCheifName;
	// UILabel MasterWindow::m_MasterNotice
	UILabel_t1176 * ___m_MasterNotice;
	// UILabel MasterWindow::m_MasterOnlineMemberNum
	UILabel_t1176 * ___m_MasterOnlineMemberNum;
	// UILabel MasterWindow::m_MasterTotalMemberNum
	UILabel_t1176 * ___m_MasterTotalMemberNum;
	// UILabel MasterWindow::m_MasterMaxMemberNum
	UILabel_t1176 * ___m_MasterMaxMemberNum;
	// UILabel MasterWindow::m_MasterPresent
	UILabel_t1176 * ___m_MasterPresent;
	// UIInput MasterWindow::m_MasterChangeNotice
	UIInput_t1231 * ___m_MasterChangeNotice;
	// UILabel MasterWindow::m_MasterTorchValue
	UILabel_t1176 * ___m_MasterTorchValue;
	// UILabel MasterWindow::m_TorchValue
	UILabel_t1176 * ___m_TorchValue;
	// UISprite[] MasterWindow::m_SkillSprite
	UISpriteU5BU5D_t1201* ___m_SkillSprite;
	// UILabel[] MasterWindow::m_SkillName
	UILabelU5BU5D_t1203* ___m_SkillName;
	// UISprite[] MasterWindow::m_SkillSelect
	UISpriteU5BU5D_t1201* ___m_SkillSelect;
	// UILabel MasterWindow::m_SkillDesc
	UILabel_t1176 * ___m_SkillDesc;
	// UIImageButton MasterWindow::m_SkillLearnBtn
	UIImageButton_t1204 * ___m_SkillLearnBtn;
	// UIImageButton MasterWindow::m_SkillActiveBtn
	UIImageButton_t1204 * ___m_SkillActiveBtn;
	// UIImageButton MasterWindow::m_SkillForgetBtn
	UIImageButton_t1204 * ___m_SkillForgetBtn;
	// UIInput MasterWindow::m_SkillNameInput
	UIInput_t1231 * ___m_SkillNameInput;
	// UnityEngine.GameObject MasterWindow::m_SkillNameInputObject
	GameObject_t9 * ___m_SkillNameInputObject;
	// UIImageButton MasterWindow::m_DissolveBtn
	UIImageButton_t1204 * ___m_DissolveBtn;
	// UIImageButton MasterWindow::m_LevelMasterBtn
	UIImageButton_t1204 * ___m_LevelMasterBtn;
	// UIImageButton MasterWindow::m_KickMemberBtn
	UIImageButton_t1204 * ___m_KickMemberBtn;
	// UIInput MasterWindow::m_MasterNameInput
	UIInput_t1231 * ___m_MasterNameInput;
	// UIInput MasterWindow::m_MasterNoticeInput
	UIInput_t1231 * ___m_MasterNoticeInput;
	// UILabel MasterWindow::m_ReserverMemberRemain
	UILabel_t1176 * ___m_ReserverMemberRemain;
	// System.UInt64 MasterWindow::m_CurSelectMemberGuid
	uint64_t ___m_CurSelectMemberGuid;
	// System.String MasterWindow::m_CurSelectMemberName
	String_t* ___m_CurSelectMemberName;
	// System.UInt64 MasterWindow::m_CurSelectReserveMember
	uint64_t ___m_CurSelectReserveMember;
	// System.String MasterWindow::m_CurSelectReserveMemberName
	String_t* ___m_CurSelectReserveMemberName;
	// System.UInt64 MasterWindow::m_CurSelectMaster
	uint64_t ___m_CurSelectMaster;
	// System.Int32 MasterWindow::m_CurSelectSkill
	int32_t ___m_CurSelectSkill;
	// System.Int32 MasterWindow::m_CurSelectSkillIndex
	int32_t ___m_CurSelectSkillIndex;
	// System.Int32[] MasterWindow::m_SkillID
	Int32U5BU5D_t116* ___m_SkillID;
	// System.Boolean[] MasterWindow::m_SkillActive
	BooleanU5BU5D_t102* ___m_SkillActive;
	// System.Boolean[] MasterWindow::m_SkillOwn
	BooleanU5BU5D_t102* ___m_SkillOwn;
	// System.Boolean MasterWindow::m_NeedUpdateMasterInfo
	bool ___m_NeedUpdateMasterInfo;
	// UnityEngine.GameObject MasterWindow::m_MasterShopItem
	GameObject_t9 * ___m_MasterShopItem;
	// UnityEngine.GameObject MasterWindow::m_MasterShopGrid
	GameObject_t9 * ___m_MasterShopGrid;
	// UILabel MasterWindow::m_MasterQingYi
	UILabel_t1176 * ___m_MasterQingYi;
	// System.Int32 MasterWindow::m_nQingYiItemID
	int32_t ___m_nQingYiItemID;
	// UnityEngine.GameObject MasterWindow::m_MasterTabGrid
	GameObject_t9 * ___m_MasterTabGrid;
};
struct MasterWindow_t2021_StaticFields{
	// System.Int32 MasterWindow::SKILL_NUM
	int32_t ___SKILL_NUM;
	// MasterWindow MasterWindow::m_Instance
	MasterWindow_t2021 * ___m_Instance;
};
