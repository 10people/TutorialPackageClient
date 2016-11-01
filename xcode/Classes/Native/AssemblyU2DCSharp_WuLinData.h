#pragma once
#include <stdint.h>
// WuLinData/ShowOpponentViewInfoDelegate
struct ShowOpponentViewInfoDelegate_t4990;
// WuLinData/ShowWaitForOpponetDelegate
struct ShowWaitForOpponetDelegate_t4991;
// WuLinData/ShowDefaultWindowMySelfDelegate
struct ShowDefaultWindowMySelfDelegate_t4992;
// WuLinData/ShowSearchOpponentDelegate
struct ShowSearchOpponentDelegate_t4993;
// System.Collections.Generic.List`1<WuLinData/RegisterMemberInfo>
struct List_1_t4997;
// WuLinData/ShowRegisterMemberListDelegate
struct ShowRegisterMemberListDelegate_t4994;
// System.Collections.Generic.List`1<WuLinData/MemberPKInfo>
struct List_1_t4998;
// WuLinData/ShowPkInfoDelegate
struct ShowPkInfoDelegate_t4995;
// System.Collections.Generic.List`1<WuLinData/HistoryHeroMember>
struct List_1_t4999;
// WuLinData/ShowWuLinHeroesInHistoryDelegate
struct ShowWuLinHeroesInHistoryDelegate_t4996;
// System.Object
#include "mscorlib_System_Object.h"
// WuLinData/OpponentViewInfo
#include "AssemblyU2DCSharp_WuLinData_OpponentViewInfo.h"
// WuLinData
struct WuLinData_t5000  : public Object_t
{
};
struct WuLinData_t5000_StaticFields{
	// WuLinData/OpponentViewInfo WuLinData::OppoViewInfo
	OpponentViewInfo_t4986  ___OppoViewInfo;
	// WuLinData/ShowOpponentViewInfoDelegate WuLinData::delegateShowOpponentViewInfo
	ShowOpponentViewInfoDelegate_t4990 * ___delegateShowOpponentViewInfo;
	// WuLinData/ShowWaitForOpponetDelegate WuLinData::delegateShowWaitForOpponet
	ShowWaitForOpponetDelegate_t4991 * ___delegateShowWaitForOpponet;
	// System.Int32 WuLinData::wuLinPosition
	int32_t ___wuLinPosition;
	// WuLinData/ShowDefaultWindowMySelfDelegate WuLinData::delegateShowDefaultWindowMySelf
	ShowDefaultWindowMySelfDelegate_t4992 * ___delegateShowDefaultWindowMySelf;
	// WuLinData/ShowSearchOpponentDelegate WuLinData::delegateShowSearchOpponent
	ShowSearchOpponentDelegate_t4993 * ___delegateShowSearchOpponent;
	// System.Collections.Generic.List`1<WuLinData/RegisterMemberInfo> WuLinData::RegisterMemberList
	List_1_t4997 * ___RegisterMemberList;
	// WuLinData/ShowRegisterMemberListDelegate WuLinData::delegateShowRegisterMemberList
	ShowRegisterMemberListDelegate_t4994 * ___delegateShowRegisterMemberList;
	// System.Collections.Generic.List`1<WuLinData/MemberPKInfo> WuLinData::WuLinPKInfoList
	List_1_t4998 * ___WuLinPKInfoList;
	// WuLinData/ShowPkInfoDelegate WuLinData::delegateShowPkInfo
	ShowPkInfoDelegate_t4995 * ___delegateShowPkInfo;
	// System.Collections.Generic.List`1<WuLinData/HistoryHeroMember> WuLinData::HerosInHistoryList
	List_1_t4999 * ___HerosInHistoryList;
	// WuLinData/ShowWuLinHeroesInHistoryDelegate WuLinData::delegateShowWuLinHeroesInHistory
	ShowWuLinHeroesInHistoryDelegate_t4996 * ___delegateShowWuLinHeroesInHistory;
	// System.Int32 WuLinData::<Resultwin>k__BackingField
	int32_t ___U3CResultwinU3Ek__BackingField;
	// System.Int32 WuLinData::<Rounder>k__BackingField
	int32_t ___U3CRounderU3Ek__BackingField;
	// System.Int32 WuLinData::<WuLinState>k__BackingField
	int32_t ___U3CWuLinStateU3Ek__BackingField;
	// System.Int32 WuLinData::<ContinueSec>k__BackingField
	int32_t ___U3CContinueSecU3Ek__BackingField;
	// System.Int32 WuLinData::<CurWuLinPage>k__BackingField
	int32_t ___U3CCurWuLinPageU3Ek__BackingField;
	// System.Int32 WuLinData::<MaxWuLinPage>k__BackingField
	int32_t ___U3CMaxWuLinPageU3Ek__BackingField;
};
