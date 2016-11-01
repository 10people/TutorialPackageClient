#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILD_SEARCH
struct GC_GUILD_SEARCH_t1459;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_GUILD_SEARCH::.ctor()
 void GC_GUILD_SEARCH__ctor_m28198 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_SEARCH::get_HasNoneResult()
 bool GC_GUILD_SEARCH_get_HasNoneResult_m28199 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_NoneResult()
 int32_t GC_GUILD_SEARCH_get_NoneResult_m28200 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::set_NoneResult(System.Int32)
 void GC_GUILD_SEARCH_set_NoneResult_m28201 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::SetNoneResult(System.Int32)
 void GC_GUILD_SEARCH_SetNoneResult_m28202 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_GUILD_SEARCH::get_preserveGuildGuidList()
 Object_t* GC_GUILD_SEARCH_get_preserveGuildGuidList_m28203 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_preserveGuildGuidCount()
 int32_t GC_GUILD_SEARCH_get_preserveGuildGuidCount_m28204 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_SEARCH::GetPreserveGuildGuid(System.Int32)
 uint64_t GC_GUILD_SEARCH_GetPreserveGuildGuid_m28205 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::AddPreserveGuildGuid(System.UInt64)
 void GC_GUILD_SEARCH_AddPreserveGuildGuid_m28206 (GC_GUILD_SEARCH_t1459 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_GUILD_SEARCH::get_guildGuidList()
 Object_t* GC_GUILD_SEARCH_get_guildGuidList_m28207 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_guildGuidCount()
 int32_t GC_GUILD_SEARCH_get_guildGuidCount_m28208 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_SEARCH::GetGuildGuid(System.Int32)
 uint64_t GC_GUILD_SEARCH_GetGuildGuid_m28209 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::AddGuildGuid(System.UInt64)
 void GC_GUILD_SEARCH_AddGuildGuid_m28210 (GC_GUILD_SEARCH_t1459 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_GUILD_SEARCH::get_guildNameList()
 Object_t* GC_GUILD_SEARCH_get_guildNameList_m28211 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_guildNameCount()
 int32_t GC_GUILD_SEARCH_get_guildNameCount_m28212 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_SEARCH::GetGuildName(System.Int32)
 String_t* GC_GUILD_SEARCH_GetGuildName_m28213 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::AddGuildName(System.String)
 void GC_GUILD_SEARCH_AddGuildName_m28214 (GC_GUILD_SEARCH_t1459 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_GUILD_SEARCH::get_guildChiefNameList()
 Object_t* GC_GUILD_SEARCH_get_guildChiefNameList_m28215 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_guildChiefNameCount()
 int32_t GC_GUILD_SEARCH_get_guildChiefNameCount_m28216 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_SEARCH::GetGuildChiefName(System.Int32)
 String_t* GC_GUILD_SEARCH_GetGuildChiefName_m28217 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::AddGuildChiefName(System.String)
 void GC_GUILD_SEARCH_AddGuildChiefName_m28218 (GC_GUILD_SEARCH_t1459 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SEARCH::get_guildLevelList()
 Object_t* GC_GUILD_SEARCH_get_guildLevelList_m28219 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_guildLevelCount()
 int32_t GC_GUILD_SEARCH_get_guildLevelCount_m28220 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::GetGuildLevel(System.Int32)
 int32_t GC_GUILD_SEARCH_GetGuildLevel_m28221 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::AddGuildLevel(System.Int32)
 void GC_GUILD_SEARCH_AddGuildLevel_m28222 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SEARCH::get_guildMemberNumList()
 Object_t* GC_GUILD_SEARCH_get_guildMemberNumList_m28223 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_guildMemberNumCount()
 int32_t GC_GUILD_SEARCH_get_guildMemberNumCount_m28224 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::GetGuildMemberNum(System.Int32)
 int32_t GC_GUILD_SEARCH_GetGuildMemberNum_m28225 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::AddGuildMemberNum(System.Int32)
 void GC_GUILD_SEARCH_AddGuildMemberNum_m28226 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SEARCH::get_guildCombatList()
 Object_t* GC_GUILD_SEARCH_get_guildCombatList_m28227 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_guildCombatCount()
 int32_t GC_GUILD_SEARCH_get_guildCombatCount_m28228 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::GetGuildCombat(System.Int32)
 int32_t GC_GUILD_SEARCH_GetGuildCombat_m28229 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::AddGuildCombat(System.Int32)
 void GC_GUILD_SEARCH_AddGuildCombat_m28230 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SEARCH::get_isEnemyGuildList()
 Object_t* GC_GUILD_SEARCH_get_isEnemyGuildList_m28231 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_isEnemyGuildCount()
 int32_t GC_GUILD_SEARCH_get_isEnemyGuildCount_m28232 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::GetIsEnemyGuild(System.Int32)
 int32_t GC_GUILD_SEARCH_GetIsEnemyGuild_m28233 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::AddIsEnemyGuild(System.Int32)
 void GC_GUILD_SEARCH_AddIsEnemyGuild_m28234 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SEARCH::get_guildApplyNumList()
 Object_t* GC_GUILD_SEARCH_get_guildApplyNumList_m28235 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_guildApplyNumCount()
 int32_t GC_GUILD_SEARCH_get_guildApplyNumCount_m28236 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::GetGuildApplyNum(System.Int32)
 int32_t GC_GUILD_SEARCH_GetGuildApplyNum_m28237 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::AddGuildApplyNum(System.Int32)
 void GC_GUILD_SEARCH_AddGuildApplyNum_m28238 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_SEARCH::get_guildApplyMaxNumList()
 Object_t* GC_GUILD_SEARCH_get_guildApplyMaxNumList_m28239 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_guildApplyMaxNumCount()
 int32_t GC_GUILD_SEARCH_get_guildApplyMaxNumCount_m28240 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::GetGuildApplyMaxNum(System.Int32)
 int32_t GC_GUILD_SEARCH_GetGuildApplyMaxNum_m28241 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::AddGuildApplyMaxNum(System.Int32)
 void GC_GUILD_SEARCH_AddGuildApplyMaxNum_m28242 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_GUILD_SEARCH::get_GuildDeclarationList()
 Object_t* GC_GUILD_SEARCH_get_GuildDeclarationList_m28243 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::get_GuildDeclarationCount()
 int32_t GC_GUILD_SEARCH_get_GuildDeclarationCount_m28244 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_SEARCH::GetGuildDeclaration(System.Int32)
 String_t* GC_GUILD_SEARCH_GetGuildDeclaration_m28245 (GC_GUILD_SEARCH_t1459 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::AddGuildDeclaration(System.String)
 void GC_GUILD_SEARCH_AddGuildDeclaration_m28246 (GC_GUILD_SEARCH_t1459 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_SEARCH::SerializedSize()
 int32_t GC_GUILD_SEARCH_SerializedSize_m28247 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_SEARCH::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILD_SEARCH_WriteTo_m28248 (GC_GUILD_SEARCH_t1459 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILD_SEARCH::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILD_SEARCH_MergeFrom_m28249 (GC_GUILD_SEARCH_t1459 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_SEARCH::IsInitialized()
 bool GC_GUILD_SEARCH_IsInitialized_m28250 (GC_GUILD_SEARCH_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
