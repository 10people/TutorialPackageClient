#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_FRIEND_USERINFO
struct GC_RET_FRIEND_USERINFO_t3030;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.UInt32>
struct IList_1_t2934;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RET_FRIEND_USERINFO::.ctor()
 void GC_RET_FRIEND_USERINFO__ctor_m18288 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_RET_FRIEND_USERINFO::get_guidList()
 Object_t* GC_RET_FRIEND_USERINFO_get_guidList_m18289 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::get_guidCount()
 int32_t GC_RET_FRIEND_USERINFO_get_guidCount_m18290 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RET_FRIEND_USERINFO::GetGuid(System.Int32)
 uint64_t GC_RET_FRIEND_USERINFO_GetGuid_m18291 (GC_RET_FRIEND_USERINFO_t3030 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FRIEND_USERINFO::AddGuid(System.UInt64)
 void GC_RET_FRIEND_USERINFO_AddGuid_m18292 (GC_RET_FRIEND_USERINFO_t3030 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_FRIEND_USERINFO::get_LevelList()
 Object_t* GC_RET_FRIEND_USERINFO_get_LevelList_m18293 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::get_LevelCount()
 int32_t GC_RET_FRIEND_USERINFO_get_LevelCount_m18294 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::GetLevel(System.Int32)
 int32_t GC_RET_FRIEND_USERINFO_GetLevel_m18295 (GC_RET_FRIEND_USERINFO_t3030 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FRIEND_USERINFO::AddLevel(System.Int32)
 void GC_RET_FRIEND_USERINFO_AddLevel_m18296 (GC_RET_FRIEND_USERINFO_t3030 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_FRIEND_USERINFO::get_ProfList()
 Object_t* GC_RET_FRIEND_USERINFO_get_ProfList_m18297 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::get_ProfCount()
 int32_t GC_RET_FRIEND_USERINFO_get_ProfCount_m18298 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::GetProf(System.Int32)
 int32_t GC_RET_FRIEND_USERINFO_GetProf_m18299 (GC_RET_FRIEND_USERINFO_t3030 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FRIEND_USERINFO::AddProf(System.Int32)
 void GC_RET_FRIEND_USERINFO_AddProf_m18300 (GC_RET_FRIEND_USERINFO_t3030 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_FRIEND_USERINFO::get_CombatList()
 Object_t* GC_RET_FRIEND_USERINFO_get_CombatList_m18301 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::get_CombatCount()
 int32_t GC_RET_FRIEND_USERINFO_get_CombatCount_m18302 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::GetCombat(System.Int32)
 int32_t GC_RET_FRIEND_USERINFO_GetCombat_m18303 (GC_RET_FRIEND_USERINFO_t3030 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FRIEND_USERINFO::AddCombat(System.Int32)
 void GC_RET_FRIEND_USERINFO_AddCombat_m18304 (GC_RET_FRIEND_USERINFO_t3030 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_FRIEND_USERINFO::get_StateList()
 Object_t* GC_RET_FRIEND_USERINFO_get_StateList_m18305 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::get_StateCount()
 int32_t GC_RET_FRIEND_USERINFO_get_StateCount_m18306 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::GetState(System.Int32)
 int32_t GC_RET_FRIEND_USERINFO_GetState_m18307 (GC_RET_FRIEND_USERINFO_t3030 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FRIEND_USERINFO::AddState(System.Int32)
 void GC_RET_FRIEND_USERINFO_AddState_m18308 (GC_RET_FRIEND_USERINFO_t3030 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_FRIEND_USERINFO::get_NameList()
 Object_t* GC_RET_FRIEND_USERINFO_get_NameList_m18309 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::get_NameCount()
 int32_t GC_RET_FRIEND_USERINFO_get_NameCount_m18310 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_FRIEND_USERINFO::GetName(System.Int32)
 String_t* GC_RET_FRIEND_USERINFO_GetName_m18311 (GC_RET_FRIEND_USERINFO_t3030 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FRIEND_USERINFO::AddName(System.String)
 void GC_RET_FRIEND_USERINFO_AddName_m18312 (GC_RET_FRIEND_USERINFO_t3030 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt32> GC_RET_FRIEND_USERINFO::get_TimeInfoList()
 Object_t* GC_RET_FRIEND_USERINFO_get_TimeInfoList_m18313 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::get_TimeInfoCount()
 int32_t GC_RET_FRIEND_USERINFO_get_TimeInfoCount_m18314 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GC_RET_FRIEND_USERINFO::GetTimeInfo(System.Int32)
 uint32_t GC_RET_FRIEND_USERINFO_GetTimeInfo_m18315 (GC_RET_FRIEND_USERINFO_t3030 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FRIEND_USERINFO::AddTimeInfo(System.UInt32)
 void GC_RET_FRIEND_USERINFO_AddTimeInfo_m18316 (GC_RET_FRIEND_USERINFO_t3030 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FRIEND_USERINFO::SerializedSize()
 int32_t GC_RET_FRIEND_USERINFO_SerializedSize_m18317 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FRIEND_USERINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_FRIEND_USERINFO_WriteTo_m18318 (GC_RET_FRIEND_USERINFO_t3030 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_FRIEND_USERINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_FRIEND_USERINFO_MergeFrom_m18319 (GC_RET_FRIEND_USERINFO_t3030 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_FRIEND_USERINFO::IsInitialized()
 bool GC_RET_FRIEND_USERINFO_IsInitialized_m18320 (GC_RET_FRIEND_USERINFO_t3030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
