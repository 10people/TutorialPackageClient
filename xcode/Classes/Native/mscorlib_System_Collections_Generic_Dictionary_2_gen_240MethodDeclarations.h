#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>
struct Dictionary_2_t4373;
// System.Collections.Generic.ICollection`1<MessageID>
struct ICollection_1_t20551;
// System.Collections.Generic.ICollection`1<SPacket.SocketInstance.Ipacket>
struct ICollection_1_t20552;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Object
struct Object_t;
// SPacket.SocketInstance.Ipacket
struct Ipacket_t2528;
// System.Collections.Generic.Dictionary`2/KeyCollection<MessageID,SPacket.SocketInstance.Ipacket>
struct KeyCollection_t20553;
// System.Collections.Generic.Dictionary`2/ValueCollection<MessageID,SPacket.SocketInstance.Ipacket>
struct ValueCollection_t20554;
// System.Collections.Generic.IEqualityComparer`1<MessageID>
struct IEqualityComparer_1_t20549;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.KeyValuePair`2<MessageID,SPacket.SocketInstance.Ipacket>[]
struct KeyValuePair_2U5BU5D_t20555;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<MessageID,SPacket.SocketInstance.Ipacket>>
struct IEnumerator_1_t20557;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// MessageID
#include "AssemblyU2DCSharp_MessageID.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<MessageID,SPacket.SocketInstance.Ipacket>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_257.h"
// System.Collections.Generic.Dictionary`2/Enumerator<MessageID,SPacket.SocketInstance.Ipacket>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__249.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::.ctor()
 void Dictionary_2__ctor_m40455 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m149793 (Dictionary_2_t4373 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::.ctor(System.Int32)
 void Dictionary_2__ctor_m149794 (Dictionary_2_t4373 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m149795 (Dictionary_2_t4373 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m149796 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
 Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m149797 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.IDictionary.get_Keys()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Keys_m149798 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.IDictionary.get_Values()
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Values_m149799 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.IDictionary.get_IsFixedSize()
 bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m149800 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.IDictionary.get_IsReadOnly()
 bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m149801 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m149802 (Dictionary_2_t4373 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m149803 (Dictionary_2_t4373 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m149804 (Dictionary_2_t4373 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.IDictionary.Contains(System.Object)
 bool Dictionary_2_System_Collections_IDictionary_Contains_m149805 (Dictionary_2_t4373 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m149806 (Dictionary_2_t4373 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m149807 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m149808 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m149809 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m149810 (Dictionary_2_t4373 * __this, KeyValuePair_2_t20556  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m149811 (Dictionary_2_t4373 * __this, KeyValuePair_2_t20556  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m149812 (Dictionary_2_t4373 * __this, KeyValuePair_2U5BU5D_t20555* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m149813 (Dictionary_2_t4373 * __this, KeyValuePair_2_t20556  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m149814 (Dictionary_2_t4373 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m149815 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m149816 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m149817 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::get_Count()
 int32_t Dictionary_2_get_Count_m149818 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::get_Item(TKey)
 Object_t * Dictionary_2_get_Item_m40457 (Dictionary_2_t4373 * __this, uint16_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m149819 (Dictionary_2_t4373 * __this, uint16_t ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m149820 (Dictionary_2_t4373 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m149821 (Dictionary_2_t4373 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m149822 (Dictionary_2_t4373 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::make_pair(TKey,TValue)
 KeyValuePair_2_t20556  Dictionary_2_make_pair_m149823 (Object_t * __this/* static, unused */, uint16_t ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::pick_key(TKey,TValue)
 uint16_t Dictionary_2_pick_key_m149824 (Object_t * __this/* static, unused */, uint16_t ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::pick_value(TKey,TValue)
 Object_t * Dictionary_2_pick_value_m149825 (Object_t * __this/* static, unused */, uint16_t ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m149826 (Dictionary_2_t4373 * __this, KeyValuePair_2U5BU5D_t20555* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::Resize()
 void Dictionary_2_Resize_m149827 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::Add(TKey,TValue)
 void Dictionary_2_Add_m40459 (Dictionary_2_t4373 * __this, uint16_t ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::Clear()
 void Dictionary_2_Clear_m149828 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m40456 (Dictionary_2_t4373 * __this, uint16_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m149829 (Dictionary_2_t4373 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m149830 (Dictionary_2_t4373 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m149831 (Dictionary_2_t4373 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::Remove(TKey)
 bool Dictionary_2_Remove_m149832 (Dictionary_2_t4373 * __this, uint16_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m149833 (Dictionary_2_t4373 * __this, uint16_t ___key, Object_t ** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::get_Keys()
 KeyCollection_t20553 * Dictionary_2_get_Keys_m149834 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::get_Values()
 ValueCollection_t20554 * Dictionary_2_get_Values_m149835 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::ToTKey(System.Object)
 uint16_t Dictionary_2_ToTKey_m149836 (Dictionary_2_t4373 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::ToTValue(System.Object)
 Object_t * Dictionary_2_ToTValue_m149837 (Dictionary_2_t4373 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m149838 (Dictionary_2_t4373 * __this, KeyValuePair_2_t20556  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::GetEnumerator()
 Enumerator_t20558  Dictionary_2_GetEnumerator_m149839 (Dictionary_2_t4373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1066  Dictionary_2_U3CCopyToU3Em__0_m149840 (Object_t * __this/* static, unused */, uint16_t ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
