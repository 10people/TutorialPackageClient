#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_DELFRIEND
struct GC_DELFRIEND_t3031;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_DELFRIEND::.ctor()
 void GC_DELFRIEND__ctor_m18321 (GC_DELFRIEND_t3031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_DELFRIEND::get_HasGuid()
 bool GC_DELFRIEND_get_HasGuid_m18322 (GC_DELFRIEND_t3031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_DELFRIEND::get_Guid()
 uint64_t GC_DELFRIEND_get_Guid_m18323 (GC_DELFRIEND_t3031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DELFRIEND::set_Guid(System.UInt64)
 void GC_DELFRIEND_set_Guid_m18324 (GC_DELFRIEND_t3031 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DELFRIEND::SetGuid(System.UInt64)
 void GC_DELFRIEND_SetGuid_m18325 (GC_DELFRIEND_t3031 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_DELFRIEND::SerializedSize()
 int32_t GC_DELFRIEND_SerializedSize_m18326 (GC_DELFRIEND_t3031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DELFRIEND::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_DELFRIEND_WriteTo_m18327 (GC_DELFRIEND_t3031 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_DELFRIEND::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_DELFRIEND_MergeFrom_m18328 (GC_DELFRIEND_t3031 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_DELFRIEND::IsInitialized()
 bool GC_DELFRIEND_IsInitialized_m18329 (GC_DELFRIEND_t3031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
