#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerData
struct PlayerData_t2179;
// Games.SkillModle.OwnSkillData[]
struct OwnSkillDataU5BU5D_t4488;
// System.Collections.Generic.List`1<Games.ImpactModle.ClientImpactInfo>
struct List_1_t4490;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// BaseAttr
struct BaseAttr_t4471;
// PlayerData/PlayerAddFriendVlue
struct PlayerAddFriendVlue_t4948;
// PlayerEnterSceneCache
struct PlayerEnterSceneCache_t4949;
// Games.Item.GameItemContainer
struct GameItemContainer_t1340;
// Team
struct Team_t4832;
// Guild
struct Guild_t4735;
// GuildList
struct GuildList_t4743;
// System.Collections.Generic.List`1<GuildWarPushMessageInfo>
struct List_1_t4950;
// System.Collections.Generic.List`1<GuildShopItem>
struct List_1_t1987;
// System.Collections.Generic.List`1<GoldMoneyShopItem>
struct List_1_t4951;
// Games.TitleInvestitive.GameTitleInvestitive
struct GameTitleInvestitive_t4841;
// Games.ChatHistory.GameChatHistory
struct GameChatHistory_t4557;
// System.String
struct String_t;
// Games.ChatHistory.LastSpeakerRecord
struct LastSpeakerRecord_t4560;
// Games.ChatHistory.VoiceChatDownload
struct VoiceChatDownload_t4563;
// RelationList
struct RelationList_t4805;
// Games.Fellow.FellowContainer
struct FellowContainer_t4724;
// Games.Fellow.FriendBreedingFellow
struct FriendBreedingFellow_t4723;
// Games.UserCommonData.UserCommonData
struct UserCommonData_t4952;
// Games.DailyMissionData.DailyMissionData
struct DailyMissionData_t4873;
// Games.JuQingCopySceneData.JuQingCopySceneData
struct JuQingCopySceneData_t4910;
// VitalityData
struct VitalityData_t4945;
// PlayerData/MONEY
struct MONEY_t4946;
// System.Int32[]
struct Int32U5BU5D_t116;
// Games.DailyLuckyDraw.DailyLuckyDrawData
struct DailyLuckyDrawData_t4713;
// Master
struct Master_t4778;
// MasterPreviewList
struct MasterPreviewList_t4781;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t1167;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1333;
// Games.SwordsMan.SwordsManContainer
struct SwordsManContainer_t4829;
// PlayerData/DaySignInInfoData
struct DaySignInInfoData_t4947;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>
struct Dictionary_2_t4953;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>
struct Dictionary_2_t4954;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>
struct Dictionary_2_t4543;
// Games.MonthMultiple.GameMonthMultiple
struct GameMonthMultiple_t4798;
// Games.YuanBaoShopData.ShoppingListRecord
struct ShoppingListRecord_t1673;
// Games.YuanBaoShopData.ShoppingCart
struct ShoppingCart_t4955;
// BelleConfigData
struct BelleConfigData_t4551;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1116;
// Games.LogicObj.Obj_OtherPlayer
struct Obj_OtherPlayer_t1655;
// GC_NEWSERVERAWARD_DATA
struct GC_NEWSERVERAWARD_DATA_t3068;
// GC_DAYAWARD_DATA
struct GC_DAYAWARD_DATA_t3070;
// GC_ONLINEAWARD_DATA
struct GC_ONLINEAWARD_DATA_t3072;
// GC_ASK_ACTIVENESSAWARD_RET
struct GC_ASK_ACTIVENESSAWARD_RET_t3074;
// GC_SYNC_ACTIVENESSAWARD
struct GC_SYNC_ACTIVENESSAWARD_t3075;
// GC_SYNC_ACTIVENESS
struct GC_SYNC_ACTIVENESS_t3218;
// GC_NEWONLINEAWARD_DATA
struct GC_NEWONLINEAWARD_DATA_t3368;
// GC_SYNC_PAY_ACTIVITY_DATA
struct GC_SYNC_PAY_ACTIVITY_DATA_t3375;
// GC_NEW7DAYONLINEAWARD_DATA
struct GC_NEW7DAYONLINEAWARD_DATA_t3431;
// GC_SYNC_NEW7DAYONLINEAWARDTABLE
struct GC_SYNC_NEW7DAYONLINEAWARDTABLE_t3432;
// GC_RET_GETREWARDFORSIGNIN
struct GC_RET_GETREWARDFORSIGNIN_t3477;
// GC_UPDATE_COST_REBATE_INFO
struct GC_UPDATE_COST_REBATE_INFO_t3510;
// GC_UPDATE_SPECIALTIME_PAY_REBATE_INFO
struct GC_UPDATE_SPECIALTIME_PAY_REBATE_INFO_t3549;
// GC_SPECIALTIME_PAY_REBATE_RANK_REWARD_INFO
struct GC_SPECIALTIME_PAY_REBATE_RANK_REWARD_INFO_t3552;
// GC_MONEYTREE_DATA
struct GC_MONEYTREE_DATA_t3140;
// GC_MONEYTREE_VIP_RET
struct GC_MONEYTREE_VIP_RET_t3467;
// GC_SYNC_VITALITY
struct GC_SYNC_VITALITY_t3625;
// GC_SERVERFLAGS
struct GC_SERVERFLAGS_t3433;
// GC_UPDATE_NEWSERVERMOUNT
struct GC_UPDATE_NEWSERVERMOUNT_t3605;
// GC_UPDATE_GOLDMONEYSHOPTIME
struct GC_UPDATE_GOLDMONEYSHOPTIME_t3636;
// GC_GUILDACTIVITY_BOSSDATA
struct GC_GUILDACTIVITY_BOSSDATA_t3429;
// ChatInfoLogic/CHANNEL_TYPE
#include "AssemblyU2DCSharp_ChatInfoLogic_CHANNEL_TYPE.h"
// Games.AwardActivity.AwardActivityData
#include "AssemblyU2DCSharp_Games_AwardActivity_AwardActivityData.h"
// Games.MoneyTree.MoneyTreeData
#include "AssemblyU2DCSharp_Games_MoneyTree_MoneyTreeData.h"
// Games.Item.GemData
#include "AssemblyU2DCSharp_Games_Item_GemData.h"
// PayActivityData
#include "AssemblyU2DCSharp_PayActivityData.h"
// CostRebateData
#include "AssemblyU2DCSharp_CostRebateData.h"
// SpecialTimePayRebateData
#include "AssemblyU2DCSharp_SpecialTimePayRebateData.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// GuildActivityBossData
#include "AssemblyU2DCSharp_GuildActivityBossData.h"
// Games.Item.GameItemContainer/Type
#include "AssemblyU2DCSharp_Games_Item_GameItemContainer_Type.h"
// Games.SwordsMan.SwordsManContainer/PACK_TYPE
#include "AssemblyU2DCSharp_Games_SwordsMan_SwordsManContainer_PACK_TY.h"
// Games.AwardActivity.DaySignInItem
#include "AssemblyU2DCSharp_Games_AwardActivity_DaySignInItem.h"
// Games.AwardActivity.ActivityRewardData
#include "AssemblyU2DCSharp_Games_AwardActivity_ActivityRewardData.h"
// Games.AwardActivity.JoinNumRewardData
#include "AssemblyU2DCSharp_Games_AwardActivity_JoinNumRewardData.h"
// Games.AwardActivity.OnlineAwardLine
#include "AssemblyU2DCSharp_Games_AwardActivity_OnlineAwardLine.h"
// SERVER_FLAGS_ENUM
#include "AssemblyU2DCSharp_SERVER_FLAGS_ENUM.h"

