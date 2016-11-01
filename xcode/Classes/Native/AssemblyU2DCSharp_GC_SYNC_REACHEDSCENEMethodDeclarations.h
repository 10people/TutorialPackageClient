#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_SYNC_REACHEDSCENE
struct GC_SYNC_REACHEDSCENE_t3150;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_SYNC_REACHEDSCENE::.ctor()
 void GC_SYNC_REACHEDSCENE__ctor_m20450 (GC_SYNC_REACHEDSCENE_t3150 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_REACHEDSCENE::get_reachedSceneIDList()
 Object_t* GC_SYNC_REACHEDSCENE_get_reachedSceneIDList_m20451 (GC_SYNC_REACHEDSCENE_t3150 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_REACHEDSCENE::get_reachedSceneIDCount()
 int32_t GC_SYNC_REACHEDSCENE_get_reachedSceneIDCount_m20452 (GC_SYNC_REACHEDSCENE_t3150 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_REACHEDSCENE::GetReachedSceneID(System.Int32)
 int32_t GC_SYNC_REACHEDSCENE_GetReachedSceneID_m20453 (GC_SYNC_REACHEDSCENE_t3150 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_REACHEDSCENE::AddReachedSceneID(System.Int32)
 void GC_SYNC_REACHEDSCENE_AddReachedSceneID_m20454 (GC_SYNC_REACHEDSCENE_t3150 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_REACHEDSCENE::SerializedSize()
 int32_t GC_SYNC_REACHEDSCENE_SerializedSize_m20455 (GC_SYNC_REACHEDSCENE_t3150 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_REACHEDSCENE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_SYNC_REACHEDSCENE_WriteTo_m20456 (GC_SYNC_REACHEDSCENE_t3150 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_SYNC_REACHEDSCENE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_SYNC_REACHEDSCENE_MergeFrom_m20457 (GC_SYNC_REACHEDSCENE_t3150 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNC_REACHEDSCENE::IsInitialized()
 bool GC_SYNC_REACHEDSCENE_IsInitialized_m20458 (GC_SYNC_REACHEDSCENE_t3150 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
