#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t7566;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t7473;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t7460;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t333;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"

// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
 void GcLeaderboard__ctor_m52006 (GcLeaderboard_t7566 * __this, Leaderboard_t7473 * ___board, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
 void GcLeaderboard_Finalize_m52007 (GcLeaderboard_t7566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
 bool GcLeaderboard_Contains_m52008 (GcLeaderboard_t7566 * __this, Leaderboard_t7473 * ___board, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
 void GcLeaderboard_SetScores_m52009 (GcLeaderboard_t7566 * __this, GcScoreDataU5BU5D_t7460* ___scoreDatas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
 void GcLeaderboard_SetLocalScore_m52010 (GcLeaderboard_t7566 * __this, GcScoreData_t7448  ___scoreData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
 void GcLeaderboard_SetMaxRange_m52011 (GcLeaderboard_t7566 * __this, uint32_t ___maxRange, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
 void GcLeaderboard_SetTitle_m52012 (GcLeaderboard_t7566 * __this, String_t* ___title, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
 void GcLeaderboard_Internal_LoadScores_m52013 (GcLeaderboard_t7566 * __this, String_t* ___category, int32_t ___from, int32_t ___count, int32_t ___playerScope, int32_t ___timeScope, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
 void GcLeaderboard_Internal_LoadScoresWithUsers_m52014 (GcLeaderboard_t7566 * __this, String_t* ___category, int32_t ___timeScope, StringU5BU5D_t333* ___userIDs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
 bool GcLeaderboard_Loading_m52015 (GcLeaderboard_t7566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
 void GcLeaderboard_Dispose_m52016 (GcLeaderboard_t7566 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
