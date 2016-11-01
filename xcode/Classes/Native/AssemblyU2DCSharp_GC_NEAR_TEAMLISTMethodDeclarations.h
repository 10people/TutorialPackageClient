#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_NEAR_TEAMLIST
struct GC_NEAR_TEAMLIST_t2041;
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

// System.Void GC_NEAR_TEAMLIST::.ctor()
 void GC_NEAR_TEAMLIST__ctor_m17270 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_NEAR_TEAMLIST::get_GuidList()
 Object_t* GC_NEAR_TEAMLIST_get_GuidList_m17271 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::get_GuidCount()
 int32_t GC_NEAR_TEAMLIST_get_GuidCount_m17272 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_NEAR_TEAMLIST::GetGuid(System.Int32)
 uint64_t GC_NEAR_TEAMLIST_GetGuid_m17273 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_TEAMLIST::AddGuid(System.UInt64)
 void GC_NEAR_TEAMLIST_AddGuid_m17274 (GC_NEAR_TEAMLIST_t2041 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_NEAR_TEAMLIST::get_NameList()
 Object_t* GC_NEAR_TEAMLIST_get_NameList_m17275 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::get_NameCount()
 int32_t GC_NEAR_TEAMLIST_get_NameCount_m17276 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_NEAR_TEAMLIST::GetName(System.Int32)
 String_t* GC_NEAR_TEAMLIST_GetName_m17277 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_TEAMLIST::AddName(System.String)
 void GC_NEAR_TEAMLIST_AddName_m17278 (GC_NEAR_TEAMLIST_t2041 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_NEAR_TEAMLIST::get_LevelList()
 Object_t* GC_NEAR_TEAMLIST_get_LevelList_m17279 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::get_LevelCount()
 int32_t GC_NEAR_TEAMLIST_get_LevelCount_m17280 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::GetLevel(System.Int32)
 int32_t GC_NEAR_TEAMLIST_GetLevel_m17281 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_TEAMLIST::AddLevel(System.Int32)
 void GC_NEAR_TEAMLIST_AddLevel_m17282 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_NEAR_TEAMLIST::get_ProfList()
 Object_t* GC_NEAR_TEAMLIST_get_ProfList_m17283 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::get_ProfCount()
 int32_t GC_NEAR_TEAMLIST_get_ProfCount_m17284 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::GetProf(System.Int32)
 int32_t GC_NEAR_TEAMLIST_GetProf_m17285 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_TEAMLIST::AddProf(System.Int32)
 void GC_NEAR_TEAMLIST_AddProf_m17286 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_NEAR_TEAMLIST::get_CombatNumList()
 Object_t* GC_NEAR_TEAMLIST_get_CombatNumList_m17287 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::get_CombatNumCount()
 int32_t GC_NEAR_TEAMLIST_get_CombatNumCount_m17288 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::GetCombatNum(System.Int32)
 int32_t GC_NEAR_TEAMLIST_GetCombatNum_m17289 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_TEAMLIST::AddCombatNum(System.Int32)
 void GC_NEAR_TEAMLIST_AddCombatNum_m17290 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_NEAR_TEAMLIST::get_TeamIDList()
 Object_t* GC_NEAR_TEAMLIST_get_TeamIDList_m17291 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::get_TeamIDCount()
 int32_t GC_NEAR_TEAMLIST_get_TeamIDCount_m17292 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::GetTeamID(System.Int32)
 int32_t GC_NEAR_TEAMLIST_GetTeamID_m17293 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_TEAMLIST::AddTeamID(System.Int32)
 void GC_NEAR_TEAMLIST_AddTeamID_m17294 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_NEAR_TEAMLIST::get_TeamCombatList()
 Object_t* GC_NEAR_TEAMLIST_get_TeamCombatList_m17295 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::get_TeamCombatCount()
 int32_t GC_NEAR_TEAMLIST_get_TeamCombatCount_m17296 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::GetTeamCombat(System.Int32)
 int32_t GC_NEAR_TEAMLIST_GetTeamCombat_m17297 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_TEAMLIST::AddTeamCombat(System.Int32)
 void GC_NEAR_TEAMLIST_AddTeamCombat_m17298 (GC_NEAR_TEAMLIST_t2041 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_NEAR_TEAMLIST::SerializedSize()
 int32_t GC_NEAR_TEAMLIST_SerializedSize_m17299 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_NEAR_TEAMLIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_NEAR_TEAMLIST_WriteTo_m17300 (GC_NEAR_TEAMLIST_t2041 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_NEAR_TEAMLIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_NEAR_TEAMLIST_MergeFrom_m17301 (GC_NEAR_TEAMLIST_t2041 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_NEAR_TEAMLIST::IsInitialized()
 bool GC_NEAR_TEAMLIST_IsInitialized_m17302 (GC_NEAR_TEAMLIST_t2041 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
