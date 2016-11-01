#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_EQUIPFLYWING_RESULT
struct GC_EQUIPFLYWING_RESULT_t3633;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_EQUIPFLYWING_RESULT::.ctor()
 void GC_EQUIPFLYWING_RESULT__ctor_m28499 (GC_EQUIPFLYWING_RESULT_t3633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_EQUIPFLYWING_RESULT::get_HasFlyWingType()
 bool GC_EQUIPFLYWING_RESULT_get_HasFlyWingType_m28500 (GC_EQUIPFLYWING_RESULT_t3633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_EQUIPFLYWING_RESULT::get_FlyWingType()
 int32_t GC_EQUIPFLYWING_RESULT_get_FlyWingType_m28501 (GC_EQUIPFLYWING_RESULT_t3633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_EQUIPFLYWING_RESULT::set_FlyWingType(System.Int32)
 void GC_EQUIPFLYWING_RESULT_set_FlyWingType_m28502 (GC_EQUIPFLYWING_RESULT_t3633 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_EQUIPFLYWING_RESULT::SetFlyWingType(System.Int32)
 void GC_EQUIPFLYWING_RESULT_SetFlyWingType_m28503 (GC_EQUIPFLYWING_RESULT_t3633 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_EQUIPFLYWING_RESULT::get_HasFlyWingId1()
 bool GC_EQUIPFLYWING_RESULT_get_HasFlyWingId1_m28504 (GC_EQUIPFLYWING_RESULT_t3633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_EQUIPFLYWING_RESULT::get_FlyWingId1()
 int32_t GC_EQUIPFLYWING_RESULT_get_FlyWingId1_m28505 (GC_EQUIPFLYWING_RESULT_t3633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_EQUIPFLYWING_RESULT::set_FlyWingId1(System.Int32)
 void GC_EQUIPFLYWING_RESULT_set_FlyWingId1_m28506 (GC_EQUIPFLYWING_RESULT_t3633 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_EQUIPFLYWING_RESULT::SetFlyWingId1(System.Int32)
 void GC_EQUIPFLYWING_RESULT_SetFlyWingId1_m28507 (GC_EQUIPFLYWING_RESULT_t3633 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_EQUIPFLYWING_RESULT::get_HasFlyWingId2()
 bool GC_EQUIPFLYWING_RESULT_get_HasFlyWingId2_m28508 (GC_EQUIPFLYWING_RESULT_t3633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_EQUIPFLYWING_RESULT::get_FlyWingId2()
 int32_t GC_EQUIPFLYWING_RESULT_get_FlyWingId2_m28509 (GC_EQUIPFLYWING_RESULT_t3633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_EQUIPFLYWING_RESULT::set_FlyWingId2(System.Int32)
 void GC_EQUIPFLYWING_RESULT_set_FlyWingId2_m28510 (GC_EQUIPFLYWING_RESULT_t3633 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_EQUIPFLYWING_RESULT::SetFlyWingId2(System.Int32)
 void GC_EQUIPFLYWING_RESULT_SetFlyWingId2_m28511 (GC_EQUIPFLYWING_RESULT_t3633 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_EQUIPFLYWING_RESULT::get_HasFlyWingId3()
 bool GC_EQUIPFLYWING_RESULT_get_HasFlyWingId3_m28512 (GC_EQUIPFLYWING_RESULT_t3633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_EQUIPFLYWING_RESULT::get_FlyWingId3()
 int32_t GC_EQUIPFLYWING_RESULT_get_FlyWingId3_m28513 (GC_EQUIPFLYWING_RESULT_t3633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_EQUIPFLYWING_RESULT::set_FlyWingId3(System.Int32)
 void GC_EQUIPFLYWING_RESULT_set_FlyWingId3_m28514 (GC_EQUIPFLYWING_RESULT_t3633 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_EQUIPFLYWING_RESULT::SetFlyWingId3(System.Int32)
 void GC_EQUIPFLYWING_RESULT_SetFlyWingId3_m28515 (GC_EQUIPFLYWING_RESULT_t3633 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_EQUIPFLYWING_RESULT::SerializedSize()
 int32_t GC_EQUIPFLYWING_RESULT_SerializedSize_m28516 (GC_EQUIPFLYWING_RESULT_t3633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_EQUIPFLYWING_RESULT::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_EQUIPFLYWING_RESULT_WriteTo_m28517 (GC_EQUIPFLYWING_RESULT_t3633 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_EQUIPFLYWING_RESULT::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_EQUIPFLYWING_RESULT_MergeFrom_m28518 (GC_EQUIPFLYWING_RESULT_t3633 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_EQUIPFLYWING_RESULT::IsInitialized()
 bool GC_EQUIPFLYWING_RESULT_IsInitialized_m28519 (GC_EQUIPFLYWING_RESULT_t3633 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
