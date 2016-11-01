#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo>
struct Dictionary_2_t4932;
// PVPData/UpdateOpponentDelegate
struct UpdateOpponentDelegate_t4928;
// PVPData/UpdateMyDataDelegate
struct UpdateMyDataDelegate_t4929;
// System.Collections.Generic.List`1<PVPData/HistroyData>
struct List_1_t4933;
// PVPData/UpdatePvPRecordListDelegate
struct UpdatePvPRecordListDelegate_t4930;
// System.Collections.Generic.List`1<PVPData/PvPRankListItemInfo>
struct List_1_t4934;
// PVPData/UpdatePvPRankListDelegate
struct UpdatePvPRankListDelegate_t4931;
// System.Collections.Generic.List`1<PVPData/RankDataItem>
struct List_1_t4935;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// PVPData
struct PVPData_t4936  : public Object_t
{
};
struct PVPData_t4936_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.UInt64,PVPData/OpponentInfo> PVPData::OpponentMap
	Dictionary_2_t4932 * ___OpponentMap;
	// PVPData/UpdateOpponentDelegate PVPData::delUpdateOpponent
	UpdateOpponentDelegate_t4928 * ___delUpdateOpponent;
	// PVPData/UpdateMyDataDelegate PVPData::delUpdateMyData
	UpdateMyDataDelegate_t4929 * ___delUpdateMyData;
	// System.Collections.Generic.List`1<PVPData/HistroyData> PVPData::ChallengeHistory
	List_1_t4933 * ___ChallengeHistory;
	// PVPData/UpdatePvPRecordListDelegate PVPData::delegateUpdatePvPRecordList
	UpdatePvPRecordListDelegate_t4930 * ___delegateUpdatePvPRecordList;
	// System.Collections.Generic.List`1<PVPData/PvPRankListItemInfo> PVPData::PvPRankList
	List_1_t4934 * ___PvPRankList;
	// PVPData/UpdatePvPRankListDelegate PVPData::delegateUpdatePvPRankList
	UpdatePvPRankListDelegate_t4931 * ___delegateUpdatePvPRankList;
	// System.Collections.Generic.List`1<PVPData/RankDataItem> PVPData::RankDataList
	List_1_t4935 * ___RankDataList;
	// System.Int32 PVPData::<MyPVPRange>k__BackingField
	int32_t ___U3CMyPVPRangeU3Ek__BackingField;
	// System.Int32 PVPData::<LeftFightTime>k__BackingField
	int32_t ___U3CLeftFightTimeU3Ek__BackingField;
	// System.Int32 PVPData::<Power>k__BackingField
	int32_t ___U3CPowerU3Ek__BackingField;
	// System.Int32 PVPData::<NeedCostYuanBao>k__BackingField
	int32_t ___U3CNeedCostYuanBaoU3Ek__BackingField;
	// System.Int32 PVPData::<ChallengeIsLose>k__BackingField
	int32_t ___U3CChallengeIsLoseU3Ek__BackingField;
	// System.Int32 PVPData::<ChallengeSpirit>k__BackingField
	int32_t ___U3CChallengeSpiritU3Ek__BackingField;
	// System.Int32 PVPData::<ChallengeReputation>k__BackingField
	int32_t ___U3CChallengeReputationU3Ek__BackingField;
	// System.Boolean PVPData::<ChallengeAutoShow>k__BackingField
	bool ___U3CChallengeAutoShowU3Ek__BackingField;
	// System.Int32 PVPData::<PvPRankCurPage>k__BackingField
	int32_t ___U3CPvPRankCurPageU3Ek__BackingField;
	// System.Int32 PVPData::<PvPRankTotalPage>k__BackingField
	int32_t ___U3CPvPRankTotalPageU3Ek__BackingField;
	// System.String PVPData::<meRank>k__BackingField
	String_t* ___U3CmeRankU3Ek__BackingField;
	// System.Int32 PVPData::<RankTotalPage>k__BackingField
	int32_t ___U3CRankTotalPageU3Ek__BackingField;
	// System.Int32 PVPData::<RankCurPage>k__BackingField
	int32_t ___U3CRankCurPageU3Ek__BackingField;
	// System.Int32 PVPData::<RankType>k__BackingField
	int32_t ___U3CRankTypeU3Ek__BackingField;
	// System.Boolean PVPData::<RankIsPage>k__BackingField
	bool ___U3CRankIsPageU3Ek__BackingField;
	// System.Int32 PVPData::<WorldBossChallengeResult>k__BackingField
	int32_t ___U3CWorldBossChallengeResultU3Ek__BackingField;
	// System.Int32 PVPData::<PVPJiFen>k__BackingField
	int32_t ___U3CPVPJiFenU3Ek__BackingField;
};
