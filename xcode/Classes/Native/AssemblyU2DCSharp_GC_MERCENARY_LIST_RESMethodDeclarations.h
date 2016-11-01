#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_MERCENARY_LIST_RES
struct GC_MERCENARY_LIST_RES_t3185;
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

// System.Void GC_MERCENARY_LIST_RES::.ctor()
 void GC_MERCENARY_LIST_RES__ctor_m20906 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MERCENARY_LIST_RES::get_HasLefttimes()
 bool GC_MERCENARY_LIST_RES_get_HasLefttimes_m20907 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::get_Lefttimes()
 int32_t GC_MERCENARY_LIST_RES_get_Lefttimes_m20908 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_LIST_RES::set_Lefttimes(System.Int32)
 void GC_MERCENARY_LIST_RES_set_Lefttimes_m20909 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_LIST_RES::SetLefttimes(System.Int32)
 void GC_MERCENARY_LIST_RES_SetLefttimes_m20910 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_MERCENARY_LIST_RES::get_nameList()
 Object_t* GC_MERCENARY_LIST_RES_get_nameList_m20911 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::get_nameCount()
 int32_t GC_MERCENARY_LIST_RES_get_nameCount_m20912 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MERCENARY_LIST_RES::GetName(System.Int32)
 String_t* GC_MERCENARY_LIST_RES_GetName_m20913 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_LIST_RES::AddName(System.String)
 void GC_MERCENARY_LIST_RES_AddName_m20914 (GC_MERCENARY_LIST_RES_t3185 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MERCENARY_LIST_RES::get_costList()
 Object_t* GC_MERCENARY_LIST_RES_get_costList_m20915 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::get_costCount()
 int32_t GC_MERCENARY_LIST_RES_get_costCount_m20916 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::GetCost(System.Int32)
 int32_t GC_MERCENARY_LIST_RES_GetCost_m20917 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_LIST_RES::AddCost(System.Int32)
 void GC_MERCENARY_LIST_RES_AddCost_m20918 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MERCENARY_LIST_RES::get_sourceList()
 Object_t* GC_MERCENARY_LIST_RES_get_sourceList_m20919 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::get_sourceCount()
 int32_t GC_MERCENARY_LIST_RES_get_sourceCount_m20920 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::GetSource(System.Int32)
 int32_t GC_MERCENARY_LIST_RES_GetSource_m20921 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_LIST_RES::AddSource(System.Int32)
 void GC_MERCENARY_LIST_RES_AddSource_m20922 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_MERCENARY_LIST_RES::get_guidList()
 Object_t* GC_MERCENARY_LIST_RES_get_guidList_m20923 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::get_guidCount()
 int32_t GC_MERCENARY_LIST_RES_get_guidCount_m20924 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_MERCENARY_LIST_RES::GetGuid(System.Int32)
 uint64_t GC_MERCENARY_LIST_RES_GetGuid_m20925 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_LIST_RES::AddGuid(System.UInt64)
 void GC_MERCENARY_LIST_RES_AddGuid_m20926 (GC_MERCENARY_LIST_RES_t3185 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MERCENARY_LIST_RES::get_professionList()
 Object_t* GC_MERCENARY_LIST_RES_get_professionList_m20927 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::get_professionCount()
 int32_t GC_MERCENARY_LIST_RES_get_professionCount_m20928 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::GetProfession(System.Int32)
 int32_t GC_MERCENARY_LIST_RES_GetProfession_m20929 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_LIST_RES::AddProfession(System.Int32)
 void GC_MERCENARY_LIST_RES_AddProfession_m20930 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MERCENARY_LIST_RES::get_levelList()
 Object_t* GC_MERCENARY_LIST_RES_get_levelList_m20931 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::get_levelCount()
 int32_t GC_MERCENARY_LIST_RES_get_levelCount_m20932 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::GetLevel(System.Int32)
 int32_t GC_MERCENARY_LIST_RES_GetLevel_m20933 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_LIST_RES::AddLevel(System.Int32)
 void GC_MERCENARY_LIST_RES_AddLevel_m20934 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MERCENARY_LIST_RES::get_combatList()
 Object_t* GC_MERCENARY_LIST_RES_get_combatList_m20935 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::get_combatCount()
 int32_t GC_MERCENARY_LIST_RES_get_combatCount_m20936 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::GetCombat(System.Int32)
 int32_t GC_MERCENARY_LIST_RES_GetCombat_m20937 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_LIST_RES::AddCombat(System.Int32)
 void GC_MERCENARY_LIST_RES_AddCombat_m20938 (GC_MERCENARY_LIST_RES_t3185 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MERCENARY_LIST_RES::SerializedSize()
 int32_t GC_MERCENARY_LIST_RES_SerializedSize_m20939 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MERCENARY_LIST_RES::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_MERCENARY_LIST_RES_WriteTo_m20940 (GC_MERCENARY_LIST_RES_t3185 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_MERCENARY_LIST_RES::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_MERCENARY_LIST_RES_MergeFrom_m20941 (GC_MERCENARY_LIST_RES_t3185 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MERCENARY_LIST_RES::IsInitialized()
 bool GC_MERCENARY_LIST_RES_IsInitialized_m20942 (GC_MERCENARY_LIST_RES_t3185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
