#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_GUIDMISSION_DATA
struct GC_RET_GUIDMISSION_DATA_t1452;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RET_GUIDMISSION_DATA::.ctor()
 void GC_RET_GUIDMISSION_DATA__ctor_m27445 (GC_RET_GUIDMISSION_DATA_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_GUIDMISSION_DATA::get_HasMissionID()
 bool GC_RET_GUIDMISSION_DATA_get_HasMissionID_m27446 (GC_RET_GUIDMISSION_DATA_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_GUIDMISSION_DATA::get_MissionID()
 int32_t GC_RET_GUIDMISSION_DATA_get_MissionID_m27447 (GC_RET_GUIDMISSION_DATA_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_GUIDMISSION_DATA::set_MissionID(System.Int32)
 void GC_RET_GUIDMISSION_DATA_set_MissionID_m27448 (GC_RET_GUIDMISSION_DATA_t1452 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_GUIDMISSION_DATA::SetMissionID(System.Int32)
 void GC_RET_GUIDMISSION_DATA_SetMissionID_m27449 (GC_RET_GUIDMISSION_DATA_t1452 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_GUIDMISSION_DATA::get_HasAssignTimes()
 bool GC_RET_GUIDMISSION_DATA_get_HasAssignTimes_m27450 (GC_RET_GUIDMISSION_DATA_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_GUIDMISSION_DATA::get_AssignTimes()
 int32_t GC_RET_GUIDMISSION_DATA_get_AssignTimes_m27451 (GC_RET_GUIDMISSION_DATA_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_GUIDMISSION_DATA::set_AssignTimes(System.Int32)
 void GC_RET_GUIDMISSION_DATA_set_AssignTimes_m27452 (GC_RET_GUIDMISSION_DATA_t1452 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_GUIDMISSION_DATA::SetAssignTimes(System.Int32)
 void GC_RET_GUIDMISSION_DATA_SetAssignTimes_m27453 (GC_RET_GUIDMISSION_DATA_t1452 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_GUIDMISSION_DATA::get_HasAcceptTimes()
 bool GC_RET_GUIDMISSION_DATA_get_HasAcceptTimes_m27454 (GC_RET_GUIDMISSION_DATA_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_GUIDMISSION_DATA::get_AcceptTimes()
 int32_t GC_RET_GUIDMISSION_DATA_get_AcceptTimes_m27455 (GC_RET_GUIDMISSION_DATA_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_GUIDMISSION_DATA::set_AcceptTimes(System.Int32)
 void GC_RET_GUIDMISSION_DATA_set_AcceptTimes_m27456 (GC_RET_GUIDMISSION_DATA_t1452 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_GUIDMISSION_DATA::SetAcceptTimes(System.Int32)
 void GC_RET_GUIDMISSION_DATA_SetAcceptTimes_m27457 (GC_RET_GUIDMISSION_DATA_t1452 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_GUIDMISSION_DATA::get_HasGuildWeath()
 bool GC_RET_GUIDMISSION_DATA_get_HasGuildWeath_m27458 (GC_RET_GUIDMISSION_DATA_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_GUIDMISSION_DATA::get_GuildWeath()
 int32_t GC_RET_GUIDMISSION_DATA_get_GuildWeath_m27459 (GC_RET_GUIDMISSION_DATA_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_GUIDMISSION_DATA::set_GuildWeath(System.Int32)
 void GC_RET_GUIDMISSION_DATA_set_GuildWeath_m27460 (GC_RET_GUIDMISSION_DATA_t1452 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_GUIDMISSION_DATA::SetGuildWeath(System.Int32)
 void GC_RET_GUIDMISSION_DATA_SetGuildWeath_m27461 (GC_RET_GUIDMISSION_DATA_t1452 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_GUIDMISSION_DATA::SerializedSize()
 int32_t GC_RET_GUIDMISSION_DATA_SerializedSize_m27462 (GC_RET_GUIDMISSION_DATA_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_GUIDMISSION_DATA::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_GUIDMISSION_DATA_WriteTo_m27463 (GC_RET_GUIDMISSION_DATA_t1452 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_GUIDMISSION_DATA::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_GUIDMISSION_DATA_MergeFrom_m27464 (GC_RET_GUIDMISSION_DATA_t1452 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_GUIDMISSION_DATA::IsInitialized()
 bool GC_RET_GUIDMISSION_DATA_IsInitialized_m27465 (GC_RET_GUIDMISSION_DATA_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
