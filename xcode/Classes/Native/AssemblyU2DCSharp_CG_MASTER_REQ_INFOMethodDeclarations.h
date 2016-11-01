#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_MASTER_REQ_INFO
struct CG_MASTER_REQ_INFO_t3262;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_MASTER_REQ_INFO::.ctor()
 void CG_MASTER_REQ_INFO__ctor_m22293 (CG_MASTER_REQ_INFO_t3262 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_MASTER_REQ_INFO::get_HasRequester()
 bool CG_MASTER_REQ_INFO_get_HasRequester_m22294 (CG_MASTER_REQ_INFO_t3262 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_MASTER_REQ_INFO::get_Requester()
 uint64_t CG_MASTER_REQ_INFO_get_Requester_m22295 (CG_MASTER_REQ_INFO_t3262 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MASTER_REQ_INFO::set_Requester(System.UInt64)
 void CG_MASTER_REQ_INFO_set_Requester_m22296 (CG_MASTER_REQ_INFO_t3262 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MASTER_REQ_INFO::SetRequester(System.UInt64)
 void CG_MASTER_REQ_INFO_SetRequester_m22297 (CG_MASTER_REQ_INFO_t3262 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_MASTER_REQ_INFO::SerializedSize()
 int32_t CG_MASTER_REQ_INFO_SerializedSize_m22298 (CG_MASTER_REQ_INFO_t3262 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MASTER_REQ_INFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_MASTER_REQ_INFO_WriteTo_m22299 (CG_MASTER_REQ_INFO_t3262 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_MASTER_REQ_INFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_MASTER_REQ_INFO_MergeFrom_m22300 (CG_MASTER_REQ_INFO_t3262 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_MASTER_REQ_INFO::IsInitialized()
 bool CG_MASTER_REQ_INFO_IsInitialized_m22301 (CG_MASTER_REQ_INFO_t3262 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
