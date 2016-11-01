#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.Mission.MissionManager
struct MissionManager_t1565;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// GC_MISSION_SYNC_MISSIONLIST
struct GC_MISSION_SYNC_MISSIONLIST_t2933;
// Games.LogicObj.Obj_NPC
struct Obj_NPC_t1569;
// System.Object
struct Object_t;
// MissionBoard/MissionBoardState
#include "AssemblyU2DCSharp_MissionBoard_MissionBoardState.h"

// System.Void Games.Mission.MissionManager::.ctor()
 void MissionManager__ctor_m33954 (MissionManager_t1565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::set_IgnoreMissionPreFlag(System.Int32)
 void MissionManager_set_IgnoreMissionPreFlag_m33955 (MissionManager_t1565 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::set_MissionAutoCombat(System.Boolean)
 void MissionManager_set_MissionAutoCombat_m33956 (MissionManager_t1565 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::Finalize()
 void MissionManager_Finalize_m33957 (MissionManager_t1565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::CanAcceptMission(System.Int32)
 bool MissionManager_CanAcceptMission_m33958 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::AddMission(System.Int32,System.Byte)
 bool MissionManager_AddMission_m33959 (MissionManager_t1565 * __this, int32_t ___nMissionID, uint8_t ___yQuality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::DelMission(System.Int32)
 bool MissionManager_DelMission_m33960 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::SetMissionHaveDone(System.Int32)
 bool MissionManager_SetMissionHaveDone_m33961 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::IsMissionHaveDone(System.Int32)
 bool MissionManager_IsMissionHaveDone_m33962 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Mission.MissionManager::GetMissionIndexByID(System.Int32)
 int32_t MissionManager_GetMissionIndexByID_m33963 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::SetMissionParam(System.Int32,System.Int32,System.Int32)
 void MissionManager_SetMissionParam_m33964 (MissionManager_t1565 * __this, int32_t ___nMissionID, int32_t ___nParamIndex, int32_t ___nValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Mission.MissionManager::GetMissionParam(System.Int32,System.Int32)
 int32_t MissionManager_GetMissionParam_m33965 (MissionManager_t1565 * __this, int32_t ___nMissionID, int32_t ___nParamIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::AcceptMission(System.Int32)
 bool MissionManager_AcceptMission_m33966 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::AddMissionToUser(System.Int32,System.Byte)
 bool MissionManager_AddMissionToUser_m33967 (MissionManager_t1565 * __this, int32_t ___nMissionID, uint8_t ___yQualityType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::CompleteMission(System.Int32)
 bool MissionManager_CompleteMission_m33968 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::CompleteMissionOver(System.Int32)
 bool MissionManager_CompleteMissionOver_m33969 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::AbandonMission(System.Int32)
 bool MissionManager_AbandonMission_m33970 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::AbandonMissionOver(System.Int32)
 bool MissionManager_AbandonMissionOver_m33971 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::IsHaveMission(System.Int32)
 bool MissionManager_IsHaveMission_m33972 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::SetMissionState(System.Int32,System.Byte)
 bool MissionManager_SetMissionState_m33973 (MissionManager_t1565 * __this, int32_t ___nMissionID, uint8_t ___nStatus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Games.Mission.MissionManager::GetMissionState(System.Int32)
 uint8_t MissionManager_GetMissionState_m33974 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Games.Mission.MissionManager::GetMissionQuality(System.Int32)
 uint8_t MissionManager_GetMissionQuality_m33975 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::NotifyMissionUI(System.Int32,System.String)
 void MissionManager_NotifyMissionUI_m33976 (MissionManager_t1565 * __this, int32_t ___nMissionID, String_t* ___strOpt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::IsClientMission(System.Int32)
 bool MissionManager_IsClientMission_m33977 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::SetStoryMissionState(System.Int32,System.Byte)
 bool MissionManager_SetStoryMissionState_m33978 (MissionManager_t1565 * __this, int32_t ___nMissionID, uint8_t ___byState, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Games.Mission.MissionManager::GetAllMissionID()
 List_1_t90 * MissionManager_GetAllMissionID_m33979 (MissionManager_t1565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Games.Mission.MissionManager::GetMissionsInTracker()
 List_1_t90 * MissionManager_GetMissionsInTracker_m33980 (MissionManager_t1565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Games.Mission.MissionManager::GetAllNotDailyMissionList()
 List_1_t90 * MissionManager_GetAllNotDailyMissionList_m33981 (MissionManager_t1565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Games.Mission.MissionManager::GetAllDailyMissionList()
 List_1_t90 * MissionManager_GetAllDailyMissionList_m33982 (MissionManager_t1565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> Games.Mission.MissionManager::GetCanAcceptedMissionID(System.Int32)
 List_1_t90 * MissionManager_GetCanAcceptedMissionID_m33983 (MissionManager_t1565 * __this, int32_t ___nNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::AddMissionIDByLevel(System.Collections.Generic.List`1<System.Int32>,System.Int32)
 bool MissionManager_AddMissionIDByLevel_m33984 (MissionManager_t1565 * __this, List_1_t90 * ___MissionList, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::MissionPathFinder(System.Int32)
 void MissionManager_MissionPathFinder_m33985 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::MoveOverMissionEvent(System.Int32)
 void MissionManager_MoveOverMissionEvent_m33986 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::SyncMissionList(GC_MISSION_SYNC_MISSIONLIST)
 void MissionManager_SyncMissionList_m33987 (MissionManager_t1565 * __this, GC_MISSION_SYNC_MISSIONLIST_t2933 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::IsHaveMissionAccepted(Games.LogicObj.Obj_NPC)
 bool MissionManager_IsHaveMissionAccepted_m33988 (MissionManager_t1565 * __this, Obj_NPC_t1569 * ___oNpc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MissionBoard/MissionBoardState Games.Mission.MissionManager::GetMissionBoardState(Games.LogicObj.Obj_NPC)
 int32_t MissionManager_GetMissionBoardState_m33989 (MissionManager_t1565 * __this, Obj_NPC_t1569 * ___oNpc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::NotifyDailyMissionUI(System.Int32,System.String)
 void MissionManager_NotifyDailyMissionUI_m33990 (MissionManager_t1565 * __this, int32_t ___nMissionID, String_t* ___strOpt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::NotifyGuildMissionUI(System.Int32,System.String)
 void MissionManager_NotifyGuildMissionUI_m33991 (MissionManager_t1565 * __this, int32_t ___nMissionID, String_t* ___strOpt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Mission.MissionManager::GetMissionType(System.Int32)
 int32_t MissionManager_GetMissionType_m33992 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Mission.MissionManager::GetMissionLogicType(System.Int32)
 int32_t MissionManager_GetMissionLogicType_m33993 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::MissionCollectItem()
 void MissionManager_MissionCollectItem_m33994 (MissionManager_t1565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::OpenDailyMissionUI()
 void MissionManager_OpenDailyMissionUI_m33995 (MissionManager_t1565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::OpenGuildMissionUI()
 void MissionManager_OpenGuildMissionUI_m33996 (MissionManager_t1565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::OnOpenMissionLogUI(System.Boolean,System.Object)
 void MissionManager_OnOpenMissionLogUI_m33997 (MissionManager_t1565 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::OpenDailyLuckyUI()
 void MissionManager_OpenDailyLuckyUI_m33998 (MissionManager_t1565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.Mission.MissionManager::GetDailyMissionType(System.Int32)
 int32_t MissionManager_GetDailyMissionType_m33999 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::ShowDailyMissionOver(System.Boolean,System.Object)
 void MissionManager_ShowDailyMissionOver_m34000 (MissionManager_t1565 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::SpecialMission_CanAccept(System.Int32)
 bool MissionManager_SpecialMission_CanAccept_m34001 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::Mission_NewPlayerGuide(System.Int32)
 bool MissionManager_Mission_NewPlayerGuide_m34002 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::OpenMissionWindow(System.Int32)
 bool MissionManager_OpenMissionWindow_m34003 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::Faild_OpenMissionWindow(System.Int32)
 bool MissionManager_Faild_OpenMissionWindow_m34004 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::OpenEquipStar(System.Boolean,System.Object)
 void MissionManager_OpenEquipStar_m34005 (MissionManager_t1565 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::OpenRoleView(System.Boolean,System.Object)
 void MissionManager_OpenRoleView_m34006 (MissionManager_t1565 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::OpenFellow(System.Boolean,System.Object)
 void MissionManager_OpenFellow_m34007 (MissionManager_t1565 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::ShowMissionWindow(System.Boolean,System.Object)
 void MissionManager_ShowMissionWindow_m34008 (MissionManager_t1565 * __this, bool ___bSuccess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::IsMissionNotFaild(System.Int32)
 bool MissionManager_IsMissionNotFaild_m34009 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::OnAutoCombatEnd()
 void MissionManager_OnAutoCombatEnd_m34010 (MissionManager_t1565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::IsNoNeedFindPath(System.Int32)
 bool MissionManager_IsNoNeedFindPath_m34011 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::UpdatePaoHuanMissionInfo(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void MissionManager_UpdatePaoHuanMissionInfo_m34012 (MissionManager_t1565 * __this, int32_t ___playerLevelWhenGetMission, int32_t ___currentNum, int32_t ___currentMissionID, int32_t ___checkState, int32_t ___refreshCD, int32_t ___currentServerCD, int32_t ___refreshCntFree, int32_t ___refreshCntPaid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::RefreshPaoHuanMission(System.Int32)
 void MissionManager_RefreshPaoHuanMission_m34013 (MissionManager_t1565 * __this, int32_t ___paid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.Mission.MissionManager::Mission_SpecialAction(System.Int32)
 bool MissionManager_Mission_SpecialAction_m34014 (MissionManager_t1565 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.Mission.MissionManager::_OnClickMissionItemToCopyStory(System.Boolean,System.Object)
 void MissionManager__OnClickMissionItemToCopyStory_m34015 (MissionManager_t1565 * __this, bool ___isSuccess, Object_t * ___missionId, MethodInfo* method) IL2CPP_METHOD_ATTR;
