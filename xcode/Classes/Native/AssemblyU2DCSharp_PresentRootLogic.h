#pragma once
#include <stdint.h>
// TabController
struct TabController_t1209;
// UIGrid
struct UIGrid_t1199;
// UnityEngine.GameObject
struct GameObject_t9;
// UILabel
struct UILabel_t1176;
// PresentConfirmLogic
struct PresentConfirmLogic_t1667;
// System.String
struct String_t;
// UIControllerBase`1<PresentRootLogic>
#include "AssemblyU2DCSharp_UIControllerBase_1_gen_20.h"
// PresentRootLogic/TAB_INDEX
#include "AssemblyU2DCSharp_PresentRootLogic_TAB_INDEX.h"
// PresentRootLogic
struct PresentRootLogic_t1671  : public UIControllerBase_1_t1672
{
	// TabController PresentRootLogic::m_TabController
	TabController_t1209 * ___m_TabController;
	// UIGrid PresentRootLogic::m_TabGrid
	UIGrid_t1199 * ___m_TabGrid;
	// UnityEngine.GameObject PresentRootLogic::m_WaitPayTab
	GameObject_t9 * ___m_WaitPayTab;
	// UnityEngine.GameObject PresentRootLogic::m_PresentTab
	GameObject_t9 * ___m_PresentTab;
	// UnityEngine.GameObject PresentRootLogic::m_ShoppingCartTab
	GameObject_t9 * ___m_ShoppingCartTab;
	// UnityEngine.GameObject PresentRootLogic::m_FriendInfoGrid
	GameObject_t9 * ___m_FriendInfoGrid;
	// UnityEngine.GameObject PresentRootLogic::m_ShoppingListGrid
	GameObject_t9 * ___m_ShoppingListGrid;
	// UnityEngine.GameObject PresentRootLogic::m_PresentFriendItem
	GameObject_t9 * ___m_PresentFriendItem;
	// UnityEngine.GameObject PresentRootLogic::m_ShoppingListItem
	GameObject_t9 * ___m_ShoppingListItem;
	// UILabel PresentRootLogic::m_FriendNameLabel
	UILabel_t1176 * ___m_FriendNameLabel;
	// UnityEngine.GameObject PresentRootLogic::m_ShoppingCartInfo
	GameObject_t9 * ___m_ShoppingCartInfo;
	// UILabel PresentRootLogic::m_ShoppingCartTimeLabel
	UILabel_t1176 * ___m_ShoppingCartTimeLabel;
	// UILabel PresentRootLogic::m_ShoppingCartCountLabel
	UILabel_t1176 * ___m_ShoppingCartCountLabel;
	// UnityEngine.GameObject PresentRootLogic::m_FriendRecordInfo
	GameObject_t9 * ___m_FriendRecordInfo;
	// UILabel PresentRootLogic::m_FriendRecordCountLabel
	UILabel_t1176 * ___m_FriendRecordCountLabel;
	// UnityEngine.GameObject PresentRootLogic::m_RecordRoot
	GameObject_t9 * ___m_RecordRoot;
	// UnityEngine.GameObject PresentRootLogic::m_PresentRuleLabel
	GameObject_t9 * ___m_PresentRuleLabel;
	// PresentConfirmLogic PresentRootLogic::m_PresentConfirm
	PresentConfirmLogic_t1667 * ___m_PresentConfirm;
	// UnityEngine.GameObject PresentRootLogic::m_NoFriendsLabel
	GameObject_t9 * ___m_NoFriendsLabel;
	// UnityEngine.GameObject PresentRootLogic::m_PresentButton
	GameObject_t9 * ___m_PresentButton;
	// UnityEngine.GameObject PresentRootLogic::m_WaitPayButton
	GameObject_t9 * ___m_WaitPayButton;
	// UnityEngine.GameObject PresentRootLogic::m_PayButton
	GameObject_t9 * ___m_PayButton;
	// UnityEngine.GameObject PresentRootLogic::m_RefuseButton
	GameObject_t9 * ___m_RefuseButton;
	// UnityEngine.GameObject PresentRootLogic::m_ReceiveButton
	GameObject_t9 * ___m_ReceiveButton;
	// PresentRootLogic/TAB_INDEX PresentRootLogic::m_CurTab
	int32_t ___m_CurTab;
	// System.UInt64 PresentRootLogic::m_ChooseFriendGuid
	uint64_t ___m_ChooseFriendGuid;
	// System.String PresentRootLogic::m_ChooseFriendName
	String_t* ___m_ChooseFriendName;
	// System.UInt64 PresentRootLogic::m_ChooseShoppingListGuid
	uint64_t ___m_ChooseShoppingListGuid;
	// System.Boolean PresentRootLogic::m_IsOpenWithAddGoods
	bool ___m_IsOpenWithAddGoods;
};
