#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_POWERUP_LIST
struct GC_POWERUP_LIST_t3340;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_POWERUP_LIST::.ctor()
 void GC_POWERUP_LIST__ctor_m23823 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_POWERUP_LIST::get_HasType()
 bool GC_POWERUP_LIST_get_HasType_m23824 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::get_Type()
 int32_t GC_POWERUP_LIST_get_Type_m23825 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_POWERUP_LIST::set_Type(System.Int32)
 void GC_POWERUP_LIST_set_Type_m23826 (GC_POWERUP_LIST_t3340 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_POWERUP_LIST::SetType(System.Int32)
 void GC_POWERUP_LIST_SetType_m23827 (GC_POWERUP_LIST_t3340 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_POWERUP_LIST::get_titleDictList()
 Object_t* GC_POWERUP_LIST_get_titleDictList_m23828 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::get_titleDictCount()
 int32_t GC_POWERUP_LIST_get_titleDictCount_m23829 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::GetTitleDict(System.Int32)
 int32_t GC_POWERUP_LIST_GetTitleDict_m23830 (GC_POWERUP_LIST_t3340 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_POWERUP_LIST::AddTitleDict(System.Int32)
 void GC_POWERUP_LIST_AddTitleDict_m23831 (GC_POWERUP_LIST_t3340 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_POWERUP_LIST::get_descDictList()
 Object_t* GC_POWERUP_LIST_get_descDictList_m23832 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::get_descDictCount()
 int32_t GC_POWERUP_LIST_get_descDictCount_m23833 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::GetDescDict(System.Int32)
 int32_t GC_POWERUP_LIST_GetDescDict_m23834 (GC_POWERUP_LIST_t3340 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_POWERUP_LIST::AddDescDict(System.Int32)
 void GC_POWERUP_LIST_AddDescDict_m23835 (GC_POWERUP_LIST_t3340 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_POWERUP_LIST::get_btnDict1List()
 Object_t* GC_POWERUP_LIST_get_btnDict1List_m23836 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::get_btnDict1Count()
 int32_t GC_POWERUP_LIST_get_btnDict1Count_m23837 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::GetBtnDict1(System.Int32)
 int32_t GC_POWERUP_LIST_GetBtnDict1_m23838 (GC_POWERUP_LIST_t3340 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_POWERUP_LIST::AddBtnDict1(System.Int32)
 void GC_POWERUP_LIST_AddBtnDict1_m23839 (GC_POWERUP_LIST_t3340 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_POWERUP_LIST::get_funcType1List()
 Object_t* GC_POWERUP_LIST_get_funcType1List_m23840 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::get_funcType1Count()
 int32_t GC_POWERUP_LIST_get_funcType1Count_m23841 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::GetFuncType1(System.Int32)
 int32_t GC_POWERUP_LIST_GetFuncType1_m23842 (GC_POWERUP_LIST_t3340 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_POWERUP_LIST::AddFuncType1(System.Int32)
 void GC_POWERUP_LIST_AddFuncType1_m23843 (GC_POWERUP_LIST_t3340 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_POWERUP_LIST::get_btnDict2List()
 Object_t* GC_POWERUP_LIST_get_btnDict2List_m23844 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::get_btnDict2Count()
 int32_t GC_POWERUP_LIST_get_btnDict2Count_m23845 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::GetBtnDict2(System.Int32)
 int32_t GC_POWERUP_LIST_GetBtnDict2_m23846 (GC_POWERUP_LIST_t3340 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_POWERUP_LIST::AddBtnDict2(System.Int32)
 void GC_POWERUP_LIST_AddBtnDict2_m23847 (GC_POWERUP_LIST_t3340 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_POWERUP_LIST::get_funcType2List()
 Object_t* GC_POWERUP_LIST_get_funcType2List_m23848 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::get_funcType2Count()
 int32_t GC_POWERUP_LIST_get_funcType2Count_m23849 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::GetFuncType2(System.Int32)
 int32_t GC_POWERUP_LIST_GetFuncType2_m23850 (GC_POWERUP_LIST_t3340 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_POWERUP_LIST::AddFuncType2(System.Int32)
 void GC_POWERUP_LIST_AddFuncType2_m23851 (GC_POWERUP_LIST_t3340 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_POWERUP_LIST::SerializedSize()
 int32_t GC_POWERUP_LIST_SerializedSize_m23852 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_POWERUP_LIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_POWERUP_LIST_WriteTo_m23853 (GC_POWERUP_LIST_t3340 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_POWERUP_LIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_POWERUP_LIST_MergeFrom_m23854 (GC_POWERUP_LIST_t3340 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_POWERUP_LIST::IsInitialized()
 bool GC_POWERUP_LIST_IsInitialized_m23855 (GC_POWERUP_LIST_t3340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
