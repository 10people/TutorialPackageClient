#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_WULIN_HEROS_LIST
struct GC_WULIN_HEROS_LIST_t3513;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_WULIN_HEROS_LIST::.ctor()
 void GC_WULIN_HEROS_LIST__ctor_m26624 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_WULIN_HEROS_LIST::get_guidList()
 Object_t* GC_WULIN_HEROS_LIST_get_guidList_m26625 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_HEROS_LIST::get_guidCount()
 int32_t GC_WULIN_HEROS_LIST_get_guidCount_m26626 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_WULIN_HEROS_LIST::GetGuid(System.Int32)
 uint64_t GC_WULIN_HEROS_LIST_GetGuid_m26627 (GC_WULIN_HEROS_LIST_t3513 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_HEROS_LIST::AddGuid(System.UInt64)
 void GC_WULIN_HEROS_LIST_AddGuid_m26628 (GC_WULIN_HEROS_LIST_t3513 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_WULIN_HEROS_LIST::get_positionList()
 Object_t* GC_WULIN_HEROS_LIST_get_positionList_m26629 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_HEROS_LIST::get_positionCount()
 int32_t GC_WULIN_HEROS_LIST_get_positionCount_m26630 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_HEROS_LIST::GetPosition(System.Int32)
 int32_t GC_WULIN_HEROS_LIST_GetPosition_m26631 (GC_WULIN_HEROS_LIST_t3513 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_HEROS_LIST::AddPosition(System.Int32)
 void GC_WULIN_HEROS_LIST_AddPosition_m26632 (GC_WULIN_HEROS_LIST_t3513 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_WULIN_HEROS_LIST::get_levelGroupList()
 Object_t* GC_WULIN_HEROS_LIST_get_levelGroupList_m26633 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_HEROS_LIST::get_levelGroupCount()
 int32_t GC_WULIN_HEROS_LIST_get_levelGroupCount_m26634 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_HEROS_LIST::GetLevelGroup(System.Int32)
 int32_t GC_WULIN_HEROS_LIST_GetLevelGroup_m26635 (GC_WULIN_HEROS_LIST_t3513 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_HEROS_LIST::AddLevelGroup(System.Int32)
 void GC_WULIN_HEROS_LIST_AddLevelGroup_m26636 (GC_WULIN_HEROS_LIST_t3513 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_WULIN_HEROS_LIST::get_nameList()
 Object_t* GC_WULIN_HEROS_LIST_get_nameList_m26637 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_HEROS_LIST::get_nameCount()
 int32_t GC_WULIN_HEROS_LIST_get_nameCount_m26638 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_WULIN_HEROS_LIST::GetName(System.Int32)
 String_t* GC_WULIN_HEROS_LIST_GetName_m26639 (GC_WULIN_HEROS_LIST_t3513 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_HEROS_LIST::AddName(System.String)
 void GC_WULIN_HEROS_LIST_AddName_m26640 (GC_WULIN_HEROS_LIST_t3513 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_WULIN_HEROS_LIST::get_levelList()
 Object_t* GC_WULIN_HEROS_LIST_get_levelList_m26641 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_HEROS_LIST::get_levelCount()
 int32_t GC_WULIN_HEROS_LIST_get_levelCount_m26642 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_HEROS_LIST::GetLevel(System.Int32)
 int32_t GC_WULIN_HEROS_LIST_GetLevel_m26643 (GC_WULIN_HEROS_LIST_t3513 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_HEROS_LIST::AddLevel(System.Int32)
 void GC_WULIN_HEROS_LIST_AddLevel_m26644 (GC_WULIN_HEROS_LIST_t3513 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_WULIN_HEROS_LIST::get_professionList()
 Object_t* GC_WULIN_HEROS_LIST_get_professionList_m26645 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_HEROS_LIST::get_professionCount()
 int32_t GC_WULIN_HEROS_LIST_get_professionCount_m26646 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_HEROS_LIST::GetProfession(System.Int32)
 int32_t GC_WULIN_HEROS_LIST_GetProfession_m26647 (GC_WULIN_HEROS_LIST_t3513 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_HEROS_LIST::AddProfession(System.Int32)
 void GC_WULIN_HEROS_LIST_AddProfession_m26648 (GC_WULIN_HEROS_LIST_t3513 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WULIN_HEROS_LIST::SerializedSize()
 int32_t GC_WULIN_HEROS_LIST_SerializedSize_m26649 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WULIN_HEROS_LIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_WULIN_HEROS_LIST_WriteTo_m26650 (GC_WULIN_HEROS_LIST_t3513 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_WULIN_HEROS_LIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_WULIN_HEROS_LIST_MergeFrom_m26651 (GC_WULIN_HEROS_LIST_t3513 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WULIN_HEROS_LIST::IsInitialized()
 bool GC_WULIN_HEROS_LIST_IsInitialized_m26652 (GC_WULIN_HEROS_LIST_t3513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
