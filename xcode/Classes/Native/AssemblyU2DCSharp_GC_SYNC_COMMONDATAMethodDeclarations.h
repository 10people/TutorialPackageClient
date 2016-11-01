#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_SYNC_COMMONDATA
struct GC_SYNC_COMMONDATA_t3204;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_SYNC_COMMONDATA::.ctor()
 void GC_SYNC_COMMONDATA__ctor_m21387 (GC_SYNC_COMMONDATA_t3204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_COMMONDATA::get_nIndexList()
 Object_t* GC_SYNC_COMMONDATA_get_nIndexList_m21388 (GC_SYNC_COMMONDATA_t3204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_COMMONDATA::get_nIndexCount()
 int32_t GC_SYNC_COMMONDATA_get_nIndexCount_m21389 (GC_SYNC_COMMONDATA_t3204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_COMMONDATA::GetNIndex(System.Int32)
 int32_t GC_SYNC_COMMONDATA_GetNIndex_m21390 (GC_SYNC_COMMONDATA_t3204 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_COMMONDATA::AddNIndex(System.Int32)
 void GC_SYNC_COMMONDATA_AddNIndex_m21391 (GC_SYNC_COMMONDATA_t3204 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_COMMONDATA::get_nValueList()
 Object_t* GC_SYNC_COMMONDATA_get_nValueList_m21392 (GC_SYNC_COMMONDATA_t3204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_COMMONDATA::get_nValueCount()
 int32_t GC_SYNC_COMMONDATA_get_nValueCount_m21393 (GC_SYNC_COMMONDATA_t3204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_COMMONDATA::GetNValue(System.Int32)
 int32_t GC_SYNC_COMMONDATA_GetNValue_m21394 (GC_SYNC_COMMONDATA_t3204 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_COMMONDATA::AddNValue(System.Int32)
 void GC_SYNC_COMMONDATA_AddNValue_m21395 (GC_SYNC_COMMONDATA_t3204 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_COMMONDATA::SerializedSize()
 int32_t GC_SYNC_COMMONDATA_SerializedSize_m21396 (GC_SYNC_COMMONDATA_t3204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_COMMONDATA::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_SYNC_COMMONDATA_WriteTo_m21397 (GC_SYNC_COMMONDATA_t3204 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_SYNC_COMMONDATA::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_SYNC_COMMONDATA_MergeFrom_m21398 (GC_SYNC_COMMONDATA_t3204 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNC_COMMONDATA::IsInitialized()
 bool GC_SYNC_COMMONDATA_IsInitialized_m21399 (GC_SYNC_COMMONDATA_t3204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
