#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_MONEYTREE_DATA
struct GC_MONEYTREE_DATA_t3140;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_MONEYTREE_DATA::.ctor()
 void GC_MONEYTREE_DATA__ctor_m20362 (GC_MONEYTREE_DATA_t3140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MONEYTREE_DATA::get_HasCurTurnID()
 bool GC_MONEYTREE_DATA_get_HasCurTurnID_m20363 (GC_MONEYTREE_DATA_t3140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MONEYTREE_DATA::get_CurTurnID()
 int32_t GC_MONEYTREE_DATA_get_CurTurnID_m20364 (GC_MONEYTREE_DATA_t3140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MONEYTREE_DATA::set_CurTurnID(System.Int32)
 void GC_MONEYTREE_DATA_set_CurTurnID_m20365 (GC_MONEYTREE_DATA_t3140 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MONEYTREE_DATA::SetCurTurnID(System.Int32)
 void GC_MONEYTREE_DATA_SetCurTurnID_m20366 (GC_MONEYTREE_DATA_t3140 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MONEYTREE_DATA::get_HasAwardCDTime()
 bool GC_MONEYTREE_DATA_get_HasAwardCDTime_m20367 (GC_MONEYTREE_DATA_t3140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MONEYTREE_DATA::get_AwardCDTime()
 int32_t GC_MONEYTREE_DATA_get_AwardCDTime_m20368 (GC_MONEYTREE_DATA_t3140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MONEYTREE_DATA::set_AwardCDTime(System.Int32)
 void GC_MONEYTREE_DATA_set_AwardCDTime_m20369 (GC_MONEYTREE_DATA_t3140 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MONEYTREE_DATA::SetAwardCDTime(System.Int32)
 void GC_MONEYTREE_DATA_SetAwardCDTime_m20370 (GC_MONEYTREE_DATA_t3140 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MONEYTREE_DATA::get_HasRet()
 bool GC_MONEYTREE_DATA_get_HasRet_m20371 (GC_MONEYTREE_DATA_t3140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MONEYTREE_DATA::get_Ret()
 int32_t GC_MONEYTREE_DATA_get_Ret_m20372 (GC_MONEYTREE_DATA_t3140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MONEYTREE_DATA::set_Ret(System.Int32)
 void GC_MONEYTREE_DATA_set_Ret_m20373 (GC_MONEYTREE_DATA_t3140 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MONEYTREE_DATA::SetRet(System.Int32)
 void GC_MONEYTREE_DATA_SetRet_m20374 (GC_MONEYTREE_DATA_t3140 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MONEYTREE_DATA::get_HasYuanBaoCount()
 bool GC_MONEYTREE_DATA_get_HasYuanBaoCount_m20375 (GC_MONEYTREE_DATA_t3140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MONEYTREE_DATA::get_YuanBaoCount()
 int32_t GC_MONEYTREE_DATA_get_YuanBaoCount_m20376 (GC_MONEYTREE_DATA_t3140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MONEYTREE_DATA::set_YuanBaoCount(System.Int32)
 void GC_MONEYTREE_DATA_set_YuanBaoCount_m20377 (GC_MONEYTREE_DATA_t3140 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MONEYTREE_DATA::SetYuanBaoCount(System.Int32)
 void GC_MONEYTREE_DATA_SetYuanBaoCount_m20378 (GC_MONEYTREE_DATA_t3140 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MONEYTREE_DATA::SerializedSize()
 int32_t GC_MONEYTREE_DATA_SerializedSize_m20379 (GC_MONEYTREE_DATA_t3140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MONEYTREE_DATA::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_MONEYTREE_DATA_WriteTo_m20380 (GC_MONEYTREE_DATA_t3140 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_MONEYTREE_DATA::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_MONEYTREE_DATA_MergeFrom_m20381 (GC_MONEYTREE_DATA_t3140 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MONEYTREE_DATA::IsInitialized()
 bool GC_MONEYTREE_DATA_IsInitialized_m20382 (GC_MONEYTREE_DATA_t3140 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
