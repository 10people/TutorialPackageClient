#pragma once
#include <stdint.h>
// HuaShanPVPData/ShowOpponentViewInfoDelegate
struct ShowOpponentViewInfoDelegate_t4892;
// HuaShanPVPData/ShowWaitForOpponetDelegate
struct ShowWaitForOpponetDelegate_t4893;
// HuaShanPVPData/ShowDefaultWindowMySelfDelegate
struct ShowDefaultWindowMySelfDelegate_t4894;
// HuaShanPVPData/ShowSearchOpponentDelegate
struct ShowSearchOpponentDelegate_t4895;
// System.Collections.Generic.List`1<HuaShanPVPData/RegisterMemberInfo>
struct List_1_t4902;
// HuaShanPVPData/ShowRegisterMemberListDelegate
struct ShowRegisterMemberListDelegate_t4896;
// System.Collections.Generic.List`1<HuaShanPVPData/MercenaryInfo>
struct List_1_t2022;
// HuaShanPVPData/ShowMercenaryListDelegate
struct ShowMercenaryListDelegate_t4897;
// HuaShanPVPData/ShowMercenaryLeftTimesDelegate
struct ShowMercenaryLeftTimesDelegate_t4898;
// HuaShanPVPData/ShowMercenaryEmployedDelegate
struct ShowMercenaryEmployedDelegate_t4899;
// System.Collections.Generic.List`1<HuaShanPVPData/WorldBossTeamInfo>
struct List_1_t2081;
// HuaShanPVPData/ShowWorldBossListDelegate
struct ShowWorldBossListDelegate_t4900;
// System.Collections.Generic.List`1<HuaShanPVPData/MemberPKInfo>
struct List_1_t4903;
// HuaShanPVPData/ShowPkInfoDelegate
struct ShowPkInfoDelegate_t4901;
// System.Object
#include "mscorlib_System_Object.h"
// HuaShanPVPData/OpponentViewInfo
#include "AssemblyU2DCSharp_HuaShanPVPData_OpponentViewInfo.h"
// HuaShanPVPData
struct HuaShanPVPData_t4904  : public Object_t
{
};
struct HuaShanPVPData_t4904_StaticFields{
	// HuaShanPVPData/OpponentViewInfo HuaShanPVPData::OppoViewInfo
	OpponentViewInfo_t4890  ___OppoViewInfo;
	// HuaShanPVPData/ShowOpponentViewInfoDelegate HuaShanPVPData::delegateShowOpponentViewInfo
	ShowOpponentViewInfoDelegate_t4892 * ___delegateShowOpponentViewInfo;
	// HuaShanPVPData/ShowWaitForOpponetDelegate HuaShanPVPData::delegateShowWaitForOpponet
	ShowWaitForOpponetDelegate_t4893 * ___delegateShowWaitForOpponet;
	// System.Int32 HuaShanPVPData::huaShanPosition
	int32_t ___huaShanPosition;
	// HuaShanPVPData/ShowDefaultWindowMySelfDelegate HuaShanPVPData::delegateShowDefaultWindowMySelf
	ShowDefaultWindowMySelfDelegate_t4894 * ___delegateShowDefaultWindowMySelf;
	// HuaShanPVPData/ShowSearchOpponentDelegate HuaShanPVPData::delegateShowSearchOpponent
	ShowSearchOpponentDelegate_t4895 * ___delegateShowSearchOpponent;
	// System.Collections.Generic.List`1<HuaShanPVPData/RegisterMemberInfo> HuaShanPVPData::RegisterMemberList
	List_1_t4902 * ___RegisterMemberList;
	// HuaShanPVPData/ShowRegisterMemberListDelegate HuaShanPVPData::delegateShowRegisterMemberList
	ShowRegisterMemberListDelegate_t4896 * ___delegateShowRegisterMemberList;
	// System.Collections.Generic.List`1<HuaShanPVPData/MercenaryInfo> HuaShanPVPData::MercenaryList
	List_1_t2022 * ___MercenaryList;
	// HuaShanPVPData/ShowMercenaryListDelegate HuaShanPVPData::delegateShowMercenaryList
	ShowMercenaryListDelegate_t4897 * ___delegateShowMercenaryList;
	// HuaShanPVPData/ShowMercenaryLeftTimesDelegate HuaShanPVPData::delegateShowMercenaryLeftTimes
	ShowMercenaryLeftTimesDelegate_t4898 * ___delegateShowMercenaryLeftTimes;
	// System.Collections.Generic.List`1<HuaShanPVPData/MercenaryInfo> HuaShanPVPData::MercenaryEmployList
	List_1_t2022 * ___MercenaryEmployList;
	// HuaShanPVPData/ShowMercenaryEmployedDelegate HuaShanPVPData::delegateShowMercenaryEmployed
	ShowMercenaryEmployedDelegate_t4899 * ___delegateShowMercenaryEmployed;
	// System.Collections.Generic.List`1<HuaShanPVPData/WorldBossTeamInfo> HuaShanPVPData::WorldBossList
	List_1_t2081 * ___WorldBossList;
	// HuaShanPVPData/ShowWorldBossListDelegate HuaShanPVPData::delegateShowWorldBossList
	ShowWorldBossListDelegate_t4900 * ___delegateShowWorldBossList;
	// System.Collections.Generic.List`1<HuaShanPVPData/MemberPKInfo> HuaShanPVPData::HuaShanPKInfoList
	List_1_t4903 * ___HuaShanPKInfoList;
	// HuaShanPVPData/ShowPkInfoDelegate HuaShanPVPData::delegateShowPkInfo
	ShowPkInfoDelegate_t4901 * ___delegateShowPkInfo;
	// System.Int32 HuaShanPVPData::<Resultwin>k__BackingField
	int32_t ___U3CResultwinU3Ek__BackingField;
	// System.Int32 HuaShanPVPData::<Rounder>k__BackingField
	int32_t ___U3CRounderU3Ek__BackingField;
	// System.Int32 HuaShanPVPData::<HuaShanState>k__BackingField
	int32_t ___U3CHuaShanStateU3Ek__BackingField;
	// System.Int32 HuaShanPVPData::<DuelResult>k__BackingField
	int32_t ___U3CDuelResultU3Ek__BackingField;
	// System.Int32 HuaShanPVPData::<ContinueSec>k__BackingField
	int32_t ___U3CContinueSecU3Ek__BackingField;
	// System.Int32 HuaShanPVPData::<MercenarySceneClass>k__BackingField
	int32_t ___U3CMercenarySceneClassU3Ek__BackingField;
	// System.Int32 HuaShanPVPData::<MercenaryTimesLeft>k__BackingField
	int32_t ___U3CMercenaryTimesLeftU3Ek__BackingField;
	// System.Int32 HuaShanPVPData::<WorldBossCurPage>k__BackingField
	int32_t ___U3CWorldBossCurPageU3Ek__BackingField;
	// System.Int32 HuaShanPVPData::<WorldBossTotalPage>k__BackingField
	int32_t ___U3CWorldBossTotalPageU3Ek__BackingField;
	// System.Int32 HuaShanPVPData::<WorldBossOpen>k__BackingField
	int32_t ___U3CWorldBossOpenU3Ek__BackingField;
	// System.Int32 HuaShanPVPData::<IsClickWorldBossUI>k__BackingField
	int32_t ___U3CIsClickWorldBossUIU3Ek__BackingField;
};