// System.Void PlayerData::.ctor()
 void PlayerData__ctor_m35039 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::Init()
 void PlayerData_Init_m35040 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::CleanUp()
 void PlayerData_CleanUp_m35041 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.SkillModle.OwnSkillData[] PlayerData::get_OwnSkillInfo()
 OwnSkillDataU5BU5D_t4488* PlayerData_get_OwnSkillInfo_m35042 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_OwnSkillInfo(Games.SkillModle.OwnSkillData[])
 void PlayerData_set_OwnSkillInfo_m35043 (PlayerData_t2179 * __this, OwnSkillDataU5BU5D_t4488* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_CrashSkillCDTime()
 int32_t PlayerData_get_CrashSkillCDTime_m35044 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_CrashSkillCDTime(System.Int32)
 void PlayerData_set_CrashSkillCDTime_m35045 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_SkillPublicTime()
 int32_t PlayerData_get_SkillPublicTime_m35046 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_SkillPublicTime(System.Int32)
 void PlayerData_set_SkillPublicTime_m35047 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::CleanUpOwnSkillInfo()
 void PlayerData_CleanUpOwnSkillInfo_m35048 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsCanPKLegal()
 bool PlayerData_get_IsCanPKLegal_m35049 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsCanPKLegal(System.Boolean)
 void PlayerData_set_IsCanPKLegal_m35050 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_PkModle()
 int32_t PlayerData_get_PkModle_m35051 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_PkModle(System.Int32)
 void PlayerData_set_PkModle_m35052 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsOpenCabalAuto()
 bool PlayerData_get_IsOpenCabalAuto_m35053 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsOpenCabalAuto(System.Boolean)
 void PlayerData_set_IsOpenCabalAuto_m35054 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsOpenAutoCombat()
 bool PlayerData_get_IsOpenAutoCombat_m35055 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsOpenAutoCombat(System.Boolean)
 void PlayerData_set_IsOpenAutoCombat_m35056 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerData::get_BreakAutoCombatTime()
 float PlayerData_get_BreakAutoCombatTime_m35057 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_BreakAutoCombatTime(System.Single)
 void PlayerData_set_BreakAutoCombatTime_m35058 (PlayerData_t2179 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_AutoComabat()
 bool PlayerData_get_AutoComabat_m35059 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_AutoComabat(System.Boolean)
 void PlayerData_set_AutoComabat_m35060 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_StealthLev()
 int32_t PlayerData_get_StealthLev_m35061 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_StealthLev(System.Int32)
 void PlayerData_set_StealthLev_m35062 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_Profession()
 int32_t PlayerData_get_Profession_m35063 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_Profession(System.Int32)
 void PlayerData_set_Profession_m35064 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerData::get_LastConsignShareTime()
 float PlayerData_get_LastConsignShareTime_m35065 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_LastConsignShareTime(System.Single)
 void PlayerData_set_LastConsignShareTime_m35066 (PlayerData_t2179 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_VipCost()
 int32_t PlayerData_get_VipCost_m35067 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_VipCost(System.Int32)
 void PlayerData_set_VipCost_m35068 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_PoolCombatValue()
 int32_t PlayerData_get_PoolCombatValue_m35069 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_PoolCombatValue(System.Int32)
 void PlayerData_set_PoolCombatValue_m35070 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.ImpactModle.ClientImpactInfo> PlayerData::get_ClientImpactInfo()
 List_1_t4490 * PlayerData_get_ClientImpactInfo_m35071 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ClientImpactInfo(System.Collections.Generic.List`1<Games.ImpactModle.ClientImpactInfo>)
 void PlayerData_set_ClientImpactInfo_m35072 (PlayerData_t2179 * __this, List_1_t4490 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_MainBindParent()
 int32_t PlayerData_get_MainBindParent_m35073 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_MainBindParent(System.Int32)
 void PlayerData_set_MainBindParent_m35074 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> PlayerData::get_MainBindChildren()
 List_1_t90 * PlayerData_get_MainBindChildren_m35075 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_MainBindChildren(System.Collections.Generic.List`1<System.Int32>)
 void PlayerData_set_MainBindChildren_m35076 (PlayerData_t2179 * __this, List_1_t90 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BaseAttr PlayerData::get_MainPlayerBaseAttr()
 BaseAttr_t4471 * PlayerData_get_MainPlayerBaseAttr_m35077 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_MainPlayerBaseAttr(BaseAttr)
 void PlayerData_set_MainPlayerBaseAttr_m35078 (PlayerData_t2179 * __this, BaseAttr_t4471 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerData/PlayerAddFriendVlue PlayerData::get_AddFriendVlue()
 PlayerAddFriendVlue_t4948 * PlayerData_get_AddFriendVlue_m35079 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_AddFriendVlue(PlayerData/PlayerAddFriendVlue)
 void PlayerData_set_AddFriendVlue_m35080 (PlayerData_t2179 * __this, PlayerAddFriendVlue_t4948 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerEnterSceneCache PlayerData::get_EnterSceneCache()
 PlayerEnterSceneCache_t4949 * PlayerData_get_EnterSceneCache_m35081 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_EnterSceneCache(PlayerEnterSceneCache)
 void PlayerData_set_EnterSceneCache_m35082 (PlayerData_t2179 * __this, PlayerEnterSceneCache_t4949 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItemContainer PlayerData::GetItemContainer(Games.Item.GameItemContainer/Type)
 GameItemContainer_t1340 * PlayerData_GetItemContainer_m35083 (PlayerData_t2179 * __this, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItemContainer PlayerData::get_BackPack()
 GameItemContainer_t1340 * PlayerData_get_BackPack_m35084 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_BackPack(Games.Item.GameItemContainer)
 void PlayerData_set_BackPack_m35085 (PlayerData_t2179 * __this, GameItemContainer_t1340 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItemContainer PlayerData::get_EquipPack()
 GameItemContainer_t1340 * PlayerData_get_EquipPack_m35086 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_EquipPack(Games.Item.GameItemContainer)
 void PlayerData_set_EquipPack_m35087 (PlayerData_t2179 * __this, GameItemContainer_t1340 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItemContainer PlayerData::get_BuyBackPack()
 GameItemContainer_t1340 * PlayerData_get_BuyBackPack_m35088 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_BuyBackPack(Games.Item.GameItemContainer)
 void PlayerData_set_BuyBackPack_m35089 (PlayerData_t2179 * __this, GameItemContainer_t1340 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GameItemContainer PlayerData::get_StoragePack()
 GameItemContainer_t1340 * PlayerData_get_StoragePack_m35090 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_StoragePack(Games.Item.GameItemContainer)
 void PlayerData_set_StoragePack_m35091 (PlayerData_t2179 * __this, GameItemContainer_t1340 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Team PlayerData::get_TeamInfo()
 Team_t4832 * PlayerData_get_TeamInfo_m35092 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_TeamInfo(Team)
 void PlayerData_set_TeamInfo_m35093 (PlayerData_t2179 * __this, Team_t4832 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsHaveTeam()
 bool PlayerData_IsHaveTeam_m35094 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsTeamMem(System.UInt64)
 bool PlayerData_IsTeamMem_m35095 (PlayerData_t2179 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Guild PlayerData::get_GuildInfo()
 Guild_t4735 * PlayerData_get_GuildInfo_m35096 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_GuildInfo(Guild)
 void PlayerData_set_GuildInfo_m35097 (PlayerData_t2179 * __this, Guild_t4735 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsHaveGuild()
 bool PlayerData_IsHaveGuild_m35098 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsReserveGuildMember()
 bool PlayerData_IsReserveGuildMember_m35099 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsGuildMember(Games.LogicObj.Obj_OtherPlayer)
 bool PlayerData_IsGuildMember_m35100 (PlayerData_t2179 * __this, Obj_OtherPlayer_t1655 * ____otherPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsGuildChief()
 bool PlayerData_IsGuildChief_m35101 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsGuildViceChief(System.UInt64)
 bool PlayerData_IsGuildViceChief_m35102 (PlayerData_t2179 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GuildList PlayerData::get_guildList()
 GuildList_t4743 * PlayerData_get_guildList_m35103 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_guildList(GuildList)
 void PlayerData_set_guildList_m35104 (PlayerData_t2179 * __this, GuildList_t4743 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GuildWarPushMessageInfo> PlayerData::get_WarPushMessaeg()
 List_1_t4950 * PlayerData_get_WarPushMessaeg_m35105 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_WarPushMessaeg(System.Collections.Generic.List`1<GuildWarPushMessageInfo>)
 void PlayerData_set_WarPushMessaeg_m35106 (PlayerData_t2179 * __this, List_1_t4950 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GuildShopItem> PlayerData::get_GuildShopItemList()
 List_1_t1987 * PlayerData_get_GuildShopItemList_m35107 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_GuildShopItemList(System.Collections.Generic.List`1<GuildShopItem>)
 void PlayerData_set_GuildShopItemList_m35108 (PlayerData_t2179 * __this, List_1_t1987 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GoldMoneyShopItem> PlayerData::get_GoldMoneyShopItemList()
 List_1_t4951 * PlayerData_get_GoldMoneyShopItemList_m35109 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_GoldMoneyShopItemList(System.Collections.Generic.List`1<GoldMoneyShopItem>)
 void PlayerData_set_GoldMoneyShopItemList_m35110 (PlayerData_t2179 * __this, List_1_t4951 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.TitleInvestitive.GameTitleInvestitive PlayerData::get_TitleInvestitive()
 GameTitleInvestitive_t4841 * PlayerData_get_TitleInvestitive_m35111 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_TitleInvestitive(Games.TitleInvestitive.GameTitleInvestitive)
 void PlayerData_set_TitleInvestitive_m35112 (PlayerData_t2179 * __this, GameTitleInvestitive_t4841 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsLockPriorTitle()
 bool PlayerData_get_IsLockPriorTitle_m35113 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsLockPriorTitle(System.Boolean)
 void PlayerData_set_IsLockPriorTitle_m35114 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.ChatHistory.GameChatHistory PlayerData::get_ChatHistory()
 GameChatHistory_t4557 * PlayerData_get_ChatHistory_m35115 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ChatHistory(Games.ChatHistory.GameChatHistory)
 void PlayerData_set_ChatHistory_m35116 (PlayerData_t2179 * __this, GameChatHistory_t4557 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ChatInfoLogic/CHANNEL_TYPE PlayerData::get_ChooseChannel()
 int32_t PlayerData_get_ChooseChannel_m35117 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ChooseChannel(ChatInfoLogic/CHANNEL_TYPE)
 void PlayerData_set_ChooseChannel_m35118 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 PlayerData::get_LastTellGUID()
 uint64_t PlayerData_get_LastTellGUID_m35119 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_LastTellGUID(System.UInt64)
 void PlayerData_set_LastTellGUID_m35120 (PlayerData_t2179 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerData::get_LastTellName()
 String_t* PlayerData_get_LastTellName_m35121 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_LastTellName(System.String)
 void PlayerData_set_LastTellName_m35122 (PlayerData_t2179 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.ChatHistory.LastSpeakerRecord PlayerData::get_TellChatSpeakers()
 LastSpeakerRecord_t4560 * PlayerData_get_TellChatSpeakers_m35123 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_TellChatSpeakers(Games.ChatHistory.LastSpeakerRecord)
 void PlayerData_set_TellChatSpeakers_m35124 (PlayerData_t2179 * __this, LastSpeakerRecord_t4560 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.ChatHistory.VoiceChatDownload PlayerData::get_VoiceChatDownloadRecord()
 VoiceChatDownload_t4563 * PlayerData_get_VoiceChatDownloadRecord_m35125 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_VoiceChatDownloadRecord(Games.ChatHistory.VoiceChatDownload)
 void PlayerData_set_VoiceChatDownloadRecord_m35126 (PlayerData_t2179 * __this, VoiceChatDownload_t4563 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerData::get_ChatEditInput()
 String_t* PlayerData_get_ChatEditInput_m35127 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ChatEditInput(System.String)
 void PlayerData_set_ChatEditInput_m35128 (PlayerData_t2179 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RelationList PlayerData::get_FriendList()
 RelationList_t4805 * PlayerData_get_FriendList_m35129 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_FriendList(RelationList)
 void PlayerData_set_FriendList_m35130 (PlayerData_t2179 * __this, RelationList_t4805 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RelationList PlayerData::get_BlackList()
 RelationList_t4805 * PlayerData_get_BlackList_m35131 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_BlackList(RelationList)
 void PlayerData_set_BlackList_m35132 (PlayerData_t2179 * __this, RelationList_t4805 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RelationList PlayerData::get_HateList()
 RelationList_t4805 * PlayerData_get_HateList_m35133 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_HateList(RelationList)
 void PlayerData_set_HateList_m35134 (PlayerData_t2179 * __this, RelationList_t4805 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Fellow.FellowContainer PlayerData::get_FellowContainer()
 FellowContainer_t4724 * PlayerData_get_FellowContainer_m35135 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_FellowContainer(Games.Fellow.FellowContainer)
 void PlayerData_set_FellowContainer_m35136 (PlayerData_t2179 * __this, FellowContainer_t4724 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Fellow.FriendBreedingFellow PlayerData::get_FriendBreedingFellowInfo()
 FriendBreedingFellow_t4723 * PlayerData_get_FriendBreedingFellowInfo_m35137 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_FriendBreedingFellowInfo(Games.Fellow.FriendBreedingFellow)
 void PlayerData_set_FriendBreedingFellowInfo_m35138 (PlayerData_t2179 * __this, FriendBreedingFellow_t4723 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_LastProcreateTime()
 int32_t PlayerData_get_LastProcreateTime_m35139 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_LastProcreateTime(System.Int32)
 void PlayerData_set_LastProcreateTime_m35140 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_GoneProcreateTime()
 int32_t PlayerData_get_GoneProcreateTime_m35141 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_GoneProcreateTime(System.Int32)
 void PlayerData_set_GoneProcreateTime_m35142 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsProcreateOver()
 bool PlayerData_IsProcreateOver_m35143 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsProcreateGoing()
 bool PlayerData_IsProcreateGoing_m35144 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsProcreateWaitReceive()
 bool PlayerData_IsProcreateWaitReceive_m35145 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::GetProcreateRemainTime()
 int32_t PlayerData_GetProcreateRemainTime_m35146 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::GetProcreateReceiveRemainTime()
 int32_t PlayerData_GetProcreateReceiveRemainTime_m35147 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::Tick_ProcreateTime()
 void PlayerData_Tick_ProcreateTime_m35148 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_FellowPlayerEffect()
 bool PlayerData_get_FellowPlayerEffect_m35149 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_FellowPlayerEffect(System.Boolean)
 void PlayerData_set_FellowPlayerEffect_m35150 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> PlayerData::get_ActiveFellowSkill()
 List_1_t90 * PlayerData_get_ActiveFellowSkill_m35151 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ActiveFellowSkill(System.Collections.Generic.List`1<System.Int32>)
 void PlayerData_set_ActiveFellowSkill_m35152 (PlayerData_t2179 * __this, List_1_t90 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_FellowGainCount_Free()
 int32_t PlayerData_get_FellowGainCount_Free_m35153 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_FellowGainCount_Free(System.Int32)
 void PlayerData_set_FellowGainCount_Free_m35154 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_FellowGainCount_Coin()
 int32_t PlayerData_get_FellowGainCount_Coin_m35155 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_FellowGainCount_Coin(System.Int32)
 void PlayerData_set_FellowGainCount_Coin_m35156 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_FellowGainCount_YuanBao()
 int32_t PlayerData_get_FellowGainCount_YuanBao_m35157 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_FellowGainCount_YuanBao(System.Int32)
 void PlayerData_set_FellowGainCount_YuanBao_m35158 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_FellowGainCD_Coin()
 int32_t PlayerData_get_FellowGainCD_Coin_m35159 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_FellowGainCD_Coin(System.Int32)
 void PlayerData_set_FellowGainCD_Coin_m35160 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::Tick_FellowGainCD()
 void PlayerData_Tick_FellowGainCD_m35161 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.AwardActivity.AwardActivityData PlayerData::get_AwardActivityData()
 AwardActivityData_t4544  PlayerData_get_AwardActivityData_m35162 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::Tick_Award()
 void PlayerData_Tick_Award_m35163 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_NEWSERVERAWARD_DATA)
 void PlayerData_HandlePacket_m35164 (PlayerData_t2179 * __this, GC_NEWSERVERAWARD_DATA_t3068 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_DAYAWARD_DATA)
 void PlayerData_HandlePacket_m35165 (PlayerData_t2179 * __this, GC_DAYAWARD_DATA_t3070 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_ONLINEAWARD_DATA)
 void PlayerData_HandlePacket_m35166 (PlayerData_t2179 * __this, GC_ONLINEAWARD_DATA_t3072 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_ASK_ACTIVENESSAWARD_RET)
 void PlayerData_HandlePacket_m35167 (PlayerData_t2179 * __this, GC_ASK_ACTIVENESSAWARD_RET_t3074 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_SYNC_ACTIVENESSAWARD)
 void PlayerData_HandlePacket_m35168 (PlayerData_t2179 * __this, GC_SYNC_ACTIVENESSAWARD_t3075 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_SYNC_ACTIVENESS)
 void PlayerData_HandlePacket_m35169 (PlayerData_t2179 * __this, GC_SYNC_ACTIVENESS_t3218 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_NEWONLINEAWARD_DATA)
 void PlayerData_HandlePacket_m35170 (PlayerData_t2179 * __this, GC_NEWONLINEAWARD_DATA_t3368 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_SYNC_PAY_ACTIVITY_DATA)
 void PlayerData_HandlePacket_m35171 (PlayerData_t2179 * __this, GC_SYNC_PAY_ACTIVITY_DATA_t3375 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_NEW7DAYONLINEAWARD_DATA)
 void PlayerData_HandlePacket_m35172 (PlayerData_t2179 * __this, GC_NEW7DAYONLINEAWARD_DATA_t3431 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_SYNC_NEW7DAYONLINEAWARDTABLE)
 void PlayerData_HandlePacket_m35173 (PlayerData_t2179 * __this, GC_SYNC_NEW7DAYONLINEAWARDTABLE_t3432 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_RET_GETREWARDFORSIGNIN)
 void PlayerData_HandlePacket_m35174 (PlayerData_t2179 * __this, GC_RET_GETREWARDFORSIGNIN_t3477 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_UPDATE_COST_REBATE_INFO)
 void PlayerData_HandlePacket_m35175 (PlayerData_t2179 * __this, GC_UPDATE_COST_REBATE_INFO_t3510 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_UPDATE_SPECIALTIME_PAY_REBATE_INFO)
 void PlayerData_HandlePacket_m35176 (PlayerData_t2179 * __this, GC_UPDATE_SPECIALTIME_PAY_REBATE_INFO_t3549 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_SPECIALTIME_PAY_REBATE_RANK_REWARD_INFO)
 void PlayerData_HandlePacket_m35177 (PlayerData_t2179 * __this, GC_SPECIALTIME_PAY_REBATE_RANK_REWARD_INFO_t3552 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.MoneyTree.MoneyTreeData PlayerData::get_MoneyTreeData()
 MoneyTreeData_t4797  PlayerData_get_MoneyTreeData_m35178 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::Tick_MoneyTreeAward()
 void PlayerData_Tick_MoneyTreeAward_m35179 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_MONEYTREE_DATA)
 void PlayerData_HandlePacket_m35180 (PlayerData_t2179 * __this, GC_MONEYTREE_DATA_t3140 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_MONEYTREE_VIP_RET)
 void PlayerData_HandlePacket_m35181 (PlayerData_t2179 * __this, GC_MONEYTREE_VIP_RET_t3467 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_ReliveEntryTime()
 int32_t PlayerData_get_ReliveEntryTime_m35182 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ReliveEntryTime(System.Int32)
 void PlayerData_set_ReliveEntryTime_m35183 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.UserCommonData.UserCommonData PlayerData::get_CommonData()
 UserCommonData_t4952 * PlayerData_get_CommonData_m35184 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_CommonData(Games.UserCommonData.UserCommonData)
 void PlayerData_set_CommonData_m35185 (PlayerData_t2179 * __this, UserCommonData_t4952 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.DailyMissionData.DailyMissionData PlayerData::get_DailyMissionData()
 DailyMissionData_t4873 * PlayerData_get_DailyMissionData_m35186 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_DailyMissionData(Games.DailyMissionData.DailyMissionData)
 void PlayerData_set_DailyMissionData_m35187 (PlayerData_t2179 * __this, DailyMissionData_t4873 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.JuQingCopySceneData.JuQingCopySceneData PlayerData::get_JuQingCopySceneData()
 JuQingCopySceneData_t4910 * PlayerData_get_JuQingCopySceneData_m35188 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_JuQingCopySceneData(Games.JuQingCopySceneData.JuQingCopySceneData)
 void PlayerData_set_JuQingCopySceneData_m35189 (PlayerData_t2179 * __this, JuQingCopySceneData_t4910 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 PlayerData::get_LoverGUID()
 uint64_t PlayerData_get_LoverGUID_m35190 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_LoverGUID(System.UInt64)
 void PlayerData_set_LoverGUID_m35191 (PlayerData_t2179 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// VitalityData PlayerData::get_VitalityData()
 VitalityData_t4945 * PlayerData_get_VitalityData_m35192 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_VitalityData(VitalityData)
 void PlayerData_set_VitalityData_m35193 (PlayerData_t2179 * __this, VitalityData_t4945 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_SYNC_VITALITY)
 void PlayerData_HandlePacket_m35194 (PlayerData_t2179 * __this, GC_SYNC_VITALITY_t3625 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerData/MONEY PlayerData::get_Money()
 MONEY_t4946 * PlayerData_get_Money_m35195 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_Money(PlayerData/MONEY)
 void PlayerData_set_Money_m35196 (PlayerData_t2179 * __this, MONEY_t4946 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] PlayerData::get_FashionDeadline()
 Int32U5BU5D_t116* PlayerData_get_FashionDeadline_m35197 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_FashionDeadline(System.Int32[])
 void PlayerData_set_FashionDeadline_m35198 (PlayerData_t2179 * __this, Int32U5BU5D_t116* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_CurFashionID()
 int32_t PlayerData_get_CurFashionID_m35199 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_CurFashionID(System.Int32)
 void PlayerData_set_CurFashionID_m35200 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_ShowFashion()
 bool PlayerData_get_ShowFashion_m35201 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ShowFashion(System.Boolean)
 void PlayerData_set_ShowFashion_m35202 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_ModelVisualID()
 int32_t PlayerData_get_ModelVisualID_m35203 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ModelVisualID(System.Int32)
 void PlayerData_set_ModelVisualID_m35204 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::ClearFashionData()
 void PlayerData_ClearFashionData_m35205 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.DailyLuckyDraw.DailyLuckyDrawData PlayerData::get_DailyLuckyDrawData()
 DailyLuckyDrawData_t4713 * PlayerData_get_DailyLuckyDrawData_m35206 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_DailyLuckyDrawData(Games.DailyLuckyDraw.DailyLuckyDrawData)
 void PlayerData_set_DailyLuckyDrawData_m35207 (PlayerData_t2179 * __this, DailyLuckyDrawData_t4713 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.Item.GemData PlayerData::get_GemData()
 GemData_t4775  PlayerData_get_GemData_m35208 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_GemData(Games.Item.GemData)
 void PlayerData_set_GemData_m35209 (PlayerData_t2179 * __this, GemData_t4775  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Master PlayerData::get_MasterInfo()
 Master_t4778 * PlayerData_get_MasterInfo_m35210 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_MasterInfo(Master)
 void PlayerData_set_MasterInfo_m35211 (PlayerData_t2179 * __this, Master_t4778 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MasterPreviewList PlayerData::get_MasterPreList()
 MasterPreviewList_t4781 * PlayerData_get_MasterPreList_m35212 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_MasterPreList(MasterPreviewList)
 void PlayerData_set_MasterPreList_m35213 (PlayerData_t2179 * __this, MasterPreviewList_t4781 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_TorchValue()
 int32_t PlayerData_get_TorchValue_m35214 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_TorchValue(System.Int32)
 void PlayerData_set_TorchValue_m35215 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> PlayerData::get_MasterSkillName()
 Dictionary_2_t1167 * PlayerData_get_MasterSkillName_m35216 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_MasterSkillName(System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
 void PlayerData_set_MasterSkillName_m35217 (PlayerData_t2179 * __this, Dictionary_2_t1167 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsHaveMaster()
 bool PlayerData_IsHaveMaster_m35218 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsMasterChief()
 bool PlayerData_IsMasterChief_m35219 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsMasterReserveMember()
 bool PlayerData_IsMasterReserveMember_m35220 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerData::GetMasterSkillName(System.Int32)
 String_t* PlayerData_GetMasterSkillName_m35221 (PlayerData_t2179 * __this, int32_t ___skillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::GetMasterSkillActiveNum()
 int32_t PlayerData_GetMasterSkillActiveNum_m35222 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_StaminaCountDown()
 int32_t PlayerData_get_StaminaCountDown_m35223 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_StaminaCountDown(System.Int32)
 void PlayerData_set_StaminaCountDown_m35224 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> PlayerData::get_RollNoticeList()
 List_1_t1333 * PlayerData_get_RollNoticeList_m35225 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_RollNoticeList(System.Collections.Generic.List`1<System.String>)
 void PlayerData_set_RollNoticeList_m35226 (PlayerData_t2179 * __this, List_1_t1333 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.SwordsMan.SwordsManContainer PlayerData::get_SwordsManBackPack()
 SwordsManContainer_t4829 * PlayerData_get_SwordsManBackPack_m35227 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_SwordsManBackPack(Games.SwordsMan.SwordsManContainer)
 void PlayerData_set_SwordsManBackPack_m35228 (PlayerData_t2179 * __this, SwordsManContainer_t4829 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.SwordsMan.SwordsManContainer PlayerData::get_SwordsManEquipPack()
 SwordsManContainer_t4829 * PlayerData_get_SwordsManEquipPack_m35229 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_SwordsManEquipPack(Games.SwordsMan.SwordsManContainer)
 void PlayerData_set_SwordsManEquipPack_m35230 (PlayerData_t2179 * __this, SwordsManContainer_t4829 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.SwordsMan.SwordsManContainer PlayerData::GetSwordsManContainer(Games.SwordsMan.SwordsManContainer/PACK_TYPE)
 SwordsManContainer_t4829 * PlayerData_GetSwordsManContainer_m35231 (PlayerData_t2179 * __this, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_SwordsManVisitState()
 int32_t PlayerData_get_SwordsManVisitState_m35232 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_SwordsManVisitState(System.Int32)
 void PlayerData_set_SwordsManVisitState_m35233 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_SwordsManScore()
 int32_t PlayerData_get_SwordsManScore_m35234 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_SwordsManScore(System.Int32)
 void PlayerData_set_SwordsManScore_m35235 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_SwordsManCombat(System.Int32)
 void PlayerData_set_SwordsManCombat_m35236 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_SwordsManCombat()
 int32_t PlayerData_get_SwordsManCombat_m35237 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_Reputation()
 int32_t PlayerData_get_Reputation_m35238 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_Reputation(System.Int32)
 void PlayerData_set_Reputation_m35239 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_GuildDKP()
 int32_t PlayerData_get_GuildDKP_m35240 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_GuildDKP(System.Int32)
 void PlayerData_set_GuildDKP_m35241 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerData/DaySignInInfoData PlayerData::get_DaySignInfo()
 DaySignInInfoData_t4947 * PlayerData_get_DaySignInfo_m35242 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_DaySignInfo(PlayerData/DaySignInInfoData)
 void PlayerData_set_DaySignInfo_m35243 (PlayerData_t2179 * __this, DaySignInInfoData_t4947 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_CurMounthId(System.Int32)
 void PlayerData_set_CurMounthId_m35244 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_CurMounthId()
 int32_t PlayerData_get_CurMounthId_m35245 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_NowDayIndex(System.Int32)
 void PlayerData_set_NowDayIndex_m35246 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_NowDayIndex()
 int32_t PlayerData_get_NowDayIndex_m35247 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_DefaultFirstSignIndex(System.Int32)
 void PlayerData_set_DefaultFirstSignIndex_m35248 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_DefaultFirstSignIndex()
 int32_t PlayerData_get_DefaultFirstSignIndex_m35249 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_CurSelectedDayIndex(System.Int32)
 void PlayerData_set_CurSelectedDayIndex_m35250 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_CurSelectedDayIndex()
 int32_t PlayerData_get_CurSelectedDayIndex_m35251 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsFirstCanSupply(System.Int32)
 bool PlayerData_IsFirstCanSupply_m35252 (PlayerData_t2179 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsHaveNewSignCanDraw()
 bool PlayerData_IsHaveNewSignCanDraw_m35253 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::SetSignInItemStatus(System.Int32,System.Int32)
 void PlayerData_SetSignInItemStatus_m35254 (PlayerData_t2179 * __this, int32_t ___index, int32_t ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::ClearSignInItemListInCache()
 void PlayerData_ClearSignInItemListInCache_m35255 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::GetTotalSignedCountThisMounth()
 int32_t PlayerData_GetTotalSignedCountThisMounth_m35256 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::AddDaySignInfo(Games.AwardActivity.DaySignInItem)
 void PlayerData_AddDaySignInfo_m35257 (PlayerData_t2179 * __this, DaySignInItem_t1379  ___DataLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerData::get_ActivityRewardBeginTime()
 String_t* PlayerData_get_ActivityRewardBeginTime_m35258 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ActivityRewardBeginTime(System.String)
 void PlayerData_set_ActivityRewardBeginTime_m35259 (PlayerData_t2179 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData> PlayerData::get_OnActivityRewardTable()
 Dictionary_2_t4953 * PlayerData_get_OnActivityRewardTable_m35260 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_OnActivityRewardTable(System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData>)
 void PlayerData_set_OnActivityRewardTable_m35261 (PlayerData_t2179 * __this, Dictionary_2_t4953 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::AddActivityRewardTable(Games.AwardActivity.ActivityRewardData)
 void PlayerData_AddActivityRewardTable_m35262 (PlayerData_t2179 * __this, ActivityRewardData_t2067  ___rewardData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData> PlayerData::get_OnJoinNumRewardTable()
 Dictionary_2_t4954 * PlayerData_get_OnJoinNumRewardTable_m35263 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_OnJoinNumRewardTable(System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData>)
 void PlayerData_set_OnJoinNumRewardTable_m35264 (PlayerData_t2179 * __this, Dictionary_2_t4954 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::AddJoinNumRewardTable(Games.AwardActivity.JoinNumRewardData)
 void PlayerData_AddJoinNumRewardTable_m35265 (PlayerData_t2179 * __this, JoinNumRewardData_t2071  ___rewardData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine> PlayerData::get_OnlineAwardTable()
 Dictionary_2_t4543 * PlayerData_get_OnlineAwardTable_m35266 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_OnlineAwardTable(System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>)
 void PlayerData_set_OnlineAwardTable_m35267 (PlayerData_t2179 * __this, Dictionary_2_t4543 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::AddOnlineAwardLine(Games.AwardActivity.OnlineAwardLine)
 void PlayerData_AddOnlineAwardLine_m35268 (PlayerData_t2179 * __this, OnlineAwardLine_t4542  ___DataLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_ShouNowOnlineAwardWindow()
 bool PlayerData_get_ShouNowOnlineAwardWindow_m35269 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ShouNowOnlineAwardWindow(System.Boolean)
 void PlayerData_set_ShouNowOnlineAwardWindow_m35270 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine> PlayerData::get_NewOnlineAwardTable()
 Dictionary_2_t4543 * PlayerData_get_NewOnlineAwardTable_m35271 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_NewOnlineAwardTable(System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine>)
 void PlayerData_set_NewOnlineAwardTable_m35272 (PlayerData_t2179 * __this, Dictionary_2_t4543 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::AddNewOnlineAwardLine(Games.AwardActivity.OnlineAwardLine)
 void PlayerData_AddNewOnlineAwardLine_m35273 (PlayerData_t2179 * __this, OnlineAwardLine_t4542  ___DataLine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerData::get_HpItemCDTime()
 float PlayerData_get_HpItemCDTime_m35274 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_HpItemCDTime(System.Single)
 void PlayerData_set_HpItemCDTime_m35275 (PlayerData_t2179 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerData::get_MpItemCDTime()
 float PlayerData_get_MpItemCDTime_m35276 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_MpItemCDTime(System.Single)
 void PlayerData_set_MpItemCDTime_m35277 (PlayerData_t2179 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_StartSweep()
 bool PlayerData_get_StartSweep_m35278 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_StartSweep(System.Boolean)
 void PlayerData_set_StartSweep_m35279 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_CangJIngGeTier()
 int32_t PlayerData_get_CangJIngGeTier_m35280 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_CangJIngGeTier(System.Int32)
 void PlayerData_set_CangJIngGeTier_m35281 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerData::get_CangJIngGeSecond()
 float PlayerData_get_CangJIngGeSecond_m35282 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_CangJIngGeSecond(System.Single)
 void PlayerData_set_CangJIngGeSecond_m35283 (PlayerData_t2179 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_CJGSweepCDTime()
 int32_t PlayerData_get_CJGSweepCDTime_m35284 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_CJGSweepCDTime(System.Int32)
 void PlayerData_set_CJGSweepCDTime_m35285 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_CopyeSceneSweepCDTime()
 int32_t PlayerData_get_CopyeSceneSweepCDTime_m35286 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_CopyeSceneSweepCDTime(System.Int32)
 void PlayerData_set_CopyeSceneSweepCDTime_m35287 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_CopySceneChange()
 bool PlayerData_get_CopySceneChange_m35288 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_CopySceneChange(System.Boolean)
 void PlayerData_set_CopySceneChange_m35289 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PayActivityData PlayerData::get_PayActivity()
 PayActivityData_t4938  PlayerData_get_PayActivity_m35290 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_PayActivity(PayActivityData)
 void PlayerData_set_PayActivity_m35291 (PlayerData_t2179 * __this, PayActivityData_t4938  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// CostRebateData PlayerData::get_CostRebate()
 CostRebateData_t4870  PlayerData_get_CostRebate_m35292 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_CostRebate(CostRebateData)
 void PlayerData_set_CostRebate_m35293 (PlayerData_t2179 * __this, CostRebateData_t4870  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpecialTimePayRebateData PlayerData::get_SpecailTimePayRebate()
 SpecialTimePayRebateData_t4956  PlayerData_get_SpecailTimePayRebate_m35294 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_SpecailTimePayRebate(SpecialTimePayRebateData)
 void PlayerData_set_SpecailTimePayRebate_m35295 (PlayerData_t2179 * __this, SpecialTimePayRebateData_t4956  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_AutoTeamState()
 bool PlayerData_get_AutoTeamState_m35296 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_AutoTeamState(System.Boolean)
 void PlayerData_set_AutoTeamState_m35297 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_AutoTeamCopySceneId()
 int32_t PlayerData_get_AutoTeamCopySceneId_m35298 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_AutoTeamCopySceneId(System.Int32)
 void PlayerData_set_AutoTeamCopySceneId_m35299 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_AutoTeamCopySceneDifficult()
 int32_t PlayerData_get_AutoTeamCopySceneDifficult_m35300 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_AutoTeamCopySceneDifficult(System.Int32)
 void PlayerData_set_AutoTeamCopySceneDifficult_m35301 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_ForthSkillFlag()
 bool PlayerData_get_ForthSkillFlag_m35302 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ForthSkillFlag(System.Boolean)
 void PlayerData_set_ForthSkillFlag_m35303 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> PlayerData::get_MissionSortList()
 List_1_t90 * PlayerData_get_MissionSortList_m35304 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_MissionSortList(System.Collections.Generic.List`1<System.Int32>)
 void PlayerData_set_MissionSortList_m35305 (PlayerData_t2179 * __this, List_1_t90 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerData::get_MissionGridLastPos()
 Vector3_t121  PlayerData_get_MissionGridLastPos_m35306 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_MissionGridLastPos(UnityEngine.Vector3)
 void PlayerData_set_MissionGridLastPos_m35307 (PlayerData_t2179 * __this, Vector3_t121  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlerServerFlags(GC_SERVERFLAGS)
 void PlayerData_HandlerServerFlags_m35308 (PlayerData_t2179 * __this, GC_SERVERFLAGS_t3433 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsServerFlagOpen(SERVER_FLAGS_ENUM)
 bool PlayerData_IsServerFlagOpen_m35309 (PlayerData_t2179 * __this, int32_t ___eFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_WishingWell_InTime()
 int32_t PlayerData_get_WishingWell_InTime_m35310 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_WishingWell_InTime(System.Int32)
 void PlayerData_set_WishingWell_InTime_m35311 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_WishingWell_OutTime()
 int32_t PlayerData_get_WishingWell_OutTime_m35312 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_WishingWell_OutTime(System.Int32)
 void PlayerData_set_WishingWell_OutTime_m35313 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_WishingWell_Day()
 int32_t PlayerData_get_WishingWell_Day_m35314 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_WishingWell_Day(System.Int32)
 void PlayerData_set_WishingWell_Day_m35315 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_WishingWell_Limit()
 int32_t PlayerData_get_WishingWell_Limit_m35316 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_WishingWell_Limit(System.Int32)
 void PlayerData_set_WishingWell_Limit_m35317 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_WishingWell_Status()
 int32_t PlayerData_get_WishingWell_Status_m35318 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_WishingWell_Status(System.Int32)
 void PlayerData_set_WishingWell_Status_m35319 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_NewServerMountBonusNextTime()
 int32_t PlayerData_get_NewServerMountBonusNextTime_m35320 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_NewServerMountBonusNextTime(System.Int32)
 void PlayerData_set_NewServerMountBonusNextTime_m35321 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_GoldMoneyShopNextTime()
 int32_t PlayerData_get_GoldMoneyShopNextTime_m35322 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_GoldMoneyShopNextTime(System.Int32)
 void PlayerData_set_GoldMoneyShopNextTime_m35323 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_LastTouchedNpc()
 int32_t PlayerData_get_LastTouchedNpc_m35324 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_LastTouchedNpc(System.Int32)
 void PlayerData_set_LastTouchedNpc_m35325 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_UPDATE_NEWSERVERMOUNT)
 void PlayerData_HandlePacket_m35326 (PlayerData_t2179 * __this, GC_UPDATE_NEWSERVERMOUNT_t3605 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandlePacket(GC_UPDATE_GOLDMONEYSHOPTIME)
 void PlayerData_HandlePacket_m35327 (PlayerData_t2179 * __this, GC_UPDATE_GOLDMONEYSHOPTIME_t3636 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GuildActivityBossData PlayerData::get_BossData()
 GuildActivityBossData_t4739  PlayerData_get_BossData_m35328 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::HandleGuildActivityBossData(GC_GUILDACTIVITY_BOSSDATA)
 void PlayerData_HandleGuildActivityBossData_m35329 (PlayerData_t2179 * __this, GC_GUILDACTIVITY_BOSSDATA_t3429 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::OnTodayFirstLogin()
 void PlayerData_OnTodayFirstLogin_m35330 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsClickChargeActivitySY()
 bool PlayerData_get_IsClickChargeActivitySY_m35331 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsClickChargeActivitySY(System.Boolean)
 void PlayerData_set_IsClickChargeActivitySY_m35332 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsClickChargeActivityCZ()
 bool PlayerData_get_IsClickChargeActivityCZ_m35333 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsClickChargeActivityCZ(System.Boolean)
 void PlayerData_set_IsClickChargeActivityCZ_m35334 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsClickChargeActivitySZ()
 bool PlayerData_get_IsClickChargeActivitySZ_m35335 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsClickChargeActivitySZ(System.Boolean)
 void PlayerData_set_IsClickChargeActivitySZ_m35336 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsClickWishingWell()
 bool PlayerData_get_IsClickWishingWell_m35337 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsClickWishingWell(System.Boolean)
 void PlayerData_set_IsClickWishingWell_m35338 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsClickCostRebate()
 bool PlayerData_get_IsClickCostRebate_m35339 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsClickCostRebate(System.Boolean)
 void PlayerData_set_IsClickCostRebate_m35340 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsClickSpecialTimePayRebate()
 bool PlayerData_get_IsClickSpecialTimePayRebate_m35341 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsClickSpecialTimePayRebate(System.Boolean)
 void PlayerData_set_IsClickSpecialTimePayRebate_m35342 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsClickDayCard()
 bool PlayerData_get_IsClickDayCard_m35343 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsClickDayCard(System.Boolean)
 void PlayerData_set_IsClickDayCard_m35344 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsShowVipTip()
 bool PlayerData_get_IsShowVipTip_m35345 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsShowVipTip(System.Boolean)
 void PlayerData_set_IsShowVipTip_m35346 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::AddAbuseFilter(System.String)
 void PlayerData_AddAbuseFilter_m35347 (PlayerData_t2179 * __this, String_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerData::GetAbuseFilter(System.String)
 String_t* PlayerData_GetAbuseFilter_m35348 (PlayerData_t2179 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::ClearAbuseFilter()
 void PlayerData_ClearAbuseFilter_m35349 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 PlayerData::get_HpDrugGUID()
 uint64_t PlayerData_get_HpDrugGUID_m35350 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_HpDrugGUID(System.UInt64)
 void PlayerData_set_HpDrugGUID_m35351 (PlayerData_t2179 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 PlayerData::get_MpDrugGUID()
 uint64_t PlayerData_get_MpDrugGUID_m35352 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_MpDrugGUID(System.UInt64)
 void PlayerData_set_MpDrugGUID_m35353 (PlayerData_t2179 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.MonthMultiple.GameMonthMultiple PlayerData::get_MonthMultiple()
 GameMonthMultiple_t4798 * PlayerData_get_MonthMultiple_m35354 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_MonthMultiple(Games.MonthMultiple.GameMonthMultiple)
 void PlayerData_set_MonthMultiple_m35355 (PlayerData_t2179 * __this, GameMonthMultiple_t4798 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsShowMonthMultipleTip()
 bool PlayerData_get_IsShowMonthMultipleTip_m35356 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsShowMonthMultipleTip(System.Boolean)
 void PlayerData_set_IsShowMonthMultipleTip_m35357 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.YuanBaoShopData.ShoppingListRecord PlayerData::get_PresentRecord()
 ShoppingListRecord_t1673 * PlayerData_get_PresentRecord_m35358 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_PresentRecord(Games.YuanBaoShopData.ShoppingListRecord)
 void PlayerData_set_PresentRecord_m35359 (PlayerData_t2179 * __this, ShoppingListRecord_t1673 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.YuanBaoShopData.ShoppingListRecord PlayerData::get_WaitPayRecord()
 ShoppingListRecord_t1673 * PlayerData_get_WaitPayRecord_m35360 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_WaitPayRecord(Games.YuanBaoShopData.ShoppingListRecord)
 void PlayerData_set_WaitPayRecord_m35361 (PlayerData_t2179 * __this, ShoppingListRecord_t1673 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::IsPresentButtonShow()
 bool PlayerData_IsPresentButtonShow_m35362 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.YuanBaoShopData.ShoppingCart PlayerData::get_ShoppingCart()
 ShoppingCart_t4955 * PlayerData_get_ShoppingCart_m35363 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ShoppingCart(Games.YuanBaoShopData.ShoppingCart)
 void PlayerData_set_ShoppingCart_m35364 (PlayerData_t2179 * __this, ShoppingCart_t4955 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsInTeamFollow()
 bool PlayerData_get_IsInTeamFollow_m35365 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsInTeamFollow(System.Boolean)
 void PlayerData_set_IsInTeamFollow_m35366 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_ReviewResult()
 int32_t PlayerData_get_ReviewResult_m35367 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ReviewResult(System.Int32)
 void PlayerData_set_ReviewResult_m35368 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_ReviewRewardEnable()
 int32_t PlayerData_get_ReviewRewardEnable_m35369 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_ReviewRewardEnable(System.Int32)
 void PlayerData_set_ReviewRewardEnable_m35370 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsShowHongBaoTip()
 bool PlayerData_get_IsShowHongBaoTip_m35371 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsShowHongBaoTip(System.Boolean)
 void PlayerData_set_IsShowHongBaoTip_m35372 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_HongBaoRankFlag()
 bool PlayerData_get_HongBaoRankFlag_m35373 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_HongBaoRankFlag(System.Boolean)
 void PlayerData_set_HongBaoRankFlag_m35374 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsShowLoverFlowerTip()
 bool PlayerData_get_IsShowLoverFlowerTip_m35375 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsShowLoverFlowerTip(System.Boolean)
 void PlayerData_set_IsShowLoverFlowerTip_m35376 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_IsShowLoverThingTip()
 bool PlayerData_get_IsShowLoverThingTip_m35377 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_IsShowLoverThingTip(System.Boolean)
 void PlayerData_set_IsShowLoverThingTip_m35378 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerData::get_JuYiCount()
 int32_t PlayerData_get_JuYiCount_m35379 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_JuYiCount(System.Int32)
 void PlayerData_set_JuYiCount_m35380 (PlayerData_t2179 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_WP8ChargeMode(System.Boolean)
 void PlayerData_set_WP8ChargeMode_m35381 (PlayerData_t2179 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::get_WP8ChargeMode()
 bool PlayerData_get_WP8ChargeMode_m35382 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_WP8chageBackTime(System.Single)
 void PlayerData_set_WP8chageBackTime_m35383 (PlayerData_t2179 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerData::get_WP8chageBackTime()
 float PlayerData_get_WP8chageBackTime_m35384 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerData::GetTrainingBranchActive(System.Int32)
 bool PlayerData_GetTrainingBranchActive_m35385 (PlayerData_t2179 * __this, int32_t ___group, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::set_BelleConfigData(BelleConfigData)
 void PlayerData_set_BelleConfigData_m35386 (PlayerData_t2179 * __this, BelleConfigData_t4551 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BelleConfigData PlayerData::get_BelleConfigData()
 BelleConfigData_t4551 * PlayerData_get_BelleConfigData_m35387 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerData::get_PVPDATATime()
 float PlayerData_get_PVPDATATime_m35388 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::Tick_PVP()
 void PlayerData_Tick_PVP_m35389 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::ReTick_PVP(System.Single)
 void PlayerData_ReTick_PVP_m35390 (PlayerData_t2179 * __this, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> PlayerData::get_PvpShopItemBuyNum()
 Dictionary_2_t1116 * PlayerData_get_PvpShopItemBuyNum_m35391 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::ClearPvpShopItemBuyNum()
 void PlayerData_ClearPvpShopItemBuyNum_m35392 (PlayerData_t2179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerData::SetPvpShopItemBuyNum(System.Int32,System.Int32)
 void PlayerData_SetPvpShopItemBuyNum_m35393 (PlayerData_t2179 * __this, int32_t ___id, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
