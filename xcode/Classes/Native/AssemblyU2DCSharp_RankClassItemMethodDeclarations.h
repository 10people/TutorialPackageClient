#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RankClassItem
struct RankClassItem_t1918;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;

// System.Void RankClassItem::.ctor()
 void RankClassItem__ctor_m12533 (RankClassItem_t1918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RankClassItem RankClassItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,UnityEngine.GameObject)
 RankClassItem_t1918 * RankClassItem_CreateItem_m12534 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, GameObject_t9 * ____tweenTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankClassItem::Start()
 void RankClassItem_Start_m12535 (RankClassItem_t1918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankClassItem::SetData(System.String,System.Int32)
 void RankClassItem_SetData_m12536 (RankClassItem_t1918 * __this, String_t* ___strName, int32_t ___nClass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankClassItem::ClickClassBt()
 void RankClassItem_ClickClassBt_m12537 (RankClassItem_t1918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RankClassItem::OnCancelSelect()
 void RankClassItem_OnCancelSelect_m12538 (RankClassItem_t1918 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
