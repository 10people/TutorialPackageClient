#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_DUEL_REQUESTU
struct GC_DUEL_REQUESTU_t3180;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_DUEL_REQUESTU::.ctor()
 void GC_DUEL_REQUESTU__ctor_m20858 (GC_DUEL_REQUESTU_t3180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_DUEL_REQUESTU::get_HasName()
 bool GC_DUEL_REQUESTU_get_HasName_m20859 (GC_DUEL_REQUESTU_t3180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_DUEL_REQUESTU::get_Name()
 String_t* GC_DUEL_REQUESTU_get_Name_m20860 (GC_DUEL_REQUESTU_t3180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DUEL_REQUESTU::set_Name(System.String)
 void GC_DUEL_REQUESTU_set_Name_m20861 (GC_DUEL_REQUESTU_t3180 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DUEL_REQUESTU::SetName(System.String)
 void GC_DUEL_REQUESTU_SetName_m20862 (GC_DUEL_REQUESTU_t3180 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_DUEL_REQUESTU::get_HasGuid()
 bool GC_DUEL_REQUESTU_get_HasGuid_m20863 (GC_DUEL_REQUESTU_t3180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_DUEL_REQUESTU::get_Guid()
 uint64_t GC_DUEL_REQUESTU_get_Guid_m20864 (GC_DUEL_REQUESTU_t3180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DUEL_REQUESTU::set_Guid(System.UInt64)
 void GC_DUEL_REQUESTU_set_Guid_m20865 (GC_DUEL_REQUESTU_t3180 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DUEL_REQUESTU::SetGuid(System.UInt64)
 void GC_DUEL_REQUESTU_SetGuid_m20866 (GC_DUEL_REQUESTU_t3180 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_DUEL_REQUESTU::SerializedSize()
 int32_t GC_DUEL_REQUESTU_SerializedSize_m20867 (GC_DUEL_REQUESTU_t3180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_DUEL_REQUESTU::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_DUEL_REQUESTU_WriteTo_m20868 (GC_DUEL_REQUESTU_t3180 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_DUEL_REQUESTU::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_DUEL_REQUESTU_MergeFrom_m20869 (GC_DUEL_REQUESTU_t3180 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_DUEL_REQUESTU::IsInitialized()
 bool GC_DUEL_REQUESTU_IsInitialized_m20870 (GC_DUEL_REQUESTU_t3180 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
