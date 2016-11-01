#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.AI_Logic.Threat
struct Threat_t4519;
// Games.AI_Logic.ThreatInfo
struct ThreatInfo_t4527;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void Games.AI_Logic.Threat::.ctor()
 void Threat__ctor_m32503 (Threat_t4519 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.AI_Logic.ThreatInfo Games.AI_Logic.Threat::FindThreadInfo(UnityEngine.GameObject)
 ThreatInfo_t4527 * Threat_FindThreadInfo_m32504 (Threat_t4519 * __this, GameObject_t9 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Games.AI_Logic.Threat::FindMaxThreatObj()
 GameObject_t9 * Threat_FindMaxThreatObj_m32505 (Threat_t4519 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.Threat::AddThreat(UnityEngine.GameObject,System.Int32)
 void Threat_AddThreat_m32506 (Threat_t4519 * __this, GameObject_t9 * ___obj, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.Threat::ResetAllThreat()
 void Threat_ResetAllThreat_m32507 (Threat_t4519 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.AI_Logic.Threat::ResetThreat(UnityEngine.GameObject)
 void Threat_ResetThreat_m32508 (Threat_t4519 * __this, GameObject_t9 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
