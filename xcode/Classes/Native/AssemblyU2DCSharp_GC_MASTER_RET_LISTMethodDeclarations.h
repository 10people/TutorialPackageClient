#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_MASTER_RET_LIST
struct GC_MASTER_RET_LIST_t3261;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_MASTER_RET_LIST::.ctor()
 void GC_MASTER_RET_LIST__ctor_m22248 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_MASTER_RET_LIST::get_masterGuidList()
 Object_t* GC_MASTER_RET_LIST_get_masterGuidList_m22249 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::get_masterGuidCount()
 int32_t GC_MASTER_RET_LIST_get_masterGuidCount_m22250 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_MASTER_RET_LIST::GetMasterGuid(System.Int32)
 uint64_t GC_MASTER_RET_LIST_GetMasterGuid_m22251 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_LIST::AddMasterGuid(System.UInt64)
 void GC_MASTER_RET_LIST_AddMasterGuid_m22252 (GC_MASTER_RET_LIST_t3261 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_MASTER_RET_LIST::get_masterNameList()
 Object_t* GC_MASTER_RET_LIST_get_masterNameList_m22253 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::get_masterNameCount()
 int32_t GC_MASTER_RET_LIST_get_masterNameCount_m22254 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_LIST::GetMasterName(System.Int32)
 String_t* GC_MASTER_RET_LIST_GetMasterName_m22255 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_LIST::AddMasterName(System.String)
 void GC_MASTER_RET_LIST_AddMasterName_m22256 (GC_MASTER_RET_LIST_t3261 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_MASTER_RET_LIST::get_masterChiefNameList()
 Object_t* GC_MASTER_RET_LIST_get_masterChiefNameList_m22257 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::get_masterChiefNameCount()
 int32_t GC_MASTER_RET_LIST_get_masterChiefNameCount_m22258 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_LIST::GetMasterChiefName(System.Int32)
 String_t* GC_MASTER_RET_LIST_GetMasterChiefName_m22259 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_LIST::AddMasterChiefName(System.String)
 void GC_MASTER_RET_LIST_AddMasterChiefName_m22260 (GC_MASTER_RET_LIST_t3261 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_LIST::get_memberNumList()
 Object_t* GC_MASTER_RET_LIST_get_memberNumList_m22261 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::get_memberNumCount()
 int32_t GC_MASTER_RET_LIST_get_memberNumCount_m22262 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::GetMemberNum(System.Int32)
 int32_t GC_MASTER_RET_LIST_GetMemberNum_m22263 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_LIST::AddMemberNum(System.Int32)
 void GC_MASTER_RET_LIST_AddMemberNum_m22264 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_LIST::get_masterTorchList()
 Object_t* GC_MASTER_RET_LIST_get_masterTorchList_m22265 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::get_masterTorchCount()
 int32_t GC_MASTER_RET_LIST_get_masterTorchCount_m22266 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::GetMasterTorch(System.Int32)
 int32_t GC_MASTER_RET_LIST_GetMasterTorch_m22267 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_LIST::AddMasterTorch(System.Int32)
 void GC_MASTER_RET_LIST_AddMasterTorch_m22268 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_LIST::get_createTimeList()
 Object_t* GC_MASTER_RET_LIST_get_createTimeList_m22269 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::get_createTimeCount()
 int32_t GC_MASTER_RET_LIST_get_createTimeCount_m22270 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::GetCreateTime(System.Int32)
 int32_t GC_MASTER_RET_LIST_GetCreateTime_m22271 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_LIST::AddCreateTime(System.Int32)
 void GC_MASTER_RET_LIST_AddCreateTime_m22272 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_LIST::get_skillID1List()
 Object_t* GC_MASTER_RET_LIST_get_skillID1List_m22273 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::get_skillID1Count()
 int32_t GC_MASTER_RET_LIST_get_skillID1Count_m22274 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::GetSkillID1(System.Int32)
 int32_t GC_MASTER_RET_LIST_GetSkillID1_m22275 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_LIST::AddSkillID1(System.Int32)
 void GC_MASTER_RET_LIST_AddSkillID1_m22276 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_LIST::get_skillID2List()
 Object_t* GC_MASTER_RET_LIST_get_skillID2List_m22277 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::get_skillID2Count()
 int32_t GC_MASTER_RET_LIST_get_skillID2Count_m22278 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::GetSkillID2(System.Int32)
 int32_t GC_MASTER_RET_LIST_GetSkillID2_m22279 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_LIST::AddSkillID2(System.Int32)
 void GC_MASTER_RET_LIST_AddSkillID2_m22280 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_LIST::get_skillID3List()
 Object_t* GC_MASTER_RET_LIST_get_skillID3List_m22281 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::get_skillID3Count()
 int32_t GC_MASTER_RET_LIST_get_skillID3Count_m22282 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::GetSkillID3(System.Int32)
 int32_t GC_MASTER_RET_LIST_GetSkillID3_m22283 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_LIST::AddSkillID3(System.Int32)
 void GC_MASTER_RET_LIST_AddSkillID3_m22284 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_LIST::get_skillID4List()
 Object_t* GC_MASTER_RET_LIST_get_skillID4List_m22285 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::get_skillID4Count()
 int32_t GC_MASTER_RET_LIST_get_skillID4Count_m22286 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::GetSkillID4(System.Int32)
 int32_t GC_MASTER_RET_LIST_GetSkillID4_m22287 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_LIST::AddSkillID4(System.Int32)
 void GC_MASTER_RET_LIST_AddSkillID4_m22288 (GC_MASTER_RET_LIST_t3261 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_LIST::SerializedSize()
 int32_t GC_MASTER_RET_LIST_SerializedSize_m22289 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_LIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_MASTER_RET_LIST_WriteTo_m22290 (GC_MASTER_RET_LIST_t3261 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_MASTER_RET_LIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_MASTER_RET_LIST_MergeFrom_m22291 (GC_MASTER_RET_LIST_t3261 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_LIST::IsInitialized()
 bool GC_MASTER_RET_LIST_IsInitialized_m22292 (GC_MASTER_RET_LIST_t3261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
