#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DamageBoard
struct DamageBoard_t1370;
// UILabel
struct UILabel_t1176;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void DamageBoard::.ctor()
 void DamageBoard__ctor_m8184 (DamageBoard_t1370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DamageBoard::get_Run()
 bool DamageBoard_get_Run_m8185 (DamageBoard_t1370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UILabel DamageBoard::get_DamageBoardLabel()
 UILabel_t1176 * DamageBoard_get_DamageBoardLabel_m8186 (DamageBoard_t1370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DamageBoard::get_ShowTime()
 float DamageBoard_get_ShowTime_m8187 (DamageBoard_t1370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoard::set_ShowTime(System.Single)
 void DamageBoard_set_ShowTime_m8188 (DamageBoard_t1370 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DamageBoard::get_TotalShowTime()
 float DamageBoard_get_TotalShowTime_m8189 (DamageBoard_t1370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoard::Start()
 void DamageBoard_Start_m8190 (DamageBoard_t1370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoard::Awake()
 void DamageBoard_Awake_m8191 (DamageBoard_t1370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoard::Reuse(UnityEngine.Vector3)
 void DamageBoard_Reuse_m8192 (DamageBoard_t1370 * __this, Vector3_t121  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoard::Remove()
 void DamageBoard_Remove_m8193 (DamageBoard_t1370 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DamageBoard::ActiveDamageBoard(System.Int32,System.String,UnityEngine.Vector3,System.Boolean)
 bool DamageBoard_ActiveDamageBoard_m8194 (DamageBoard_t1370 * __this, int32_t ___nType, String_t* ___strValue, Vector3_t121  ___pos, bool ___isPlayerSkill, MethodInfo* method) IL2CPP_METHOD_ATTR;
