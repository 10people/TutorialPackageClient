#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_SYC_FULL_HATE_LIST
struct GC_SYC_FULL_HATE_LIST_t3409;
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

// System.Void GC_SYC_FULL_HATE_LIST::.ctor()
 void GC_SYC_FULL_HATE_LIST__ctor_m24883 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_SYC_FULL_HATE_LIST::get_GuidList()
 Object_t* GC_SYC_FULL_HATE_LIST_get_GuidList_m24884 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::get_GuidCount()
 int32_t GC_SYC_FULL_HATE_LIST_get_GuidCount_m24885 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_SYC_FULL_HATE_LIST::GetGuid(System.Int32)
 uint64_t GC_SYC_FULL_HATE_LIST_GetGuid_m24886 (GC_SYC_FULL_HATE_LIST_t3409 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_HATE_LIST::AddGuid(System.UInt64)
 void GC_SYC_FULL_HATE_LIST_AddGuid_m24887 (GC_SYC_FULL_HATE_LIST_t3409 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_SYC_FULL_HATE_LIST::get_NameList()
 Object_t* GC_SYC_FULL_HATE_LIST_get_NameList_m24888 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::get_NameCount()
 int32_t GC_SYC_FULL_HATE_LIST_get_NameCount_m24889 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_SYC_FULL_HATE_LIST::GetName(System.Int32)
 String_t* GC_SYC_FULL_HATE_LIST_GetName_m24890 (GC_SYC_FULL_HATE_LIST_t3409 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_HATE_LIST::AddName(System.String)
 void GC_SYC_FULL_HATE_LIST_AddName_m24891 (GC_SYC_FULL_HATE_LIST_t3409 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYC_FULL_HATE_LIST::get_LevelList()
 Object_t* GC_SYC_FULL_HATE_LIST_get_LevelList_m24892 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::get_LevelCount()
 int32_t GC_SYC_FULL_HATE_LIST_get_LevelCount_m24893 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::GetLevel(System.Int32)
 int32_t GC_SYC_FULL_HATE_LIST_GetLevel_m24894 (GC_SYC_FULL_HATE_LIST_t3409 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_HATE_LIST::AddLevel(System.Int32)
 void GC_SYC_FULL_HATE_LIST_AddLevel_m24895 (GC_SYC_FULL_HATE_LIST_t3409 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYC_FULL_HATE_LIST::get_ProfList()
 Object_t* GC_SYC_FULL_HATE_LIST_get_ProfList_m24896 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::get_ProfCount()
 int32_t GC_SYC_FULL_HATE_LIST_get_ProfCount_m24897 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::GetProf(System.Int32)
 int32_t GC_SYC_FULL_HATE_LIST_GetProf_m24898 (GC_SYC_FULL_HATE_LIST_t3409 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_HATE_LIST::AddProf(System.Int32)
 void GC_SYC_FULL_HATE_LIST_AddProf_m24899 (GC_SYC_FULL_HATE_LIST_t3409 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYC_FULL_HATE_LIST::get_CombatList()
 Object_t* GC_SYC_FULL_HATE_LIST_get_CombatList_m24900 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::get_CombatCount()
 int32_t GC_SYC_FULL_HATE_LIST_get_CombatCount_m24901 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::GetCombat(System.Int32)
 int32_t GC_SYC_FULL_HATE_LIST_GetCombat_m24902 (GC_SYC_FULL_HATE_LIST_t3409 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_HATE_LIST::AddCombat(System.Int32)
 void GC_SYC_FULL_HATE_LIST_AddCombat_m24903 (GC_SYC_FULL_HATE_LIST_t3409 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYC_FULL_HATE_LIST::get_StateList()
 Object_t* GC_SYC_FULL_HATE_LIST_get_StateList_m24904 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::get_StateCount()
 int32_t GC_SYC_FULL_HATE_LIST_get_StateCount_m24905 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::GetState(System.Int32)
 int32_t GC_SYC_FULL_HATE_LIST_GetState_m24906 (GC_SYC_FULL_HATE_LIST_t3409 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_HATE_LIST::AddState(System.Int32)
 void GC_SYC_FULL_HATE_LIST_AddState_m24907 (GC_SYC_FULL_HATE_LIST_t3409 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt32> GC_SYC_FULL_HATE_LIST::get_TimeInfoList()
 Object_t* GC_SYC_FULL_HATE_LIST_get_TimeInfoList_m24908 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::get_TimeInfoCount()
 int32_t GC_SYC_FULL_HATE_LIST_get_TimeInfoCount_m24909 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GC_SYC_FULL_HATE_LIST::GetTimeInfo(System.Int32)
 uint32_t GC_SYC_FULL_HATE_LIST_GetTimeInfo_m24910 (GC_SYC_FULL_HATE_LIST_t3409 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_HATE_LIST::AddTimeInfo(System.UInt32)
 void GC_SYC_FULL_HATE_LIST_AddTimeInfo_m24911 (GC_SYC_FULL_HATE_LIST_t3409 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYC_FULL_HATE_LIST::SerializedSize()
 int32_t GC_SYC_FULL_HATE_LIST_SerializedSize_m24912 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYC_FULL_HATE_LIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_SYC_FULL_HATE_LIST_WriteTo_m24913 (GC_SYC_FULL_HATE_LIST_t3409 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_SYC_FULL_HATE_LIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_SYC_FULL_HATE_LIST_MergeFrom_m24914 (GC_SYC_FULL_HATE_LIST_t3409 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYC_FULL_HATE_LIST::IsInitialized()
 bool GC_SYC_FULL_HATE_LIST_IsInitialized_m24915 (GC_SYC_FULL_HATE_LIST_t3409 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
