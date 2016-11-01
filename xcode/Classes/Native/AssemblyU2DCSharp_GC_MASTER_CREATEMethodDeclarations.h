#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_MASTER_CREATE
struct GC_MASTER_CREATE_t3266;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_MASTER_CREATE::.ctor()
 void GC_MASTER_CREATE__ctor_m22449 (GC_MASTER_CREATE_t3266 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_CREATE::get_HasMasterGuid()
 bool GC_MASTER_CREATE_get_HasMasterGuid_m22450 (GC_MASTER_CREATE_t3266 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_MASTER_CREATE::get_MasterGuid()
 uint64_t GC_MASTER_CREATE_get_MasterGuid_m22451 (GC_MASTER_CREATE_t3266 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_CREATE::set_MasterGuid(System.UInt64)
 void GC_MASTER_CREATE_set_MasterGuid_m22452 (GC_MASTER_CREATE_t3266 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_CREATE::SetMasterGuid(System.UInt64)
 void GC_MASTER_CREATE_SetMasterGuid_m22453 (GC_MASTER_CREATE_t3266 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_CREATE::get_HasMasterName()
 bool GC_MASTER_CREATE_get_HasMasterName_m22454 (GC_MASTER_CREATE_t3266 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_CREATE::get_MasterName()
 String_t* GC_MASTER_CREATE_get_MasterName_m22455 (GC_MASTER_CREATE_t3266 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_CREATE::set_MasterName(System.String)
 void GC_MASTER_CREATE_set_MasterName_m22456 (GC_MASTER_CREATE_t3266 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_CREATE::SetMasterName(System.String)
 void GC_MASTER_CREATE_SetMasterName_m22457 (GC_MASTER_CREATE_t3266 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_CREATE::SerializedSize()
 int32_t GC_MASTER_CREATE_SerializedSize_m22458 (GC_MASTER_CREATE_t3266 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_CREATE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_MASTER_CREATE_WriteTo_m22459 (GC_MASTER_CREATE_t3266 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_MASTER_CREATE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_MASTER_CREATE_MergeFrom_m22460 (GC_MASTER_CREATE_t3266 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_CREATE::IsInitialized()
 bool GC_MASTER_CREATE_IsInitialized_m22461 (GC_MASTER_CREATE_t3266 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
