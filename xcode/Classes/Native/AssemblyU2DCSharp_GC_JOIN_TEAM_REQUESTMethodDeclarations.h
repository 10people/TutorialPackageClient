#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_JOIN_TEAM_REQUEST
struct GC_JOIN_TEAM_REQUEST_t2973;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_JOIN_TEAM_REQUEST::.ctor()
 void GC_JOIN_TEAM_REQUEST__ctor_m17198 (GC_JOIN_TEAM_REQUEST_t2973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_JOIN_TEAM_REQUEST::get_HasRequesterGuid()
 bool GC_JOIN_TEAM_REQUEST_get_HasRequesterGuid_m17199 (GC_JOIN_TEAM_REQUEST_t2973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_JOIN_TEAM_REQUEST::get_RequesterGuid()
 uint64_t GC_JOIN_TEAM_REQUEST_get_RequesterGuid_m17200 (GC_JOIN_TEAM_REQUEST_t2973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_JOIN_TEAM_REQUEST::set_RequesterGuid(System.UInt64)
 void GC_JOIN_TEAM_REQUEST_set_RequesterGuid_m17201 (GC_JOIN_TEAM_REQUEST_t2973 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_JOIN_TEAM_REQUEST::SetRequesterGuid(System.UInt64)
 void GC_JOIN_TEAM_REQUEST_SetRequesterGuid_m17202 (GC_JOIN_TEAM_REQUEST_t2973 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_JOIN_TEAM_REQUEST::get_HasRequesterName()
 bool GC_JOIN_TEAM_REQUEST_get_HasRequesterName_m17203 (GC_JOIN_TEAM_REQUEST_t2973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_JOIN_TEAM_REQUEST::get_RequesterName()
 String_t* GC_JOIN_TEAM_REQUEST_get_RequesterName_m17204 (GC_JOIN_TEAM_REQUEST_t2973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_JOIN_TEAM_REQUEST::set_RequesterName(System.String)
 void GC_JOIN_TEAM_REQUEST_set_RequesterName_m17205 (GC_JOIN_TEAM_REQUEST_t2973 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_JOIN_TEAM_REQUEST::SetRequesterName(System.String)
 void GC_JOIN_TEAM_REQUEST_SetRequesterName_m17206 (GC_JOIN_TEAM_REQUEST_t2973 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_JOIN_TEAM_REQUEST::get_HasRequesterlevel()
 bool GC_JOIN_TEAM_REQUEST_get_HasRequesterlevel_m17207 (GC_JOIN_TEAM_REQUEST_t2973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_JOIN_TEAM_REQUEST::get_Requesterlevel()
 int32_t GC_JOIN_TEAM_REQUEST_get_Requesterlevel_m17208 (GC_JOIN_TEAM_REQUEST_t2973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_JOIN_TEAM_REQUEST::set_Requesterlevel(System.Int32)
 void GC_JOIN_TEAM_REQUEST_set_Requesterlevel_m17209 (GC_JOIN_TEAM_REQUEST_t2973 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_JOIN_TEAM_REQUEST::SetRequesterlevel(System.Int32)
 void GC_JOIN_TEAM_REQUEST_SetRequesterlevel_m17210 (GC_JOIN_TEAM_REQUEST_t2973 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_JOIN_TEAM_REQUEST::SerializedSize()
 int32_t GC_JOIN_TEAM_REQUEST_SerializedSize_m17211 (GC_JOIN_TEAM_REQUEST_t2973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_JOIN_TEAM_REQUEST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_JOIN_TEAM_REQUEST_WriteTo_m17212 (GC_JOIN_TEAM_REQUEST_t2973 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_JOIN_TEAM_REQUEST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_JOIN_TEAM_REQUEST_MergeFrom_m17213 (GC_JOIN_TEAM_REQUEST_t2973 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_JOIN_TEAM_REQUEST::IsInitialized()
 bool GC_JOIN_TEAM_REQUEST_IsInitialized_m17214 (GC_JOIN_TEAM_REQUEST_t2973 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
