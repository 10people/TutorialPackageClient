#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_UPDATENOTICEDATA
struct GC_UPDATENOTICEDATA_t2961;
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

// System.Void GC_UPDATENOTICEDATA::.ctor()
 void GC_UPDATENOTICEDATA__ctor_m16902 (GC_UPDATENOTICEDATA_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_UPDATENOTICEDATA::get_newsList()
 Object_t* GC_UPDATENOTICEDATA_get_newsList_m16903 (GC_UPDATENOTICEDATA_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATENOTICEDATA::get_newsCount()
 int32_t GC_UPDATENOTICEDATA_get_newsCount_m16904 (GC_UPDATENOTICEDATA_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_UPDATENOTICEDATA::GetNews(System.Int32)
 String_t* GC_UPDATENOTICEDATA_GetNews_m16905 (GC_UPDATENOTICEDATA_t2961 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATENOTICEDATA::AddNews(System.String)
 void GC_UPDATENOTICEDATA_AddNews_m16906 (GC_UPDATENOTICEDATA_t2961 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_UPDATENOTICEDATA::get_dataList()
 Object_t* GC_UPDATENOTICEDATA_get_dataList_m16907 (GC_UPDATENOTICEDATA_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATENOTICEDATA::get_dataCount()
 int32_t GC_UPDATENOTICEDATA_get_dataCount_m16908 (GC_UPDATENOTICEDATA_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_UPDATENOTICEDATA::GetData(System.Int32)
 String_t* GC_UPDATENOTICEDATA_GetData_m16909 (GC_UPDATENOTICEDATA_t2961 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATENOTICEDATA::AddData(System.String)
 void GC_UPDATENOTICEDATA_AddData_m16910 (GC_UPDATENOTICEDATA_t2961 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_UPDATENOTICEDATA::get_HasIsShow()
 bool GC_UPDATENOTICEDATA_get_HasIsShow_m16911 (GC_UPDATENOTICEDATA_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATENOTICEDATA::get_IsShow()
 int32_t GC_UPDATENOTICEDATA_get_IsShow_m16912 (GC_UPDATENOTICEDATA_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATENOTICEDATA::set_IsShow(System.Int32)
 void GC_UPDATENOTICEDATA_set_IsShow_m16913 (GC_UPDATENOTICEDATA_t2961 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATENOTICEDATA::SetIsShow(System.Int32)
 void GC_UPDATENOTICEDATA_SetIsShow_m16914 (GC_UPDATENOTICEDATA_t2961 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATENOTICEDATA::SerializedSize()
 int32_t GC_UPDATENOTICEDATA_SerializedSize_m16915 (GC_UPDATENOTICEDATA_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATENOTICEDATA::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_UPDATENOTICEDATA_WriteTo_m16916 (GC_UPDATENOTICEDATA_t2961 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_UPDATENOTICEDATA::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_UPDATENOTICEDATA_MergeFrom_m16917 (GC_UPDATENOTICEDATA_t2961 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_UPDATENOTICEDATA::IsInitialized()
 bool GC_UPDATENOTICEDATA_IsInitialized_m16918 (GC_UPDATENOTICEDATA_t2961 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
