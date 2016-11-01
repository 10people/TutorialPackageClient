#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_ABANDONMISSION
struct CG_ABANDONMISSION_t2939;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_ABANDONMISSION::.ctor()
 void CG_ABANDONMISSION__ctor_m16427 (CG_ABANDONMISSION_t2939 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_ABANDONMISSION::get_HasMissionID()
 bool CG_ABANDONMISSION_get_HasMissionID_m16428 (CG_ABANDONMISSION_t2939 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ABANDONMISSION::get_MissionID()
 int32_t CG_ABANDONMISSION_get_MissionID_m16429 (CG_ABANDONMISSION_t2939 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ABANDONMISSION::set_MissionID(System.Int32)
 void CG_ABANDONMISSION_set_MissionID_m16430 (CG_ABANDONMISSION_t2939 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ABANDONMISSION::SetMissionID(System.Int32)
 void CG_ABANDONMISSION_SetMissionID_m16431 (CG_ABANDONMISSION_t2939 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_ABANDONMISSION::SerializedSize()
 int32_t CG_ABANDONMISSION_SerializedSize_m16432 (CG_ABANDONMISSION_t2939 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_ABANDONMISSION::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_ABANDONMISSION_WriteTo_m16433 (CG_ABANDONMISSION_t2939 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_ABANDONMISSION::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_ABANDONMISSION_MergeFrom_m16434 (CG_ABANDONMISSION_t2939 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_ABANDONMISSION::IsInitialized()
 bool CG_ABANDONMISSION_IsInitialized_m16435 (CG_ABANDONMISSION_t2939 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
