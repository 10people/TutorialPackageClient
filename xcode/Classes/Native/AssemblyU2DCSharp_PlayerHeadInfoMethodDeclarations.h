#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerHeadInfo
struct PlayerHeadInfo_t1654;
// Games.LogicObj.Obj_OtherPlayer
struct Obj_OtherPlayer_t1655;
// System.String
struct String_t;
// Games.ChatHistory.ChatHistoryItem
#include "AssemblyU2DCSharp_Games_ChatHistory_ChatHistoryItem.h"

// System.Void PlayerHeadInfo::.ctor()
 void PlayerHeadInfo__ctor_m10572 (PlayerHeadInfo_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::Init(Games.LogicObj.Obj_OtherPlayer)
 void PlayerHeadInfo_Init_m10573 (PlayerHeadInfo_t1654 * __this, Obj_OtherPlayer_t1655 * ___player, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::Awake()
 void PlayerHeadInfo_Awake_m10574 (PlayerHeadInfo_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::Clear()
 void PlayerHeadInfo_Clear_m10575 (PlayerHeadInfo_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::OnDestroy()
 void PlayerHeadInfo_OnDestroy_m10576 (PlayerHeadInfo_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::UpdateVipInfo(System.Int32)
 void PlayerHeadInfo_UpdateVipInfo_m10577 (PlayerHeadInfo_t1654 * __this, int32_t ___nVipCost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::UpdatePaoShangIcon(System.Int32)
 void PlayerHeadInfo_UpdatePaoShangIcon_m10578 (PlayerHeadInfo_t1654 * __this, int32_t ___nIconState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::ShowTitleInvestitiveByTable(System.Int32,System.String)
 void PlayerHeadInfo_ShowTitleInvestitiveByTable_m10579 (PlayerHeadInfo_t1654 * __this, int32_t ___titleID, String_t* ___strTitleInvestitive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::ShowTitleInvestitive(System.String)
 void PlayerHeadInfo_ShowTitleInvestitive_m10580 (PlayerHeadInfo_t1654 * __this, String_t* ___strTitleInvestitive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::ShowOriginalHeadInfo(System.Boolean)
 void PlayerHeadInfo_ShowOriginalHeadInfo_m10581 (PlayerHeadInfo_t1654 * __this, bool ___bShow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::ShowChatBubble(Games.ChatHistory.ChatHistoryItem)
 void PlayerHeadInfo_ShowChatBubble_m10582 (PlayerHeadInfo_t1654 * __this, ChatHistoryItem_t1179  ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::ShowZiDongXunLuSprite(System.Boolean)
 void PlayerHeadInfo_ShowZiDongXunLuSprite_m10583 (PlayerHeadInfo_t1654 * __this, bool ___show, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::ShowZiDongZhanDouSprite(System.Boolean)
 void PlayerHeadInfo_ShowZiDongZhanDouSprite_m10584 (PlayerHeadInfo_t1654 * __this, bool ___show, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::OnAutoSearchBegin()
 void PlayerHeadInfo_OnAutoSearchBegin_m10585 (PlayerHeadInfo_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::OnAutoSearchEnd()
 void PlayerHeadInfo_OnAutoSearchEnd_m10586 (PlayerHeadInfo_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::OnAutoCombatBegin()
 void PlayerHeadInfo_OnAutoCombatBegin_m10587 (PlayerHeadInfo_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerHeadInfo::OnAutoCombatEnd()
 void PlayerHeadInfo_OnAutoCombatEnd_m10588 (PlayerHeadInfo_t1654 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
