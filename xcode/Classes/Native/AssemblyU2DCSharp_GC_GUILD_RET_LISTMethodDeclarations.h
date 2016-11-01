#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILD_RET_LIST
struct GC_GUILD_RET_LIST_t3238;
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

// System.Void GC_GUILD_RET_LIST::.ctor()
 void GC_GUILD_RET_LIST__ctor_m21834 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_GUILD_RET_LIST::get_preserveGuildGuidList()
 Object_t* GC_GUILD_RET_LIST_get_preserveGuildGuidList_m21835 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::get_preserveGuildGuidCount()
 int32_t GC_GUILD_RET_LIST_get_preserveGuildGuidCount_m21836 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_RET_LIST::GetPreserveGuildGuid(System.Int32)
 uint64_t GC_GUILD_RET_LIST_GetPreserveGuildGuid_m21837 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::AddPreserveGuildGuid(System.UInt64)
 void GC_GUILD_RET_LIST_AddPreserveGuildGuid_m21838 (GC_GUILD_RET_LIST_t3238 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_GUILD_RET_LIST::get_guildGuidList()
 Object_t* GC_GUILD_RET_LIST_get_guildGuidList_m21839 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::get_guildGuidCount()
 int32_t GC_GUILD_RET_LIST_get_guildGuidCount_m21840 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_GUILD_RET_LIST::GetGuildGuid(System.Int32)
 uint64_t GC_GUILD_RET_LIST_GetGuildGuid_m21841 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::AddGuildGuid(System.UInt64)
 void GC_GUILD_RET_LIST_AddGuildGuid_m21842 (GC_GUILD_RET_LIST_t3238 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_GUILD_RET_LIST::get_guildNameList()
 Object_t* GC_GUILD_RET_LIST_get_guildNameList_m21843 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::get_guildNameCount()
 int32_t GC_GUILD_RET_LIST_get_guildNameCount_m21844 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_RET_LIST::GetGuildName(System.Int32)
 String_t* GC_GUILD_RET_LIST_GetGuildName_m21845 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::AddGuildName(System.String)
 void GC_GUILD_RET_LIST_AddGuildName_m21846 (GC_GUILD_RET_LIST_t3238 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_GUILD_RET_LIST::get_guildChiefNameList()
 Object_t* GC_GUILD_RET_LIST_get_guildChiefNameList_m21847 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::get_guildChiefNameCount()
 int32_t GC_GUILD_RET_LIST_get_guildChiefNameCount_m21848 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_RET_LIST::GetGuildChiefName(System.Int32)
 String_t* GC_GUILD_RET_LIST_GetGuildChiefName_m21849 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::AddGuildChiefName(System.String)
 void GC_GUILD_RET_LIST_AddGuildChiefName_m21850 (GC_GUILD_RET_LIST_t3238 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_LIST::get_guildLevelList()
 Object_t* GC_GUILD_RET_LIST_get_guildLevelList_m21851 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::get_guildLevelCount()
 int32_t GC_GUILD_RET_LIST_get_guildLevelCount_m21852 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::GetGuildLevel(System.Int32)
 int32_t GC_GUILD_RET_LIST_GetGuildLevel_m21853 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::AddGuildLevel(System.Int32)
 void GC_GUILD_RET_LIST_AddGuildLevel_m21854 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_LIST::get_guildMemberNumList()
 Object_t* GC_GUILD_RET_LIST_get_guildMemberNumList_m21855 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::get_guildMemberNumCount()
 int32_t GC_GUILD_RET_LIST_get_guildMemberNumCount_m21856 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::GetGuildMemberNum(System.Int32)
 int32_t GC_GUILD_RET_LIST_GetGuildMemberNum_m21857 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::AddGuildMemberNum(System.Int32)
 void GC_GUILD_RET_LIST_AddGuildMemberNum_m21858 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_LIST::get_guildCombatList()
 Object_t* GC_GUILD_RET_LIST_get_guildCombatList_m21859 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::get_guildCombatCount()
 int32_t GC_GUILD_RET_LIST_get_guildCombatCount_m21860 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::GetGuildCombat(System.Int32)
 int32_t GC_GUILD_RET_LIST_GetGuildCombat_m21861 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::AddGuildCombat(System.Int32)
 void GC_GUILD_RET_LIST_AddGuildCombat_m21862 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_LIST::get_isEnemyGuildList()
 Object_t* GC_GUILD_RET_LIST_get_isEnemyGuildList_m21863 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::get_isEnemyGuildCount()
 int32_t GC_GUILD_RET_LIST_get_isEnemyGuildCount_m21864 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::GetIsEnemyGuild(System.Int32)
 int32_t GC_GUILD_RET_LIST_GetIsEnemyGuild_m21865 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::AddIsEnemyGuild(System.Int32)
 void GC_GUILD_RET_LIST_AddIsEnemyGuild_m21866 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_LIST::get_guildApplyNumList()
 Object_t* GC_GUILD_RET_LIST_get_guildApplyNumList_m21867 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::get_guildApplyNumCount()
 int32_t GC_GUILD_RET_LIST_get_guildApplyNumCount_m21868 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::GetGuildApplyNum(System.Int32)
 int32_t GC_GUILD_RET_LIST_GetGuildApplyNum_m21869 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::AddGuildApplyNum(System.Int32)
 void GC_GUILD_RET_LIST_AddGuildApplyNum_m21870 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_GUILD_RET_LIST::get_guildApplyMaxNumList()
 Object_t* GC_GUILD_RET_LIST_get_guildApplyMaxNumList_m21871 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::get_guildApplyMaxNumCount()
 int32_t GC_GUILD_RET_LIST_get_guildApplyMaxNumCount_m21872 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::GetGuildApplyMaxNum(System.Int32)
 int32_t GC_GUILD_RET_LIST_GetGuildApplyMaxNum_m21873 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::AddGuildApplyMaxNum(System.Int32)
 void GC_GUILD_RET_LIST_AddGuildApplyMaxNum_m21874 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_GUILD_RET_LIST::get_GuildDeclarationList()
 Object_t* GC_GUILD_RET_LIST_get_GuildDeclarationList_m21875 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::get_GuildDeclarationCount()
 int32_t GC_GUILD_RET_LIST_get_GuildDeclarationCount_m21876 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_GUILD_RET_LIST::GetGuildDeclaration(System.Int32)
 String_t* GC_GUILD_RET_LIST_GetGuildDeclaration_m21877 (GC_GUILD_RET_LIST_t3238 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::AddGuildDeclaration(System.String)
 void GC_GUILD_RET_LIST_AddGuildDeclaration_m21878 (GC_GUILD_RET_LIST_t3238 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_RET_LIST::SerializedSize()
 int32_t GC_GUILD_RET_LIST_SerializedSize_m21879 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_RET_LIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILD_RET_LIST_WriteTo_m21880 (GC_GUILD_RET_LIST_t3238 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILD_RET_LIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILD_RET_LIST_MergeFrom_m21881 (GC_GUILD_RET_LIST_t3238 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_RET_LIST::IsInitialized()
 bool GC_GUILD_RET_LIST_IsInitialized_m21882 (GC_GUILD_RET_LIST_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
