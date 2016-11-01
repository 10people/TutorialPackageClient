#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t6230;
// UnityEngine.UI.Graphic
struct Graphic_t6084;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t23413;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t23411;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t23415;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t6088;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m43832(__this, method) (void)IndexedSet_1__ctor_m168907_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m170281(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m168909_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m43831(__this, ___item, method) (void)IndexedSet_1_Add_m168910_gshared((IndexedSet_1_t23277 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m43834(__this, ___item, method) (bool)IndexedSet_1_Remove_m168911_gshared((IndexedSet_1_t23277 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m170282(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m168913_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m170283(__this, method) (void)IndexedSet_1_Clear_m168914_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m170284(__this, ___item, method) (bool)IndexedSet_1_Contains_m168916_gshared((IndexedSet_1_t23277 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m170285(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m168918_gshared((IndexedSet_1_t23277 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m170286(__this, method) (int32_t)IndexedSet_1_get_Count_m168919_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m170287(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m168921_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m170288(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m168923_gshared((IndexedSet_1_t23277 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m170289(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m168925_gshared((IndexedSet_1_t23277 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m170290(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m168927_gshared((IndexedSet_1_t23277 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m170291(__this, ___index, method) (Graphic_t6084 *)IndexedSet_1_get_Item_m168928_gshared((IndexedSet_1_t23277 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m170292(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m168930_gshared((IndexedSet_1_t23277 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m170293(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m168931_gshared((IndexedSet_1_t23277 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m170294(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m168932_gshared((IndexedSet_1_t23277 *)__this, (Comparison_1_t8619 *)___sortLayoutFunction, method)
