#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RelationNameListItem
struct RelationNameListItem_t1823;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// RelationNamePopController
struct RelationNamePopController_t1821;
// Relation
struct Relation_t1442;

// System.Void RelationNameListItem::.ctor()
 void RelationNameListItem__ctor_m12585 (RelationNameListItem_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationNameListItem::Start()
 void RelationNameListItem_Start_m12586 (RelationNameListItem_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RelationNameListItem RelationNameListItem::CreateItem(UnityEngine.GameObject,UnityEngine.GameObject,System.String,RelationNamePopController,Relation)
 RelationNameListItem_t1823 * RelationNameListItem_CreateItem_m12587 (Object_t * __this/* static, unused */, GameObject_t9 * ___grid, GameObject_t9 * ___resItem, String_t* ___name, RelationNamePopController_t1821 * ___parentWindow, Relation_t1442 * ___relationData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationNameListItem::SetData(RelationNamePopController,Relation)
 void RelationNameListItem_SetData_m12588 (RelationNameListItem_t1823 * __this, RelationNamePopController_t1821 * ___parentWindow, Relation_t1442 * ___relationData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationNameListItem::OnItemClick()
 void RelationNameListItem_OnItemClick_m12589 (RelationNameListItem_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationNameListItem::hideHightLight()
 void RelationNameListItem_hideHightLight_m12590 (RelationNameListItem_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationNameListItem::UpdateRestaurantVisitState()
 void RelationNameListItem_UpdateRestaurantVisitState_m12591 (RelationNameListItem_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RelationNameListItem::SetRestaurantItemInfo()
 void RelationNameListItem_SetRestaurantItemInfo_m12592 (RelationNameListItem_t1823 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
