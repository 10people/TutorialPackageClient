#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>
struct ValueCollection_t16435;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,PropertyMetadata>
struct Dictionary_2_t5489;
// System.Collections.Generic.IEnumerator`1<PropertyMetadata>
struct IEnumerator_1_t5502;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// PropertyMetadata[]
struct PropertyMetadataU5BU5D_t16432;
// PropertyMetadata
#include "AssemblyU2DCSharp_PropertyMetadata.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,PropertyMetadata>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_414.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ValueCollection__ctor_m122767 (ValueCollection_t16435 * __this, Dictionary_2_t5489 * ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m122768 (ValueCollection_t16435 * __this, PropertyMetadata_t1070  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m122769 (ValueCollection_t16435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m122770 (ValueCollection_t16435 * __this, PropertyMetadata_t1070  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m122771 (ValueCollection_t16435 * __this, PropertyMetadata_t1070  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
 Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m122772 (ValueCollection_t16435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ValueCollection_System_Collections_ICollection_CopyTo_m122773 (ValueCollection_t16435 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m122774 (ValueCollection_t16435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m122775 (ValueCollection_t16435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
 bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m122776 (ValueCollection_t16435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m122777 (ValueCollection_t16435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::CopyTo(TValue[],System.Int32)
 void ValueCollection_CopyTo_m122778 (ValueCollection_t16435 * __this, PropertyMetadataU5BU5D_t16432* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::GetEnumerator()
 Enumerator_t16441  ValueCollection_GetEnumerator_m122779 (ValueCollection_t16435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,PropertyMetadata>::get_Count()
 int32_t ValueCollection_get_Count_m122780 (ValueCollection_t16435 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
