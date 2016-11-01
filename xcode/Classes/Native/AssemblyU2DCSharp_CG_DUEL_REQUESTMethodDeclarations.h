#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_DUEL_REQUEST
struct CG_DUEL_REQUEST_t3179;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_DUEL_REQUEST::.ctor()
 void CG_DUEL_REQUEST__ctor_m20849 (CG_DUEL_REQUEST_t3179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_DUEL_REQUEST::get_HasGuid()
 bool CG_DUEL_REQUEST_get_HasGuid_m20850 (CG_DUEL_REQUEST_t3179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_DUEL_REQUEST::get_Guid()
 uint64_t CG_DUEL_REQUEST_get_Guid_m20851 (CG_DUEL_REQUEST_t3179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_DUEL_REQUEST::set_Guid(System.UInt64)
 void CG_DUEL_REQUEST_set_Guid_m20852 (CG_DUEL_REQUEST_t3179 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_DUEL_REQUEST::SetGuid(System.UInt64)
 void CG_DUEL_REQUEST_SetGuid_m20853 (CG_DUEL_REQUEST_t3179 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_DUEL_REQUEST::SerializedSize()
 int32_t CG_DUEL_REQUEST_SerializedSize_m20854 (CG_DUEL_REQUEST_t3179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_DUEL_REQUEST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_DUEL_REQUEST_WriteTo_m20855 (CG_DUEL_REQUEST_t3179 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_DUEL_REQUEST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_DUEL_REQUEST_MergeFrom_m20856 (CG_DUEL_REQUEST_t3179 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_DUEL_REQUEST::IsInitialized()
 bool CG_DUEL_REQUEST_IsInitialized_m20857 (CG_DUEL_REQUEST_t3179 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
