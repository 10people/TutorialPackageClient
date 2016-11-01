#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>
struct ReadOnlyCollection_1_t20310;
// Games.Events.GameEvent
struct GameEvent_t2137;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<Games.Events.GameEvent>
struct IList_1_t20316;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// Games.Events.GameEvent[]
struct GameEventU5BU5D_t20306;
// System.Collections.Generic.IEnumerator`1<Games.Events.GameEvent>
struct IEnumerator_1_t20308;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m147812(__this, ___list, method) (void)ReadOnlyCollection_1__ctor_m58022_gshared((ReadOnlyCollection_1_t8616 *)__this, (Object_t*)___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m147813(__this, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m58023_gshared((ReadOnlyCollection_1_t8616 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m147814(__this, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m58024_gshared((ReadOnlyCollection_1_t8616 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m147815(__this, ___index, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m58025_gshared((ReadOnlyCollection_1_t8616 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m147816(__this, ___item, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m58026_gshared((ReadOnlyCollection_1_t8616 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m147817(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m58027_gshared((ReadOnlyCollection_1_t8616 *)__this, (int32_t)___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m147818(__this, ___index, method) (GameEvent_t2137 *)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m58028_gshared((ReadOnlyCollection_1_t8616 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m147819(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m58029_gshared((ReadOnlyCollection_1_t8616 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m147820(__this, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m58030_gshared((ReadOnlyCollection_1_t8616 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m147821(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m58031_gshared((ReadOnlyCollection_1_t8616 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m147822(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m58032_gshared((ReadOnlyCollection_1_t8616 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m147823(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_Add_m58033_gshared((ReadOnlyCollection_1_t8616 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m147824(__this, method) (void)ReadOnlyCollection_1_System_Collections_IList_Clear_m58034_gshared((ReadOnlyCollection_1_t8616 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m147825(__this, ___value, method) (bool)ReadOnlyCollection_1_System_Collections_IList_Contains_m58035_gshared((ReadOnlyCollection_1_t8616 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m147826(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_IndexOf_m58036_gshared((ReadOnlyCollection_1_t8616 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m147827(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Insert_m58037_gshared((ReadOnlyCollection_1_t8616 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m147828(__this, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Remove_m58038_gshared((ReadOnlyCollection_1_t8616 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m147829(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m58039_gshared((ReadOnlyCollection_1_t8616 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m147830(__this, method) (bool)ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m58040_gshared((ReadOnlyCollection_1_t8616 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m147831(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m58041_gshared((ReadOnlyCollection_1_t8616 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m147832(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m58042_gshared((ReadOnlyCollection_1_t8616 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m147833(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m58043_gshared((ReadOnlyCollection_1_t8616 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m147834(__this, ___index, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IList_get_Item_m58044_gshared((ReadOnlyCollection_1_t8616 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m147835(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_set_Item_m58045_gshared((ReadOnlyCollection_1_t8616 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::Contains(T)
#define ReadOnlyCollection_1_Contains_m147836(__this, ___value, method) (bool)ReadOnlyCollection_1_Contains_m58046_gshared((ReadOnlyCollection_1_t8616 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m147837(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_CopyTo_m58047_gshared((ReadOnlyCollection_1_t8616 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m147838(__this, method) (Object_t*)ReadOnlyCollection_1_GetEnumerator_m58048_gshared((ReadOnlyCollection_1_t8616 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m147839(__this, ___value, method) (int32_t)ReadOnlyCollection_1_IndexOf_m58049_gshared((ReadOnlyCollection_1_t8616 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::get_Count()
#define ReadOnlyCollection_1_get_Count_m147840(__this, method) (int32_t)ReadOnlyCollection_1_get_Count_m58050_gshared((ReadOnlyCollection_1_t8616 *)__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<Games.Events.GameEvent>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m147841(__this, ___index, method) (GameEvent_t2137 *)ReadOnlyCollection_1_get_Item_m58051_gshared((ReadOnlyCollection_1_t8616 *)__this, (int32_t)___index, method)
