#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CollectItem
struct CollectItem_t4783;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;

// System.Void CollectItem::.ctor()
 void CollectItem__ctor_m33919 (CollectItem_t4783 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollectItem::CleanUp()
 void CollectItem_CleanUp_m33920 (CollectItem_t4783 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollectItem::InitCollectItem(System.Int32)
 void CollectItem_InitCollectItem_m33921 (CollectItem_t4783 * __this, int32_t ___nSceneID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollectItem::RemoveItem(UnityEngine.GameObject)
 void CollectItem_RemoveItem_m33922 (CollectItem_t4783 * __this, GameObject_t9 * ___ItemObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollectItem::SafeDeleteItem()
 void CollectItem_SafeDeleteItem_m33923 (CollectItem_t4783 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CollectItem::IsItemExist(System.String)
 bool CollectItem_IsItemExist_m33924 (CollectItem_t4783 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollectItem::ReSeedItemEvent(System.Int32,System.Int32,System.Int32)
 void CollectItem_ReSeedItemEvent_m33925 (CollectItem_t4783 * __this, int32_t ___nSceneID, int32_t ___nSceneIndex, int32_t ___nItemIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CollectItem::ReSeedItems(System.Int32,System.Int32,System.Int32)
 void CollectItem_ReSeedItems_m33926 (CollectItem_t4783 * __this, int32_t ___nSceneID, int32_t ___nSceneIndex, int32_t ___nItemIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
