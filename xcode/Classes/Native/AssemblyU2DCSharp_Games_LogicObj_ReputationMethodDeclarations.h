#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.LogicObj.Reputation
struct Reputation_t4525;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// Games.GlobeDefine.CharacterDefine/REPUTATION_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_CharacterDefine_REPUTATI.h"

// System.Void Games.LogicObj.Reputation::.ctor()
 void Reputation__ctor_m32476 (Reputation_t4525 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.GlobeDefine.CharacterDefine/REPUTATION_TYPE Games.LogicObj.Reputation::GetObjReputionType(Games.LogicObj.Obj_Character,System.Boolean)
 int32_t Reputation_GetObjReputionType_m32477 (Object_t * __this/* static, unused */, Obj_Character_t1772 * ___objChar, bool ___bPKListIsConsider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Reputation::IsEnemy(Games.LogicObj.Obj_Character)
 bool Reputation_IsEnemy_m32478 (Object_t * __this/* static, unused */, Obj_Character_t1772 * ___objChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Reputation::IsFriend(Games.LogicObj.Obj_Character)
 bool Reputation_IsFriend_m32479 (Object_t * __this/* static, unused */, Obj_Character_t1772 * ___objChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.LogicObj.Reputation::IsNeutral(Games.LogicObj.Obj_Character)
 bool Reputation_IsNeutral_m32480 (Object_t * __this/* static, unused */, Obj_Character_t1772 * ___objChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
