#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InvGameItem
struct InvGameItem_t5237;
// InvBaseItem
struct InvBaseItem_t5244;
// System.String
struct String_t;
// System.Collections.Generic.List`1<InvStat>
struct List_1_t5243;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void InvGameItem::.ctor(System.Int32)
 void InvGameItem__ctor_m37328 (InvGameItem_t5237 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InvGameItem::.ctor(System.Int32,InvBaseItem)
 void InvGameItem__ctor_m37329 (InvGameItem_t5237 * __this, int32_t ___id, InvBaseItem_t5244 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 InvGameItem::get_baseItemID()
 int32_t InvGameItem_get_baseItemID_m37330 (InvGameItem_t5237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// InvBaseItem InvGameItem::get_baseItem()
 InvBaseItem_t5244 * InvGameItem_get_baseItem_m37331 (InvGameItem_t5237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String InvGameItem::get_name()
 String_t* InvGameItem_get_name_m37332 (InvGameItem_t5237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single InvGameItem::get_statMultiplier()
 float InvGameItem_get_statMultiplier_m37333 (InvGameItem_t5237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color InvGameItem::get_color()
 Color_t939  InvGameItem_get_color_m37334 (InvGameItem_t5237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<InvStat> InvGameItem::CalculateStats()
 List_1_t5243 * InvGameItem_CalculateStats_m37335 (InvGameItem_t5237 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
