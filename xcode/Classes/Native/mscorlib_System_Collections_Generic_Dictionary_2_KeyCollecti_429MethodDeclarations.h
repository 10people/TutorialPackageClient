#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>
struct KeyCollection_t16412;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>
struct Dictionary_2_t5485;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t16329;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Type[]
struct TypeU5BU5D_t1042;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_430.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_42MethodDeclarations.h"
#define KeyCollection__ctor_m122557(__this, ___dictionary, method) (void)KeyCollection__ctor_m59501_gshared((KeyCollection_t8799 *)__this, (Dictionary_2_t8794 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m122558(__this, ___item, method) (void)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m59502_gshared((KeyCollection_t8799 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m122559(__this, method) (void)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m59503_gshared((KeyCollection_t8799 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m122560(__this, ___item, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m59504_gshared((KeyCollection_t8799 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m122561(__this, ___item, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m59505_gshared((KeyCollection_t8799 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m122562(__this, method) (Object_t*)KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m59506_gshared((KeyCollection_t8799 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m122563(__this, ___array, ___index, method) (void)KeyCollection_System_Collections_ICollection_CopyTo_m59507_gshared((KeyCollection_t8799 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m122564(__this, method) (Object_t *)KeyCollection_System_Collections_IEnumerable_GetEnumerator_m59508_gshared((KeyCollection_t8799 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m122565(__this, method) (bool)KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m59509_gshared((KeyCollection_t8799 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m122566(__this, method) (bool)KeyCollection_System_Collections_ICollection_get_IsSynchronized_m59510_gshared((KeyCollection_t8799 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m122567(__this, method) (Object_t *)KeyCollection_System_Collections_ICollection_get_SyncRoot_m59511_gshared((KeyCollection_t8799 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m122568(__this, ___array, ___index, method) (void)KeyCollection_CopyTo_m59512_gshared((KeyCollection_t8799 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::GetEnumerator()
 Enumerator_t16417  KeyCollection_GetEnumerator_m122569 (KeyCollection_t16412 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,ImporterFunc>>::get_Count()
#define KeyCollection_get_Count_m122570(__this, method) (int32_t)KeyCollection_get_Count_m59514_gshared((KeyCollection_t8799 *)__this, method)
