#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>
struct ValueCollection_t16325;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Type,ArrayMetadata>
struct Dictionary_2_t5479;
// System.Collections.Generic.IEnumerator`1<ArrayMetadata>
struct IEnumerator_1_t16332;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// ArrayMetadata[]
struct ArrayMetadataU5BU5D_t16319;
// ArrayMetadata
#include "AssemblyU2DCSharp_ArrayMetadata.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,ArrayMetadata>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_402.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ValueCollection__ctor_m121907 (ValueCollection_t16325 * __this, Dictionary_2_t5479 * ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m121908 (ValueCollection_t16325 * __this, ArrayMetadata_t1071  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m121909 (ValueCollection_t16325 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m121910 (ValueCollection_t16325 * __this, ArrayMetadata_t1071  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m121911 (ValueCollection_t16325 * __this, ArrayMetadata_t1071  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
 Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m121912 (ValueCollection_t16325 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ValueCollection_System_Collections_ICollection_CopyTo_m121913 (ValueCollection_t16325 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m121914 (ValueCollection_t16325 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m121915 (ValueCollection_t16325 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::System.Collections.ICollection.get_IsSynchronized()
 bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m121916 (ValueCollection_t16325 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m121917 (ValueCollection_t16325 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::CopyTo(TValue[],System.Int32)
 void ValueCollection_CopyTo_m121918 (ValueCollection_t16325 * __this, ArrayMetadataU5BU5D_t16319* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::GetEnumerator()
 Enumerator_t16333  ValueCollection_GetEnumerator_m121919 (ValueCollection_t16325 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ArrayMetadata>::get_Count()
 int32_t ValueCollection_get_Count_m121920 (ValueCollection_t16325 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
