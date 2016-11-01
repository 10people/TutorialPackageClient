#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PVPData
struct PVPData_t4936;
// System.String
struct String_t;
// GC_OPPONENT_LIST
struct GC_OPPONENT_LIST_t3106;
// GC_CHALLENGE_MYDATA
struct GC_CHALLENGE_MYDATA_t3104;
// GC_CHALLENGE_HISTORY
struct GC_CHALLENGE_HISTORY_t3112;
// GC_CHALLENGE_REWARD
struct GC_CHALLENGE_REWARD_t3111;
// System.Object
struct Object_t;
// GC_CHALLENGERANKLIST
struct GC_CHALLENGERANKLIST_t3108;
// GC_WORLDBOSS_CHALLEGE_RES
struct GC_WORLDBOSS_CHALLEGE_RES_t3404;

// System.Void PVPData::.ctor()
 void PVPData__ctor_m34931 (PVPData_t4936 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::.cctor()
 void PVPData__cctor_m34932 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_MyPVPRange(System.Int32)
 void PVPData_set_MyPVPRange_m34933 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_MyPVPRange()
 int32_t PVPData_get_MyPVPRange_m34934 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_LeftFightTime(System.Int32)
 void PVPData_set_LeftFightTime_m34935 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_LeftFightTime()
 int32_t PVPData_get_LeftFightTime_m34936 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_Power(System.Int32)
 void PVPData_set_Power_m34937 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_Power()
 int32_t PVPData_get_Power_m34938 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_NeedCostYuanBao(System.Int32)
 void PVPData_set_NeedCostYuanBao_m34939 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_NeedCostYuanBao()
 int32_t PVPData_get_NeedCostYuanBao_m34940 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::UpdateOpponentInfo(GC_OPPONENT_LIST)
 void PVPData_UpdateOpponentInfo_m34941 (Object_t * __this/* static, unused */, GC_OPPONENT_LIST_t3106 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::UpdateMyData(GC_CHALLENGE_MYDATA)
 void PVPData_UpdateMyData_m34942 (Object_t * __this/* static, unused */, GC_CHALLENGE_MYDATA_t3104 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::UpdateChallengeHistory(GC_CHALLENGE_HISTORY)
 void PVPData_UpdateChallengeHistory_m34943 (Object_t * __this/* static, unused */, GC_CHALLENGE_HISTORY_t3112 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_ChallengeIsLose(System.Int32)
 void PVPData_set_ChallengeIsLose_m34944 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_ChallengeIsLose()
 int32_t PVPData_get_ChallengeIsLose_m34945 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_ChallengeSpirit(System.Int32)
 void PVPData_set_ChallengeSpirit_m34946 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_ChallengeSpirit()
 int32_t PVPData_get_ChallengeSpirit_m34947 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_ChallengeReputation(System.Int32)
 void PVPData_set_ChallengeReputation_m34948 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_ChallengeReputation()
 int32_t PVPData_get_ChallengeReputation_m34949 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_ChallengeAutoShow(System.Boolean)
 void PVPData_set_ChallengeAutoShow_m34950 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PVPData::get_ChallengeAutoShow()
 bool PVPData_get_ChallengeAutoShow_m34951 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::UpdateChallengeReward(GC_CHALLENGE_REWARD)
 void PVPData_UpdateChallengeReward_m34952 (Object_t * __this/* static, unused */, GC_CHALLENGE_REWARD_t3111 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::CheckAutoShowChallengeUI()
 void PVPData_CheckAutoShowChallengeUI_m34953 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::OnActiveShowActiviController(System.Boolean,System.Object)
 void PVPData_OnActiveShowActiviController_m34954 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_PvPRankCurPage(System.Int32)
 void PVPData_set_PvPRankCurPage_m34955 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_PvPRankCurPage()
 int32_t PVPData_get_PvPRankCurPage_m34956 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_PvPRankTotalPage(System.Int32)
 void PVPData_set_PvPRankTotalPage_m34957 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_PvPRankTotalPage()
 int32_t PVPData_get_PvPRankTotalPage_m34958 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::UpdatePvPRankList(GC_CHALLENGERANKLIST)
 void PVPData_UpdatePvPRankList_m34959 (Object_t * __this/* static, unused */, GC_CHALLENGERANKLIST_t3108 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_meRank(System.String)
 void PVPData_set_meRank_m34960 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PVPData::get_meRank()
 String_t* PVPData_get_meRank_m34961 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_RankTotalPage(System.Int32)
 void PVPData_set_RankTotalPage_m34962 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_RankTotalPage()
 int32_t PVPData_get_RankTotalPage_m34963 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_RankCurPage(System.Int32)
 void PVPData_set_RankCurPage_m34964 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_RankCurPage()
 int32_t PVPData_get_RankCurPage_m34965 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_RankType(System.Int32)
 void PVPData_set_RankType_m34966 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_RankType()
 int32_t PVPData_get_RankType_m34967 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_RankIsPage(System.Boolean)
 void PVPData_set_RankIsPage_m34968 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PVPData::get_RankIsPage()
 bool PVPData_get_RankIsPage_m34969 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::ClearRankData()
 void PVPData_ClearRankData_m34970 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::AddRankDataItem(System.UInt64,System.String,System.String,System.String,System.String,System.String,System.String)
 void PVPData_AddRankDataItem_m34971 (Object_t * __this/* static, unused */, uint64_t ___oGuid, String_t* ___s1, String_t* ___s2, String_t* ___s3, String_t* ___s4, String_t* ___s5, String_t* ___s6, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::ShowRankData()
 void PVPData_ShowRankData_m34972 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::ShowRank()
 void PVPData_ShowRank_m34973 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::OnOpenRankWindow(System.Boolean,System.Object)
 void PVPData_OnOpenRankWindow_m34974 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::OpenSNSWindows()
 void PVPData_OpenSNSWindows_m34975 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::ShowSNSWindow(System.Boolean,System.Object)
 void PVPData_ShowSNSWindow_m34976 (Object_t * __this/* static, unused */, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_WorldBossChallengeResult(System.Int32)
 void PVPData_set_WorldBossChallengeResult_m34977 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_WorldBossChallengeResult()
 int32_t PVPData_get_WorldBossChallengeResult_m34978 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::ShowWorldBossChallengeResult(GC_WORLDBOSS_CHALLEGE_RES)
 void PVPData_ShowWorldBossChallengeResult_m34979 (Object_t * __this/* static, unused */, GC_WORLDBOSS_CHALLEGE_RES_t3404 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData::set_PVPJiFen(System.Int32)
 void PVPData_set_PVPJiFen_m34980 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PVPData::get_PVPJiFen()
 int32_t PVPData_get_PVPJiFen_m34981 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
