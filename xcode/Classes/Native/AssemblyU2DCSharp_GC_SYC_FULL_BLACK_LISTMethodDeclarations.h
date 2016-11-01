#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_SYC_FULL_BLACK_LIST
struct GC_SYC_FULL_BLACK_LIST_t3038;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
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

// System.Void GC_SYC_FULL_BLACK_LIST::.ctor()
 void GC_SYC_FULL_BLACK_LIST__ctor_m18476 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_SYC_FULL_BLACK_LIST::get_guidList()
 Object_t* GC_SYC_FULL_BLACK_LIST_get_guidList_m18477 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::get_guidCount()
 int32_t GC_SYC_FULL_BLACK_LIST_get_guidCount_m18478 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_SYC_FULL_BLACK_LIST::GetGuid(System.Int32)
 uint64_t GC_SYC_FULL_BLACK_LIST_GetGuid_m18479 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_BLACK_LIST::AddGuid(System.UInt64)
 void GC_SYC_FULL_BLACK_LIST_AddGuid_m18480 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_SYC_FULL_BLACK_LIST::get_NameList()
 Object_t* GC_SYC_FULL_BLACK_LIST_get_NameList_m18481 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::get_NameCount()
 int32_t GC_SYC_FULL_BLACK_LIST_get_NameCount_m18482 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_SYC_FULL_BLACK_LIST::GetName(System.Int32)
 String_t* GC_SYC_FULL_BLACK_LIST_GetName_m18483 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_BLACK_LIST::AddName(System.String)
 void GC_SYC_FULL_BLACK_LIST_AddName_m18484 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYC_FULL_BLACK_LIST::get_LevelList()
 Object_t* GC_SYC_FULL_BLACK_LIST_get_LevelList_m18485 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::get_LevelCount()
 int32_t GC_SYC_FULL_BLACK_LIST_get_LevelCount_m18486 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::GetLevel(System.Int32)
 int32_t GC_SYC_FULL_BLACK_LIST_GetLevel_m18487 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_BLACK_LIST::AddLevel(System.Int32)
 void GC_SYC_FULL_BLACK_LIST_AddLevel_m18488 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYC_FULL_BLACK_LIST::get_ProfList()
 Object_t* GC_SYC_FULL_BLACK_LIST_get_ProfList_m18489 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::get_ProfCount()
 int32_t GC_SYC_FULL_BLACK_LIST_get_ProfCount_m18490 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::GetProf(System.Int32)
 int32_t GC_SYC_FULL_BLACK_LIST_GetProf_m18491 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_BLACK_LIST::AddProf(System.Int32)
 void GC_SYC_FULL_BLACK_LIST_AddProf_m18492 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYC_FULL_BLACK_LIST::get_CombatList()
 Object_t* GC_SYC_FULL_BLACK_LIST_get_CombatList_m18493 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::get_CombatCount()
 int32_t GC_SYC_FULL_BLACK_LIST_get_CombatCount_m18494 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::GetCombat(System.Int32)
 int32_t GC_SYC_FULL_BLACK_LIST_GetCombat_m18495 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_BLACK_LIST::AddCombat(System.Int32)
 void GC_SYC_FULL_BLACK_LIST_AddCombat_m18496 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYC_FULL_BLACK_LIST::get_StateList()
 Object_t* GC_SYC_FULL_BLACK_LIST_get_StateList_m18497 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::get_StateCount()
 int32_t GC_SYC_FULL_BLACK_LIST_get_StateCount_m18498 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::GetState(System.Int32)
 int32_t GC_SYC_FULL_BLACK_LIST_GetState_m18499 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_BLACK_LIST::AddState(System.Int32)
 void GC_SYC_FULL_BLACK_LIST_AddState_m18500 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt32> GC_SYC_FULL_BLACK_LIST::get_TimeInfoList()
 Object_t* GC_SYC_FULL_BLACK_LIST_get_TimeInfoList_m18501 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::get_TimeInfoCount()
 int32_t GC_SYC_FULL_BLACK_LIST_get_TimeInfoCount_m18502 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GC_SYC_FULL_BLACK_LIST::GetTimeInfo(System.Int32)
 uint32_t GC_SYC_FULL_BLACK_LIST_GetTimeInfo_m18503 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_BLACK_LIST::AddTimeInfo(System.UInt32)
 void GC_SYC_FULL_BLACK_LIST_AddTimeInfo_m18504 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_BLACK_LIST::SerializedSize()
 int32_t GC_SYC_FULL_BLACK_LIST_SerializedSize_m18505 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_BLACK_LIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_SYC_FULL_BLACK_LIST_WriteTo_m18506 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_SYC_FULL_BLACK_LIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_SYC_FULL_BLACK_LIST_MergeFrom_m18507 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYC_FULL_BLACK_LIST::IsInitialized()
 bool GC_SYC_FULL_BLACK_LIST_IsInitialized_m18508 (GC_SYC_FULL_BLACK_LIST_t3038 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
