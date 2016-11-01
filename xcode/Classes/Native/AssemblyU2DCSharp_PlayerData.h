#pragma once
#include <stdint.h>
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
// System.Object
#include "mscorlib_System_Object.h"
// Games.MountModule.MountParam
#include "AssemblyU2DCSharp_Games_MountModule_MountParam.h"
// ChatInfoLogic/CHANNEL_TYPE
#include "AssemblyU2DCSharp_ChatInfoLogic_CHANNEL_TYPE.h"
// Games.AwardActivity.AwardActivityData
#include "AssemblyU2DCSharp_Games_AwardActivity_AwardActivityData.h"
// Games.MoneyTree.MoneyTreeData
#include "AssemblyU2DCSharp_Games_MoneyTree_MoneyTreeData.h"
// Games.Item.GemData
#include "AssemblyU2DCSharp_Games_Item_GemData.h"
// Games.AwardActivity.NewOnlineDateTime
#include "AssemblyU2DCSharp_Games_AwardActivity_NewOnlineDateTime.h"
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
// PlayerData
struct PlayerData_t2179  : public Object_t
{
	// Games.SkillModle.OwnSkillData[] PlayerData::m_OwnSkillInfo
	OwnSkillDataU5BU5D_t4488* ___m_OwnSkillInfo;
	// System.Int32 PlayerData::m_CrashSkillCDTime
	int32_t ___m_CrashSkillCDTime;
	// System.Int32 PlayerData::m_nSkillPublicTime
	int32_t ___m_nSkillPublicTime;
	// System.Boolean PlayerData::m_bIsCanPKLegal
	bool ___m_bIsCanPKLegal;
	// System.Int32 PlayerData::m_nPkModle
	int32_t ___m_nPkModle;
	// System.Boolean PlayerData::m_IsOpenCabalAuto
	bool ___m_IsOpenCabalAuto;
	// System.Boolean PlayerData::m_IsOpenAutoCombat
	bool ___m_IsOpenAutoCombat;
	// System.Single PlayerData::m_fBreakAutoCombatTime
	float ___m_fBreakAutoCombatTime;
	// System.Boolean PlayerData::m_bAutoComabat
	bool ___m_bAutoComabat;
	// System.Int32 PlayerData::m_nStealthLev
	int32_t ___m_nStealthLev;
	// System.Int32 PlayerData::m_nProfession
	int32_t ___m_nProfession;
	// System.Single PlayerData::m_fLastConsignShareTime
	float ___m_fLastConsignShareTime;
	// System.Int32 PlayerData::m_nVipCost
	int32_t ___m_nVipCost;
	// System.Int32 PlayerData::m_nPoolCombatValue
	int32_t ___m_nPoolCombatValue;
	// System.Collections.Generic.List`1<Games.ImpactModle.ClientImpactInfo> PlayerData::m_ClientImpactInfo
	List_1_t4490 * ___m_ClientImpactInfo;
	// System.Int32 PlayerData::m_MainBindParent
	int32_t ___m_MainBindParent;
	// System.Collections.Generic.List`1<System.Int32> PlayerData::m_MainBindChildren
	List_1_t90 * ___m_MainBindChildren;
	// BaseAttr PlayerData::m_MainPlayerBaseAttr
	BaseAttr_t4471 * ___m_MainPlayerBaseAttr;
	// PlayerData/PlayerAddFriendVlue PlayerData::m_AddFriendVlue
	PlayerAddFriendVlue_t4948 * ___m_AddFriendVlue;
	// PlayerEnterSceneCache PlayerData::m_EnterSceneCache
	PlayerEnterSceneCache_t4949 * ___m_EnterSceneCache;
	// Games.Item.GameItemContainer PlayerData::m_oBackPack
	GameItemContainer_t1340 * ___m_oBackPack;
	// Games.Item.GameItemContainer PlayerData::m_oEquipPack
	GameItemContainer_t1340 * ___m_oEquipPack;
	// Games.Item.GameItemContainer PlayerData::m_oBuyBackPack
	GameItemContainer_t1340 * ___m_oBuyBackPack;
	// Games.Item.GameItemContainer PlayerData::m_oStoragePack
	GameItemContainer_t1340 * ___m_oStoragePack;
	// Games.MountModule.MountParam PlayerData::m_objMountParam
	MountParam_t4800  ___m_objMountParam;
	// Team PlayerData::m_TeamInfo
	Team_t4832 * ___m_TeamInfo;
	// Guild PlayerData::m_GuildInfo
	Guild_t4735 * ___m_GuildInfo;
	// GuildList PlayerData::m_GuildList
	GuildList_t4743 * ___m_GuildList;
	// System.Collections.Generic.List`1<GuildWarPushMessageInfo> PlayerData::m_WarPushMessaeg
	List_1_t4950 * ___m_WarPushMessaeg;
	// System.Collections.Generic.List`1<GuildShopItem> PlayerData::m_GuildShopItemList
	List_1_t1987 * ___m_GuildShopItemList;
	// System.Collections.Generic.List`1<GoldMoneyShopItem> PlayerData::m_GoldMoneyShopItemList
	List_1_t4951 * ___m_GoldMoneyShopItemList;
	// Games.TitleInvestitive.GameTitleInvestitive PlayerData::m_TitleInvestitive
	GameTitleInvestitive_t4841 * ___m_TitleInvestitive;
	// System.Boolean PlayerData::m_IsLockPriorTitle
	bool ___m_IsLockPriorTitle;
	// Games.ChatHistory.GameChatHistory PlayerData::m_ChatHistory
	GameChatHistory_t4557 * ___m_ChatHistory;
	// ChatInfoLogic/CHANNEL_TYPE PlayerData::m_eChooseChannel
	int32_t ___m_eChooseChannel;
	// System.UInt64 PlayerData::m_LastTellGUID
	uint64_t ___m_LastTellGUID;
	// System.String PlayerData::m_LastTellName
	String_t* ___m_LastTellName;
	// Games.ChatHistory.LastSpeakerRecord PlayerData::m_TellChatSpeakers
	LastSpeakerRecord_t4560 * ___m_TellChatSpeakers;
	// Games.ChatHistory.VoiceChatDownload PlayerData::m_VoiceChatDownloadRecord
	VoiceChatDownload_t4563 * ___m_VoiceChatDownloadRecord;
	// System.String PlayerData::m_ChatEditInput
	String_t* ___m_ChatEditInput;
	// RelationList PlayerData::m_FriendList
	RelationList_t4805 * ___m_FriendList;
	// RelationList PlayerData::m_BlackList
	RelationList_t4805 * ___m_BlackList;
	// RelationList PlayerData::m_HateList
	RelationList_t4805 * ___m_HateList;
	// Games.Fellow.FellowContainer PlayerData::m_FellowContainer
	FellowContainer_t4724 * ___m_FellowContainer;
	// Games.Fellow.FriendBreedingFellow PlayerData::m_FriendBreedingFellowInfo
	FriendBreedingFellow_t4723 * ___m_FriendBreedingFellowInfo;
	// System.Int32 PlayerData::m_LastProcreateTime
	int32_t ___m_LastProcreateTime;
	// System.Int32 PlayerData::m_GoneProcreateTime
	int32_t ___m_GoneProcreateTime;
	// System.Single PlayerData::m_ProcreateTime
	float ___m_ProcreateTime;
	// System.Boolean PlayerData::m_FellowPlayerEffect
	bool ___m_FellowPlayerEffect;
	// System.Collections.Generic.List`1<System.Int32> PlayerData::m_ActiveFellowSkill
	List_1_t90 * ___m_ActiveFellowSkill;
	// System.Int32 PlayerData::m_FellowGainCount_Free
	int32_t ___m_FellowGainCount_Free;
	// System.Int32 PlayerData::m_FellowGainCount_Coin
	int32_t ___m_FellowGainCount_Coin;
	// System.Int32 PlayerData::m_FellowGainCount_YuanBao
	int32_t ___m_FellowGainCount_YuanBao;
	// System.Int32 PlayerData::m_FellowGainCD_Coin
	int32_t ___m_FellowGainCD_Coin;
	// System.Single PlayerData::m_FellowTickTime
	float ___m_FellowTickTime;
	// Games.AwardActivity.AwardActivityData PlayerData::m_AwardActivityData
	AwardActivityData_t4544  ___m_AwardActivityData;
	// Games.MoneyTree.MoneyTreeData PlayerData::m_MoneyTreeData
	MoneyTreeData_t4797  ___m_MoneyTreeData;
	// System.Int32 PlayerData::m_nReliveEntryTime
	int32_t ___m_nReliveEntryTime;
	// Games.UserCommonData.UserCommonData PlayerData::m_CommonData
	UserCommonData_t4952 * ___m_CommonData;
	// Games.DailyMissionData.DailyMissionData PlayerData::m_DailyMissionData
	DailyMissionData_t4873 * ___m_DailyMissionData;
	// Games.JuQingCopySceneData.JuQingCopySceneData PlayerData::m_JuQingCopySceneData
	JuQingCopySceneData_t4910 * ___m_JuQingCopySceneData;
	// System.UInt64 PlayerData::m_LoverGUID
	uint64_t ___m_LoverGUID;
	// VitalityData PlayerData::m_VitalityData
	VitalityData_t4945 * ___m_VitalityData;
	// PlayerData/MONEY PlayerData::m_Money
	MONEY_t4946 * ___m_Money;
	// System.Int32[] PlayerData::m_FashionDeadline
	Int32U5BU5D_t116* ___m_FashionDeadline;
	// System.Int32 PlayerData::m_CurFashionID
	int32_t ___m_CurFashionID;
	// System.Boolean PlayerData::m_bShowFashion
	bool ___m_bShowFashion;
	// System.Int32 PlayerData::m_ModelVisualID
	int32_t ___m_ModelVisualID;
	// Games.DailyLuckyDraw.DailyLuckyDrawData PlayerData::m_DailyLuckyDrawData
	DailyLuckyDrawData_t4713 * ___m_DailyLuckyDrawData;
	// Games.Item.GemData PlayerData::m_GemData
	GemData_t4775  ___m_GemData;
	// Master PlayerData::m_MasterInfo
	Master_t4778 * ___m_MasterInfo;
	// MasterPreviewList PlayerData::m_MasterPreList
	MasterPreviewList_t4781 * ___m_MasterPreList;
	// System.Int32 PlayerData::m_TorchValue
	int32_t ___m_TorchValue;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> PlayerData::m_MasterSkillName
	Dictionary_2_t1167 * ___m_MasterSkillName;
	// System.Int32 PlayerData::m_StaminaCountDown
	int32_t ___m_StaminaCountDown;
	// System.Collections.Generic.List`1<System.String> PlayerData::m_RollNoticeList
	List_1_t1333 * ___m_RollNoticeList;
	// Games.SwordsMan.SwordsManContainer PlayerData::m_oSwordsManBackPack
	SwordsManContainer_t4829 * ___m_oSwordsManBackPack;
	// Games.SwordsMan.SwordsManContainer PlayerData::m_oSwordsManEquipPack
	SwordsManContainer_t4829 * ___m_oSwordsManEquipPack;
	// System.Int32 PlayerData::m_nSwordsManVisitState
	int32_t ___m_nSwordsManVisitState;
	// System.Int32 PlayerData::m_nSwordsManScore
	int32_t ___m_nSwordsManScore;
	// System.Int32 PlayerData::m_nSwordsManCombat
	int32_t ___m_nSwordsManCombat;
	// System.Int32 PlayerData::m_nReputation
	int32_t ___m_nReputation;
	// System.Int32 PlayerData::m_GuildDKP
	int32_t ___m_GuildDKP;
	// System.Boolean PlayerData::IsOpenSignInReward
	bool ___IsOpenSignInReward;
	// System.Boolean PlayerData::IsOpenOldLoginReward
	bool ___IsOpenOldLoginReward;
	// PlayerData/DaySignInInfoData PlayerData::m_DaySignInfo
	DaySignInInfoData_t4947 * ___m_DaySignInfo;
	// System.Int32 PlayerData::ActivityRewardJoinNum
	int32_t ___ActivityRewardJoinNum;
	// System.Int32 PlayerData::m_ActivityRewardIndex
	int32_t ___m_ActivityRewardIndex;
	// System.Boolean PlayerData::m_IsActivityReward
	bool ___m_IsActivityReward;
	// System.Boolean PlayerData::m_IsOpenBaiNian
	bool ___m_IsOpenBaiNian;
	// System.Int32 PlayerData::m_ActivityRewardSrateTime
	int32_t ___m_ActivityRewardSrateTime;
	// System.Int32 PlayerData::m_ActivityRewardEndTime
	int32_t ___m_ActivityRewardEndTime;
	// System.Int32 PlayerData::m_ActivityRewardJoinNumSarteTime
	int32_t ___m_ActivityRewardJoinNumSarteTime;
	// System.String PlayerData::m_ActivityRewardBeginTime
	String_t* ___m_ActivityRewardBeginTime;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.ActivityRewardData> PlayerData::m_ActivityRewardTable
	Dictionary_2_t4953 * ___m_ActivityRewardTable;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.JoinNumRewardData> PlayerData::m_JoinNumRewardTable
	Dictionary_2_t4954 * ___m_JoinNumRewardTable;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine> PlayerData::m_OnlineAwardTable
	Dictionary_2_t4543 * ___m_OnlineAwardTable;
	// System.Boolean PlayerData::m_IsShouNowOnlineAwardWindow
	bool ___m_IsShouNowOnlineAwardWindow;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.AwardActivity.OnlineAwardLine> PlayerData::m_NewOnlineAwardTable
	Dictionary_2_t4543 * ___m_NewOnlineAwardTable;
	// Games.AwardActivity.NewOnlineDateTime PlayerData::m_sNewOnlineDateTime
	NewOnlineDateTime_t4545  ___m_sNewOnlineDateTime;
	// System.Single PlayerData::m_fHpItemCDTime
	float ___m_fHpItemCDTime;
	// System.Single PlayerData::m_fMpItemCDTime
	float ___m_fMpItemCDTime;
	// System.Boolean PlayerData::m_bStartSweep
	bool ___m_bStartSweep;
	// System.Int32 PlayerData::m_nCangJingGeTier
	int32_t ___m_nCangJingGeTier;
	// System.Single PlayerData::m_CangJIngGeSecond
	float ___m_CangJIngGeSecond;
	// System.Int32 PlayerData::m_nCJGSweepCDTime
	int32_t ___m_nCJGSweepCDTime;
	// System.Int32 PlayerData::m_nCopyeSceneSweepCDTime
	int32_t ___m_nCopyeSceneSweepCDTime;
	// System.Single PlayerData::m_fCopySceneChange
	float ___m_fCopySceneChange;
	// PayActivityData PlayerData::m_PayActivity
	PayActivityData_t4938  ___m_PayActivity;
	// CostRebateData PlayerData::m_CostRebate
	CostRebateData_t4870  ___m_CostRebate;
	// SpecialTimePayRebateData PlayerData::m_SpecailTimePayRebateData
	SpecialTimePayRebateData_t4956  ___m_SpecailTimePayRebateData;
	// System.Boolean PlayerData::m_bAutoTeamState
	bool ___m_bAutoTeamState;
	// System.Int32 PlayerData::m_bAutoTeamCopySceneId
	int32_t ___m_bAutoTeamCopySceneId;
	// System.Int32 PlayerData::m_bAutoTeamCopySceneDifficult
	int32_t ___m_bAutoTeamCopySceneDifficult;
	// System.Boolean PlayerData::m_bForthSkillFlag
	bool ___m_bForthSkillFlag;
	// System.Collections.Generic.List`1<System.Int32> PlayerData::m_MissionSortList
	List_1_t90 * ___m_MissionSortList;
	// UnityEngine.Vector3 PlayerData::m_MissionGridLastPos
	Vector3_t121  ___m_MissionGridLastPos;
	// System.Int32 PlayerData::m_ServerFlags
	int32_t ___m_ServerFlags;
	// System.Int32 PlayerData::m_WishingWell_InTime
	int32_t ___m_WishingWell_InTime;
	// System.Int32 PlayerData::m_WishingWell_OutTime
	int32_t ___m_WishingWell_OutTime;
	// System.Int32 PlayerData::m_WishingWell_Day
	int32_t ___m_WishingWell_Day;
	// System.Int32 PlayerData::m_WishingWell_Limit
	int32_t ___m_WishingWell_Limit;
	// System.Int32 PlayerData::m_WishingWell_Status
	int32_t ___m_WishingWell_Status;
	// System.Int32 PlayerData::m_NewServerMountBonusNextTime
	int32_t ___m_NewServerMountBonusNextTime;
	// System.Int32 PlayerData::m_GoldMoneyShopNextTime
	int32_t ___m_GoldMoneyShopNextTime;
	// System.Int32 PlayerData::m_LastTouchedNpc
	int32_t ___m_LastTouchedNpc;
	// GuildActivityBossData PlayerData::m_BossData
	GuildActivityBossData_t4739  ___m_BossData;
	// System.Boolean PlayerData::m_bIsClickChargeActivitySY
	bool ___m_bIsClickChargeActivitySY;
	// System.Boolean PlayerData::m_bIsClickChargeActivityCZ
	bool ___m_bIsClickChargeActivityCZ;
	// System.Boolean PlayerData::m_bIsClickChargeActivitySZ
	bool ___m_bIsClickChargeActivitySZ;
	// System.Boolean PlayerData::m_bIsClickWishingWell
	bool ___m_bIsClickWishingWell;
	// System.Boolean PlayerData::m_IsClickCostRebate
	bool ___m_IsClickCostRebate;
	// System.Boolean PlayerData::m_IsClickSpecialTimePayRebate
	bool ___m_IsClickSpecialTimePayRebate;
	// System.Boolean PlayerData::m_IsClickDayCard
	bool ___m_IsClickDayCard;
	// System.Boolean PlayerData::m_bIsShowVipTip
	bool ___m_bIsShowVipTip;
	// System.Collections.Generic.List`1<System.String> PlayerData::AbuseFilterList
	List_1_t1333 * ___AbuseFilterList;
	// System.UInt64 PlayerData::m_nHpDrugGUID
	uint64_t ___m_nHpDrugGUID;
	// System.UInt64 PlayerData::m_nMpDrugGUID
	uint64_t ___m_nMpDrugGUID;
	// Games.MonthMultiple.GameMonthMultiple PlayerData::m_MonthMultiple
	GameMonthMultiple_t4798 * ___m_MonthMultiple;
	// System.Boolean PlayerData::m_IsShowMonthMultipleTip
	bool ___m_IsShowMonthMultipleTip;
	// Games.YuanBaoShopData.ShoppingListRecord PlayerData::m_PresentRecord
	ShoppingListRecord_t1673 * ___m_PresentRecord;
	// Games.YuanBaoShopData.ShoppingListRecord PlayerData::m_WaitPayRecord
	ShoppingListRecord_t1673 * ___m_WaitPayRecord;
	// Games.YuanBaoShopData.ShoppingCart PlayerData::m_ShoppingCart
	ShoppingCart_t4955 * ___m_ShoppingCart;
	// System.Boolean PlayerData::m_bIsInTeamFollow
	bool ___m_bIsInTeamFollow;
	// System.Int32 PlayerData::m_nReviewResult
	int32_t ___m_nReviewResult;
	// System.Int32 PlayerData::m_nIsReviewRewardEnable
	int32_t ___m_nIsReviewRewardEnable;
	// System.Boolean PlayerData::m_bIsShowHongBaoTip
	bool ___m_bIsShowHongBaoTip;
	// System.Boolean PlayerData::m_bHongBaoRankFlag
	bool ___m_bHongBaoRankFlag;
	// System.Boolean PlayerData::m_bIsShowLoverFlowerTip
	bool ___m_bIsShowLoverFlowerTip;
	// System.Boolean PlayerData::m_bIsShowLoverThingTip
	bool ___m_bIsShowLoverThingTip;
	// System.Int32 PlayerData::m_JuYiCount
	int32_t ___m_JuYiCount;
	// System.Boolean PlayerData::m_isWP8chargeMode
	bool ___m_isWP8chargeMode;
	// System.Single PlayerData::m_WPchangeBackTime
	float ___m_WPchangeBackTime;
	// BelleConfigData PlayerData::m_belleConfigData
	BelleConfigData_t4551 * ___m_belleConfigData;
	// System.Single PlayerData::m_pvpDateTime
	float ___m_pvpDateTime;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> PlayerData::m_pvpShopItemBuyNum
	Dictionary_2_t1116 * ___m_pvpShopItemBuyNum;
};
