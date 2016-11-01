#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>
struct Dictionary_2_t4731;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1393;
// System.Boolean[]
struct BooleanU5BU5D_t102;
// System.String[]
struct StringU5BU5D_t333;
// System.Collections.Generic.List`1<GuildHistory>
struct List_1_t4732;
// System.Collections.Generic.List`1<GuildHideAndSeekNpc>
struct List_1_t4733;
// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>>
struct Comparison_1_t4734;
// System.Object
#include "mscorlib_System_Object.h"
// Guild
struct Guild_t4735  : public Object_t
{
	// System.UInt64 Guild::m_GuildGuid
	uint64_t ___m_GuildGuid;
	// System.String Guild::m_GuildName
	String_t* ___m_GuildName;
	// System.Int32 Guild::m_GuildLevel
	int32_t ___m_GuildLevel;
	// System.UInt64 Guild::m_GuildChiefGuid
	uint64_t ___m_GuildChiefGuid;
	// System.Int32 Guild::m_GuildExp
	int32_t ___m_GuildExp;
	// System.String Guild::m_GuildNotice
	String_t* ___m_GuildNotice;
	// System.String Guild::m_GuildDeclaration
	String_t* ___m_GuildDeclaration;
	// System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember> Guild::m_GuildMemberList
	Dictionary_2_t4731 * ___m_GuildMemberList;
	// System.Collections.Generic.List`1<System.UInt64> Guild::m_PreserveGuildGuid
	List_1_t1393 * ___m_PreserveGuildGuid;
	// System.Int32 Guild::m_nPSCanAcceptTimes
	int32_t ___m_nPSCanAcceptTimes;
	// System.Boolean Guild::m_NeedReserve
	bool ___m_NeedReserve;
	// System.Boolean[] Guild::m_ViceChiefRoutine
	BooleanU5BU5D_t102* ___m_ViceChiefRoutine;
	// System.Boolean[] Guild::m_ElderRoutine
	BooleanU5BU5D_t102* ___m_ElderRoutine;
	// System.String[] Guild::m_GuildJobName
	StringU5BU5D_t333* ___m_GuildJobName;
	// System.Collections.Generic.List`1<GuildHistory> Guild::m_GuildHistoryInfo
	List_1_t4732 * ___m_GuildHistoryInfo;
	// System.Int32 Guild::m_LastWeekContri
	int32_t ___m_LastWeekContri;
	// System.Collections.Generic.List`1<GuildHideAndSeekNpc> Guild::m_HideAndSeekNpcInfo
	List_1_t4733 * ___m_HideAndSeekNpcInfo;
	// System.Boolean Guild::m_HideAndSeekWeek
	bool ___m_HideAndSeekWeek;
};
struct Guild_t4735_StaticFields{
	// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>> Guild::<>f__am$cache12
	Comparison_1_t4734 * ___U3CU3Ef__am$cache12;
	// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>> Guild::<>f__am$cache13
	Comparison_1_t4734 * ___U3CU3Ef__am$cache13;
	// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>> Guild::<>f__am$cache14
	Comparison_1_t4734 * ___U3CU3Ef__am$cache14;
	// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>> Guild::<>f__am$cache15
	Comparison_1_t4734 * ___U3CU3Ef__am$cache15;
};
