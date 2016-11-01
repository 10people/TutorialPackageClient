#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_BLACK_USERINFO
struct GC_RET_BLACK_USERINFO_t3568;
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

// System.Void GC_RET_BLACK_USERINFO::.ctor()
 void GC_RET_BLACK_USERINFO__ctor_m27544 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_RET_BLACK_USERINFO::get_guidList()
 Object_t* GC_RET_BLACK_USERINFO_get_guidList_m27545 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::get_guidCount()
 int32_t GC_RET_BLACK_USERINFO_get_guidCount_m27546 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RET_BLACK_USERINFO::GetGuid(System.Int32)
 uint64_t GC_RET_BLACK_USERINFO_GetGuid_m27547 (GC_RET_BLACK_USERINFO_t3568 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACK_USERINFO::AddGuid(System.UInt64)
 void GC_RET_BLACK_USERINFO_AddGuid_m27548 (GC_RET_BLACK_USERINFO_t3568 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_BLACK_USERINFO::get_LevelList()
 Object_t* GC_RET_BLACK_USERINFO_get_LevelList_m27549 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::get_LevelCount()
 int32_t GC_RET_BLACK_USERINFO_get_LevelCount_m27550 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::GetLevel(System.Int32)
 int32_t GC_RET_BLACK_USERINFO_GetLevel_m27551 (GC_RET_BLACK_USERINFO_t3568 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACK_USERINFO::AddLevel(System.Int32)
 void GC_RET_BLACK_USERINFO_AddLevel_m27552 (GC_RET_BLACK_USERINFO_t3568 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_BLACK_USERINFO::get_ProfList()
 Object_t* GC_RET_BLACK_USERINFO_get_ProfList_m27553 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::get_ProfCount()
 int32_t GC_RET_BLACK_USERINFO_get_ProfCount_m27554 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::GetProf(System.Int32)
 int32_t GC_RET_BLACK_USERINFO_GetProf_m27555 (GC_RET_BLACK_USERINFO_t3568 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACK_USERINFO::AddProf(System.Int32)
 void GC_RET_BLACK_USERINFO_AddProf_m27556 (GC_RET_BLACK_USERINFO_t3568 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_BLACK_USERINFO::get_CombatList()
 Object_t* GC_RET_BLACK_USERINFO_get_CombatList_m27557 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::get_CombatCount()
 int32_t GC_RET_BLACK_USERINFO_get_CombatCount_m27558 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::GetCombat(System.Int32)
 int32_t GC_RET_BLACK_USERINFO_GetCombat_m27559 (GC_RET_BLACK_USERINFO_t3568 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACK_USERINFO::AddCombat(System.Int32)
 void GC_RET_BLACK_USERINFO_AddCombat_m27560 (GC_RET_BLACK_USERINFO_t3568 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_BLACK_USERINFO::get_StateList()
 Object_t* GC_RET_BLACK_USERINFO_get_StateList_m27561 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::get_StateCount()
 int32_t GC_RET_BLACK_USERINFO_get_StateCount_m27562 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::GetState(System.Int32)
 int32_t GC_RET_BLACK_USERINFO_GetState_m27563 (GC_RET_BLACK_USERINFO_t3568 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACK_USERINFO::AddState(System.Int32)
 void GC_RET_BLACK_USERINFO_AddState_m27564 (GC_RET_BLACK_USERINFO_t3568 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_BLACK_USERINFO::get_NameList()
 Object_t* GC_RET_BLACK_USERINFO_get_NameList_m27565 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::get_NameCount()
 int32_t GC_RET_BLACK_USERINFO_get_NameCount_m27566 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_BLACK_USERINFO::GetName(System.Int32)
 String_t* GC_RET_BLACK_USERINFO_GetName_m27567 (GC_RET_BLACK_USERINFO_t3568 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACK_USERINFO::AddName(System.String)
 void GC_RET_BLACK_USERINFO_AddName_m27568 (GC_RET_BLACK_USERINFO_t3568 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt32> GC_RET_BLACK_USERINFO::get_TimeInfoList()
 Object_t* GC_RET_BLACK_USERINFO_get_TimeInfoList_m27569 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::get_TimeInfoCount()
 int32_t GC_RET_BLACK_USERINFO_get_TimeInfoCount_m27570 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GC_RET_BLACK_USERINFO::GetTimeInfo(System.Int32)
 uint32_t GC_RET_BLACK_USERINFO_GetTimeInfo_m27571 (GC_RET_BLACK_USERINFO_t3568 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACK_USERINFO::AddTimeInfo(System.UInt32)
 void GC_RET_BLACK_USERINFO_AddTimeInfo_m27572 (GC_RET_BLACK_USERINFO_t3568 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_BLACK_USERINFO::SerializedSize()
 int32_t GC_RET_BLACK_USERINFO_SerializedSize_m27573 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_BLACK_USERINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_BLACK_USERINFO_WriteTo_m27574 (GC_RET_BLACK_USERINFO_t3568 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_BLACK_USERINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_BLACK_USERINFO_MergeFrom_m27575 (GC_RET_BLACK_USERINFO_t3568 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_BLACK_USERINFO::IsInitialized()
 bool GC_RET_BLACK_USERINFO_IsInitialized_m27576 (GC_RET_BLACK_USERINFO_t3568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
