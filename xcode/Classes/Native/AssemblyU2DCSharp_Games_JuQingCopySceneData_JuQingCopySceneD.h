#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo>
struct Dictionary_2_t4908;
// System.Collections.Generic.Dictionary`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo>
struct Dictionary_2_t4909;
// System.Object
#include "mscorlib_System_Object.h"
// Games.JuQingCopySceneData.StoryCopySceneScoreInfo
#include "AssemblyU2DCSharp_Games_JuQingCopySceneData_StoryCopySceneSc.h"
// Games.JuQingCopySceneData.JuQingCopySceneData
struct JuQingCopySceneData_t4910  : public Object_t
{
	// Games.JuQingCopySceneData.StoryCopySceneScoreInfo Games.JuQingCopySceneData.JuQingCopySceneData::m_LastScore
	StoryCopySceneScoreInfo_t1896  ___m_LastScore;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneLevelInfo> Games.JuQingCopySceneData.JuQingCopySceneData::m_LevelInfoDic
	Dictionary_2_t4908 * ___m_LevelInfoDic;
	// System.Collections.Generic.Dictionary`2<System.Int32,Games.JuQingCopySceneData.StoryCopySceneChapterInfo> Games.JuQingCopySceneData.JuQingCopySceneData::m_ChapterInfoDic
	Dictionary_2_t4909 * ___m_ChapterInfoDic;
};
struct JuQingCopySceneData_t4910_StaticFields{
	// System.Int32 Games.JuQingCopySceneData.JuQingCopySceneData::STORYCOPYSCENE_SAODANGLING_ITEMID
	int32_t ___STORYCOPYSCENE_SAODANGLING_ITEMID;
	// System.Int32 Games.JuQingCopySceneData.JuQingCopySceneData::ChapterLevelNum
	int32_t ___ChapterLevelNum;
	// System.Int32[] Games.JuQingCopySceneData.JuQingCopySceneData::ChapterAwardStarReq
	Int32U5BU5D_t116* ___ChapterAwardStarReq;
};
