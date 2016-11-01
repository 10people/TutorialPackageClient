#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>
struct ValueCollection_t9162;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>
struct Dictionary_2_t143;
// System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>
struct List_1_t336;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>
struct IEnumerator_1_t9189;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>[]
struct List_1U5BU5D_t9157;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_20.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ValueCollection__ctor_m62559 (ValueCollection_t9162 * __this, Dictionary_2_t143 * ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m62560 (ValueCollection_t9162 * __this, List_1_t336 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::System.Collections.Generic.ICollection<TValue>.Clear()
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m62561 (ValueCollection_t9162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m62562 (ValueCollection_t9162 * __this, List_1_t336 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m62563 (ValueCollection_t9162 * __this, List_1_t336 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
 Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m62564 (ValueCollection_t9162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ValueCollection_System_Collections_ICollection_CopyTo_m62565 (ValueCollection_t9162 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m62566 (ValueCollection_t9162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m62567 (ValueCollection_t9162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::System.Collections.ICollection.get_IsSynchronized()
 bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m62568 (ValueCollection_t9162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m62569 (ValueCollection_t9162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::CopyTo(TValue[],System.Int32)
 void ValueCollection_CopyTo_m62570 (ValueCollection_t9162 * __this, List_1U5BU5D_t9157* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::GetEnumerator()
 Enumerator_t9190  ValueCollection_GetEnumerator_m62571 (ValueCollection_t9162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<GCGame.Table.Tab_AchieveNotice>>::get_Count()
 int32_t ValueCollection_get_Count_m62572 (ValueCollection_t9162 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
