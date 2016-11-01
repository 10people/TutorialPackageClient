#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_FILTER_ABUSE
struct GC_FILTER_ABUSE_t3457;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_FILTER_ABUSE::.ctor()
 void GC_FILTER_ABUSE__ctor_m25711 (GC_FILTER_ABUSE_t3457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_FILTER_ABUSE::get_AbuseList()
 Object_t* GC_FILTER_ABUSE_get_AbuseList_m25712 (GC_FILTER_ABUSE_t3457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FILTER_ABUSE::get_AbuseCount()
 int32_t GC_FILTER_ABUSE_get_AbuseCount_m25713 (GC_FILTER_ABUSE_t3457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_FILTER_ABUSE::GetAbuse(System.Int32)
 String_t* GC_FILTER_ABUSE_GetAbuse_m25714 (GC_FILTER_ABUSE_t3457 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_FILTER_ABUSE::AddAbuse(System.String)
 void GC_FILTER_ABUSE_AddAbuse_m25715 (GC_FILTER_ABUSE_t3457 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_FILTER_ABUSE::SerializedSize()
 int32_t GC_FILTER_ABUSE_SerializedSize_m25716 (GC_FILTER_ABUSE_t3457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_FILTER_ABUSE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_FILTER_ABUSE_WriteTo_m25717 (GC_FILTER_ABUSE_t3457 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_FILTER_ABUSE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_FILTER_ABUSE_MergeFrom_m25718 (GC_FILTER_ABUSE_t3457 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_FILTER_ABUSE::IsInitialized()
 bool GC_FILTER_ABUSE_IsInitialized_m25719 (GC_FILTER_ABUSE_t3457 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
