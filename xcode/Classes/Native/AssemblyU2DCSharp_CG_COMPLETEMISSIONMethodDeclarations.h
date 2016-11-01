#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_COMPLETEMISSION
struct CG_COMPLETEMISSION_t2937;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_COMPLETEMISSION::.ctor()
 void CG_COMPLETEMISSION__ctor_m16405 (CG_COMPLETEMISSION_t2937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_COMPLETEMISSION::get_HasMissionID()
 bool CG_COMPLETEMISSION_get_HasMissionID_m16406 (CG_COMPLETEMISSION_t2937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_COMPLETEMISSION::get_MissionID()
 int32_t CG_COMPLETEMISSION_get_MissionID_m16407 (CG_COMPLETEMISSION_t2937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_COMPLETEMISSION::set_MissionID(System.Int32)
 void CG_COMPLETEMISSION_set_MissionID_m16408 (CG_COMPLETEMISSION_t2937 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_COMPLETEMISSION::SetMissionID(System.Int32)
 void CG_COMPLETEMISSION_SetMissionID_m16409 (CG_COMPLETEMISSION_t2937 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_COMPLETEMISSION::SerializedSize()
 int32_t CG_COMPLETEMISSION_SerializedSize_m16410 (CG_COMPLETEMISSION_t2937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_COMPLETEMISSION::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_COMPLETEMISSION_WriteTo_m16411 (CG_COMPLETEMISSION_t2937 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_COMPLETEMISSION::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_COMPLETEMISSION_MergeFrom_m16412 (CG_COMPLETEMISSION_t2937 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_COMPLETEMISSION::IsInitialized()
 bool CG_COMPLETEMISSION_IsInitialized_m16413 (CG_COMPLETEMISSION_t2937 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
