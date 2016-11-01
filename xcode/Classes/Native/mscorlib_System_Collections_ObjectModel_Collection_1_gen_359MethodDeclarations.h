#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>
struct Collection_1_t23862;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t23842;
// System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>
struct IEnumerator_1_t6351;
// System.Collections.Generic.IList`1<LitJson.PropertyMetadata>
struct IList_1_t6347;
// LitJson.PropertyMetadata
#include "LitJson_LitJson_PropertyMetadata.h"

// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::.ctor()
 void Collection_1__ctor_m173535 (Collection_1_t23862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m173536 (Collection_1_t23862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Collection_1_System_Collections_ICollection_CopyTo_m173537 (Collection_1_t23862 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m173538 (Collection_1_t23862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.IList.Add(System.Object)
 int32_t Collection_1_System_Collections_IList_Add_m173539 (Collection_1_t23862 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.IList.Contains(System.Object)
 bool Collection_1_System_Collections_IList_Contains_m173540 (Collection_1_t23862 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.IList.IndexOf(System.Object)
 int32_t Collection_1_System_Collections_IList_IndexOf_m173541 (Collection_1_t23862 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.IList.Insert(System.Int32,System.Object)
 void Collection_1_System_Collections_IList_Insert_m173542 (Collection_1_t23862 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.IList.Remove(System.Object)
 void Collection_1_System_Collections_IList_Remove_m173543 (Collection_1_t23862 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.ICollection.get_IsSynchronized()
 bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m173544 (Collection_1_t23862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m173545 (Collection_1_t23862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.IList.get_IsFixedSize()
 bool Collection_1_System_Collections_IList_get_IsFixedSize_m173546 (Collection_1_t23862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.IList.get_IsReadOnly()
 bool Collection_1_System_Collections_IList_get_IsReadOnly_m173547 (Collection_1_t23862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.IList.get_Item(System.Int32)
 Object_t * Collection_1_System_Collections_IList_get_Item_m173548 (Collection_1_t23862 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void Collection_1_System_Collections_IList_set_Item_m173549 (Collection_1_t23862 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::Add(T)
 void Collection_1_Add_m173550 (Collection_1_t23862 * __this, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::Clear()
 void Collection_1_Clear_m173551 (Collection_1_t23862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::ClearItems()
 void Collection_1_ClearItems_m173552 (Collection_1_t23862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::Contains(T)
 bool Collection_1_Contains_m173553 (Collection_1_t23862 * __this, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::CopyTo(T[],System.Int32)
 void Collection_1_CopyTo_m173554 (Collection_1_t23862 * __this, PropertyMetadataU5BU5D_t23842* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::GetEnumerator()
 Object_t* Collection_1_GetEnumerator_m173555 (Collection_1_t23862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::IndexOf(T)
 int32_t Collection_1_IndexOf_m173556 (Collection_1_t23862 * __this, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::Insert(System.Int32,T)
 void Collection_1_Insert_m173557 (Collection_1_t23862 * __this, int32_t ___index, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::InsertItem(System.Int32,T)
 void Collection_1_InsertItem_m173558 (Collection_1_t23862 * __this, int32_t ___index, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::Remove(T)
 bool Collection_1_Remove_m173559 (Collection_1_t23862 * __this, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::RemoveAt(System.Int32)
 void Collection_1_RemoveAt_m173560 (Collection_1_t23862 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::RemoveItem(System.Int32)
 void Collection_1_RemoveItem_m173561 (Collection_1_t23862 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::get_Count()
 int32_t Collection_1_get_Count_m173562 (Collection_1_t23862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::get_Item(System.Int32)
 PropertyMetadata_t6294  Collection_1_get_Item_m173563 (Collection_1_t23862 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::set_Item(System.Int32,T)
 void Collection_1_set_Item_m173564 (Collection_1_t23862 * __this, int32_t ___index, PropertyMetadata_t6294  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::SetItem(System.Int32,T)
 void Collection_1_SetItem_m173565 (Collection_1_t23862 * __this, int32_t ___index, PropertyMetadata_t6294  ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::IsValidItem(System.Object)
 bool Collection_1_IsValidItem_m173566 (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::ConvertItem(System.Object)
 PropertyMetadata_t6294  Collection_1_ConvertItem_m173567 (Object_t * __this/* static, unused */, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::CheckWritable(System.Collections.Generic.IList`1<T>)
 void Collection_1_CheckWritable_m173568 (Object_t * __this/* static, unused */, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::IsSynchronized(System.Collections.Generic.IList`1<T>)
 bool Collection_1_IsSynchronized_m173569 (Object_t * __this/* static, unused */, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ObjectModel.Collection`1<LitJson.PropertyMetadata>::IsFixedSize(System.Collections.Generic.IList`1<T>)
 bool Collection_1_IsFixedSize_m173570 (Object_t * __this/* static, unused */, Object_t* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
