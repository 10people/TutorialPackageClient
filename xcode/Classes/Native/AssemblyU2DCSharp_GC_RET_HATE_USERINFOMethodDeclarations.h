#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_HATE_USERINFO
struct GC_RET_HATE_USERINFO_t3566;
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

// System.Void GC_RET_HATE_USERINFO::.ctor()
 void GC_RET_HATE_USERINFO__ctor_m27502 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_RET_HATE_USERINFO::get_guidList()
 Object_t* GC_RET_HATE_USERINFO_get_guidList_m27503 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::get_guidCount()
 int32_t GC_RET_HATE_USERINFO_get_guidCount_m27504 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RET_HATE_USERINFO::GetGuid(System.Int32)
 uint64_t GC_RET_HATE_USERINFO_GetGuid_m27505 (GC_RET_HATE_USERINFO_t3566 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HATE_USERINFO::AddGuid(System.UInt64)
 void GC_RET_HATE_USERINFO_AddGuid_m27506 (GC_RET_HATE_USERINFO_t3566 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_HATE_USERINFO::get_LevelList()
 Object_t* GC_RET_HATE_USERINFO_get_LevelList_m27507 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::get_LevelCount()
 int32_t GC_RET_HATE_USERINFO_get_LevelCount_m27508 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::GetLevel(System.Int32)
 int32_t GC_RET_HATE_USERINFO_GetLevel_m27509 (GC_RET_HATE_USERINFO_t3566 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HATE_USERINFO::AddLevel(System.Int32)
 void GC_RET_HATE_USERINFO_AddLevel_m27510 (GC_RET_HATE_USERINFO_t3566 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_HATE_USERINFO::get_ProfList()
 Object_t* GC_RET_HATE_USERINFO_get_ProfList_m27511 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::get_ProfCount()
 int32_t GC_RET_HATE_USERINFO_get_ProfCount_m27512 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::GetProf(System.Int32)
 int32_t GC_RET_HATE_USERINFO_GetProf_m27513 (GC_RET_HATE_USERINFO_t3566 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HATE_USERINFO::AddProf(System.Int32)
 void GC_RET_HATE_USERINFO_AddProf_m27514 (GC_RET_HATE_USERINFO_t3566 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_HATE_USERINFO::get_CombatList()
 Object_t* GC_RET_HATE_USERINFO_get_CombatList_m27515 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::get_CombatCount()
 int32_t GC_RET_HATE_USERINFO_get_CombatCount_m27516 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::GetCombat(System.Int32)
 int32_t GC_RET_HATE_USERINFO_GetCombat_m27517 (GC_RET_HATE_USERINFO_t3566 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HATE_USERINFO::AddCombat(System.Int32)
 void GC_RET_HATE_USERINFO_AddCombat_m27518 (GC_RET_HATE_USERINFO_t3566 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_HATE_USERINFO::get_StateList()
 Object_t* GC_RET_HATE_USERINFO_get_StateList_m27519 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::get_StateCount()
 int32_t GC_RET_HATE_USERINFO_get_StateCount_m27520 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::GetState(System.Int32)
 int32_t GC_RET_HATE_USERINFO_GetState_m27521 (GC_RET_HATE_USERINFO_t3566 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HATE_USERINFO::AddState(System.Int32)
 void GC_RET_HATE_USERINFO_AddState_m27522 (GC_RET_HATE_USERINFO_t3566 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_HATE_USERINFO::get_NameList()
 Object_t* GC_RET_HATE_USERINFO_get_NameList_m27523 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::get_NameCount()
 int32_t GC_RET_HATE_USERINFO_get_NameCount_m27524 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_HATE_USERINFO::GetName(System.Int32)
 String_t* GC_RET_HATE_USERINFO_GetName_m27525 (GC_RET_HATE_USERINFO_t3566 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HATE_USERINFO::AddName(System.String)
 void GC_RET_HATE_USERINFO_AddName_m27526 (GC_RET_HATE_USERINFO_t3566 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt32> GC_RET_HATE_USERINFO::get_TimeInfoList()
 Object_t* GC_RET_HATE_USERINFO_get_TimeInfoList_m27527 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::get_TimeInfoCount()
 int32_t GC_RET_HATE_USERINFO_get_TimeInfoCount_m27528 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GC_RET_HATE_USERINFO::GetTimeInfo(System.Int32)
 uint32_t GC_RET_HATE_USERINFO_GetTimeInfo_m27529 (GC_RET_HATE_USERINFO_t3566 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HATE_USERINFO::AddTimeInfo(System.UInt32)
 void GC_RET_HATE_USERINFO_AddTimeInfo_m27530 (GC_RET_HATE_USERINFO_t3566 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_HATE_USERINFO::SerializedSize()
 int32_t GC_RET_HATE_USERINFO_SerializedSize_m27531 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_HATE_USERINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_HATE_USERINFO_WriteTo_m27532 (GC_RET_HATE_USERINFO_t3566 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_HATE_USERINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_HATE_USERINFO_MergeFrom_m27533 (GC_RET_HATE_USERINFO_t3566 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_HATE_USERINFO::IsInitialized()
 bool GC_RET_HATE_USERINFO_IsInitialized_m27534 (GC_RET_HATE_USERINFO_t3566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
