#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_GUILD_JOB_CHANGE
struct CG_GUILD_JOB_CHANGE_t3249;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_GUILD_JOB_CHANGE::.ctor()
 void CG_GUILD_JOB_CHANGE__ctor_m22093 (CG_GUILD_JOB_CHANGE_t3249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> CG_GUILD_JOB_CHANGE::get_approverList()
 Object_t* CG_GUILD_JOB_CHANGE_get_approverList_m22094 (CG_GUILD_JOB_CHANGE_t3249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_JOB_CHANGE::get_approverCount()
 int32_t CG_GUILD_JOB_CHANGE_get_approverCount_m22095 (CG_GUILD_JOB_CHANGE_t3249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 CG_GUILD_JOB_CHANGE::GetApprover(System.Int32)
 uint64_t CG_GUILD_JOB_CHANGE_GetApprover_m22096 (CG_GUILD_JOB_CHANGE_t3249 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOB_CHANGE::AddApprover(System.UInt64)
 void CG_GUILD_JOB_CHANGE_AddApprover_m22097 (CG_GUILD_JOB_CHANGE_t3249 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_JOB_CHANGE::get_HasJobID()
 bool CG_GUILD_JOB_CHANGE_get_HasJobID_m22098 (CG_GUILD_JOB_CHANGE_t3249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_JOB_CHANGE::get_JobID()
 int32_t CG_GUILD_JOB_CHANGE_get_JobID_m22099 (CG_GUILD_JOB_CHANGE_t3249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOB_CHANGE::set_JobID(System.Int32)
 void CG_GUILD_JOB_CHANGE_set_JobID_m22100 (CG_GUILD_JOB_CHANGE_t3249 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOB_CHANGE::SetJobID(System.Int32)
 void CG_GUILD_JOB_CHANGE_SetJobID_m22101 (CG_GUILD_JOB_CHANGE_t3249 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_GUILD_JOB_CHANGE::SerializedSize()
 int32_t CG_GUILD_JOB_CHANGE_SerializedSize_m22102 (CG_GUILD_JOB_CHANGE_t3249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_GUILD_JOB_CHANGE::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_GUILD_JOB_CHANGE_WriteTo_m22103 (CG_GUILD_JOB_CHANGE_t3249 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_GUILD_JOB_CHANGE::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_GUILD_JOB_CHANGE_MergeFrom_m22104 (CG_GUILD_JOB_CHANGE_t3249 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_GUILD_JOB_CHANGE::IsInitialized()
 bool CG_GUILD_JOB_CHANGE_IsInitialized_m22105 (CG_GUILD_JOB_CHANGE_t3249 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
