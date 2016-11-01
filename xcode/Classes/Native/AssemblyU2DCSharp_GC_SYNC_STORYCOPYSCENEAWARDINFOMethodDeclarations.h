#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_SYNC_STORYCOPYSCENEAWARDINFO
struct GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_SYNC_STORYCOPYSCENEAWARDINFO::.ctor()
 void GC_SYNC_STORYCOPYSCENEAWARDINFO__ctor_m27924 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_STORYCOPYSCENEAWARDINFO::get_nStoryCopySceneChapterIDList()
 Object_t* GC_SYNC_STORYCOPYSCENEAWARDINFO_get_nStoryCopySceneChapterIDList_m27925 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_STORYCOPYSCENEAWARDINFO::get_nStoryCopySceneChapterIDCount()
 int32_t GC_SYNC_STORYCOPYSCENEAWARDINFO_get_nStoryCopySceneChapterIDCount_m27926 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_STORYCOPYSCENEAWARDINFO::GetNStoryCopySceneChapterID(System.Int32)
 int32_t GC_SYNC_STORYCOPYSCENEAWARDINFO_GetNStoryCopySceneChapterID_m27927 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_STORYCOPYSCENEAWARDINFO::AddNStoryCopySceneChapterID(System.Int32)
 void GC_SYNC_STORYCOPYSCENEAWARDINFO_AddNStoryCopySceneChapterID_m27928 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_STORYCOPYSCENEAWARDINFO::get_nAwardGotList()
 Object_t* GC_SYNC_STORYCOPYSCENEAWARDINFO_get_nAwardGotList_m27929 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_STORYCOPYSCENEAWARDINFO::get_nAwardGotCount()
 int32_t GC_SYNC_STORYCOPYSCENEAWARDINFO_get_nAwardGotCount_m27930 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_STORYCOPYSCENEAWARDINFO::GetNAwardGot(System.Int32)
 int32_t GC_SYNC_STORYCOPYSCENEAWARDINFO_GetNAwardGot_m27931 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_STORYCOPYSCENEAWARDINFO::AddNAwardGot(System.Int32)
 void GC_SYNC_STORYCOPYSCENEAWARDINFO_AddNAwardGot_m27932 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_SYNC_STORYCOPYSCENEAWARDINFO::get_LevelAwardGotList()
 Object_t* GC_SYNC_STORYCOPYSCENEAWARDINFO_get_LevelAwardGotList_m27933 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_STORYCOPYSCENEAWARDINFO::get_LevelAwardGotCount()
 int32_t GC_SYNC_STORYCOPYSCENEAWARDINFO_get_LevelAwardGotCount_m27934 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_STORYCOPYSCENEAWARDINFO::GetLevelAwardGot(System.Int32)
 int32_t GC_SYNC_STORYCOPYSCENEAWARDINFO_GetLevelAwardGot_m27935 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_STORYCOPYSCENEAWARDINFO::AddLevelAwardGot(System.Int32)
 void GC_SYNC_STORYCOPYSCENEAWARDINFO_AddLevelAwardGot_m27936 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_SYNC_STORYCOPYSCENEAWARDINFO::SerializedSize()
 int32_t GC_SYNC_STORYCOPYSCENEAWARDINFO_SerializedSize_m27937 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_SYNC_STORYCOPYSCENEAWARDINFO::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_SYNC_STORYCOPYSCENEAWARDINFO_WriteTo_m27938 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_SYNC_STORYCOPYSCENEAWARDINFO::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_SYNC_STORYCOPYSCENEAWARDINFO_MergeFrom_m27939 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_SYNC_STORYCOPYSCENEAWARDINFO::IsInitialized()
 bool GC_SYNC_STORYCOPYSCENEAWARDINFO_IsInitialized_m27940 (GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
