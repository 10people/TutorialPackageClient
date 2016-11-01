#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_NEAR_PLAYERLIST
struct GC_NEAR_PLAYERLIST_t2042;
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

// System.Void GC_NEAR_PLAYERLIST::.ctor()
 void GC_NEAR_PLAYERLIST__ctor_m17237 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_NEAR_PLAYERLIST::get_GuidList()
 Object_t* GC_NEAR_PLAYERLIST_get_GuidList_m17238 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::get_GuidCount()
 int32_t GC_NEAR_PLAYERLIST_get_GuidCount_m17239 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_NEAR_PLAYERLIST::GetGuid(System.Int32)
 uint64_t GC_NEAR_PLAYERLIST_GetGuid_m17240 (GC_NEAR_PLAYERLIST_t2042 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_PLAYERLIST::AddGuid(System.UInt64)
 void GC_NEAR_PLAYERLIST_AddGuid_m17241 (GC_NEAR_PLAYERLIST_t2042 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_NEAR_PLAYERLIST::get_NameList()
 Object_t* GC_NEAR_PLAYERLIST_get_NameList_m17242 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::get_NameCount()
 int32_t GC_NEAR_PLAYERLIST_get_NameCount_m17243 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_NEAR_PLAYERLIST::GetName(System.Int32)
 String_t* GC_NEAR_PLAYERLIST_GetName_m17244 (GC_NEAR_PLAYERLIST_t2042 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_PLAYERLIST::AddName(System.String)
 void GC_NEAR_PLAYERLIST_AddName_m17245 (GC_NEAR_PLAYERLIST_t2042 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_NEAR_PLAYERLIST::get_LevelList()
 Object_t* GC_NEAR_PLAYERLIST_get_LevelList_m17246 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::get_LevelCount()
 int32_t GC_NEAR_PLAYERLIST_get_LevelCount_m17247 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::GetLevel(System.Int32)
 int32_t GC_NEAR_PLAYERLIST_GetLevel_m17248 (GC_NEAR_PLAYERLIST_t2042 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_PLAYERLIST::AddLevel(System.Int32)
 void GC_NEAR_PLAYERLIST_AddLevel_m17249 (GC_NEAR_PLAYERLIST_t2042 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_NEAR_PLAYERLIST::get_ProfList()
 Object_t* GC_NEAR_PLAYERLIST_get_ProfList_m17250 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::get_ProfCount()
 int32_t GC_NEAR_PLAYERLIST_get_ProfCount_m17251 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::GetProf(System.Int32)
 int32_t GC_NEAR_PLAYERLIST_GetProf_m17252 (GC_NEAR_PLAYERLIST_t2042 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_PLAYERLIST::AddProf(System.Int32)
 void GC_NEAR_PLAYERLIST_AddProf_m17253 (GC_NEAR_PLAYERLIST_t2042 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_NEAR_PLAYERLIST::get_CombatNumList()
 Object_t* GC_NEAR_PLAYERLIST_get_CombatNumList_m17254 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::get_CombatNumCount()
 int32_t GC_NEAR_PLAYERLIST_get_CombatNumCount_m17255 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::GetCombatNum(System.Int32)
 int32_t GC_NEAR_PLAYERLIST_GetCombatNum_m17256 (GC_NEAR_PLAYERLIST_t2042 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_PLAYERLIST::AddCombatNum(System.Int32)
 void GC_NEAR_PLAYERLIST_AddCombatNum_m17257 (GC_NEAR_PLAYERLIST_t2042 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_NEAR_PLAYERLIST::get_VipLevelList()
 Object_t* GC_NEAR_PLAYERLIST_get_VipLevelList_m17258 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::get_VipLevelCount()
 int32_t GC_NEAR_PLAYERLIST_get_VipLevelCount_m17259 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::GetVipLevel(System.Int32)
 int32_t GC_NEAR_PLAYERLIST_GetVipLevel_m17260 (GC_NEAR_PLAYERLIST_t2042 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_PLAYERLIST::AddVipLevel(System.Int32)
 void GC_NEAR_PLAYERLIST_AddVipLevel_m17261 (GC_NEAR_PLAYERLIST_t2042 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_NEAR_PLAYERLIST::get_GuildNameList()
 Object_t* GC_NEAR_PLAYERLIST_get_GuildNameList_m17262 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::get_GuildNameCount()
 int32_t GC_NEAR_PLAYERLIST_get_GuildNameCount_m17263 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_NEAR_PLAYERLIST::GetGuildName(System.Int32)
 String_t* GC_NEAR_PLAYERLIST_GetGuildName_m17264 (GC_NEAR_PLAYERLIST_t2042 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_PLAYERLIST::AddGuildName(System.String)
 void GC_NEAR_PLAYERLIST_AddGuildName_m17265 (GC_NEAR_PLAYERLIST_t2042 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_PLAYERLIST::SerializedSize()
 int32_t GC_NEAR_PLAYERLIST_SerializedSize_m17266 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_PLAYERLIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_NEAR_PLAYERLIST_WriteTo_m17267 (GC_NEAR_PLAYERLIST_t2042 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_NEAR_PLAYERLIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_NEAR_PLAYERLIST_MergeFrom_m17268 (GC_NEAR_PLAYERLIST_t2042 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_NEAR_PLAYERLIST::IsInitialized()
 bool GC_NEAR_PLAYERLIST_IsInitialized_m17269 (GC_NEAR_PLAYERLIST_t2042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
