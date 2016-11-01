#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_MASTER_RET_INFO
struct GC_MASTER_RET_INFO_t3263;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_MASTER_RET_INFO::.ctor()
 void GC_MASTER_RET_INFO__ctor_m22302 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterGuid()
 bool GC_MASTER_RET_INFO_get_HasMasterGuid_m22303 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_MASTER_RET_INFO::get_MasterGuid()
 uint64_t GC_MASTER_RET_INFO_get_MasterGuid_m22304 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_MasterGuid(System.UInt64)
 void GC_MASTER_RET_INFO_set_MasterGuid_m22305 (GC_MASTER_RET_INFO_t3263 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterGuid(System.UInt64)
 void GC_MASTER_RET_INFO_SetMasterGuid_m22306 (GC_MASTER_RET_INFO_t3263 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterName()
 bool GC_MASTER_RET_INFO_get_HasMasterName_m22307 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_INFO::get_MasterName()
 String_t* GC_MASTER_RET_INFO_get_MasterName_m22308 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_MasterName(System.String)
 void GC_MASTER_RET_INFO_set_MasterName_m22309 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterName(System.String)
 void GC_MASTER_RET_INFO_SetMasterName_m22310 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterChiefGuid()
 bool GC_MASTER_RET_INFO_get_HasMasterChiefGuid_m22311 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_MASTER_RET_INFO::get_MasterChiefGuid()
 uint64_t GC_MASTER_RET_INFO_get_MasterChiefGuid_m22312 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_MasterChiefGuid(System.UInt64)
 void GC_MASTER_RET_INFO_set_MasterChiefGuid_m22313 (GC_MASTER_RET_INFO_t3263 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterChiefGuid(System.UInt64)
 void GC_MASTER_RET_INFO_SetMasterChiefGuid_m22314 (GC_MASTER_RET_INFO_t3263 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterNotice()
 bool GC_MASTER_RET_INFO_get_HasMasterNotice_m22315 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_INFO::get_MasterNotice()
 String_t* GC_MASTER_RET_INFO_get_MasterNotice_m22316 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_MasterNotice(System.String)
 void GC_MASTER_RET_INFO_set_MasterNotice_m22317 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterNotice(System.String)
 void GC_MASTER_RET_INFO_SetMasterNotice_m22318 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasCreateTime()
 bool GC_MASTER_RET_INFO_get_HasCreateTime_m22319 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_CreateTime()
 int32_t GC_MASTER_RET_INFO_get_CreateTime_m22320 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_CreateTime(System.Int32)
 void GC_MASTER_RET_INFO_set_CreateTime_m22321 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetCreateTime(System.Int32)
 void GC_MASTER_RET_INFO_SetCreateTime_m22322 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMemberNum()
 bool GC_MASTER_RET_INFO_get_HasMemberNum_m22323 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_MemberNum()
 int32_t GC_MASTER_RET_INFO_get_MemberNum_m22324 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_MemberNum(System.Int32)
 void GC_MASTER_RET_INFO_set_MemberNum_m22325 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMemberNum(System.Int32)
 void GC_MASTER_RET_INFO_SetMemberNum_m22326 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterTorch()
 bool GC_MASTER_RET_INFO_get_HasMasterTorch_m22327 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_MasterTorch()
 int32_t GC_MASTER_RET_INFO_get_MasterTorch_m22328 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_MasterTorch(System.Int32)
 void GC_MASTER_RET_INFO_set_MasterTorch_m22329 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterTorch(System.Int32)
 void GC_MASTER_RET_INFO_SetMasterTorch_m22330 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_MASTER_RET_INFO::get_memberGuidList()
 Object_t* GC_MASTER_RET_INFO_get_memberGuidList_m22331 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_memberGuidCount()
 int32_t GC_MASTER_RET_INFO_get_memberGuidCount_m22332 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_MASTER_RET_INFO::GetMemberGuid(System.Int32)
 uint64_t GC_MASTER_RET_INFO_GetMemberGuid_m22333 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::AddMemberGuid(System.UInt64)
 void GC_MASTER_RET_INFO_AddMemberGuid_m22334 (GC_MASTER_RET_INFO_t3263 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_MASTER_RET_INFO::get_memberNameList()
 Object_t* GC_MASTER_RET_INFO_get_memberNameList_m22335 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_memberNameCount()
 int32_t GC_MASTER_RET_INFO_get_memberNameCount_m22336 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_INFO::GetMemberName(System.Int32)
 String_t* GC_MASTER_RET_INFO_GetMemberName_m22337 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::AddMemberName(System.String)
 void GC_MASTER_RET_INFO_AddMemberName_m22338 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_MASTER_RET_INFO::get_memberGuildNameList()
 Object_t* GC_MASTER_RET_INFO_get_memberGuildNameList_m22339 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_memberGuildNameCount()
 int32_t GC_MASTER_RET_INFO_get_memberGuildNameCount_m22340 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_INFO::GetMemberGuildName(System.Int32)
 String_t* GC_MASTER_RET_INFO_GetMemberGuildName_m22341 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::AddMemberGuildName(System.String)
 void GC_MASTER_RET_INFO_AddMemberGuildName_m22342 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_INFO::get_memberVIPList()
 Object_t* GC_MASTER_RET_INFO_get_memberVIPList_m22343 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_memberVIPCount()
 int32_t GC_MASTER_RET_INFO_get_memberVIPCount_m22344 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::GetMemberVIP(System.Int32)
 int32_t GC_MASTER_RET_INFO_GetMemberVIP_m22345 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::AddMemberVIP(System.Int32)
 void GC_MASTER_RET_INFO_AddMemberVIP_m22346 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_INFO::get_memberProfList()
 Object_t* GC_MASTER_RET_INFO_get_memberProfList_m22347 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_memberProfCount()
 int32_t GC_MASTER_RET_INFO_get_memberProfCount_m22348 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::GetMemberProf(System.Int32)
 int32_t GC_MASTER_RET_INFO_GetMemberProf_m22349 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::AddMemberProf(System.Int32)
 void GC_MASTER_RET_INFO_AddMemberProf_m22350 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_INFO::get_memberLevelList()
 Object_t* GC_MASTER_RET_INFO_get_memberLevelList_m22351 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_memberLevelCount()
 int32_t GC_MASTER_RET_INFO_get_memberLevelCount_m22352 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::GetMemberLevel(System.Int32)
 int32_t GC_MASTER_RET_INFO_GetMemberLevel_m22353 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::AddMemberLevel(System.Int32)
 void GC_MASTER_RET_INFO_AddMemberLevel_m22354 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_INFO::get_memberCombatValueList()
 Object_t* GC_MASTER_RET_INFO_get_memberCombatValueList_m22355 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_memberCombatValueCount()
 int32_t GC_MASTER_RET_INFO_get_memberCombatValueCount_m22356 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::GetMemberCombatValue(System.Int32)
 int32_t GC_MASTER_RET_INFO_GetMemberCombatValue_m22357 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::AddMemberCombatValue(System.Int32)
 void GC_MASTER_RET_INFO_AddMemberCombatValue_m22358 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_INFO::get_memberTorchList()
 Object_t* GC_MASTER_RET_INFO_get_memberTorchList_m22359 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_memberTorchCount()
 int32_t GC_MASTER_RET_INFO_get_memberTorchCount_m22360 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::GetMemberTorch(System.Int32)
 int32_t GC_MASTER_RET_INFO_GetMemberTorch_m22361 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::AddMemberTorch(System.Int32)
 void GC_MASTER_RET_INFO_AddMemberTorch_m22362 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_INFO::get_memberLastLoginList()
 Object_t* GC_MASTER_RET_INFO_get_memberLastLoginList_m22363 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_memberLastLoginCount()
 int32_t GC_MASTER_RET_INFO_get_memberLastLoginCount_m22364 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::GetMemberLastLogin(System.Int32)
 int32_t GC_MASTER_RET_INFO_GetMemberLastLogin_m22365 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::AddMemberLastLogin(System.Int32)
 void GC_MASTER_RET_INFO_AddMemberLastLogin_m22366 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_INFO::get_memberStateList()
 Object_t* GC_MASTER_RET_INFO_get_memberStateList_m22367 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_memberStateCount()
 int32_t GC_MASTER_RET_INFO_get_memberStateCount_m22368 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::GetMemberState(System.Int32)
 int32_t GC_MASTER_RET_INFO_GetMemberState_m22369 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::AddMemberState(System.Int32)
 void GC_MASTER_RET_INFO_AddMemberState_m22370 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskill1()
 bool GC_MASTER_RET_INFO_get_HasMasterskill1_m22371 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_Masterskill1()
 int32_t GC_MASTER_RET_INFO_get_Masterskill1_m22372 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskill1(System.Int32)
 void GC_MASTER_RET_INFO_set_Masterskill1_m22373 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskill1(System.Int32)
 void GC_MASTER_RET_INFO_SetMasterskill1_m22374 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskill2()
 bool GC_MASTER_RET_INFO_get_HasMasterskill2_m22375 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_Masterskill2()
 int32_t GC_MASTER_RET_INFO_get_Masterskill2_m22376 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskill2(System.Int32)
 void GC_MASTER_RET_INFO_set_Masterskill2_m22377 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskill2(System.Int32)
 void GC_MASTER_RET_INFO_SetMasterskill2_m22378 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskill3()
 bool GC_MASTER_RET_INFO_get_HasMasterskill3_m22379 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_Masterskill3()
 int32_t GC_MASTER_RET_INFO_get_Masterskill3_m22380 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskill3(System.Int32)
 void GC_MASTER_RET_INFO_set_Masterskill3_m22381 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskill3(System.Int32)
 void GC_MASTER_RET_INFO_SetMasterskill3_m22382 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskill4()
 bool GC_MASTER_RET_INFO_get_HasMasterskill4_m22383 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_Masterskill4()
 int32_t GC_MASTER_RET_INFO_get_Masterskill4_m22384 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskill4(System.Int32)
 void GC_MASTER_RET_INFO_set_Masterskill4_m22385 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskill4(System.Int32)
 void GC_MASTER_RET_INFO_SetMasterskill4_m22386 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskillname1()
 bool GC_MASTER_RET_INFO_get_HasMasterskillname1_m22387 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_INFO::get_Masterskillname1()
 String_t* GC_MASTER_RET_INFO_get_Masterskillname1_m22388 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskillname1(System.String)
 void GC_MASTER_RET_INFO_set_Masterskillname1_m22389 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskillname1(System.String)
 void GC_MASTER_RET_INFO_SetMasterskillname1_m22390 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskillname2()
 bool GC_MASTER_RET_INFO_get_HasMasterskillname2_m22391 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_INFO::get_Masterskillname2()
 String_t* GC_MASTER_RET_INFO_get_Masterskillname2_m22392 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskillname2(System.String)
 void GC_MASTER_RET_INFO_set_Masterskillname2_m22393 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskillname2(System.String)
 void GC_MASTER_RET_INFO_SetMasterskillname2_m22394 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskillname3()
 bool GC_MASTER_RET_INFO_get_HasMasterskillname3_m22395 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_INFO::get_Masterskillname3()
 String_t* GC_MASTER_RET_INFO_get_Masterskillname3_m22396 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskillname3(System.String)
 void GC_MASTER_RET_INFO_set_Masterskillname3_m22397 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskillname3(System.String)
 void GC_MASTER_RET_INFO_SetMasterskillname3_m22398 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskillname4()
 bool GC_MASTER_RET_INFO_get_HasMasterskillname4_m22399 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_INFO::get_Masterskillname4()
 String_t* GC_MASTER_RET_INFO_get_Masterskillname4_m22400 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskillname4(System.String)
 void GC_MASTER_RET_INFO_set_Masterskillname4_m22401 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskillname4(System.String)
 void GC_MASTER_RET_INFO_SetMasterskillname4_m22402 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_MASTER_RET_INFO::get_memberIsReserveList()
 Object_t* GC_MASTER_RET_INFO_get_memberIsReserveList_m22403 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_memberIsReserveCount()
 int32_t GC_MASTER_RET_INFO_get_memberIsReserveCount_m22404 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::GetMemberIsReserve(System.Int32)
 int32_t GC_MASTER_RET_INFO_GetMemberIsReserve_m22405 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::AddMemberIsReserve(System.Int32)
 void GC_MASTER_RET_INFO_AddMemberIsReserve_m22406 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskill5()
 bool GC_MASTER_RET_INFO_get_HasMasterskill5_m22407 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_Masterskill5()
 int32_t GC_MASTER_RET_INFO_get_Masterskill5_m22408 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskill5(System.Int32)
 void GC_MASTER_RET_INFO_set_Masterskill5_m22409 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskill5(System.Int32)
 void GC_MASTER_RET_INFO_SetMasterskill5_m22410 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskill6()
 bool GC_MASTER_RET_INFO_get_HasMasterskill6_m22411 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::get_Masterskill6()
 int32_t GC_MASTER_RET_INFO_get_Masterskill6_m22412 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskill6(System.Int32)
 void GC_MASTER_RET_INFO_set_Masterskill6_m22413 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskill6(System.Int32)
 void GC_MASTER_RET_INFO_SetMasterskill6_m22414 (GC_MASTER_RET_INFO_t3263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskillname5()
 bool GC_MASTER_RET_INFO_get_HasMasterskillname5_m22415 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_INFO::get_Masterskillname5()
 String_t* GC_MASTER_RET_INFO_get_Masterskillname5_m22416 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskillname5(System.String)
 void GC_MASTER_RET_INFO_set_Masterskillname5_m22417 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskillname5(System.String)
 void GC_MASTER_RET_INFO_SetMasterskillname5_m22418 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::get_HasMasterskillname6()
 bool GC_MASTER_RET_INFO_get_HasMasterskillname6_m22419 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_MASTER_RET_INFO::get_Masterskillname6()
 String_t* GC_MASTER_RET_INFO_get_Masterskillname6_m22420 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::set_Masterskillname6(System.String)
 void GC_MASTER_RET_INFO_set_Masterskillname6_m22421 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::SetMasterskillname6(System.String)
 void GC_MASTER_RET_INFO_SetMasterskillname6_m22422 (GC_MASTER_RET_INFO_t3263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_MASTER_RET_INFO::SerializedSize()
 int32_t GC_MASTER_RET_INFO_SerializedSize_m22423 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_MASTER_RET_INFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_MASTER_RET_INFO_WriteTo_m22424 (GC_MASTER_RET_INFO_t3263 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_MASTER_RET_INFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_MASTER_RET_INFO_MergeFrom_m22425 (GC_MASTER_RET_INFO_t3263 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_MASTER_RET_INFO::IsInitialized()
 bool GC_MASTER_RET_INFO_IsInitialized_m22426 (GC_MASTER_RET_INFO_t3263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
