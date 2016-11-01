#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GuildMission
struct GuildMission_t1451;
// GC_RET_GUIDMISSION_DATA
struct GC_RET_GUIDMISSION_DATA_t1452;

// System.Void GuildMission::.ctor()
 void GuildMission__ctor_m8890 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::.cctor()
 void GuildMission__cctor_m8891 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GuildMission::get_MisionData()
 int32_t GuildMission_get_MisionData_m8892 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::set_MisionData(System.Int32)
 void GuildMission_set_MisionData_m8893 (GuildMission_t1451 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GuildMission GuildMission::Instance()
 GuildMission_t1451 * GuildMission_Instance_m8894 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::Awake()
 void GuildMission_Awake_m8895 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::Start()
 void GuildMission_Start_m8896 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::OnEnable()
 void GuildMission_OnEnable_m8897 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::OnDestroy()
 void GuildMission_OnDestroy_m8898 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::UpdateMissionInfo(System.Int32)
 void GuildMission_UpdateMissionInfo_m8899 (GuildMission_t1451 * __this, int32_t ___nData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::CleanMissionInfo()
 void GuildMission_CleanMissionInfo_m8900 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::UpdateMissionState(System.Int32)
 void GuildMission_UpdateMissionState_m8901 (GuildMission_t1451 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::UpdateGuildData(GC_RET_GUIDMISSION_DATA)
 void GuildMission_UpdateGuildData_m8902 (GuildMission_t1451 * __this, GC_RET_GUIDMISSION_DATA_t1452 * ___pak, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::CleanGuildData()
 void GuildMission_CleanGuildData_m8903 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::AskGuildMissionData()
 void GuildMission_AskGuildMissionData_m8904 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::OpenGuildMission()
 void GuildMission_OpenGuildMission_m8905 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::OnOpenGuildMisMessageOK()
 void GuildMission_OnOpenGuildMisMessageOK_m8906 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::JoinGuildMission()
 void GuildMission_JoinGuildMission_m8907 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::MissionOpt()
 void GuildMission_MissionOpt_m8908 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::OnAbandonMessageOK()
 void GuildMission_OnAbandonMessageOK_m8909 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuildMission::OnCancelClick()
 void GuildMission_OnCancelClick_m8910 (GuildMission_t1451 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
