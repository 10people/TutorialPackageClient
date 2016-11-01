#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>
struct ValueCollection_t20091;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>
struct Dictionary_2_t2079;
// System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>
struct List_1_t2078;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>
struct IEnumerator_1_t20098;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>[]
struct List_1U5BU5D_t20087;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_482.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ValueCollection__ctor_m146434 (ValueCollection_t20091 * __this, Dictionary_2_t2079 * ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m146435 (ValueCollection_t20091 * __this, List_1_t2078 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::System.Collections.Generic.ICollection<TValue>.Clear()
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m146436 (ValueCollection_t20091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m146437 (ValueCollection_t20091 * __this, List_1_t2078 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m146438 (ValueCollection_t20091 * __this, List_1_t2078 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
 Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m146439 (ValueCollection_t20091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ValueCollection_System_Collections_ICollection_CopyTo_m146440 (ValueCollection_t20091 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m146441 (ValueCollection_t20091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m146442 (ValueCollection_t20091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::System.Collections.ICollection.get_IsSynchronized()
 bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m146443 (ValueCollection_t20091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m146444 (ValueCollection_t20091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::CopyTo(TValue[],System.Int32)
 void ValueCollection_CopyTo_m146445 (ValueCollection_t20091 * __this, List_1U5BU5D_t20087* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::GetEnumerator()
 Enumerator_t20099  ValueCollection_GetEnumerator_m146446 (ValueCollection_t20091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<TeamPlatformWindow/TeamPlatformplayerInfo>>::get_Count()
 int32_t ValueCollection_get_Count_m146447 (ValueCollection_t20091 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
