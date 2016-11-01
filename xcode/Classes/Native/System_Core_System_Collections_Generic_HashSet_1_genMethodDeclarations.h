#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t5627;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t8938;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t9158;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
 void HashSet_1__ctor_m39832 (HashSet_1_t5627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HashSet_1__ctor_m139845 (HashSet_1_t5627 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m139846 (HashSet_1_t5627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m139847 (HashSet_1_t5627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
 void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m139848 (HashSet_1_t5627 * __this, Int32U5BU5D_t116* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
 void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m139849 (HashSet_1_t5627 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m139850 (HashSet_1_t5627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
 int32_t HashSet_1_get_Count_m139851 (HashSet_1_t5627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 void HashSet_1_Init_m139852 (HashSet_1_t5627 * __this, int32_t ___capacity, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::InitArrays(System.Int32)
 void HashSet_1_InitArrays_m139853 (HashSet_1_t5627 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::SlotsContainsAt(System.Int32,System.Int32,T)
 bool HashSet_1_SlotsContainsAt_m139854 (HashSet_1_t5627 * __this, int32_t ___index, int32_t ___hash, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32)
 void HashSet_1_CopyTo_m139855 (HashSet_1_t5627 * __this, Int32U5BU5D_t116* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32,System.Int32)
 void HashSet_1_CopyTo_m139856 (HashSet_1_t5627 * __this, Int32U5BU5D_t116* ___array, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Resize()
 void HashSet_1_Resize_m139857 (HashSet_1_t5627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetLinkHashCode(System.Int32)
 int32_t HashSet_1_GetLinkHashCode_m139858 (HashSet_1_t5627 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetItemHashCode(T)
 int32_t HashSet_1_GetItemHashCode_m139859 (HashSet_1_t5627 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
 bool HashSet_1_Add_m39834 (HashSet_1_t5627 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
 void HashSet_1_Clear_m139860 (HashSet_1_t5627 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
 bool HashSet_1_Contains_m39833 (HashSet_1_t5627 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Remove(T)
 bool HashSet_1_Remove_m139861 (HashSet_1_t5627 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HashSet_1_GetObjectData_m139862 (HashSet_1_t5627 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::OnDeserialization(System.Object)
 void HashSet_1_OnDeserialization_m139863 (HashSet_1_t5627 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
