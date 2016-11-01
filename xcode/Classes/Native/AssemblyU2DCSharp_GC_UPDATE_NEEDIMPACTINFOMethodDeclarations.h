#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_UPDATE_NEEDIMPACTINFO
struct GC_UPDATE_NEEDIMPACTINFO_t3259;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_UPDATE_NEEDIMPACTINFO::.ctor()
 void GC_UPDATE_NEEDIMPACTINFO__ctor_m22210 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_UPDATE_NEEDIMPACTINFO::get_HasObjId()
 bool GC_UPDATE_NEEDIMPACTINFO_get_HasObjId_m22211 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::get_ObjId()
 int32_t GC_UPDATE_NEEDIMPACTINFO_get_ObjId_m22212 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_NEEDIMPACTINFO::set_ObjId(System.Int32)
 void GC_UPDATE_NEEDIMPACTINFO_set_ObjId_m22213 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_NEEDIMPACTINFO::SetObjId(System.Int32)
 void GC_UPDATE_NEEDIMPACTINFO_SetObjId_m22214 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_NEEDIMPACTINFO::get_impactIdList()
 Object_t* GC_UPDATE_NEEDIMPACTINFO_get_impactIdList_m22215 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::get_impactIdCount()
 int32_t GC_UPDATE_NEEDIMPACTINFO_get_impactIdCount_m22216 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::GetImpactId(System.Int32)
 int32_t GC_UPDATE_NEEDIMPACTINFO_GetImpactId_m22217 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_NEEDIMPACTINFO::AddImpactId(System.Int32)
 void GC_UPDATE_NEEDIMPACTINFO_AddImpactId_m22218 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_NEEDIMPACTINFO::get_impactLogicIdList()
 Object_t* GC_UPDATE_NEEDIMPACTINFO_get_impactLogicIdList_m22219 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::get_impactLogicIdCount()
 int32_t GC_UPDATE_NEEDIMPACTINFO_get_impactLogicIdCount_m22220 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::GetImpactLogicId(System.Int32)
 int32_t GC_UPDATE_NEEDIMPACTINFO_GetImpactLogicId_m22221 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_NEEDIMPACTINFO::AddImpactLogicId(System.Int32)
 void GC_UPDATE_NEEDIMPACTINFO_AddImpactLogicId_m22222 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_NEEDIMPACTINFO::get_isForeverList()
 Object_t* GC_UPDATE_NEEDIMPACTINFO_get_isForeverList_m22223 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::get_isForeverCount()
 int32_t GC_UPDATE_NEEDIMPACTINFO_get_isForeverCount_m22224 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::GetIsForever(System.Int32)
 int32_t GC_UPDATE_NEEDIMPACTINFO_GetIsForever_m22225 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_NEEDIMPACTINFO::AddIsForever(System.Int32)
 void GC_UPDATE_NEEDIMPACTINFO_AddIsForever_m22226 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_NEEDIMPACTINFO::get_remainTimeList()
 Object_t* GC_UPDATE_NEEDIMPACTINFO_get_remainTimeList_m22227 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::get_remainTimeCount()
 int32_t GC_UPDATE_NEEDIMPACTINFO_get_remainTimeCount_m22228 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::GetRemainTime(System.Int32)
 int32_t GC_UPDATE_NEEDIMPACTINFO_GetRemainTime_m22229 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_NEEDIMPACTINFO::AddRemainTime(System.Int32)
 void GC_UPDATE_NEEDIMPACTINFO_AddRemainTime_m22230 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_NEEDIMPACTINFO::get_isAddList()
 Object_t* GC_UPDATE_NEEDIMPACTINFO_get_isAddList_m22231 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::get_isAddCount()
 int32_t GC_UPDATE_NEEDIMPACTINFO_get_isAddCount_m22232 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::GetIsAdd(System.Int32)
 int32_t GC_UPDATE_NEEDIMPACTINFO_GetIsAdd_m22233 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_NEEDIMPACTINFO::AddIsAdd(System.Int32)
 void GC_UPDATE_NEEDIMPACTINFO_AddIsAdd_m22234 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_NEEDIMPACTINFO::SerializedSize()
 int32_t GC_UPDATE_NEEDIMPACTINFO_SerializedSize_m22235 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_NEEDIMPACTINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_UPDATE_NEEDIMPACTINFO_WriteTo_m22236 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_UPDATE_NEEDIMPACTINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_UPDATE_NEEDIMPACTINFO_MergeFrom_m22237 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_UPDATE_NEEDIMPACTINFO::IsInitialized()
 bool GC_UPDATE_NEEDIMPACTINFO_IsInitialized_m22238 (GC_UPDATE_NEEDIMPACTINFO_t3259 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
