#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// DamageBoardManager
struct DamageBoardManager_t1374;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void DamageBoardManager::.ctor()
 void DamageBoardManager__ctor_m8201 (DamageBoardManager_t1374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoardManager::.cctor()
 void DamageBoardManager__cctor_m8202 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoardManager::ClearDamageDictionary()
 void DamageBoardManager_ClearDamageDictionary_m8203 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoardManager::FixedUpdate()
 void DamageBoardManager_FixedUpdate_m8204 (DamageBoardManager_t1374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoardManager::PreloadDamageBoard()
 void DamageBoardManager_PreloadDamageBoard_m8205 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoardManager::OnLoadDamageBoard(UnityEngine.GameObject,System.Object)
 void DamageBoardManager_OnLoadDamageBoard_m8206 (Object_t * __this/* static, unused */, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoardManager::DeleteDamageBoard()
 void DamageBoardManager_DeleteDamageBoard_m8207 (DamageBoardManager_t1374 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DamageBoardManager::ShowDamageBoard(System.Int32,System.String,UnityEngine.Vector3,System.Boolean)
 void DamageBoardManager_ShowDamageBoard_m8208 (DamageBoardManager_t1374 * __this, int32_t ___nType, String_t* ___strValue, Vector3_t121  ___pos, bool ___isProfessionSkill, MethodInfo* method) IL2CPP_METHOD_ATTR;
