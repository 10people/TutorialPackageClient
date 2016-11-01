#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_RET_FINALGUILDWARGROUPINFO
struct GC_RET_FINALGUILDWARGROUPINFO_t1481;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
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

// System.Void GC_RET_FINALGUILDWARGROUPINFO::.ctor()
 void GC_RET_FINALGUILDWARGROUPINFO__ctor_m23244 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_FINALGUILDWARGROUPINFO::get_GroupIndexList()
 Object_t* GC_RET_FINALGUILDWARGROUPINFO_get_GroupIndexList_m23245 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::get_GroupIndexCount()
 int32_t GC_RET_FINALGUILDWARGROUPINFO_get_GroupIndexCount_m23246 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::GetGroupIndex(System.Int32)
 int32_t GC_RET_FINALGUILDWARGROUPINFO_GetGroupIndex_m23247 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARGROUPINFO::AddGroupIndex(System.Int32)
 void GC_RET_FINALGUILDWARGROUPINFO_AddGroupIndex_m23248 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_FINALGUILDWARGROUPINFO::get_GuildANameList()
 Object_t* GC_RET_FINALGUILDWARGROUPINFO_get_GuildANameList_m23249 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::get_GuildANameCount()
 int32_t GC_RET_FINALGUILDWARGROUPINFO_get_GuildANameCount_m23250 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_FINALGUILDWARGROUPINFO::GetGuildAName(System.Int32)
 String_t* GC_RET_FINALGUILDWARGROUPINFO_GetGuildAName_m23251 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARGROUPINFO::AddGuildAName(System.String)
 void GC_RET_FINALGUILDWARGROUPINFO_AddGuildAName_m23252 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_RET_FINALGUILDWARGROUPINFO::get_GuildBNameList()
 Object_t* GC_RET_FINALGUILDWARGROUPINFO_get_GuildBNameList_m23253 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::get_GuildBNameCount()
 int32_t GC_RET_FINALGUILDWARGROUPINFO_get_GuildBNameCount_m23254 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_RET_FINALGUILDWARGROUPINFO::GetGuildBName(System.Int32)
 String_t* GC_RET_FINALGUILDWARGROUPINFO_GetGuildBName_m23255 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARGROUPINFO::AddGuildBName(System.String)
 void GC_RET_FINALGUILDWARGROUPINFO_AddGuildBName_m23256 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_FINALGUILDWARGROUPINFO::get_GuildAScoreList()
 Object_t* GC_RET_FINALGUILDWARGROUPINFO_get_GuildAScoreList_m23257 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::get_GuildAScoreCount()
 int32_t GC_RET_FINALGUILDWARGROUPINFO_get_GuildAScoreCount_m23258 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::GetGuildAScore(System.Int32)
 int32_t GC_RET_FINALGUILDWARGROUPINFO_GetGuildAScore_m23259 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARGROUPINFO::AddGuildAScore(System.Int32)
 void GC_RET_FINALGUILDWARGROUPINFO_AddGuildAScore_m23260 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_FINALGUILDWARGROUPINFO::get_GuildBScoreList()
 Object_t* GC_RET_FINALGUILDWARGROUPINFO_get_GuildBScoreList_m23261 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::get_GuildBScoreCount()
 int32_t GC_RET_FINALGUILDWARGROUPINFO_get_GuildBScoreCount_m23262 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::GetGuildBScore(System.Int32)
 int32_t GC_RET_FINALGUILDWARGROUPINFO_GetGuildBScore_m23263 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARGROUPINFO::AddGuildBScore(System.Int32)
 void GC_RET_FINALGUILDWARGROUPINFO_AddGuildBScore_m23264 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_RET_FINALGUILDWARGROUPINFO::get_winTypeList()
 Object_t* GC_RET_FINALGUILDWARGROUPINFO_get_winTypeList_m23265 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::get_winTypeCount()
 int32_t GC_RET_FINALGUILDWARGROUPINFO_get_winTypeCount_m23266 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::GetWinType(System.Int32)
 int32_t GC_RET_FINALGUILDWARGROUPINFO_GetWinType_m23267 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARGROUPINFO::AddWinType(System.Int32)
 void GC_RET_FINALGUILDWARGROUPINFO_AddWinType_m23268 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_FINALGUILDWARGROUPINFO::get_HasCurRound()
 bool GC_RET_FINALGUILDWARGROUPINFO_get_HasCurRound_m23269 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::get_CurRound()
 int32_t GC_RET_FINALGUILDWARGROUPINFO_get_CurRound_m23270 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARGROUPINFO::set_CurRound(System.Int32)
 void GC_RET_FINALGUILDWARGROUPINFO_set_CurRound_m23271 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARGROUPINFO::SetCurRound(System.Int32)
 void GC_RET_FINALGUILDWARGROUPINFO_SetCurRound_m23272 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_RET_FINALGUILDWARGROUPINFO::SerializedSize()
 int32_t GC_RET_FINALGUILDWARGROUPINFO_SerializedSize_m23273 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_RET_FINALGUILDWARGROUPINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_RET_FINALGUILDWARGROUPINFO_WriteTo_m23274 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_RET_FINALGUILDWARGROUPINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_RET_FINALGUILDWARGROUPINFO_MergeFrom_m23275 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_RET_FINALGUILDWARGROUPINFO::IsInitialized()
 bool GC_RET_FINALGUILDWARGROUPINFO_IsInitialized_m23276 (GC_RET_FINALGUILDWARGROUPINFO_t1481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
