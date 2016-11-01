#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILD_RET_INFO
struct GC_GUILD_RET_INFO_t3240;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_GUILD_RET_INFO::.ctor()
 void GC_GUILD_RET_INFO__ctor_m21892 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::get_HasGuildGuid()
 bool GC_GUILD_RET_INFO_get_HasGuildGuid_m21893 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_RET_INFO::get_GuildGuid()
 uint64_t GC_GUILD_RET_INFO_get_GuildGuid_m21894 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::set_GuildGuid(System.UInt64)
 void GC_GUILD_RET_INFO_set_GuildGuid_m21895 (GC_GUILD_RET_INFO_t3240 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::SetGuildGuid(System.UInt64)
 void GC_GUILD_RET_INFO_SetGuildGuid_m21896 (GC_GUILD_RET_INFO_t3240 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::get_HasGuildName()
 bool GC_GUILD_RET_INFO_get_HasGuildName_m21897 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_RET_INFO::get_GuildName()
 String_t* GC_GUILD_RET_INFO_get_GuildName_m21898 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::set_GuildName(System.String)
 void GC_GUILD_RET_INFO_set_GuildName_m21899 (GC_GUILD_RET_INFO_t3240 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::SetGuildName(System.String)
 void GC_GUILD_RET_INFO_SetGuildName_m21900 (GC_GUILD_RET_INFO_t3240 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::get_HasGuildChiefGuid()
 bool GC_GUILD_RET_INFO_get_HasGuildChiefGuid_m21901 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_RET_INFO::get_GuildChiefGuid()
 uint64_t GC_GUILD_RET_INFO_get_GuildChiefGuid_m21902 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::set_GuildChiefGuid(System.UInt64)
 void GC_GUILD_RET_INFO_set_GuildChiefGuid_m21903 (GC_GUILD_RET_INFO_t3240 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::SetGuildChiefGuid(System.UInt64)
 void GC_GUILD_RET_INFO_SetGuildChiefGuid_m21904 (GC_GUILD_RET_INFO_t3240 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::get_HasGuildLevel()
 bool GC_GUILD_RET_INFO_get_HasGuildLevel_m21905 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_GuildLevel()
 int32_t GC_GUILD_RET_INFO_get_GuildLevel_m21906 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::set_GuildLevel(System.Int32)
 void GC_GUILD_RET_INFO_set_GuildLevel_m21907 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::SetGuildLevel(System.Int32)
 void GC_GUILD_RET_INFO_SetGuildLevel_m21908 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::get_HasGuildExp()
 bool GC_GUILD_RET_INFO_get_HasGuildExp_m21909 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_GuildExp()
 int32_t GC_GUILD_RET_INFO_get_GuildExp_m21910 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::set_GuildExp(System.Int32)
 void GC_GUILD_RET_INFO_set_GuildExp_m21911 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::SetGuildExp(System.Int32)
 void GC_GUILD_RET_INFO_SetGuildExp_m21912 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::get_HasGuildNotice()
 bool GC_GUILD_RET_INFO_get_HasGuildNotice_m21913 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_RET_INFO::get_GuildNotice()
 String_t* GC_GUILD_RET_INFO_get_GuildNotice_m21914 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::set_GuildNotice(System.String)
 void GC_GUILD_RET_INFO_set_GuildNotice_m21915 (GC_GUILD_RET_INFO_t3240 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::SetGuildNotice(System.String)
 void GC_GUILD_RET_INFO_SetGuildNotice_m21916 (GC_GUILD_RET_INFO_t3240 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_GUILD_RET_INFO::get_memberGuidList()
 Object_t* GC_GUILD_RET_INFO_get_memberGuidList_m21917 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_memberGuidCount()
 int32_t GC_GUILD_RET_INFO_get_memberGuidCount_m21918 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_RET_INFO::GetMemberGuid(System.Int32)
 uint64_t GC_GUILD_RET_INFO_GetMemberGuid_m21919 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddMemberGuid(System.UInt64)
 void GC_GUILD_RET_INFO_AddMemberGuid_m21920 (GC_GUILD_RET_INFO_t3240 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_GUILD_RET_INFO::get_memberNameList()
 Object_t* GC_GUILD_RET_INFO_get_memberNameList_m21921 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_memberNameCount()
 int32_t GC_GUILD_RET_INFO_get_memberNameCount_m21922 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_RET_INFO::GetMemberName(System.Int32)
 String_t* GC_GUILD_RET_INFO_GetMemberName_m21923 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddMemberName(System.String)
 void GC_GUILD_RET_INFO_AddMemberName_m21924 (GC_GUILD_RET_INFO_t3240 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_memberVIPList()
 Object_t* GC_GUILD_RET_INFO_get_memberVIPList_m21925 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_memberVIPCount()
 int32_t GC_GUILD_RET_INFO_get_memberVIPCount_m21926 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetMemberVIP(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetMemberVIP_m21927 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddMemberVIP(System.Int32)
 void GC_GUILD_RET_INFO_AddMemberVIP_m21928 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_memberProfList()
 Object_t* GC_GUILD_RET_INFO_get_memberProfList_m21929 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_memberProfCount()
 int32_t GC_GUILD_RET_INFO_get_memberProfCount_m21930 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetMemberProf(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetMemberProf_m21931 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddMemberProf(System.Int32)
 void GC_GUILD_RET_INFO_AddMemberProf_m21932 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_memberLevelList()
 Object_t* GC_GUILD_RET_INFO_get_memberLevelList_m21933 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_memberLevelCount()
 int32_t GC_GUILD_RET_INFO_get_memberLevelCount_m21934 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetMemberLevel(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetMemberLevel_m21935 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddMemberLevel(System.Int32)
 void GC_GUILD_RET_INFO_AddMemberLevel_m21936 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_memberContirbuteList()
 Object_t* GC_GUILD_RET_INFO_get_memberContirbuteList_m21937 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_memberContirbuteCount()
 int32_t GC_GUILD_RET_INFO_get_memberContirbuteCount_m21938 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetMemberContirbute(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetMemberContirbute_m21939 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddMemberContirbute(System.Int32)
 void GC_GUILD_RET_INFO_AddMemberContirbute_m21940 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_memberLastLogoutList()
 Object_t* GC_GUILD_RET_INFO_get_memberLastLogoutList_m21941 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_memberLastLogoutCount()
 int32_t GC_GUILD_RET_INFO_get_memberLastLogoutCount_m21942 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetMemberLastLogout(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetMemberLastLogout_m21943 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddMemberLastLogout(System.Int32)
 void GC_GUILD_RET_INFO_AddMemberLastLogout_m21944 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_memberStateList()
 Object_t* GC_GUILD_RET_INFO_get_memberStateList_m21945 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_memberStateCount()
 int32_t GC_GUILD_RET_INFO_get_memberStateCount_m21946 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetMemberState(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetMemberState_m21947 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddMemberState(System.Int32)
 void GC_GUILD_RET_INFO_AddMemberState_m21948 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_memberJobList()
 Object_t* GC_GUILD_RET_INFO_get_memberJobList_m21949 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_memberJobCount()
 int32_t GC_GUILD_RET_INFO_get_memberJobCount_m21950 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetMemberJob(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetMemberJob_m21951 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddMemberJob(System.Int32)
 void GC_GUILD_RET_INFO_AddMemberJob_m21952 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_combatvalList()
 Object_t* GC_GUILD_RET_INFO_get_combatvalList_m21953 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_combatvalCount()
 int32_t GC_GUILD_RET_INFO_get_combatvalCount_m21954 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetCombatval(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetCombatval_m21955 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddCombatval(System.Int32)
 void GC_GUILD_RET_INFO_AddCombatval_m21956 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::get_HasPscanacpttimes()
 bool GC_GUILD_RET_INFO_get_HasPscanacpttimes_m21957 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_Pscanacpttimes()
 int32_t GC_GUILD_RET_INFO_get_Pscanacpttimes_m21958 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::set_Pscanacpttimes(System.Int32)
 void GC_GUILD_RET_INFO_set_Pscanacpttimes_m21959 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::SetPscanacpttimes(System.Int32)
 void GC_GUILD_RET_INFO_SetPscanacpttimes_m21960 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_GuildHistoryTypeList()
 Object_t* GC_GUILD_RET_INFO_get_GuildHistoryTypeList_m21961 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_GuildHistoryTypeCount()
 int32_t GC_GUILD_RET_INFO_get_GuildHistoryTypeCount_m21962 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetGuildHistoryType(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetGuildHistoryType_m21963 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddGuildHistoryType(System.Int32)
 void GC_GUILD_RET_INFO_AddGuildHistoryType_m21964 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_GuildHistoryTimeList()
 Object_t* GC_GUILD_RET_INFO_get_GuildHistoryTimeList_m21965 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_GuildHistoryTimeCount()
 int32_t GC_GUILD_RET_INFO_get_GuildHistoryTimeCount_m21966 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetGuildHistoryTime(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetGuildHistoryTime_m21967 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddGuildHistoryTime(System.Int32)
 void GC_GUILD_RET_INFO_AddGuildHistoryTime_m21968 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_GUILD_RET_INFO::get_GuildHistoryTextList()
 Object_t* GC_GUILD_RET_INFO_get_GuildHistoryTextList_m21969 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_GuildHistoryTextCount()
 int32_t GC_GUILD_RET_INFO_get_GuildHistoryTextCount_m21970 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_RET_INFO::GetGuildHistoryText(System.Int32)
 String_t* GC_GUILD_RET_INFO_GetGuildHistoryText_m21971 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddGuildHistoryText(System.String)
 void GC_GUILD_RET_INFO_AddGuildHistoryText_m21972 (GC_GUILD_RET_INFO_t3240 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_ViceChiefRoutineList()
 Object_t* GC_GUILD_RET_INFO_get_ViceChiefRoutineList_m21973 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_ViceChiefRoutineCount()
 int32_t GC_GUILD_RET_INFO_get_ViceChiefRoutineCount_m21974 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetViceChiefRoutine(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetViceChiefRoutine_m21975 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddViceChiefRoutine(System.Int32)
 void GC_GUILD_RET_INFO_AddViceChiefRoutine_m21976 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_ElderRoutineList()
 Object_t* GC_GUILD_RET_INFO_get_ElderRoutineList_m21977 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_ElderRoutineCount()
 int32_t GC_GUILD_RET_INFO_get_ElderRoutineCount_m21978 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetElderRoutine(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetElderRoutine_m21979 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddElderRoutine(System.Int32)
 void GC_GUILD_RET_INFO_AddElderRoutine_m21980 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_GUILD_RET_INFO::get_GuildJobNameList()
 Object_t* GC_GUILD_RET_INFO_get_GuildJobNameList_m21981 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_GuildJobNameCount()
 int32_t GC_GUILD_RET_INFO_get_GuildJobNameCount_m21982 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_RET_INFO::GetGuildJobName(System.Int32)
 String_t* GC_GUILD_RET_INFO_GetGuildJobName_m21983 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddGuildJobName(System.String)
 void GC_GUILD_RET_INFO_AddGuildJobName_m21984 (GC_GUILD_RET_INFO_t3240 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::get_HasLastWeekContri()
 bool GC_GUILD_RET_INFO_get_HasLastWeekContri_m21985 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_LastWeekContri()
 int32_t GC_GUILD_RET_INFO_get_LastWeekContri_m21986 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::set_LastWeekContri(System.Int32)
 void GC_GUILD_RET_INFO_set_LastWeekContri_m21987 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::SetLastWeekContri(System.Int32)
 void GC_GUILD_RET_INFO_SetLastWeekContri_m21988 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::get_HasNeedReserve()
 bool GC_GUILD_RET_INFO_get_HasNeedReserve_m21989 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_NeedReserve()
 int32_t GC_GUILD_RET_INFO_get_NeedReserve_m21990 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::set_NeedReserve(System.Int32)
 void GC_GUILD_RET_INFO_set_NeedReserve_m21991 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::SetNeedReserve(System.Int32)
 void GC_GUILD_RET_INFO_SetNeedReserve_m21992 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::get_HasGuildDeclaration()
 bool GC_GUILD_RET_INFO_get_HasGuildDeclaration_m21993 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_RET_INFO::get_GuildDeclaration()
 String_t* GC_GUILD_RET_INFO_get_GuildDeclaration_m21994 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::set_GuildDeclaration(System.String)
 void GC_GUILD_RET_INFO_set_GuildDeclaration_m21995 (GC_GUILD_RET_INFO_t3240 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::SetGuildDeclaration(System.String)
 void GC_GUILD_RET_INFO_SetGuildDeclaration_m21996 (GC_GUILD_RET_INFO_t3240 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::get_HasHideAndSeekWeek()
 bool GC_GUILD_RET_INFO_get_HasHideAndSeekWeek_m21997 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_HideAndSeekWeek()
 int32_t GC_GUILD_RET_INFO_get_HideAndSeekWeek_m21998 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::set_HideAndSeekWeek(System.Int32)
 void GC_GUILD_RET_INFO_set_HideAndSeekWeek_m21999 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::SetHideAndSeekWeek(System.Int32)
 void GC_GUILD_RET_INFO_SetHideAndSeekWeek_m22000 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_SceneNpcIdList()
 Object_t* GC_GUILD_RET_INFO_get_SceneNpcIdList_m22001 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_SceneNpcIdCount()
 int32_t GC_GUILD_RET_INFO_get_SceneNpcIdCount_m22002 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetSceneNpcId(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetSceneNpcId_m22003 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddSceneNpcId(System.Int32)
 void GC_GUILD_RET_INFO_AddSceneNpcId_m22004 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_INFO::get_SceneNpcFindList()
 Object_t* GC_GUILD_RET_INFO_get_SceneNpcFindList_m22005 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::get_SceneNpcFindCount()
 int32_t GC_GUILD_RET_INFO_get_SceneNpcFindCount_m22006 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::GetSceneNpcFind(System.Int32)
 int32_t GC_GUILD_RET_INFO_GetSceneNpcFind_m22007 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::AddSceneNpcFind(System.Int32)
 void GC_GUILD_RET_INFO_AddSceneNpcFind_m22008 (GC_GUILD_RET_INFO_t3240 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_INFO::SerializedSize()
 int32_t GC_GUILD_RET_INFO_SerializedSize_m22009 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_INFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILD_RET_INFO_WriteTo_m22010 (GC_GUILD_RET_INFO_t3240 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILD_RET_INFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILD_RET_INFO_MergeFrom_m22011 (GC_GUILD_RET_INFO_t3240 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_INFO::IsInitialized()
 bool GC_GUILD_RET_INFO_IsInitialized_m22012 (GC_GUILD_RET_INFO_t3240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
