#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PopMenuLogic
struct PopMenuLogic_t1663;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// PopMenuItemLogic/MenuItemOnClicked
struct MenuItemOnClicked_t1661;

// System.Void PopMenuLogic::.ctor()
 void PopMenuLogic__ctor_m10666 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PopMenuLogic PopMenuLogic::Instance()
 PopMenuLogic_t1663 * PopMenuLogic_Instance_m10667 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::Awake()
 void PopMenuLogic_Awake_m10668 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::Start()
 void PopMenuLogic_Start_m10669 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::OnDestroy()
 void PopMenuLogic_OnDestroy_m10670 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::ShowMenu(System.String,UnityEngine.GameObject)
 void PopMenuLogic_ShowMenu_m10671 (Object_t * __this/* static, unused */, String_t* ___strMenuName, GameObject_t9 * ___destGameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::ShowUIOver(System.Boolean,System.Object)
 void PopMenuLogic_ShowUIOver_m10672 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::ShowPopMenu(System.String,UnityEngine.GameObject)
 void PopMenuLogic_ShowPopMenu_m10673 (PopMenuLogic_t1663 * __this, String_t* ___strMenuName, GameObject_t9 * ___destGameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::LoadItemOver(UnityEngine.GameObject,System.Object)
 void PopMenuLogic_LoadItemOver_m10674 (PopMenuLogic_t1663 * __this, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::AddMenuItem(System.Int32,System.String,PopMenuItemLogic/MenuItemOnClicked)
 void PopMenuLogic_AddMenuItem_m10675 (PopMenuLogic_t1663 * __this, int32_t ___ItemId, String_t* ___strLabel, MenuItemOnClicked_t1661 * ___funcItemOnClicked, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::PopMenuAddFriend()
 void PopMenuLogic_PopMenuAddFriend_m10676 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::PopMenuChat()
 void PopMenuLogic_PopMenuChat_m10677 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::ShowChatInfoRootOver(System.Boolean,System.Object)
 void PopMenuLogic_ShowChatInfoRootOver_m10678 (PopMenuLogic_t1663 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::PopMenuInviteTeam()
 void PopMenuLogic_PopMenuInviteTeam_m10679 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::PopMeunJoinTeam()
 void PopMenuLogic_PopMeunJoinTeam_m10680 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::PopMenuDuel()
 void PopMenuLogic_PopMenuDuel_m10681 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::PopMenuView()
 void PopMenuLogic_PopMenuView_m10682 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::PopMenuConsignSaleInfo()
 void PopMenuLogic_PopMenuConsignSaleInfo_m10683 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::PopMenuSendFlower()
 void PopMenuLogic_PopMenuSendFlower_m10684 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::PopMenuSendEgg()
 void PopMenuLogic_PopMenuSendEgg_m10685 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::PopMenuInviteGuild()
 void PopMenuLogic_PopMenuInviteGuild_m10686 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::PopMeunJoinGuild()
 void PopMenuLogic_PopMeunJoinGuild_m10687 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::AgreeChangeJoinGuildRequest()
 void PopMenuLogic_AgreeChangeJoinGuildRequest_m10688 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::BuyItemOpenConsignSale(System.Boolean,System.Object)
 void PopMenuLogic_BuyItemOpenConsignSale_m10689 (PopMenuLogic_t1663 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::ShowTargetFramePopMenu()
 void PopMenuLogic_ShowTargetFramePopMenu_m10690 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::ShowGuildMemberPopMenu()
 void PopMenuLogic_ShowGuildMemberPopMenu_m10691 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::GuildMemberExpel()
 void PopMenuLogic_GuildMemberExpel_m10692 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PopMenuLogic::ClosePopMenu()
 void PopMenuLogic_ClosePopMenu_m10693 (PopMenuLogic_t1663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
