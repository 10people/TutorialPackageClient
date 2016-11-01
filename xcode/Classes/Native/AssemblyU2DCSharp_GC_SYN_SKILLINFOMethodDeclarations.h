#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_SYN_SKILLINFO
struct GC_SYN_SKILLINFO_t3124;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_SYN_SKILLINFO::.ctor()
 void GC_SYN_SKILLINFO__ctor_m20131 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYN_SKILLINFO::get_skillidList()
 Object_t* GC_SYN_SKILLINFO_get_skillidList_m20132 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYN_SKILLINFO::get_skillidCount()
 int32_t GC_SYN_SKILLINFO_get_skillidCount_m20133 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYN_SKILLINFO::GetSkillid(System.Int32)
 int32_t GC_SYN_SKILLINFO_GetSkillid_m20134 (GC_SYN_SKILLINFO_t3124 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYN_SKILLINFO::AddSkillid(System.Int32)
 void GC_SYN_SKILLINFO_AddSkillid_m20135 (GC_SYN_SKILLINFO_t3124 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYN_SKILLINFO::get_skillindexList()
 Object_t* GC_SYN_SKILLINFO_get_skillindexList_m20136 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYN_SKILLINFO::get_skillindexCount()
 int32_t GC_SYN_SKILLINFO_get_skillindexCount_m20137 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYN_SKILLINFO::GetSkillindex(System.Int32)
 int32_t GC_SYN_SKILLINFO_GetSkillindex_m20138 (GC_SYN_SKILLINFO_t3124 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYN_SKILLINFO::AddSkillindex(System.Int32)
 void GC_SYN_SKILLINFO_AddSkillindex_m20139 (GC_SYN_SKILLINFO_t3124 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYN_SKILLINFO::get_CDTimeList()
 Object_t* GC_SYN_SKILLINFO_get_CDTimeList_m20140 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYN_SKILLINFO::get_CDTimeCount()
 int32_t GC_SYN_SKILLINFO_get_CDTimeCount_m20141 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYN_SKILLINFO::GetCDTime(System.Int32)
 int32_t GC_SYN_SKILLINFO_GetCDTime_m20142 (GC_SYN_SKILLINFO_t3124 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYN_SKILLINFO::AddCDTime(System.Int32)
 void GC_SYN_SKILLINFO_AddCDTime_m20143 (GC_SYN_SKILLINFO_t3124 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYN_SKILLINFO::get_HasIsSkillLevelUp()
 bool GC_SYN_SKILLINFO_get_HasIsSkillLevelUp_m20144 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYN_SKILLINFO::get_IsSkillLevelUp()
 int32_t GC_SYN_SKILLINFO_get_IsSkillLevelUp_m20145 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYN_SKILLINFO::set_IsSkillLevelUp(System.Int32)
 void GC_SYN_SKILLINFO_set_IsSkillLevelUp_m20146 (GC_SYN_SKILLINFO_t3124 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYN_SKILLINFO::SetIsSkillLevelUp(System.Int32)
 void GC_SYN_SKILLINFO_SetIsSkillLevelUp_m20147 (GC_SYN_SKILLINFO_t3124 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYN_SKILLINFO::get_skillExpList()
 Object_t* GC_SYN_SKILLINFO_get_skillExpList_m20148 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYN_SKILLINFO::get_skillExpCount()
 int32_t GC_SYN_SKILLINFO_get_skillExpCount_m20149 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYN_SKILLINFO::GetSkillExp(System.Int32)
 int32_t GC_SYN_SKILLINFO_GetSkillExp_m20150 (GC_SYN_SKILLINFO_t3124 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYN_SKILLINFO::AddSkillExp(System.Int32)
 void GC_SYN_SKILLINFO_AddSkillExp_m20151 (GC_SYN_SKILLINFO_t3124 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYN_SKILLINFO::SerializedSize()
 int32_t GC_SYN_SKILLINFO_SerializedSize_m20152 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYN_SKILLINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_SYN_SKILLINFO_WriteTo_m20153 (GC_SYN_SKILLINFO_t3124 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_SYN_SKILLINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_SYN_SKILLINFO_MergeFrom_m20154 (GC_SYN_SKILLINFO_t3124 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYN_SKILLINFO::IsInitialized()
 bool GC_SYN_SKILLINFO_IsInitialized_m20155 (GC_SYN_SKILLINFO_t3124 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
