#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WuLinTopThreeItem
struct WuLinTopThreeItem_t1953;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// WuLinDefaultWindow
struct WuLinDefaultWindow_t1954;

// System.Void WuLinTopThreeItem::.ctor()
 void WuLinTopThreeItem__ctor_m12715 (WuLinTopThreeItem_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// WuLinTopThreeItem WuLinTopThreeItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,WuLinDefaultWindow)
 WuLinTopThreeItem_t1953 * WuLinTopThreeItem_CreateItem_m12716 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, WuLinDefaultWindow_t1954 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinTopThreeItem::SetData(System.Int32,System.String)
 void WuLinTopThreeItem_SetData_m12717 (WuLinTopThreeItem_t1953 * __this, int32_t ___pos, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WuLinTopThreeItem::Cleanup()
 void WuLinTopThreeItem_Cleanup_m12718 (WuLinTopThreeItem_t1953 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
