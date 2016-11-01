#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DialogCore
struct DialogCore_t4785;
// Games.LogicObj.Obj_NPC
struct Obj_NPC_t1569;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void DialogCore::.ctor()
 void DialogCore__ctor_m33927 (DialogCore_t4785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.LogicObj.Obj_NPC DialogCore::get_CareNPC()
 Obj_NPC_t1569 * DialogCore_get_CareNPC_m33928 (DialogCore_t4785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogCore::set_CareNPC(Games.LogicObj.Obj_NPC)
 void DialogCore_set_CareNPC_m33929 (DialogCore_t4785 * __this, Obj_NPC_t1569 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DialogCore::get_DialogID()
 int32_t DialogCore_get_DialogID_m33930 (DialogCore_t4785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogCore::set_DialogID(System.Int32)
 void DialogCore_set_DialogID_m33931 (DialogCore_t4785 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogCore::AutoDialog(System.Int32)
 void DialogCore_AutoDialog_m33932 (DialogCore_t4785 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogCore::Show(Games.LogicObj.Obj_NPC)
 void DialogCore_Show_m33933 (DialogCore_t4785 * __this, Obj_NPC_t1569 * ___objNpc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DialogCore::PopCompletedMission()
 bool DialogCore_PopCompletedMission_m33934 (DialogCore_t4785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DialogCore::PopCanAcceptedMission()
 bool DialogCore_PopCanAcceptedMission_m33935 (DialogCore_t4785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogCore::Show(System.Int32)
 void DialogCore_Show_m33936 (DialogCore_t4785 * __this, int32_t ___nDialogID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogCore::ShowMission(System.Int32)
 void DialogCore_ShowMission_m33937 (DialogCore_t4785 * __this, int32_t ___nMissionId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogCore::ShowText(System.Int32)
 void DialogCore_ShowText_m33938 (DialogCore_t4785 * __this, int32_t ___nDialogId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DialogCore::IsInDialogArea(UnityEngine.Vector3)
 bool DialogCore_IsInDialogArea_m33939 (DialogCore_t4785 * __this, Vector3_t121  ___vPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DialogCore::IsInDialogArea()
 bool DialogCore_IsInDialogArea_m33940 (DialogCore_t4785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DialogCore::SpecialDialog(Games.LogicObj.Obj_NPC)
 bool DialogCore_SpecialDialog_m33941 (DialogCore_t4785 * __this, Obj_NPC_t1569 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogCore::MissionLogic(System.Int32)
 void DialogCore_MissionLogic_m33942 (DialogCore_t4785 * __this, int32_t ___nMissionID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DialogCore::GuildHideAndSeekDialog()
 bool DialogCore_GuildHideAndSeekDialog_m33943 (DialogCore_t4785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
