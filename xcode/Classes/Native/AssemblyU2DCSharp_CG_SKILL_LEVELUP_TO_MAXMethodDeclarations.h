#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CG_SKILL_LEVELUP_TO_MAX
struct CG_SKILL_LEVELUP_TO_MAX_t1748;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void CG_SKILL_LEVELUP_TO_MAX::.ctor()
 void CG_SKILL_LEVELUP_TO_MAX__ctor_m28105 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SKILL_LEVELUP_TO_MAX::get_HasSkillID()
 bool CG_SKILL_LEVELUP_TO_MAX_get_HasSkillID_m28106 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_SKILL_LEVELUP_TO_MAX::get_SkillID()
 int32_t CG_SKILL_LEVELUP_TO_MAX_get_SkillID_m28107 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SKILL_LEVELUP_TO_MAX::set_SkillID(System.Int32)
 void CG_SKILL_LEVELUP_TO_MAX_set_SkillID_m28108 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SKILL_LEVELUP_TO_MAX::SetSkillID(System.Int32)
 void CG_SKILL_LEVELUP_TO_MAX_SetSkillID_m28109 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SKILL_LEVELUP_TO_MAX::get_HasMaxLevel()
 bool CG_SKILL_LEVELUP_TO_MAX_get_HasMaxLevel_m28110 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_SKILL_LEVELUP_TO_MAX::get_MaxLevel()
 int32_t CG_SKILL_LEVELUP_TO_MAX_get_MaxLevel_m28111 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SKILL_LEVELUP_TO_MAX::set_MaxLevel(System.Int32)
 void CG_SKILL_LEVELUP_TO_MAX_set_MaxLevel_m28112 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SKILL_LEVELUP_TO_MAX::SetMaxLevel(System.Int32)
 void CG_SKILL_LEVELUP_TO_MAX_SetMaxLevel_m28113 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SKILL_LEVELUP_TO_MAX::get_HasConsume()
 bool CG_SKILL_LEVELUP_TO_MAX_get_HasConsume_m28114 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_SKILL_LEVELUP_TO_MAX::get_Consume()
 int32_t CG_SKILL_LEVELUP_TO_MAX_get_Consume_m28115 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SKILL_LEVELUP_TO_MAX::set_Consume(System.Int32)
 void CG_SKILL_LEVELUP_TO_MAX_set_Consume_m28116 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SKILL_LEVELUP_TO_MAX::SetConsume(System.Int32)
 void CG_SKILL_LEVELUP_TO_MAX_SetConsume_m28117 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SKILL_LEVELUP_TO_MAX::get_HasCoin()
 bool CG_SKILL_LEVELUP_TO_MAX_get_HasCoin_m28118 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_SKILL_LEVELUP_TO_MAX::get_Coin()
 int32_t CG_SKILL_LEVELUP_TO_MAX_get_Coin_m28119 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SKILL_LEVELUP_TO_MAX::set_Coin(System.Int32)
 void CG_SKILL_LEVELUP_TO_MAX_set_Coin_m28120 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SKILL_LEVELUP_TO_MAX::SetCoin(System.Int32)
 void CG_SKILL_LEVELUP_TO_MAX_SetCoin_m28121 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CG_SKILL_LEVELUP_TO_MAX::SerializedSize()
 int32_t CG_SKILL_LEVELUP_TO_MAX_SerializedSize_m28122 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CG_SKILL_LEVELUP_TO_MAX::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void CG_SKILL_LEVELUP_TO_MAX_WriteTo_m28123 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed CG_SKILL_LEVELUP_TO_MAX::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * CG_SKILL_LEVELUP_TO_MAX_MergeFrom_m28124 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CG_SKILL_LEVELUP_TO_MAX::IsInitialized()
 bool CG_SKILL_LEVELUP_TO_MAX_IsInitialized_m28125 (CG_SKILL_LEVELUP_TO_MAX_t1748 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
