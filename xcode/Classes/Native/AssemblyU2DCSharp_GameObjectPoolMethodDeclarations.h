#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameObjectPool
struct GameObjectPool_t2186;
// System.String
struct String_t;
// UIPathData
struct UIPathData_t1177;
// GameObjectPool/CreatePoolObjDelegate
struct CreatePoolObjDelegate_t2183;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_t2185;

// System.Void GameObjectPool::.ctor()
 void GameObjectPool__ctor_m14646 (GameObjectPool_t2186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::.ctor(System.String,System.Int32)
 void GameObjectPool__ctor_m14647 (GameObjectPool_t2186 * __this, String_t* ___szPoolName, int32_t ___nMaxSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameObjectPool::get_PoolName()
 String_t* GameObjectPool_get_PoolName_m14648 (GameObjectPool_t2186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::CreateUIFromBundle(UIPathData,System.String,GameObjectPool/CreatePoolObjDelegate,System.Object,System.Object)
 void GameObjectPool_CreateUIFromBundle_m14649 (GameObjectPool_t2186 * __this, UIPathData_t1177 * ___uiData, String_t* ___objName, CreatePoolObjDelegate_t2183 * ___delFun, Object_t * ___param1, Object_t * ___param2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::OnLoadBundleItem(UnityEngine.GameObject,System.Object)
 void GameObjectPool_OnLoadBundleItem_m14650 (GameObjectPool_t2186 * __this, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::Remove(UnityEngine.GameObject)
 void GameObjectPool_Remove_m14651 (GameObjectPool_t2186 * __this, GameObject_t9 * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject GameObjectPool::ReUseElement(System.String)
 GameObject_t9 * GameObjectPool_ReUseElement_m14652 (GameObjectPool_t2186 * __this, String_t* ___strGameObjectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameObjectPool::InsertElement(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>>,UnityEngine.GameObject)
 bool GameObjectPool_InsertElement_m14653 (GameObjectPool_t2186 * __this, Dictionary_2_t2185 * ___pool, GameObject_t9 * ___newElement, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameObjectPool::RemoveElement(System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UnityEngine.GameObject>>,UnityEngine.GameObject)
 bool GameObjectPool_RemoveElement_m14654 (GameObjectPool_t2186 * __this, Dictionary_2_t2185 * ___pool, GameObject_t9 * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameObjectPool::ClearAllPool()
 void GameObjectPool_ClearAllPool_m14655 (GameObjectPool_t2186 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
