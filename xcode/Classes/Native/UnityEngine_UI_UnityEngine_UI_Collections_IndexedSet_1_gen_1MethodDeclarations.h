#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t23277;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t5582;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Predicate`1<System.Object>
struct Predicate_1_t8617;
// System.Comparison`1<System.Object>
struct Comparison_1_t8619;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
 void IndexedSet_1__ctor_m168907_gshared (IndexedSet_1_t23277 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m168907(__this, method) (void)IndexedSet_1__ctor_m168907_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m168909_gshared (IndexedSet_1_t23277 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m168909(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m168909_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
 void IndexedSet_1_Add_m168910_gshared (IndexedSet_1_t23277 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m168910(__this, ___item, method) (void)IndexedSet_1_Add_m168910_gshared((IndexedSet_1_t23277 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
 bool IndexedSet_1_Remove_m168911_gshared (IndexedSet_1_t23277 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m168911(__this, ___item, method) (bool)IndexedSet_1_Remove_m168911_gshared((IndexedSet_1_t23277 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
 Object_t* IndexedSet_1_GetEnumerator_m168913_gshared (IndexedSet_1_t23277 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m168913(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m168913_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
 void IndexedSet_1_Clear_m168914_gshared (IndexedSet_1_t23277 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m168914(__this, method) (void)IndexedSet_1_Clear_m168914_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
 bool IndexedSet_1_Contains_m168916_gshared (IndexedSet_1_t23277 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m168916(__this, ___item, method) (bool)IndexedSet_1_Contains_m168916_gshared((IndexedSet_1_t23277 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
 void IndexedSet_1_CopyTo_m168918_gshared (IndexedSet_1_t23277 * __this, ObjectU5BU5D_t142* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m168918(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m168918_gshared((IndexedSet_1_t23277 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
 int32_t IndexedSet_1_get_Count_m168919_gshared (IndexedSet_1_t23277 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m168919(__this, method) (int32_t)IndexedSet_1_get_Count_m168919_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
 bool IndexedSet_1_get_IsReadOnly_m168921_gshared (IndexedSet_1_t23277 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m168921(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m168921_gshared((IndexedSet_1_t23277 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
 int32_t IndexedSet_1_IndexOf_m168923_gshared (IndexedSet_1_t23277 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m168923(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m168923_gshared((IndexedSet_1_t23277 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
 void IndexedSet_1_Insert_m168925_gshared (IndexedSet_1_t23277 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m168925(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m168925_gshared((IndexedSet_1_t23277 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
 void IndexedSet_1_RemoveAt_m168927_gshared (IndexedSet_1_t23277 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m168927(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m168927_gshared((IndexedSet_1_t23277 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
 Object_t * IndexedSet_1_get_Item_m168928_gshared (IndexedSet_1_t23277 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m168928(__this, ___index, method) (Object_t *)IndexedSet_1_get_Item_m168928_gshared((IndexedSet_1_t23277 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
 void IndexedSet_1_set_Item_m168930_gshared (IndexedSet_1_t23277 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m168930(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m168930_gshared((IndexedSet_1_t23277 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
 void IndexedSet_1_RemoveAll_m168931_gshared (IndexedSet_1_t23277 * __this, Predicate_1_t8617 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m168931(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m168931_gshared((IndexedSet_1_t23277 *)__this, (Predicate_1_t8617 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
 void IndexedSet_1_Sort_m168932_gshared (IndexedSet_1_t23277 * __this, Comparison_1_t8619 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m168932(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m168932_gshared((IndexedSet_1_t23277 *)__this, (Comparison_1_t8619 *)___sortLayoutFunction, method)
