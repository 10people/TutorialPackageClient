#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_MERCENARY_EMPLOYLIST
struct GC_MERCENARY_EMPLOYLIST_t3187;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_MERCENARY_EMPLOYLIST::.ctor()
 void GC_MERCENARY_EMPLOYLIST__ctor_m20952 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_MERCENARY_EMPLOYLIST::get_nameList()
 Object_t* GC_MERCENARY_EMPLOYLIST_get_nameList_m20953 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::get_nameCount()
 int32_t GC_MERCENARY_EMPLOYLIST_get_nameCount_m20954 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MERCENARY_EMPLOYLIST::GetName(System.Int32)
 String_t* GC_MERCENARY_EMPLOYLIST_GetName_m20955 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_EMPLOYLIST::AddName(System.String)
 void GC_MERCENARY_EMPLOYLIST_AddName_m20956 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MERCENARY_EMPLOYLIST::get_costList()
 Object_t* GC_MERCENARY_EMPLOYLIST_get_costList_m20957 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::get_costCount()
 int32_t GC_MERCENARY_EMPLOYLIST_get_costCount_m20958 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::GetCost(System.Int32)
 int32_t GC_MERCENARY_EMPLOYLIST_GetCost_m20959 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_EMPLOYLIST::AddCost(System.Int32)
 void GC_MERCENARY_EMPLOYLIST_AddCost_m20960 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MERCENARY_EMPLOYLIST::get_sourceList()
 Object_t* GC_MERCENARY_EMPLOYLIST_get_sourceList_m20961 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::get_sourceCount()
 int32_t GC_MERCENARY_EMPLOYLIST_get_sourceCount_m20962 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::GetSource(System.Int32)
 int32_t GC_MERCENARY_EMPLOYLIST_GetSource_m20963 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_EMPLOYLIST::AddSource(System.Int32)
 void GC_MERCENARY_EMPLOYLIST_AddSource_m20964 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_MERCENARY_EMPLOYLIST::get_guidList()
 Object_t* GC_MERCENARY_EMPLOYLIST_get_guidList_m20965 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::get_guidCount()
 int32_t GC_MERCENARY_EMPLOYLIST_get_guidCount_m20966 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_MERCENARY_EMPLOYLIST::GetGuid(System.Int32)
 uint64_t GC_MERCENARY_EMPLOYLIST_GetGuid_m20967 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_EMPLOYLIST::AddGuid(System.UInt64)
 void GC_MERCENARY_EMPLOYLIST_AddGuid_m20968 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MERCENARY_EMPLOYLIST::get_professionList()
 Object_t* GC_MERCENARY_EMPLOYLIST_get_professionList_m20969 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::get_professionCount()
 int32_t GC_MERCENARY_EMPLOYLIST_get_professionCount_m20970 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::GetProfession(System.Int32)
 int32_t GC_MERCENARY_EMPLOYLIST_GetProfession_m20971 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_EMPLOYLIST::AddProfession(System.Int32)
 void GC_MERCENARY_EMPLOYLIST_AddProfession_m20972 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MERCENARY_EMPLOYLIST::get_levelList()
 Object_t* GC_MERCENARY_EMPLOYLIST_get_levelList_m20973 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::get_levelCount()
 int32_t GC_MERCENARY_EMPLOYLIST_get_levelCount_m20974 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::GetLevel(System.Int32)
 int32_t GC_MERCENARY_EMPLOYLIST_GetLevel_m20975 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_EMPLOYLIST::AddLevel(System.Int32)
 void GC_MERCENARY_EMPLOYLIST_AddLevel_m20976 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MERCENARY_EMPLOYLIST::get_combatList()
 Object_t* GC_MERCENARY_EMPLOYLIST_get_combatList_m20977 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::get_combatCount()
 int32_t GC_MERCENARY_EMPLOYLIST_get_combatCount_m20978 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::GetCombat(System.Int32)
 int32_t GC_MERCENARY_EMPLOYLIST_GetCombat_m20979 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_EMPLOYLIST::AddCombat(System.Int32)
 void GC_MERCENARY_EMPLOYLIST_AddCombat_m20980 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_EMPLOYLIST::SerializedSize()
 int32_t GC_MERCENARY_EMPLOYLIST_SerializedSize_m20981 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_EMPLOYLIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_MERCENARY_EMPLOYLIST_WriteTo_m20982 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_MERCENARY_EMPLOYLIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_MERCENARY_EMPLOYLIST_MergeFrom_m20983 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MERCENARY_EMPLOYLIST::IsInitialized()
 bool GC_MERCENARY_EMPLOYLIST_IsInitialized_m20984 (GC_MERCENARY_EMPLOYLIST_t3187 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
