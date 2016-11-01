#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_FINALGUILDWARPOINTINFO
struct GC_RET_FINALGUILDWARPOINTINFO_t1482;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_RET_FINALGUILDWARPOINTINFO::.ctor()
 void GC_RET_FINALGUILDWARPOINTINFO__ctor_m23277 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_FINALGUILDWARPOINTINFO::get_pointTypeList()
 Object_t* GC_RET_FINALGUILDWARPOINTINFO_get_pointTypeList_m23278 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::get_pointTypeCount()
 int32_t GC_RET_FINALGUILDWARPOINTINFO_get_pointTypeCount_m23279 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::GetPointType(System.Int32)
 int32_t GC_RET_FINALGUILDWARPOINTINFO_GetPointType_m23280 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::AddPointType(System.Int32)
 void GC_RET_FINALGUILDWARPOINTINFO_AddPointType_m23281 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_FINALGUILDWARPOINTINFO::get_pointScoreList()
 Object_t* GC_RET_FINALGUILDWARPOINTINFO_get_pointScoreList_m23282 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::get_pointScoreCount()
 int32_t GC_RET_FINALGUILDWARPOINTINFO_get_pointScoreCount_m23283 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::GetPointScore(System.Int32)
 int32_t GC_RET_FINALGUILDWARPOINTINFO_GetPointScore_m23284 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::AddPointScore(System.Int32)
 void GC_RET_FINALGUILDWARPOINTINFO_AddPointScore_m23285 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_RET_FINALGUILDWARPOINTINFO::get_pointOwnGuildGuidList()
 Object_t* GC_RET_FINALGUILDWARPOINTINFO_get_pointOwnGuildGuidList_m23286 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::get_pointOwnGuildGuidCount()
 int32_t GC_RET_FINALGUILDWARPOINTINFO_get_pointOwnGuildGuidCount_m23287 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_RET_FINALGUILDWARPOINTINFO::GetPointOwnGuildGuid(System.Int32)
 uint64_t GC_RET_FINALGUILDWARPOINTINFO_GetPointOwnGuildGuid_m23288 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::AddPointOwnGuildGuid(System.UInt64)
 void GC_RET_FINALGUILDWARPOINTINFO_AddPointOwnGuildGuid_m23289 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_FINALGUILDWARPOINTINFO::get_isFightingList()
 Object_t* GC_RET_FINALGUILDWARPOINTINFO_get_isFightingList_m23290 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::get_isFightingCount()
 int32_t GC_RET_FINALGUILDWARPOINTINFO_get_isFightingCount_m23291 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::GetIsFighting(System.Int32)
 int32_t GC_RET_FINALGUILDWARPOINTINFO_GetIsFighting_m23292 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::AddIsFighting(System.Int32)
 void GC_RET_FINALGUILDWARPOINTINFO_AddIsFighting_m23293 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_FINALGUILDWARPOINTINFO::get_HasMyGuildScore()
 bool GC_RET_FINALGUILDWARPOINTINFO_get_HasMyGuildScore_m23294 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::get_MyGuildScore()
 int32_t GC_RET_FINALGUILDWARPOINTINFO_get_MyGuildScore_m23295 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::set_MyGuildScore(System.Int32)
 void GC_RET_FINALGUILDWARPOINTINFO_set_MyGuildScore_m23296 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::SetMyGuildScore(System.Int32)
 void GC_RET_FINALGUILDWARPOINTINFO_SetMyGuildScore_m23297 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_FINALGUILDWARPOINTINFO::get_HasFightGuildScore()
 bool GC_RET_FINALGUILDWARPOINTINFO_get_HasFightGuildScore_m23298 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::get_FightGuildScore()
 int32_t GC_RET_FINALGUILDWARPOINTINFO_get_FightGuildScore_m23299 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::set_FightGuildScore(System.Int32)
 void GC_RET_FINALGUILDWARPOINTINFO_set_FightGuildScore_m23300 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::SetFightGuildScore(System.Int32)
 void GC_RET_FINALGUILDWARPOINTINFO_SetFightGuildScore_m23301 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_FINALGUILDWARPOINTINFO::get_HasMyGuildName()
 bool GC_RET_FINALGUILDWARPOINTINFO_get_HasMyGuildName_m23302 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_FINALGUILDWARPOINTINFO::get_MyGuildName()
 String_t* GC_RET_FINALGUILDWARPOINTINFO_get_MyGuildName_m23303 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::set_MyGuildName(System.String)
 void GC_RET_FINALGUILDWARPOINTINFO_set_MyGuildName_m23304 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::SetMyGuildName(System.String)
 void GC_RET_FINALGUILDWARPOINTINFO_SetMyGuildName_m23305 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_FINALGUILDWARPOINTINFO::get_HasFightGuildBName()
 bool GC_RET_FINALGUILDWARPOINTINFO_get_HasFightGuildBName_m23306 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_FINALGUILDWARPOINTINFO::get_FightGuildBName()
 String_t* GC_RET_FINALGUILDWARPOINTINFO_get_FightGuildBName_m23307 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::set_FightGuildBName(System.String)
 void GC_RET_FINALGUILDWARPOINTINFO_set_FightGuildBName_m23308 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::SetFightGuildBName(System.String)
 void GC_RET_FINALGUILDWARPOINTINFO_SetFightGuildBName_m23309 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARPOINTINFO::SerializedSize()
 int32_t GC_RET_FINALGUILDWARPOINTINFO_SerializedSize_m23310 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARPOINTINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_FINALGUILDWARPOINTINFO_WriteTo_m23311 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_FINALGUILDWARPOINTINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_FINALGUILDWARPOINTINFO_MergeFrom_m23312 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_FINALGUILDWARPOINTINFO::IsInitialized()
 bool GC_RET_FINALGUILDWARPOINTINFO_IsInitialized_m23313 (GC_RET_FINALGUILDWARPOINTINFO_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
