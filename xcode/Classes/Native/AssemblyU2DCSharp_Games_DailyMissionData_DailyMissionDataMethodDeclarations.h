#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.DailyMissionData.DailyMissionData
struct DailyMissionData_t4873;
// GC_DAILYMISSION_UPDATE_RET
struct GC_DAILYMISSION_UPDATE_RET_t3163;
// Games.DailyMissionData.DailyMission
#include "AssemblyU2DCSharp_Games_DailyMissionData_DailyMission.h"

// System.Void Games.DailyMissionData.DailyMissionData::.ctor()
 void DailyMissionData__ctor_m34608 (DailyMissionData_t4873 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.DailyMissionData.DailyMissionData::get_DailyMissionDoneCount()
 int32_t DailyMissionData_get_DailyMissionDoneCount_m34609 (DailyMissionData_t4873 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyMissionData.DailyMissionData::set_DailyMissionDoneCount(System.Int32)
 void DailyMissionData_set_DailyMissionDoneCount_m34610 (DailyMissionData_t4873 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyMissionData.DailyMissionData::CleanUp()
 void DailyMissionData_CleanUp_m34611 (DailyMissionData_t4873 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.DailyMissionData.DailyMission Games.DailyMissionData.DailyMissionData::GetDailyMissionByKind(System.Int32)
 DailyMission_t4871  DailyMissionData_GetDailyMissionByKind_m34612 (DailyMissionData_t4873 * __this, int32_t ___nKind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyMissionData.DailyMissionData::AskUpdateDailyMission(System.Int32)
 void DailyMissionData_AskUpdateDailyMission_m34613 (DailyMissionData_t4873 * __this, int32_t ___nKind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyMissionData.DailyMissionData::AskUpdateDailyMissionNormal(System.Int32)
 void DailyMissionData_AskUpdateDailyMissionNormal_m34614 (DailyMissionData_t4873 * __this, int32_t ___nKind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyMissionData.DailyMissionData::AskUpdateDailyMissionBangdedYuanBao(System.Int32)
 void DailyMissionData_AskUpdateDailyMissionBangdedYuanBao_m34615 (DailyMissionData_t4873 * __this, int32_t ___nKind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyMissionData.DailyMissionData::AskUpdateDailyMissionSpecial(System.Int32)
 void DailyMissionData_AskUpdateDailyMissionSpecial_m34616 (DailyMissionData_t4873 * __this, int32_t ___nKind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyMissionData.DailyMissionData::AskUpdateDailyMissionYuanBao(System.Int32)
 void DailyMissionData_AskUpdateDailyMissionYuanBao_m34617 (DailyMissionData_t4873 * __this, int32_t ___nKind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.DailyMissionData.DailyMissionData::HandlePacket(GC_DAILYMISSION_UPDATE_RET)
 void DailyMissionData_HandlePacket_m34618 (DailyMissionData_t4873 * __this, GC_DAILYMISSION_UPDATE_RET_t3163 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
