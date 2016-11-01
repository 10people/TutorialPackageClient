#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.JuQingCopySceneData.JuQingCopySceneData
struct JuQingCopySceneData_t4910;
// System.Collections.Generic.List`1<Games.JuQingCopySceneData.StoryCopySceneChapterInfo>
struct List_1_t4911;
// System.Collections.Generic.List`1<Games.JuQingCopySceneData.StoryCopySceneLevelInfo>
struct List_1_t4912;
// GC_SYNC_STORYCOPYSCENEAWARDINFO
struct GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596;
// GC_SYNC_STORYCOPYSCENEINFO
struct GC_SYNC_STORYCOPYSCENEINFO_t3595;
// GC_RET_STORYCOPYSCENE_CHAPTERAWARD
struct GC_RET_STORYCOPYSCENE_CHAPTERAWARD_t3594;
// GC_RET_STORYCOPYSCENE_CHAPTERLEVELAWARD
struct GC_RET_STORYCOPYSCENE_CHAPTERLEVELAWARD_t3631;
// Games.JuQingCopySceneData.StoryCopySceneLevelInfo
#include "AssemblyU2DCSharp_Games_JuQingCopySceneData_StoryCopySceneLe.h"
// Games.JuQingCopySceneData.StoryCopySceneScoreInfo
#include "AssemblyU2DCSharp_Games_JuQingCopySceneData_StoryCopySceneSc.h"

// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::.ctor()
 void JuQingCopySceneData__ctor_m34792 (JuQingCopySceneData_t4910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::.cctor()
 void JuQingCopySceneData__cctor_m34793 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::CleanUp()
 void JuQingCopySceneData_CleanUp_m34794 (JuQingCopySceneData_t4910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.JuQingCopySceneData.StoryCopySceneChapterInfo> Games.JuQingCopySceneData.JuQingCopySceneData::GetChapterInfoList()
 List_1_t4911 * JuQingCopySceneData_GetChapterInfoList_m34795 (JuQingCopySceneData_t4910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Games.JuQingCopySceneData.StoryCopySceneLevelInfo> Games.JuQingCopySceneData.JuQingCopySceneData::GetLevelsByChapterID(System.Int32)
 List_1_t4912 * JuQingCopySceneData_GetLevelsByChapterID_m34796 (JuQingCopySceneData_t4910 * __this, int32_t ___nChapterID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.JuQingCopySceneData.StoryCopySceneLevelInfo Games.JuQingCopySceneData.JuQingCopySceneData::GetLevelByLevelID(System.Int32)
 StoryCopySceneLevelInfo_t4905  JuQingCopySceneData_GetLevelByLevelID_m34797 (JuQingCopySceneData_t4910 * __this, int32_t ___nStoryCopySceneID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.JuQingCopySceneData.JuQingCopySceneData::IsStoryCopySceneLocked(System.Int32)
 bool JuQingCopySceneData_IsStoryCopySceneLocked_m34798 (JuQingCopySceneData_t4910 * __this, int32_t ___nStoryCopySceneID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::SetScore(System.Int32,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
 void JuQingCopySceneData_SetScore_m34799 (JuQingCopySceneData_t4910 * __this, int32_t ___nStoryCopySceneID, bool ___bResult, bool ___bCondition1, bool ___bCondition2, bool ___bCondition3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.JuQingCopySceneData.StoryCopySceneScoreInfo Games.JuQingCopySceneData.JuQingCopySceneData::GetLastScore()
 StoryCopySceneScoreInfo_t1896  JuQingCopySceneData_GetLastScore_m34800 (JuQingCopySceneData_t4910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.JuQingCopySceneData.StoryCopySceneScoreInfo Games.JuQingCopySceneData.JuQingCopySceneData::GetAndClearLastScore()
 StoryCopySceneScoreInfo_t1896  JuQingCopySceneData_GetAndClearLastScore_m34801 (JuQingCopySceneData_t4910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::ReqChapterAward(System.Int32,System.Int32)
 void JuQingCopySceneData_ReqChapterAward_m34802 (JuQingCopySceneData_t4910 * __this, int32_t ___nChapterID, int32_t ___nAwardIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::ReqChapterLevelAward(System.Int32,System.Int32)
 void JuQingCopySceneData_ReqChapterLevelAward_m34803 (JuQingCopySceneData_t4910 * __this, int32_t ___nChapterID, int32_t ___nAwardIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::ReqOpenStoryCopyScene(System.Int32)
 void JuQingCopySceneData_ReqOpenStoryCopyScene_m34804 (JuQingCopySceneData_t4910 * __this, int32_t ___nStoryCopySceneID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::ReqSweepStoryCopyScene(System.Int32)
 void JuQingCopySceneData_ReqSweepStoryCopyScene_m34805 (JuQingCopySceneData_t4910 * __this, int32_t ___nStoryCopySceneID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::HandlePacket(GC_SYNC_STORYCOPYSCENEAWARDINFO)
 void JuQingCopySceneData_HandlePacket_m34806 (JuQingCopySceneData_t4910 * __this, GC_SYNC_STORYCOPYSCENEAWARDINFO_t3596 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::HandlePacket(GC_SYNC_STORYCOPYSCENEINFO)
 void JuQingCopySceneData_HandlePacket_m34807 (JuQingCopySceneData_t4910 * __this, GC_SYNC_STORYCOPYSCENEINFO_t3595 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::HandlePacket(GC_RET_STORYCOPYSCENE_CHAPTERAWARD)
 void JuQingCopySceneData_HandlePacket_m34808 (JuQingCopySceneData_t4910 * __this, GC_RET_STORYCOPYSCENE_CHAPTERAWARD_t3594 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::HandlePacket(GC_RET_STORYCOPYSCENE_CHAPTERLEVELAWARD)
 void JuQingCopySceneData_HandlePacket_m34809 (JuQingCopySceneData_t4910 * __this, GC_RET_STORYCOPYSCENE_CHAPTERLEVELAWARD_t3631 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.JuQingCopySceneData.JuQingCopySceneData::OnEnterSceneFinish()
 void JuQingCopySceneData_OnEnterSceneFinish_m34810 (JuQingCopySceneData_t4910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
