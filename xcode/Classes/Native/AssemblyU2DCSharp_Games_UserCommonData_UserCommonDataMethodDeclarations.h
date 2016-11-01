#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.UserCommonData.UserCommonData
struct UserCommonData_t4952;
// GC_SYNC_COMMONDATA
struct GC_SYNC_COMMONDATA_t3204;
// GC_SYNC_COMMONFLAG
struct GC_SYNC_COMMONFLAG_t3205;
// GC_ASK_COMMONFLAG_RET
struct GC_ASK_COMMONFLAG_RET_t3207;
// GC_SYNC_COPYSCENENUMBER
struct GC_SYNC_COPYSCENENUMBER_t3291;
// GC_SYNC_COPYSCENEEXTRANUMBER
struct GC_SYNC_COPYSCENEEXTRANUMBER_t3398;
// GC_SYNC_BUYBACKCOPYSCENENUMBER
struct GC_SYNC_BUYBACKCOPYSCENENUMBER_t3547;
// GC_SYNC_CSACTIVITY
struct GC_SYNC_CSACTIVITY_t3569;
// Games.UserCommonData.UserCommonData/CopySceneDayNumber
#include "AssemblyU2DCSharp_Games_UserCommonData_UserCommonData_CopySc.h"
// Games.UserCommonData.UserCommonData/CopySceneNumberEx
#include "AssemblyU2DCSharp_Games_UserCommonData_UserCommonData_CopySc_0.h"
// Games.UserCommonData.UserCommonData/CopySceneActivityOnOff
#include "AssemblyU2DCSharp_Games_UserCommonData_UserCommonData_CopySc_1.h"

// System.Void Games.UserCommonData.UserCommonData::.ctor()
 void UserCommonData__ctor_m35636 (UserCommonData_t4952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::ClearData()
 void UserCommonData_ClearData_m35637 (UserCommonData_t4952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::SetCommonData(System.Int32,System.Int32)
 void UserCommonData_SetCommonData_m35638 (UserCommonData_t4952 * __this, int32_t ___nIndex, int32_t ___nValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.UserCommonData.UserCommonData::GetCommonData(System.Int32)
 int32_t UserCommonData_GetCommonData_m35639 (UserCommonData_t4952 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::OnCommonDataChange(System.Int32,System.Int32)
 void UserCommonData_OnCommonDataChange_m35640 (UserCommonData_t4952 * __this, int32_t ___nIndex, int32_t ___nValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::SetCommonFlag(System.Int32,System.Boolean)
 void UserCommonData_SetCommonFlag_m35641 (UserCommonData_t4952 * __this, int32_t ___nBits, bool ___bFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.UserCommonData.UserCommonData::GetCommondFlag(System.Int32)
 bool UserCommonData_GetCommondFlag_m35642 (UserCommonData_t4952 * __this, int32_t ___nBits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::OnCommonFlagChange(System.Int32)
 void UserCommonData_OnCommonFlagChange_m35643 (UserCommonData_t4952 * __this, int32_t ___nBit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::AskSetCommonFlag(System.Int32,System.Boolean)
 void UserCommonData_AskSetCommonFlag_m35644 (UserCommonData_t4952 * __this, int32_t ___nBits, bool ___bFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::SetCopySceneNumber(System.Int32,Games.UserCommonData.UserCommonData/CopySceneDayNumber)
 void UserCommonData_SetCopySceneNumber_m35645 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, CopySceneDayNumber_t4969  ___copyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::SetCopySceneMultiple(System.Int32,System.Int32)
 void UserCommonData_SetCopySceneMultiple_m35646 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, int32_t ___nMultiple, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::SetCopySceneExtra(System.Int32,System.Int32,System.Int32)
 void UserCommonData_SetCopySceneExtra_m35647 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, int32_t ___nExtraDayCount, int32_t ___nExtradayTeamCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.UserCommonData.UserCommonData::GetCopySceneNumber(System.Int32,System.Int32)
 int32_t UserCommonData_GetCopySceneNumber_m35648 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, int32_t ___nSingle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.UserCommonData.UserCommonData::GetCopySceneTotalNumber(System.Int32,System.Int32,System.Int32)
 int32_t UserCommonData_GetCopySceneTotalNumber_m35649 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, int32_t ___nDiffcult, int32_t ___nSingle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.UserCommonData.UserCommonData::GetCopySceneMultiple(System.Int32)
 int32_t UserCommonData_GetCopySceneMultiple_m35650 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.UserCommonData.UserCommonData::GetCopySceneReset(System.Int32,System.Int32)
 int32_t UserCommonData_GetCopySceneReset_m35651 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, int32_t ___nSingle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.UserCommonData.UserCommonData::GetCopySceneExtraNumber(System.Int32,System.Int32)
 int32_t UserCommonData_GetCopySceneExtraNumber_m35652 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, int32_t ___nSingle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::SetCopySceneNumberEx(System.Int32,Games.UserCommonData.UserCommonData/CopySceneNumberEx)
 void UserCommonData_SetCopySceneNumberEx_m35653 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, CopySceneNumberEx_t4970  ___copyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.UserCommonData.UserCommonData::GetCopySceneNumberEx(System.Int32,System.Boolean)
 int32_t UserCommonData_GetCopySceneNumberEx_m35654 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, bool ___bSingle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::SetIsCSActivity(System.Int32,Games.UserCommonData.UserCommonData/CopySceneActivityOnOff)
 void UserCommonData_SetIsCSActivity_m35655 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, CopySceneActivityOnOff_t4971  ___copyInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.UserCommonData.UserCommonData::GetIsCSActivity(System.Int32,System.Boolean)
 bool UserCommonData_GetIsCSActivity_m35656 (UserCommonData_t4952 * __this, int32_t ___nSceneClassID, bool ___bSingle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::HandlePacket(GC_SYNC_COMMONDATA)
 void UserCommonData_HandlePacket_m35657 (UserCommonData_t4952 * __this, GC_SYNC_COMMONDATA_t3204 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::HandlePacket(GC_SYNC_COMMONFLAG)
 void UserCommonData_HandlePacket_m35658 (UserCommonData_t4952 * __this, GC_SYNC_COMMONFLAG_t3205 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::HandlePacket(GC_ASK_COMMONFLAG_RET)
 void UserCommonData_HandlePacket_m35659 (UserCommonData_t4952 * __this, GC_ASK_COMMONFLAG_RET_t3207 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::HandlePacket(GC_SYNC_COPYSCENENUMBER)
 void UserCommonData_HandlePacket_m35660 (UserCommonData_t4952 * __this, GC_SYNC_COPYSCENENUMBER_t3291 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::HandlePacket(GC_SYNC_COPYSCENEEXTRANUMBER)
 void UserCommonData_HandlePacket_m35661 (UserCommonData_t4952 * __this, GC_SYNC_COPYSCENEEXTRANUMBER_t3398 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::HandlePacket(GC_SYNC_BUYBACKCOPYSCENENUMBER)
 void UserCommonData_HandlePacket_m35662 (UserCommonData_t4952 * __this, GC_SYNC_BUYBACKCOPYSCENENUMBER_t3547 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.UserCommonData.UserCommonData::HandlePacket(GC_SYNC_CSACTIVITY)
 void UserCommonData_HandlePacket_m35663 (UserCommonData_t4952 * __this, GC_SYNC_CSACTIVITY_t3569 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
