#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_COPYSCENE_SWEEP
struct GC_RET_COPYSCENE_SWEEP_t3086;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RET_COPYSCENE_SWEEP::.ctor()
 void GC_RET_COPYSCENE_SWEEP__ctor_m19509 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_COPYSCENE_SWEEP::get_HasResult()
 bool GC_RET_COPYSCENE_SWEEP_get_HasResult_m19510 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_COPYSCENE_SWEEP::get_Result()
 int32_t GC_RET_COPYSCENE_SWEEP_get_Result_m19511 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_COPYSCENE_SWEEP::set_Result(System.Int32)
 void GC_RET_COPYSCENE_SWEEP_set_Result_m19512 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_COPYSCENE_SWEEP::SetResult(System.Int32)
 void GC_RET_COPYSCENE_SWEEP_SetResult_m19513 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_COPYSCENE_SWEEP::get_SweepTypeList()
 Object_t* GC_RET_COPYSCENE_SWEEP_get_SweepTypeList_m19514 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_COPYSCENE_SWEEP::get_SweepTypeCount()
 int32_t GC_RET_COPYSCENE_SWEEP_get_SweepTypeCount_m19515 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_COPYSCENE_SWEEP::GetSweepType(System.Int32)
 int32_t GC_RET_COPYSCENE_SWEEP_GetSweepType_m19516 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_COPYSCENE_SWEEP::AddSweepType(System.Int32)
 void GC_RET_COPYSCENE_SWEEP_AddSweepType_m19517 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_COPYSCENE_SWEEP::get_SweepItemIdList()
 Object_t* GC_RET_COPYSCENE_SWEEP_get_SweepItemIdList_m19518 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_COPYSCENE_SWEEP::get_SweepItemIdCount()
 int32_t GC_RET_COPYSCENE_SWEEP_get_SweepItemIdCount_m19519 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_COPYSCENE_SWEEP::GetSweepItemId(System.Int32)
 int32_t GC_RET_COPYSCENE_SWEEP_GetSweepItemId_m19520 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_COPYSCENE_SWEEP::AddSweepItemId(System.Int32)
 void GC_RET_COPYSCENE_SWEEP_AddSweepItemId_m19521 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_COPYSCENE_SWEEP::get_SweepCountList()
 Object_t* GC_RET_COPYSCENE_SWEEP_get_SweepCountList_m19522 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_COPYSCENE_SWEEP::get_SweepCountCount()
 int32_t GC_RET_COPYSCENE_SWEEP_get_SweepCountCount_m19523 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_COPYSCENE_SWEEP::GetSweepCount(System.Int32)
 int32_t GC_RET_COPYSCENE_SWEEP_GetSweepCount_m19524 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_COPYSCENE_SWEEP::AddSweepCount(System.Int32)
 void GC_RET_COPYSCENE_SWEEP_AddSweepCount_m19525 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_COPYSCENE_SWEEP::SerializedSize()
 int32_t GC_RET_COPYSCENE_SWEEP_SerializedSize_m19526 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_COPYSCENE_SWEEP::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_COPYSCENE_SWEEP_WriteTo_m19527 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_COPYSCENE_SWEEP::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_COPYSCENE_SWEEP_MergeFrom_m19528 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_COPYSCENE_SWEEP::IsInitialized()
 bool GC_RET_COPYSCENE_SWEEP_IsInitialized_m19529 (GC_RET_COPYSCENE_SWEEP_t3086 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
