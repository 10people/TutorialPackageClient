#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UpdateManager
struct UpdateManager_t5279;
// UpdateManager/UpdateEntry
struct UpdateEntry_t5277;
// System.Collections.Generic.List`1<UpdateManager/UpdateEntry>
struct List_1_t5281;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t18;
// UpdateManager/OnUpdate
struct OnUpdate_t5276;
// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;

// System.Void UpdateManager::.ctor()
 void UpdateManager__ctor_m37412 (UpdateManager_t5279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UpdateManager::Compare(UpdateManager/UpdateEntry,UpdateManager/UpdateEntry)
 int32_t UpdateManager_Compare_m37413 (Object_t * __this/* static, unused */, UpdateEntry_t5277 * ___a, UpdateEntry_t5277 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::CreateInstance()
 void UpdateManager_CreateInstance_m37414 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::UpdateList(System.Collections.Generic.List`1<UpdateManager/UpdateEntry>,System.Single)
 void UpdateManager_UpdateList_m37415 (UpdateManager_t5279 * __this, List_1_t5281 * ___list, float ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::Start()
 void UpdateManager_Start_m37416 (UpdateManager_t5279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::OnApplicationQuit()
 void UpdateManager_OnApplicationQuit_m37417 (UpdateManager_t5279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::Update()
 void UpdateManager_Update_m37418 (UpdateManager_t5279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::LateUpdate()
 void UpdateManager_LateUpdate_m37419 (UpdateManager_t5279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UpdateManager::CoroutineUpdate()
 bool UpdateManager_CoroutineUpdate_m37420 (UpdateManager_t5279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UpdateManager::CoroutineFunction()
 Object_t * UpdateManager_CoroutineFunction_m37421 (UpdateManager_t5279 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::Add(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate,System.Collections.Generic.List`1<UpdateManager/UpdateEntry>)
 void UpdateManager_Add_m37422 (UpdateManager_t5279 * __this, MonoBehaviour_t18 * ___mb, int32_t ___updateOrder, OnUpdate_t5276 * ___func, List_1_t5281 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddUpdate(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
 void UpdateManager_AddUpdate_m37423 (Object_t * __this/* static, unused */, MonoBehaviour_t18 * ___mb, int32_t ___updateOrder, OnUpdate_t5276 * ___func, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddLateUpdate(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
 void UpdateManager_AddLateUpdate_m37424 (Object_t * __this/* static, unused */, MonoBehaviour_t18 * ___mb, int32_t ___updateOrder, OnUpdate_t5276 * ___func, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddCoroutine(UnityEngine.MonoBehaviour,System.Int32,UpdateManager/OnUpdate)
 void UpdateManager_AddCoroutine_m37425 (Object_t * __this/* static, unused */, MonoBehaviour_t18 * ___mb, int32_t ___updateOrder, OnUpdate_t5276 * ___func, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UpdateManager::AddDestroy(UnityEngine.Object,System.Single)
 void UpdateManager_AddDestroy_m37426 (Object_t * __this/* static, unused */, Object_t982 * ___obj, float ___delay, MethodInfo* method) IL2CPP_METHOD_ATTR;
