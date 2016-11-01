#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PresentRootLogic
struct PresentRootLogic_t1671;
// System.Object
struct Object_t;
// System.String
struct String_t;
// TabButton
struct TabButton_t1210;
// Games.YuanBaoShopData.ShoppingListRecord
struct ShoppingListRecord_t1673;
// PresentRootLogic/TAB_INDEX
#include "AssemblyU2DCSharp_PresentRootLogic_TAB_INDEX.h"

// System.Void PresentRootLogic::.ctor()
 void PresentRootLogic__ctor_m10730 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::Awake()
 void PresentRootLogic_Awake_m10731 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::OpenWithTab(PresentRootLogic/TAB_INDEX)
 void PresentRootLogic_OpenWithTab_m10732 (Object_t * __this/* static, unused */, int32_t ___tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::OnOpenWithTab(System.Boolean,System.Object)
 void PresentRootLogic_OnOpenWithTab_m10733 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::Start()
 void PresentRootLogic_Start_m10734 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::OnDestroy()
 void PresentRootLogic_OnDestroy_m10735 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PresentRootLogic::ConvertTabIndexToString(PresentRootLogic/TAB_INDEX)
 String_t* PresentRootLogic_ConvertTabIndexToString_m10736 (Object_t * __this/* static, unused */, int32_t ___tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::TabOnClick(TabButton)
 void PresentRootLogic_TabOnClick_m10737 (PresentRootLogic_t1671 * __this, TabButton_t1210 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::UpdateTabInfo(PresentRootLogic/TAB_INDEX)
 void PresentRootLogic_UpdateTabInfo_m10738 (PresentRootLogic_t1671 * __this, int32_t ___tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::UpdateTabShow(System.Boolean)
 void PresentRootLogic_UpdateTabShow_m10739 (PresentRootLogic_t1671 * __this, bool ___forcechange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::ForceChangeTab()
 void PresentRootLogic_ForceChangeTab_m10740 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::UpdateFriendInfo()
 void PresentRootLogic_UpdateFriendInfo_m10741 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::UpdateFriendInfo_PresentWaitPay(Games.YuanBaoShopData.ShoppingListRecord)
 void PresentRootLogic_UpdateFriendInfo_PresentWaitPay_m10742 (PresentRootLogic_t1671 * __this, ShoppingListRecord_t1673 * ___shoppinglistrecord, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::UpdateShoppingListInfo()
 void PresentRootLogic_UpdateShoppingListInfo_m10743 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::UpdateShoppingListInfo_PresentWaitPay(Games.YuanBaoShopData.ShoppingListRecord)
 void PresentRootLogic_UpdateShoppingListInfo_PresentWaitPay_m10744 (PresentRootLogic_t1671 * __this, ShoppingListRecord_t1673 * ___shoppinglistrecord, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::UpdateFriendRecordInfo(Games.YuanBaoShopData.ShoppingListRecord)
 void PresentRootLogic_UpdateFriendRecordInfo_m10745 (PresentRootLogic_t1671 * __this, ShoppingListRecord_t1673 * ___shoppinglistrecord, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::UpdateShoppingCartInfo()
 void PresentRootLogic_UpdateShoppingCartInfo_m10746 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::UpdateButtonInfo()
 void PresentRootLogic_UpdateButtonInfo_m10747 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::OnCloseClick()
 void PresentRootLogic_OnCloseClick_m10748 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::OnDelFromShoppingCart(System.Int32)
 void PresentRootLogic_OnDelFromShoppingCart_m10749 (PresentRootLogic_t1671 * __this, int32_t ___goodsindex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::OnChooseFriend(System.UInt64,System.String)
 void PresentRootLogic_OnChooseFriend_m10750 (PresentRootLogic_t1671 * __this, uint64_t ___guid, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::OnChooseShoppingList(System.UInt64)
 void PresentRootLogic_OnChooseShoppingList_m10751 (PresentRootLogic_t1671 * __this, uint64_t ___shoppinglistguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::ShowPresentRule()
 void PresentRootLogic_ShowPresentRule_m10752 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::PresentOnClick()
 void PresentRootLogic_PresentOnClick_m10753 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::WaitPayOnClick()
 void PresentRootLogic_WaitPayOnClick_m10754 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::PayOnClick()
 void PresentRootLogic_PayOnClick_m10755 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::RefuseOnClick()
 void PresentRootLogic_RefuseOnClick_m10756 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::ReceiveOnClick()
 void PresentRootLogic_ReceiveOnClick_m10757 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PresentRootLogic::CleanUp()
 void PresentRootLogic_CleanUp_m10758 (PresentRootLogic_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
