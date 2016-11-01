#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DailyMissionItemLogic
struct DailyMissionItemLogic_t1367;
// System.String
struct String_t;

// System.Void DailyMissionItemLogic::.ctor()
 void DailyMissionItemLogic__ctor_m8146 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::.cctor()
 void DailyMissionItemLogic__cctor_m8147 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// DailyMissionItemLogic DailyMissionItemLogic::Instance()
 DailyMissionItemLogic_t1367 * DailyMissionItemLogic_Instance_m8148 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DailyMissionItemLogic::get_MissionID()
 int32_t DailyMissionItemLogic_get_MissionID_m8149 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::set_MissionID(System.Int32)
 void DailyMissionItemLogic_set_MissionID_m8150 (DailyMissionItemLogic_t1367 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DailyMissionItemLogic::get_Kind()
 int32_t DailyMissionItemLogic_get_Kind_m8151 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::set_Kind(System.Int32)
 void DailyMissionItemLogic_set_Kind_m8152 (DailyMissionItemLogic_t1367 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::Start()
 void DailyMissionItemLogic_Start_m8153 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::CleanUp()
 void DailyMissionItemLogic_CleanUp_m8154 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::Init(System.Int32,System.Int32,System.Byte)
 void DailyMissionItemLogic_Init_m8155 (DailyMissionItemLogic_t1367 * __this, int32_t ___nKind, int32_t ___nMissionID, uint8_t ___yQuality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::SetTipText(System.Int32,System.Byte)
 void DailyMissionItemLogic_SetTipText_m8156 (DailyMissionItemLogic_t1367 * __this, int32_t ___nMissionID, uint8_t ___yQuality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DailyMissionItemLogic::GetStrColorByQuality(System.Byte)
 String_t* DailyMissionItemLogic_GetStrColorByQuality_m8157 (DailyMissionItemLogic_t1367 * __this, uint8_t ___yQuality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::UpdateAwardItem(System.Int32)
 void DailyMissionItemLogic_UpdateAwardItem_m8158 (DailyMissionItemLogic_t1367 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::UpadateButtonState(System.Int32)
 void DailyMissionItemLogic_UpadateButtonState_m8159 (DailyMissionItemLogic_t1367 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::AcceptButtonClick()
 void DailyMissionItemLogic_AcceptButtonClick_m8160 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::UpdateButtonClick()
 void DailyMissionItemLogic_UpdateButtonClick_m8161 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::OnAbandonMessageOK()
 void DailyMissionItemLogic_OnAbandonMessageOK_m8162 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::OnMessageOK()
 void DailyMissionItemLogic_OnMessageOK_m8163 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::OnCancelClick()
 void DailyMissionItemLogic_OnCancelClick_m8164 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::Check_NewPlayerGuide()
 void DailyMissionItemLogic_Check_NewPlayerGuide_m8165 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::NewPlayerGuide(System.Int32)
 void DailyMissionItemLogic_NewPlayerGuide_m8166 (DailyMissionItemLogic_t1367 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DailyMissionItemLogic::IsMasterMission()
 bool DailyMissionItemLogic_IsMasterMission_m8167 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DailyMissionItemLogic::MissionClick()
 void DailyMissionItemLogic_MissionClick_m8168 (DailyMissionItemLogic_t1367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
