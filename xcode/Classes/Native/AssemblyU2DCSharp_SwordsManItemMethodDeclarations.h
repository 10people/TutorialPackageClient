#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SwordsManItem
struct SwordsManItem_t1943;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// SwordsManController
struct SwordsManController_t1941;
// SwordsManLevelupController
struct SwordsManLevelupController_t1942;
// Games.SwordsMan.SwordsMan
struct SwordsMan_t1175;

// System.Void SwordsManItem::.ctor()
 void SwordsManItem__ctor_m12647 (SwordsManItem_t1943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SwordsManItem SwordsManItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,SwordsManController)
 SwordsManItem_t1943 * SwordsManItem_CreateItem_m12648 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, SwordsManController_t1941 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SwordsManItem SwordsManItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,SwordsManLevelupController)
 SwordsManItem_t1943 * SwordsManItem_CreateItem_m12649 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, SwordsManLevelupController_t1942 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManItem::SetData(Games.SwordsMan.SwordsMan)
 void SwordsManItem_SetData_m12650 (SwordsManItem_t1943 * __this, SwordsMan_t1175 * ___oSwordsMan, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManItem::ClearUp()
 void SwordsManItem_ClearUp_m12651 (SwordsManItem_t1943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManItem::SetParent(SwordsManController)
 void SwordsManItem_SetParent_m12652 (SwordsManItem_t1943 * __this, SwordsManController_t1941 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManItem::SetParent(SwordsManLevelupController)
 void SwordsManItem_SetParent_m12653 (SwordsManItem_t1943 * __this, SwordsManLevelupController_t1942 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManItem::OnItemClick()
 void SwordsManItem_OnItemClick_m12654 (SwordsManItem_t1943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManItem::OnSelectSwordsMan()
 void SwordsManItem_OnSelectSwordsMan_m12655 (SwordsManItem_t1943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwordsManItem::OnSelectStateChange()
 void SwordsManItem_OnSelectStateChange_m12656 (SwordsManItem_t1943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwordsManItem::IsSelect()
 bool SwordsManItem_IsSelect_m12657 (SwordsManItem_t1943 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
