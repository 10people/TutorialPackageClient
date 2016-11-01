#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LoverRankInfoItem
struct LoverRankInfoItem_t1898;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// LoverFlowerWindow
struct LoverFlowerWindow_t1897;

// System.Void LoverRankInfoItem::.ctor()
 void LoverRankInfoItem__ctor_m12485 (LoverRankInfoItem_t1898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoverRankInfoItem::Start()
 void LoverRankInfoItem_Start_m12486 (LoverRankInfoItem_t1898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LoverRankInfoItem LoverRankInfoItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.Int32,System.String,System.String,LoverFlowerWindow)
 LoverRankInfoItem_t1898 * LoverRankInfoItem_CreateItem_m12487 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, int32_t ___count, String_t* ___name, String_t* ___num, LoverFlowerWindow_t1897 * ___parentWindow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoverRankInfoItem::SetData(LoverFlowerWindow,System.Int32,System.String,System.String)
 void LoverRankInfoItem_SetData_m12488 (LoverRankInfoItem_t1898 * __this, LoverFlowerWindow_t1897 * ___parentWindow, int32_t ___count, String_t* ___name, String_t* ___num, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoverRankInfoItem::OnItemClick()
 void LoverRankInfoItem_OnItemClick_m12489 (LoverRankInfoItem_t1898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoverRankInfoItem::UpdateRestaurantVisitState()
 void LoverRankInfoItem_UpdateRestaurantVisitState_m12490 (LoverRankInfoItem_t1898 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
