#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_ACTIVITYNOTICE
struct GC_ACTIVITYNOTICE_t3335;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_ACTIVITYNOTICE::.ctor()
 void GC_ACTIVITYNOTICE__ctor_m23762 (GC_ACTIVITYNOTICE_t3335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ACTIVITYNOTICE::get_HasStrNotice()
 bool GC_ACTIVITYNOTICE_get_HasStrNotice_m23763 (GC_ACTIVITYNOTICE_t3335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_ACTIVITYNOTICE::get_StrNotice()
 String_t* GC_ACTIVITYNOTICE_get_StrNotice_m23764 (GC_ACTIVITYNOTICE_t3335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ACTIVITYNOTICE::set_StrNotice(System.String)
 void GC_ACTIVITYNOTICE_set_StrNotice_m23765 (GC_ACTIVITYNOTICE_t3335 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ACTIVITYNOTICE::SetStrNotice(System.String)
 void GC_ACTIVITYNOTICE_SetStrNotice_m23766 (GC_ACTIVITYNOTICE_t3335 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_ACTIVITYNOTICE::SerializedSize()
 int32_t GC_ACTIVITYNOTICE_SerializedSize_m23767 (GC_ACTIVITYNOTICE_t3335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_ACTIVITYNOTICE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_ACTIVITYNOTICE_WriteTo_m23768 (GC_ACTIVITYNOTICE_t3335 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_ACTIVITYNOTICE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_ACTIVITYNOTICE_MergeFrom_m23769 (GC_ACTIVITYNOTICE_t3335 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_ACTIVITYNOTICE::IsInitialized()
 bool GC_ACTIVITYNOTICE_IsInitialized_m23770 (GC_ACTIVITYNOTICE_t3335 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
