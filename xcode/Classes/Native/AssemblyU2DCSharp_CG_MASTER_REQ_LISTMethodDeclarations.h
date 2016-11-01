#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_MASTER_REQ_LIST
struct CG_MASTER_REQ_LIST_t3260;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_MASTER_REQ_LIST::.ctor()
 void CG_MASTER_REQ_LIST__ctor_m22239 (CG_MASTER_REQ_LIST_t3260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_MASTER_REQ_LIST::get_HasRequester()
 bool CG_MASTER_REQ_LIST_get_HasRequester_m22240 (CG_MASTER_REQ_LIST_t3260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_MASTER_REQ_LIST::get_Requester()
 uint64_t CG_MASTER_REQ_LIST_get_Requester_m22241 (CG_MASTER_REQ_LIST_t3260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MASTER_REQ_LIST::set_Requester(System.UInt64)
 void CG_MASTER_REQ_LIST_set_Requester_m22242 (CG_MASTER_REQ_LIST_t3260 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MASTER_REQ_LIST::SetRequester(System.UInt64)
 void CG_MASTER_REQ_LIST_SetRequester_m22243 (CG_MASTER_REQ_LIST_t3260 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_MASTER_REQ_LIST::SerializedSize()
 int32_t CG_MASTER_REQ_LIST_SerializedSize_m22244 (CG_MASTER_REQ_LIST_t3260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_MASTER_REQ_LIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_MASTER_REQ_LIST_WriteTo_m22245 (CG_MASTER_REQ_LIST_t3260 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_MASTER_REQ_LIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_MASTER_REQ_LIST_MergeFrom_m22246 (CG_MASTER_REQ_LIST_t3260 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_MASTER_REQ_LIST::IsInitialized()
 bool CG_MASTER_REQ_LIST_IsInitialized_m22247 (CG_MASTER_REQ_LIST_t3260 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
