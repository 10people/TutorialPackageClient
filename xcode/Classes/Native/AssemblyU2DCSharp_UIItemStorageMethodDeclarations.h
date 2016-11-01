#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIItemStorage
struct UIItemStorage_t5239;
// System.Collections.Generic.List`1<InvGameItem>
struct List_1_t5238;
// InvGameItem
struct InvGameItem_t5237;

// System.Void UIItemStorage::.ctor()
 void UIItemStorage__ctor_m37298 (UIItemStorage_t5239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InvGameItem> UIItemStorage::get_items()
 List_1_t5238 * UIItemStorage_get_items_m37299 (UIItemStorage_t5239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem UIItemStorage::GetItem(System.Int32)
 InvGameItem_t5237 * UIItemStorage_GetItem_m37300 (UIItemStorage_t5239 * __this, int32_t ___slot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvGameItem UIItemStorage::Replace(System.Int32,InvGameItem)
 InvGameItem_t5237 * UIItemStorage_Replace_m37301 (UIItemStorage_t5239 * __this, int32_t ___slot, InvGameItem_t5237 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIItemStorage::Start()
 void UIItemStorage_Start_m37302 (UIItemStorage_t5239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
