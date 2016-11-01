#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_UPDATE_GEM_INFO
struct GC_UPDATE_GEM_INFO_t3213;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_UPDATE_GEM_INFO::.ctor()
 void GC_UPDATE_GEM_INFO__ctor_m21483 (GC_UPDATE_GEM_INFO_t3213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_GEM_INFO::get_gemidList()
 Object_t* GC_UPDATE_GEM_INFO_get_gemidList_m21484 (GC_UPDATE_GEM_INFO_t3213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_GEM_INFO::get_gemidCount()
 int32_t GC_UPDATE_GEM_INFO_get_gemidCount_m21485 (GC_UPDATE_GEM_INFO_t3213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_GEM_INFO::GetGemid(System.Int32)
 int32_t GC_UPDATE_GEM_INFO_GetGemid_m21486 (GC_UPDATE_GEM_INFO_t3213 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_GEM_INFO::AddGemid(System.Int32)
 void GC_UPDATE_GEM_INFO_AddGemid_m21487 (GC_UPDATE_GEM_INFO_t3213 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_GEM_INFO::SerializedSize()
 int32_t GC_UPDATE_GEM_INFO_SerializedSize_m21488 (GC_UPDATE_GEM_INFO_t3213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_GEM_INFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_UPDATE_GEM_INFO_WriteTo_m21489 (GC_UPDATE_GEM_INFO_t3213 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_UPDATE_GEM_INFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_UPDATE_GEM_INFO_MergeFrom_m21490 (GC_UPDATE_GEM_INFO_t3213 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_UPDATE_GEM_INFO::IsInitialized()
 bool GC_UPDATE_GEM_INFO_IsInitialized_m21491 (GC_UPDATE_GEM_INFO_t3213 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
