#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_JOINREQ
struct CG_GUILD_JOINREQ_t3617;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_JOINREQ::.ctor()
 void CG_GUILD_JOINREQ__ctor_m28251 (CG_GUILD_JOINREQ_t3617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_JOINREQ::get_HasNeedReserve()
 bool CG_GUILD_JOINREQ_get_HasNeedReserve_m28252 (CG_GUILD_JOINREQ_t3617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_JOINREQ::get_NeedReserve()
 int32_t CG_GUILD_JOINREQ_get_NeedReserve_m28253 (CG_GUILD_JOINREQ_t3617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOINREQ::set_NeedReserve(System.Int32)
 void CG_GUILD_JOINREQ_set_NeedReserve_m28254 (CG_GUILD_JOINREQ_t3617 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOINREQ::SetNeedReserve(System.Int32)
 void CG_GUILD_JOINREQ_SetNeedReserve_m28255 (CG_GUILD_JOINREQ_t3617 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_JOINREQ::SerializedSize()
 int32_t CG_GUILD_JOINREQ_SerializedSize_m28256 (CG_GUILD_JOINREQ_t3617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOINREQ::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_JOINREQ_WriteTo_m28257 (CG_GUILD_JOINREQ_t3617 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_JOINREQ::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_JOINREQ_MergeFrom_m28258 (CG_GUILD_JOINREQ_t3617 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_JOINREQ::IsInitialized()
 bool CG_GUILD_JOINREQ_IsInitialized_m28259 (CG_GUILD_JOINREQ_t3617 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
