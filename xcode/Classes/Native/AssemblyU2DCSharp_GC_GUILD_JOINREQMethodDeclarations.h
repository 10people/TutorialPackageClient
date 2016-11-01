#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_GUILD_JOINREQ
struct GC_GUILD_JOINREQ_t3618;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_GUILD_JOINREQ::.ctor()
 void GC_GUILD_JOINREQ__ctor_m28260 (GC_GUILD_JOINREQ_t3618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_JOINREQ::get_HasNeedReserve()
 bool GC_GUILD_JOINREQ_get_HasNeedReserve_m28261 (GC_GUILD_JOINREQ_t3618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_JOINREQ::get_NeedReserve()
 int32_t GC_GUILD_JOINREQ_get_NeedReserve_m28262 (GC_GUILD_JOINREQ_t3618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_JOINREQ::set_NeedReserve(System.Int32)
 void GC_GUILD_JOINREQ_set_NeedReserve_m28263 (GC_GUILD_JOINREQ_t3618 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_JOINREQ::SetNeedReserve(System.Int32)
 void GC_GUILD_JOINREQ_SetNeedReserve_m28264 (GC_GUILD_JOINREQ_t3618 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_GUILD_JOINREQ::SerializedSize()
 int32_t GC_GUILD_JOINREQ_SerializedSize_m28265 (GC_GUILD_JOINREQ_t3618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_GUILD_JOINREQ::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_GUILD_JOINREQ_WriteTo_m28266 (GC_GUILD_JOINREQ_t3618 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_GUILD_JOINREQ::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_GUILD_JOINREQ_MergeFrom_m28267 (GC_GUILD_JOINREQ_t3618 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_GUILD_JOINREQ::IsInitialized()
 bool GC_GUILD_JOINREQ_IsInitialized_m28268 (GC_GUILD_JOINREQ_t3618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
