#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Master
struct Master_t4778;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t1167;
// System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>
struct Dictionary_2_t4777;
// GC_MASTER_RET_INFO
struct GC_MASTER_RET_INFO_t3263;
// System.Collections.Generic.KeyValuePair`2<System.UInt64,MasterMember>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void Master::.ctor()
 void Master__ctor_m33838 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Master::IsValid()
 bool Master_IsValid_m33839 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Master::IsMasterChief()
 bool Master_IsMasterChief_m33840 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Master::CleanUp()
 void Master_CleanUp_m33841 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Master::get_MasterGuid()
 uint64_t Master_get_MasterGuid_m33842 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Master::set_MasterGuid(System.UInt64)
 void Master_set_MasterGuid_m33843 (Master_t4778 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Master::get_MasterName()
 String_t* Master_get_MasterName_m33844 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Master::set_MasterName(System.String)
 void Master_set_MasterName_m33845 (Master_t4778 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Master::get_MasterChiefGuid()
 uint64_t Master_get_MasterChiefGuid_m33846 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Master::set_MasterChiefGuid(System.UInt64)
 void Master_set_MasterChiefGuid_m33847 (Master_t4778 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Master::get_MasterChiefName()
 String_t* Master_get_MasterChiefName_m33848 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Master::set_MasterChiefName(System.String)
 void Master_set_MasterChiefName_m33849 (Master_t4778 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Master::get_MasterTorch()
 int32_t Master_get_MasterTorch_m33850 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Master::set_MasterTorch(System.Int32)
 void Master_set_MasterTorch_m33851 (Master_t4778 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Master::get_MasterNotice()
 String_t* Master_get_MasterNotice_m33852 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Master::set_MasterNotice(System.String)
 void Master_set_MasterNotice_m33853 (Master_t4778 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Master::get_MasterCreateTime()
 int32_t Master_get_MasterCreateTime_m33854 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Master::set_MasterCreateTime(System.Int32)
 void Master_set_MasterCreateTime_m33855 (Master_t4778 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Master::get_MasterOnlineNum()
 int32_t Master_get_MasterOnlineNum_m33856 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Master::set_MasterOnlineNum(System.Int32)
 void Master_set_MasterOnlineNum_m33857 (Master_t4778 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Master::get_MasterMemberNum()
 int32_t Master_get_MasterMemberNum_m33858 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Master::set_MasterMemberNum(System.Int32)
 void Master_set_MasterMemberNum_m33859 (Master_t4778 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> Master::get_MasterSkillList()
 Dictionary_2_t1167 * Master_get_MasterSkillList_m33860 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember> Master::get_MasterMemberList()
 Dictionary_2_t4777 * Master_get_MasterMemberList_m33861 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember> Master::get_MasterReserveMemberList()
 Dictionary_2_t4777 * Master_get_MasterReserveMemberList_m33862 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Master::GetActiveSkillNum()
 int32_t Master_GetActiveSkillNum_m33863 (Master_t4778 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Master::UpdateData(GC_MASTER_RET_INFO)
 void Master_UpdateData_m33864 (Master_t4778 * __this, GC_MASTER_RET_INFO_t3263 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember> Master::SortMemberListByTorch(System.Collections.Generic.Dictionary`2<System.UInt64,MasterMember>)
 Dictionary_2_t4777 * Master_SortMemberListByTorch_m33865 (Master_t4778 * __this, Dictionary_2_t4777 * ___dic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Master::<SortMemberListByTorch>m__2C(System.Collections.Generic.KeyValuePair`2<System.UInt64,MasterMember>,System.Collections.Generic.KeyValuePair`2<System.UInt64,MasterMember>)
 int32_t Master_U3CSortMemberListByTorchU3Em__2C_m33866 (Master_t4778 * __this, KeyValuePair_2_t4779  ___s2, KeyValuePair_2_t4779  ___s1, MethodInfo* method) IL2CPP_METHOD_ATTR;
