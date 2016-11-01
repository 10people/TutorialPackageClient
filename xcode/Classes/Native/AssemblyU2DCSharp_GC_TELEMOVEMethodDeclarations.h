#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_TELEMOVE
struct GC_TELEMOVE_t3128;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_TELEMOVE::.ctor()
 void GC_TELEMOVE__ctor_m20199 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_TELEMOVE::get_HasObjId()
 bool GC_TELEMOVE_get_HasObjId_m20200 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TELEMOVE::get_ObjId()
 int32_t GC_TELEMOVE_get_ObjId_m20201 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TELEMOVE::set_ObjId(System.Int32)
 void GC_TELEMOVE_set_ObjId_m20202 (GC_TELEMOVE_t3128 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TELEMOVE::SetObjId(System.Int32)
 void GC_TELEMOVE_SetObjId_m20203 (GC_TELEMOVE_t3128 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_TELEMOVE::get_HasTargetPosX()
 bool GC_TELEMOVE_get_HasTargetPosX_m20204 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TELEMOVE::get_TargetPosX()
 int32_t GC_TELEMOVE_get_TargetPosX_m20205 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TELEMOVE::set_TargetPosX(System.Int32)
 void GC_TELEMOVE_set_TargetPosX_m20206 (GC_TELEMOVE_t3128 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TELEMOVE::SetTargetPosX(System.Int32)
 void GC_TELEMOVE_SetTargetPosX_m20207 (GC_TELEMOVE_t3128 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_TELEMOVE::get_HasTargetPosZ()
 bool GC_TELEMOVE_get_HasTargetPosZ_m20208 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TELEMOVE::get_TargetPosZ()
 int32_t GC_TELEMOVE_get_TargetPosZ_m20209 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TELEMOVE::set_TargetPosZ(System.Int32)
 void GC_TELEMOVE_set_TargetPosZ_m20210 (GC_TELEMOVE_t3128 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TELEMOVE::SetTargetPosZ(System.Int32)
 void GC_TELEMOVE_SetTargetPosZ_m20211 (GC_TELEMOVE_t3128 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_TELEMOVE::get_HasNeedChangeFaceto()
 bool GC_TELEMOVE_get_HasNeedChangeFaceto_m20212 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TELEMOVE::get_NeedChangeFaceto()
 int32_t GC_TELEMOVE_get_NeedChangeFaceto_m20213 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TELEMOVE::set_NeedChangeFaceto(System.Int32)
 void GC_TELEMOVE_set_NeedChangeFaceto_m20214 (GC_TELEMOVE_t3128 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TELEMOVE::SetNeedChangeFaceto(System.Int32)
 void GC_TELEMOVE_SetNeedChangeFaceto_m20215 (GC_TELEMOVE_t3128 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_TELEMOVE::get_HasAnimaId()
 bool GC_TELEMOVE_get_HasAnimaId_m20216 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TELEMOVE::get_AnimaId()
 int32_t GC_TELEMOVE_get_AnimaId_m20217 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TELEMOVE::set_AnimaId(System.Int32)
 void GC_TELEMOVE_set_AnimaId_m20218 (GC_TELEMOVE_t3128 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TELEMOVE::SetAnimaId(System.Int32)
 void GC_TELEMOVE_SetAnimaId_m20219 (GC_TELEMOVE_t3128 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_TELEMOVE::SerializedSize()
 int32_t GC_TELEMOVE_SerializedSize_m20220 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_TELEMOVE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_TELEMOVE_WriteTo_m20221 (GC_TELEMOVE_t3128 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_TELEMOVE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_TELEMOVE_MergeFrom_m20222 (GC_TELEMOVE_t3128 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_TELEMOVE::IsInitialized()
 bool GC_TELEMOVE_IsInitialized_m20223 (GC_TELEMOVE_t3128 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
