#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_REQ_CHALLENGE
struct CG_REQ_CHALLENGE_t3109;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_REQ_CHALLENGE::.ctor()
 void CG_REQ_CHALLENGE__ctor_m19890 (CG_REQ_CHALLENGE_t3109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_CHALLENGE::get_HasOpponentGuid()
 bool CG_REQ_CHALLENGE_get_HasOpponentGuid_m19891 (CG_REQ_CHALLENGE_t3109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_REQ_CHALLENGE::get_OpponentGuid()
 uint64_t CG_REQ_CHALLENGE_get_OpponentGuid_m19892 (CG_REQ_CHALLENGE_t3109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_CHALLENGE::set_OpponentGuid(System.UInt64)
 void CG_REQ_CHALLENGE_set_OpponentGuid_m19893 (CG_REQ_CHALLENGE_t3109 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_CHALLENGE::SetOpponentGuid(System.UInt64)
 void CG_REQ_CHALLENGE_SetOpponentGuid_m19894 (CG_REQ_CHALLENGE_t3109 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_REQ_CHALLENGE::SerializedSize()
 int32_t CG_REQ_CHALLENGE_SerializedSize_m19895 (CG_REQ_CHALLENGE_t3109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_REQ_CHALLENGE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_REQ_CHALLENGE_WriteTo_m19896 (CG_REQ_CHALLENGE_t3109 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_REQ_CHALLENGE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_REQ_CHALLENGE_MergeFrom_m19897 (CG_REQ_CHALLENGE_t3109 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_REQ_CHALLENGE::IsInitialized()
 bool CG_REQ_CHALLENGE_IsInitialized_m19898 (CG_REQ_CHALLENGE_t3109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
