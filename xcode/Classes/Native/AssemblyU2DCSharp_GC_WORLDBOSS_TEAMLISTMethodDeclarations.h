#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_WORLDBOSS_TEAMLIST
struct GC_WORLDBOSS_TEAMLIST_t3191;
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

// System.Void GC_WORLDBOSS_TEAMLIST::.ctor()
 void GC_WORLDBOSS_TEAMLIST__ctor_m21020 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WORLDBOSS_TEAMLIST::get_HasCurpage()
 bool GC_WORLDBOSS_TEAMLIST_get_HasCurpage_m21021 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::get_Curpage()
 int32_t GC_WORLDBOSS_TEAMLIST_get_Curpage_m21022 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WORLDBOSS_TEAMLIST::set_Curpage(System.Int32)
 void GC_WORLDBOSS_TEAMLIST_set_Curpage_m21023 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WORLDBOSS_TEAMLIST::SetCurpage(System.Int32)
 void GC_WORLDBOSS_TEAMLIST_SetCurpage_m21024 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WORLDBOSS_TEAMLIST::get_HasTotalpage()
 bool GC_WORLDBOSS_TEAMLIST_get_HasTotalpage_m21025 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::get_Totalpage()
 int32_t GC_WORLDBOSS_TEAMLIST_get_Totalpage_m21026 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WORLDBOSS_TEAMLIST::set_Totalpage(System.Int32)
 void GC_WORLDBOSS_TEAMLIST_set_Totalpage_m21027 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WORLDBOSS_TEAMLIST::SetTotalpage(System.Int32)
 void GC_WORLDBOSS_TEAMLIST_SetTotalpage_m21028 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_WORLDBOSS_TEAMLIST::get_teamIdList()
 Object_t* GC_WORLDBOSS_TEAMLIST_get_teamIdList_m21029 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::get_teamIdCount()
 int32_t GC_WORLDBOSS_TEAMLIST_get_teamIdCount_m21030 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::GetTeamId(System.Int32)
 int32_t GC_WORLDBOSS_TEAMLIST_GetTeamId_m21031 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WORLDBOSS_TEAMLIST::AddTeamId(System.Int32)
 void GC_WORLDBOSS_TEAMLIST_AddTeamId_m21032 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_WORLDBOSS_TEAMLIST::get_scoreList()
 Object_t* GC_WORLDBOSS_TEAMLIST_get_scoreList_m21033 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::get_scoreCount()
 int32_t GC_WORLDBOSS_TEAMLIST_get_scoreCount_m21034 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::GetScore(System.Int32)
 int32_t GC_WORLDBOSS_TEAMLIST_GetScore_m21035 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WORLDBOSS_TEAMLIST::AddScore(System.Int32)
 void GC_WORLDBOSS_TEAMLIST_AddScore_m21036 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_WORLDBOSS_TEAMLIST::get_posList()
 Object_t* GC_WORLDBOSS_TEAMLIST_get_posList_m21037 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::get_posCount()
 int32_t GC_WORLDBOSS_TEAMLIST_get_posCount_m21038 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::GetPos(System.Int32)
 int32_t GC_WORLDBOSS_TEAMLIST_GetPos_m21039 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WORLDBOSS_TEAMLIST::AddPos(System.Int32)
 void GC_WORLDBOSS_TEAMLIST_AddPos_m21040 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_WORLDBOSS_TEAMLIST::get_leadernameList()
 Object_t* GC_WORLDBOSS_TEAMLIST_get_leadernameList_m21041 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::get_leadernameCount()
 int32_t GC_WORLDBOSS_TEAMLIST_get_leadernameCount_m21042 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_WORLDBOSS_TEAMLIST::GetLeadername(System.Int32)
 String_t* GC_WORLDBOSS_TEAMLIST_GetLeadername_m21043 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WORLDBOSS_TEAMLIST::AddLeadername(System.String)
 void GC_WORLDBOSS_TEAMLIST_AddLeadername_m21044 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_WORLDBOSS_TEAMLIST::get_perList()
 Object_t* GC_WORLDBOSS_TEAMLIST_get_perList_m21045 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::get_perCount()
 int32_t GC_WORLDBOSS_TEAMLIST_get_perCount_m21046 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::GetPer(System.Int32)
 int32_t GC_WORLDBOSS_TEAMLIST_GetPer_m21047 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WORLDBOSS_TEAMLIST::AddPer(System.Int32)
 void GC_WORLDBOSS_TEAMLIST_AddPer_m21048 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_WORLDBOSS_TEAMLIST::get_cdList()
 Object_t* GC_WORLDBOSS_TEAMLIST_get_cdList_m21049 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::get_cdCount()
 int32_t GC_WORLDBOSS_TEAMLIST_get_cdCount_m21050 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::GetCd(System.Int32)
 int32_t GC_WORLDBOSS_TEAMLIST_GetCd_m21051 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WORLDBOSS_TEAMLIST::AddCd(System.Int32)
 void GC_WORLDBOSS_TEAMLIST_AddCd_m21052 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_WORLDBOSS_TEAMLIST::SerializedSize()
 int32_t GC_WORLDBOSS_TEAMLIST_SerializedSize_m21053 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_WORLDBOSS_TEAMLIST::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_WORLDBOSS_TEAMLIST_WriteTo_m21054 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_WORLDBOSS_TEAMLIST::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_WORLDBOSS_TEAMLIST_MergeFrom_m21055 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_WORLDBOSS_TEAMLIST::IsInitialized()
 bool GC_WORLDBOSS_TEAMLIST_IsInitialized_m21056 (GC_WORLDBOSS_TEAMLIST_t3191 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
