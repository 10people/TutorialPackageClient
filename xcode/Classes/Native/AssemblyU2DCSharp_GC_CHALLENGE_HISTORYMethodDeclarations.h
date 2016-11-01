#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_CHALLENGE_HISTORY
struct GC_CHALLENGE_HISTORY_t3112;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t2928;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.UInt32>
struct IList_1_t2934;
// System.String
struct String_t;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_CHALLENGE_HISTORY::.ctor()
 void GC_CHALLENGE_HISTORY__ctor_m19993 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_CHALLENGE_HISTORY::get_userGuidList()
 Object_t* GC_CHALLENGE_HISTORY_get_userGuidList_m19994 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGE_HISTORY::get_userGuidCount()
 int32_t GC_CHALLENGE_HISTORY_get_userGuidCount_m19995 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_CHALLENGE_HISTORY::GetUserGuid(System.Int32)
 uint64_t GC_CHALLENGE_HISTORY_GetUserGuid_m19996 (GC_CHALLENGE_HISTORY_t3112 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGE_HISTORY::AddUserGuid(System.UInt64)
 void GC_CHALLENGE_HISTORY_AddUserGuid_m19997 (GC_CHALLENGE_HISTORY_t3112 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> GC_CHALLENGE_HISTORY::get_nameList()
 Object_t* GC_CHALLENGE_HISTORY_get_nameList_m19998 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGE_HISTORY::get_nameCount()
 int32_t GC_CHALLENGE_HISTORY_get_nameCount_m19999 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GC_CHALLENGE_HISTORY::GetName(System.Int32)
 String_t* GC_CHALLENGE_HISTORY_GetName_m20000 (GC_CHALLENGE_HISTORY_t3112 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGE_HISTORY::AddName(System.String)
 void GC_CHALLENGE_HISTORY_AddName_m20001 (GC_CHALLENGE_HISTORY_t3112 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_CHALLENGE_HISTORY::get_isLoseList()
 Object_t* GC_CHALLENGE_HISTORY_get_isLoseList_m20002 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGE_HISTORY::get_isLoseCount()
 int32_t GC_CHALLENGE_HISTORY_get_isLoseCount_m20003 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGE_HISTORY::GetIsLose(System.Int32)
 int32_t GC_CHALLENGE_HISTORY_GetIsLose_m20004 (GC_CHALLENGE_HISTORY_t3112 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGE_HISTORY::AddIsLose(System.Int32)
 void GC_CHALLENGE_HISTORY_AddIsLose_m20005 (GC_CHALLENGE_HISTORY_t3112 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt32> GC_CHALLENGE_HISTORY::get_occurTimeList()
 Object_t* GC_CHALLENGE_HISTORY_get_occurTimeList_m20006 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGE_HISTORY::get_occurTimeCount()
 int32_t GC_CHALLENGE_HISTORY_get_occurTimeCount_m20007 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GC_CHALLENGE_HISTORY::GetOccurTime(System.Int32)
 uint32_t GC_CHALLENGE_HISTORY_GetOccurTime_m20008 (GC_CHALLENGE_HISTORY_t3112 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGE_HISTORY::AddOccurTime(System.UInt32)
 void GC_CHALLENGE_HISTORY_AddOccurTime_m20009 (GC_CHALLENGE_HISTORY_t3112 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_CHALLENGE_HISTORY::get_isActiveList()
 Object_t* GC_CHALLENGE_HISTORY_get_isActiveList_m20010 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGE_HISTORY::get_isActiveCount()
 int32_t GC_CHALLENGE_HISTORY_get_isActiveCount_m20011 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGE_HISTORY::GetIsActive(System.Int32)
 int32_t GC_CHALLENGE_HISTORY_GetIsActive_m20012 (GC_CHALLENGE_HISTORY_t3112 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGE_HISTORY::AddIsActive(System.Int32)
 void GC_CHALLENGE_HISTORY_AddIsActive_m20013 (GC_CHALLENGE_HISTORY_t3112 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_CHALLENGE_HISTORY::get_rankPosList()
 Object_t* GC_CHALLENGE_HISTORY_get_rankPosList_m20014 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGE_HISTORY::get_rankPosCount()
 int32_t GC_CHALLENGE_HISTORY_get_rankPosCount_m20015 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGE_HISTORY::GetRankPos(System.Int32)
 int32_t GC_CHALLENGE_HISTORY_GetRankPos_m20016 (GC_CHALLENGE_HISTORY_t3112 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGE_HISTORY::AddRankPos(System.Int32)
 void GC_CHALLENGE_HISTORY_AddRankPos_m20017 (GC_CHALLENGE_HISTORY_t3112 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_CHALLENGE_HISTORY::SerializedSize()
 int32_t GC_CHALLENGE_HISTORY_SerializedSize_m20018 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_CHALLENGE_HISTORY::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_CHALLENGE_HISTORY_WriteTo_m20019 (GC_CHALLENGE_HISTORY_t3112 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_CHALLENGE_HISTORY::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_CHALLENGE_HISTORY_MergeFrom_m20020 (GC_CHALLENGE_HISTORY_t3112 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_CHALLENGE_HISTORY::IsInitialized()
 bool GC_CHALLENGE_HISTORY_IsInitialized_m20021 (GC_CHALLENGE_HISTORY_t3112 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
