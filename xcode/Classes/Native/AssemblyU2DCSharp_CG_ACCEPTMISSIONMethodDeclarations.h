#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_ACCEPTMISSION
struct CG_ACCEPTMISSION_t2935;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_ACCEPTMISSION::.ctor()
 void CG_ACCEPTMISSION__ctor_m16379 (CG_ACCEPTMISSION_t2935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_ACCEPTMISSION::get_HasMissionID()
 bool CG_ACCEPTMISSION_get_HasMissionID_m16380 (CG_ACCEPTMISSION_t2935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ACCEPTMISSION::get_MissionID()
 int32_t CG_ACCEPTMISSION_get_MissionID_m16381 (CG_ACCEPTMISSION_t2935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ACCEPTMISSION::set_MissionID(System.Int32)
 void CG_ACCEPTMISSION_set_MissionID_m16382 (CG_ACCEPTMISSION_t2935 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ACCEPTMISSION::SetMissionID(System.Int32)
 void CG_ACCEPTMISSION_SetMissionID_m16383 (CG_ACCEPTMISSION_t2935 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ACCEPTMISSION::SerializedSize()
 int32_t CG_ACCEPTMISSION_SerializedSize_m16384 (CG_ACCEPTMISSION_t2935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ACCEPTMISSION::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_ACCEPTMISSION_WriteTo_m16385 (CG_ACCEPTMISSION_t2935 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_ACCEPTMISSION::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_ACCEPTMISSION_MergeFrom_m16386 (CG_ACCEPTMISSION_t2935 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_ACCEPTMISSION::IsInitialized()
 bool CG_ACCEPTMISSION_IsInitialized_m16387 (CG_ACCEPTMISSION_t2935 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
