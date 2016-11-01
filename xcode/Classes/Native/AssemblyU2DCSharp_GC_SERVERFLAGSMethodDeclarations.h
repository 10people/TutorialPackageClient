#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_SERVERFLAGS
struct GC_SERVERFLAGS_t3433;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_SERVERFLAGS::.ctor()
 void GC_SERVERFLAGS__ctor_m25275 (GC_SERVERFLAGS_t3433 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SERVERFLAGS::get_HasFlags()
 bool GC_SERVERFLAGS_get_HasFlags_m25276 (GC_SERVERFLAGS_t3433 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SERVERFLAGS::get_Flags()
 int32_t GC_SERVERFLAGS_get_Flags_m25277 (GC_SERVERFLAGS_t3433 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SERVERFLAGS::set_Flags(System.Int32)
 void GC_SERVERFLAGS_set_Flags_m25278 (GC_SERVERFLAGS_t3433 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SERVERFLAGS::SetFlags(System.Int32)
 void GC_SERVERFLAGS_SetFlags_m25279 (GC_SERVERFLAGS_t3433 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SERVERFLAGS::SerializedSize()
 int32_t GC_SERVERFLAGS_SerializedSize_m25280 (GC_SERVERFLAGS_t3433 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SERVERFLAGS::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_SERVERFLAGS_WriteTo_m25281 (GC_SERVERFLAGS_t3433 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_SERVERFLAGS::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_SERVERFLAGS_MergeFrom_m25282 (GC_SERVERFLAGS_t3433 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SERVERFLAGS::IsInitialized()
 bool GC_SERVERFLAGS_IsInitialized_m25283 (GC_SERVERFLAGS_t3433 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
