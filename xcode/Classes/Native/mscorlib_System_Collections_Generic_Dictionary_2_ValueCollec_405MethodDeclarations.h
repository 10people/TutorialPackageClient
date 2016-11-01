#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>
struct ValueCollection_t16362;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Type,ObjectMetadata>
struct Dictionary_2_t5481;
// System.Collections.Generic.IEnumerator`1<ObjectMetadata>
struct IEnumerator_1_t16368;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// ObjectMetadata[]
struct ObjectMetadataU5BU5D_t16358;
// ObjectMetadata
#include "AssemblyU2DCSharp_ObjectMetadata.h"
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,ObjectMetadata>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_406.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ValueCollection__ctor_m122187 (ValueCollection_t16362 * __this, Dictionary_2_t5481 * ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m122188 (ValueCollection_t16362 * __this, ObjectMetadata_t1073  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
 void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m122189 (ValueCollection_t16362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m122190 (ValueCollection_t16362 * __this, ObjectMetadata_t1073  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m122191 (ValueCollection_t16362 * __this, ObjectMetadata_t1073  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
 Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m122192 (ValueCollection_t16362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ValueCollection_System_Collections_ICollection_CopyTo_m122193 (ValueCollection_t16362 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m122194 (ValueCollection_t16362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
 bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m122195 (ValueCollection_t16362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
 bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m122196 (ValueCollection_t16362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m122197 (ValueCollection_t16362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::CopyTo(TValue[],System.Int32)
 void ValueCollection_CopyTo_m122198 (ValueCollection_t16362 * __this, ObjectMetadataU5BU5D_t16358* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::GetEnumerator()
 Enumerator_t16369  ValueCollection_GetEnumerator_m122199 (ValueCollection_t16362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,ObjectMetadata>::get_Count()
 int32_t ValueCollection_get_Count_m122200 (ValueCollection_t16362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
