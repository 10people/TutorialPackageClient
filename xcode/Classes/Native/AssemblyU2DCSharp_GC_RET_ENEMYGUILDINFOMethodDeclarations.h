#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_ENEMYGUILDINFO
struct GC_RET_ENEMYGUILDINFO_t3425;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RET_ENEMYGUILDINFO::.ctor()
 void GC_RET_ENEMYGUILDINFO__ctor_m25119 (GC_RET_ENEMYGUILDINFO_t3425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ENEMYGUILDINFO::get_HasCurEnemyNum()
 bool GC_RET_ENEMYGUILDINFO_get_HasCurEnemyNum_m25120 (GC_RET_ENEMYGUILDINFO_t3425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ENEMYGUILDINFO::get_CurEnemyNum()
 int32_t GC_RET_ENEMYGUILDINFO_get_CurEnemyNum_m25121 (GC_RET_ENEMYGUILDINFO_t3425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ENEMYGUILDINFO::set_CurEnemyNum(System.Int32)
 void GC_RET_ENEMYGUILDINFO_set_CurEnemyNum_m25122 (GC_RET_ENEMYGUILDINFO_t3425 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ENEMYGUILDINFO::SetCurEnemyNum(System.Int32)
 void GC_RET_ENEMYGUILDINFO_SetCurEnemyNum_m25123 (GC_RET_ENEMYGUILDINFO_t3425 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_ENEMYGUILDINFO::get_enemyGuildNameList()
 Object_t* GC_RET_ENEMYGUILDINFO_get_enemyGuildNameList_m25124 (GC_RET_ENEMYGUILDINFO_t3425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ENEMYGUILDINFO::get_enemyGuildNameCount()
 int32_t GC_RET_ENEMYGUILDINFO_get_enemyGuildNameCount_m25125 (GC_RET_ENEMYGUILDINFO_t3425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_ENEMYGUILDINFO::GetEnemyGuildName(System.Int32)
 String_t* GC_RET_ENEMYGUILDINFO_GetEnemyGuildName_m25126 (GC_RET_ENEMYGUILDINFO_t3425 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ENEMYGUILDINFO::AddEnemyGuildName(System.String)
 void GC_RET_ENEMYGUILDINFO_AddEnemyGuildName_m25127 (GC_RET_ENEMYGUILDINFO_t3425 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_ENEMYGUILDINFO::SerializedSize()
 int32_t GC_RET_ENEMYGUILDINFO_SerializedSize_m25128 (GC_RET_ENEMYGUILDINFO_t3425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_ENEMYGUILDINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_ENEMYGUILDINFO_WriteTo_m25129 (GC_RET_ENEMYGUILDINFO_t3425 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_ENEMYGUILDINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_ENEMYGUILDINFO_MergeFrom_m25130 (GC_RET_ENEMYGUILDINFO_t3425 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_ENEMYGUILDINFO::IsInitialized()
 bool GC_RET_ENEMYGUILDINFO_IsInitialized_m25131 (GC_RET_ENEMYGUILDINFO_t3425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
