#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Guild
struct Guild_t4735;
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
// GC_GUILD_RET_INFO
struct GC_GUILD_RET_INFO_t3240;
// GuildMember
struct GuildMember_t1444;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void Guild::.ctor()
 void Guild__ctor_m33476 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::CleanUp()
 void Guild_CleanUp_m33477 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Guild::get_GuildGuid()
 uint64_t Guild_get_GuildGuid_m33478 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_GuildGuid(System.UInt64)
 void Guild_set_GuildGuid_m33479 (Guild_t4735 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Guild::get_GuildName()
 String_t* Guild_get_GuildName_m33480 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_GuildName(System.String)
 void Guild_set_GuildName_m33481 (Guild_t4735 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::get_GuildLevel()
 int32_t Guild_get_GuildLevel_m33482 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_GuildLevel(System.Int32)
 void Guild_set_GuildLevel_m33483 (Guild_t4735 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Guild::get_GuildChiefGuid()
 uint64_t Guild_get_GuildChiefGuid_m33484 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_GuildChiefGuid(System.UInt64)
 void Guild_set_GuildChiefGuid_m33485 (Guild_t4735 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::get_GuildExp()
 int32_t Guild_get_GuildExp_m33486 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_GuildExp(System.Int32)
 void Guild_set_GuildExp_m33487 (Guild_t4735 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Guild::get_GuildNotice()
 String_t* Guild_get_GuildNotice_m33488 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_GuildNotice(System.String)
 void Guild_set_GuildNotice_m33489 (Guild_t4735 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Guild::get_GuildDeclaration()
 String_t* Guild_get_GuildDeclaration_m33490 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_GuildDeclaration(System.String)
 void Guild_set_GuildDeclaration_m33491 (Guild_t4735 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember> Guild::get_GuildMemberList()
 Dictionary_2_t4731 * Guild_get_GuildMemberList_m33492 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.UInt64> Guild::get_PreserveGuildGuid()
 List_1_t1393 * Guild_get_PreserveGuildGuid_m33493 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_PreserveGuildGuid(System.Collections.Generic.List`1<System.UInt64>)
 void Guild_set_PreserveGuildGuid_m33494 (Guild_t4735 * __this, List_1_t1393 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::get_PSCanAcceptTimes()
 int32_t Guild_get_PSCanAcceptTimes_m33495 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_PSCanAcceptTimes(System.Int32)
 void Guild_set_PSCanAcceptTimes_m33496 (Guild_t4735 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Guild::get_NeedReserve()
 bool Guild_get_NeedReserve_m33497 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_NeedReserve(System.Boolean)
 void Guild_set_NeedReserve_m33498 (Guild_t4735 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] Guild::get_ViceChiefRoutine()
 BooleanU5BU5D_t102* Guild_get_ViceChiefRoutine_m33499 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_ViceChiefRoutine(System.Boolean[])
 void Guild_set_ViceChiefRoutine_m33500 (Guild_t4735 * __this, BooleanU5BU5D_t102* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] Guild::get_ElderRoutine()
 BooleanU5BU5D_t102* Guild_get_ElderRoutine_m33501 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_ElderRoutine(System.Boolean[])
 void Guild_set_ElderRoutine_m33502 (Guild_t4735 * __this, BooleanU5BU5D_t102* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Guild::get_GuildJobName()
 StringU5BU5D_t333* Guild_get_GuildJobName_m33503 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_GuildJobName(System.String[])
 void Guild_set_GuildJobName_m33504 (Guild_t4735 * __this, StringU5BU5D_t333* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GuildHistory> Guild::get_GuildHistoryInfo()
 List_1_t4732 * Guild_get_GuildHistoryInfo_m33505 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_GuildHistoryInfo(System.Collections.Generic.List`1<GuildHistory>)
 void Guild_set_GuildHistoryInfo_m33506 (Guild_t4735 * __this, List_1_t4732 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::get_LastWeekContri()
 int32_t Guild_get_LastWeekContri_m33507 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_LastWeekContri(System.Int32)
 void Guild_set_LastWeekContri_m33508 (Guild_t4735 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GuildHideAndSeekNpc> Guild::get_HideAndSeekNpcInfo()
 List_1_t4733 * Guild_get_HideAndSeekNpcInfo_m33509 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_HideAndSeekNpcInfo(System.Collections.Generic.List`1<GuildHideAndSeekNpc>)
 void Guild_set_HideAndSeekNpcInfo_m33510 (Guild_t4735 * __this, List_1_t4733 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Guild::get_HideAndSeekWeek()
 bool Guild_get_HideAndSeekWeek_m33511 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::set_HideAndSeekWeek(System.Boolean)
 void Guild_set_HideAndSeekWeek_m33512 (Guild_t4735 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::UpdateData(GC_GUILD_RET_INFO)
 void Guild_UpdateData_m33513 (Guild_t4735 * __this, GC_GUILD_RET_INFO_t3240 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::GetGuildFormalMemberCount()
 int32_t Guild_GetGuildFormalMemberCount_m33514 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::GetGuildReserveMemberCount()
 int32_t Guild_GetGuildReserveMemberCount_m33515 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::GetMemberJob(System.UInt64)
 int32_t Guild_GetMemberJob_m33516 (Guild_t4735 * __this, uint64_t ___memberGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::GetMemberLevel(System.UInt64)
 int32_t Guild_GetMemberLevel_m33517 (Guild_t4735 * __this, uint64_t ___memberGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::GetMemberContribute(System.UInt64)
 int32_t Guild_GetMemberContribute_m33518 (Guild_t4735 * __this, uint64_t ___memberGuid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GuildMember Guild::GetMainPlayerGuildInfo()
 GuildMember_t1444 * Guild_GetMainPlayerGuildInfo_m33519 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember> Guild::SortMemberListByJob(System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>)
 Dictionary_2_t4731 * Guild_SortMemberListByJob_m33520 (Guild_t4735 * __this, Dictionary_2_t4731 * ___dic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember> Guild::SortMemberListByOnLine(System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>)
 Dictionary_2_t4731 * Guild_SortMemberListByOnLine_m33521 (Guild_t4735 * __this, Dictionary_2_t4731 * ___dic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember> Guild::SortMemberListByVIP(System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>)
 Dictionary_2_t4731 * Guild_SortMemberListByVIP_m33522 (Guild_t4735 * __this, Dictionary_2_t4731 * ___dic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember> Guild::SortMemberListByLevel(System.Collections.Generic.Dictionary`2<System.UInt64,GuildMember>)
 Dictionary_2_t4731 * Guild_SortMemberListByLevel_m33523 (Guild_t4735 * __this, Dictionary_2_t4731 * ___dic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Guild::SortByNewRule()
 void Guild_SortByNewRule_m33524 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Guild::IsHaveAuthority(System.Int32,System.Int32)
 bool Guild_IsHaveAuthority_m33525 (Guild_t4735 * __this, int32_t ___nJob, int32_t ___nRouteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::GetViceChiefRoutineCount()
 int32_t Guild_GetViceChiefRoutineCount_m33526 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::GetElderRoutineCount()
 int32_t Guild_GetElderRoutineCount_m33527 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::GetGuildShopOpenSlot()
 int32_t Guild_GetGuildShopOpenSlot_m33528 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Guild::IsInHideAndSeekActivity()
 bool Guild_IsInHideAndSeekActivity_m33529 (Guild_t4735 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Guild::IsHideAndSeekNpc(System.Int32)
 bool Guild_IsHideAndSeekNpc_m33530 (Guild_t4735 * __this, int32_t ___nSceneNpcId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::<SortMemberListByJob>m__22(System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>,System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>)
 int32_t Guild_U3CSortMemberListByJobU3Em__22_m33531 (Object_t * __this/* static, unused */, KeyValuePair_2_t4736  ___s1, KeyValuePair_2_t4736  ___s2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::<SortMemberListByOnLine>m__23(System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>,System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>)
 int32_t Guild_U3CSortMemberListByOnLineU3Em__23_m33532 (Object_t * __this/* static, unused */, KeyValuePair_2_t4736  ___s1, KeyValuePair_2_t4736  ___s2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::<SortMemberListByVIP>m__24(System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>,System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>)
 int32_t Guild_U3CSortMemberListByVIPU3Em__24_m33533 (Object_t * __this/* static, unused */, KeyValuePair_2_t4736  ___s1, KeyValuePair_2_t4736  ___s2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Guild::<SortMemberListByLevel>m__25(System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>,System.Collections.Generic.KeyValuePair`2<System.UInt64,GuildMember>)
 int32_t Guild_U3CSortMemberListByLevelU3Em__25_m33534 (Object_t * __this/* static, unused */, KeyValuePair_2_t4736  ___s1, KeyValuePair_2_t4736  ___s2, MethodInfo* method) IL2CPP_METHOD_ATTR;
