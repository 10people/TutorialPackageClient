#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// JsonData
struct JsonData_t1057;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1058;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// JsonWriter
struct JsonWriter_t1060;
// System.Collections.IDictionary
struct IDictionary_t1061;
// System.Collections.IList
struct IList_t1062;
// IJsonWrapper
struct IJsonWrapper_t1063;
// JsonType
#include "AssemblyU2DCSharp_JsonType.h"

// System.Void JsonData::.ctor()
 void JsonData__ctor_m6641 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::.ctor(System.Boolean)
 void JsonData__ctor_m6642 (JsonData_t1057 * __this, bool ___boolean, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::.ctor(System.Double)
 void JsonData__ctor_m6643 (JsonData_t1057 * __this, double ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::.ctor(System.Int32)
 void JsonData__ctor_m6644 (JsonData_t1057 * __this, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::.ctor(System.Int64)
 void JsonData__ctor_m6645 (JsonData_t1057 * __this, int64_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::.ctor(System.Object)
 void JsonData__ctor_m6646 (JsonData_t1057 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::.ctor(System.String)
 void JsonData__ctor_m6647 (JsonData_t1057 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JsonData::System.Collections.ICollection.get_Count()
 int32_t JsonData_System_Collections_ICollection_get_Count_m6648 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::System.Collections.ICollection.get_IsSynchronized()
 bool JsonData_System_Collections_ICollection_get_IsSynchronized_m6649 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonData::System.Collections.ICollection.get_SyncRoot()
 Object_t * JsonData_System_Collections_ICollection_get_SyncRoot_m6650 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::System.Collections.IDictionary.get_IsFixedSize()
 bool JsonData_System_Collections_IDictionary_get_IsFixedSize_m6651 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::System.Collections.IDictionary.get_IsReadOnly()
 bool JsonData_System_Collections_IDictionary_get_IsReadOnly_m6652 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection JsonData::System.Collections.IDictionary.get_Keys()
 Object_t * JsonData_System_Collections_IDictionary_get_Keys_m6653 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection JsonData::System.Collections.IDictionary.get_Values()
 Object_t * JsonData_System_Collections_IDictionary_get_Values_m6654 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::IJsonWrapper.get_IsArray()
 bool JsonData_IJsonWrapper_get_IsArray_m6655 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::IJsonWrapper.get_IsBoolean()
 bool JsonData_IJsonWrapper_get_IsBoolean_m6656 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::IJsonWrapper.get_IsDouble()
 bool JsonData_IJsonWrapper_get_IsDouble_m6657 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::IJsonWrapper.get_IsInt()
 bool JsonData_IJsonWrapper_get_IsInt_m6658 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::IJsonWrapper.get_IsLong()
 bool JsonData_IJsonWrapper_get_IsLong_m6659 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::IJsonWrapper.get_IsObject()
 bool JsonData_IJsonWrapper_get_IsObject_m6660 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::IJsonWrapper.get_IsString()
 bool JsonData_IJsonWrapper_get_IsString_m6661 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::System.Collections.IList.get_IsFixedSize()
 bool JsonData_System_Collections_IList_get_IsFixedSize_m6662 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::System.Collections.IList.get_IsReadOnly()
 bool JsonData_System_Collections_IList_get_IsReadOnly_m6663 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonData::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * JsonData_System_Collections_IDictionary_get_Item_m6664 (JsonData_t1057 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void JsonData_System_Collections_IDictionary_set_Item_m6665 (JsonData_t1057 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonData::System.Collections.Specialized.IOrderedDictionary.get_Item(System.Int32)
 Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_get_Item_m6666 (JsonData_t1057 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.Specialized.IOrderedDictionary.set_Item(System.Int32,System.Object)
 void JsonData_System_Collections_Specialized_IOrderedDictionary_set_Item_m6667 (JsonData_t1057 * __this, int32_t ___idx, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object JsonData::System.Collections.IList.get_Item(System.Int32)
 Object_t * JsonData_System_Collections_IList_get_Item_m6668 (JsonData_t1057 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
 void JsonData_System_Collections_IList_set_Item_m6669 (JsonData_t1057 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void JsonData_System_Collections_ICollection_CopyTo_m6670 (JsonData_t1057 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
 void JsonData_System_Collections_IDictionary_Add_m6671 (JsonData_t1057 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.IDictionary.Clear()
 void JsonData_System_Collections_IDictionary_Clear_m6672 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::System.Collections.IDictionary.Contains(System.Object)
 bool JsonData_System_Collections_IDictionary_Contains_m6673 (JsonData_t1057 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator JsonData::System.Collections.IDictionary.GetEnumerator()
 Object_t * JsonData_System_Collections_IDictionary_GetEnumerator_m6674 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.IDictionary.Remove(System.Object)
 void JsonData_System_Collections_IDictionary_Remove_m6675 (JsonData_t1057 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator JsonData::System.Collections.IEnumerable.GetEnumerator()
 Object_t * JsonData_System_Collections_IEnumerable_GetEnumerator_m6676 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::IJsonWrapper.GetBoolean()
 bool JsonData_IJsonWrapper_GetBoolean_m6677 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JsonData::IJsonWrapper.GetDouble()
 double JsonData_IJsonWrapper_GetDouble_m6678 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JsonData::IJsonWrapper.GetInt()
 int32_t JsonData_IJsonWrapper_GetInt_m6679 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JsonData::IJsonWrapper.GetLong()
 int64_t JsonData_IJsonWrapper_GetLong_m6680 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JsonData::IJsonWrapper.GetString()
 String_t* JsonData_IJsonWrapper_GetString_m6681 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::IJsonWrapper.SetBoolean(System.Boolean)
 void JsonData_IJsonWrapper_SetBoolean_m6682 (JsonData_t1057 * __this, bool ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::IJsonWrapper.SetDouble(System.Double)
 void JsonData_IJsonWrapper_SetDouble_m6683 (JsonData_t1057 * __this, double ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::IJsonWrapper.SetInt(System.Int32)
 void JsonData_IJsonWrapper_SetInt_m6684 (JsonData_t1057 * __this, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::IJsonWrapper.SetLong(System.Int64)
 void JsonData_IJsonWrapper_SetLong_m6685 (JsonData_t1057 * __this, int64_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::IJsonWrapper.SetString(System.String)
 void JsonData_IJsonWrapper_SetString_m6686 (JsonData_t1057 * __this, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JsonData::IJsonWrapper.ToJson()
 String_t* JsonData_IJsonWrapper_ToJson_m6687 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::IJsonWrapper.ToJson(JsonWriter)
 void JsonData_IJsonWrapper_ToJson_m6688 (JsonData_t1057 * __this, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JsonData::System.Collections.IList.Add(System.Object)
 int32_t JsonData_System_Collections_IList_Add_m6689 (JsonData_t1057 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.IList.Clear()
 void JsonData_System_Collections_IList_Clear_m6690 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::System.Collections.IList.Contains(System.Object)
 bool JsonData_System_Collections_IList_Contains_m6691 (JsonData_t1057 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JsonData::System.Collections.IList.IndexOf(System.Object)
 int32_t JsonData_System_Collections_IList_IndexOf_m6692 (JsonData_t1057 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
 void JsonData_System_Collections_IList_Insert_m6693 (JsonData_t1057 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.IList.Remove(System.Object)
 void JsonData_System_Collections_IList_Remove_m6694 (JsonData_t1057 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.IList.RemoveAt(System.Int32)
 void JsonData_System_Collections_IList_RemoveAt_m6695 (JsonData_t1057 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
 Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m6696 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.Specialized.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
 void JsonData_System_Collections_Specialized_IOrderedDictionary_Insert_m6697 (JsonData_t1057 * __this, int32_t ___idx, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::System.Collections.Specialized.IOrderedDictionary.RemoveAt(System.Int32)
 void JsonData_System_Collections_Specialized_IOrderedDictionary_RemoveAt_m6698 (JsonData_t1057 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JsonData::get_Count()
 int32_t JsonData_get_Count_m6699 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::get_IsArray()
 bool JsonData_get_IsArray_m6700 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::get_IsBoolean()
 bool JsonData_get_IsBoolean_m6701 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::get_IsDouble()
 bool JsonData_get_IsDouble_m6702 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::get_IsInt()
 bool JsonData_get_IsInt_m6703 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::get_IsLong()
 bool JsonData_get_IsLong_m6704 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::get_IsObject()
 bool JsonData_get_IsObject_m6705 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::get_IsString()
 bool JsonData_get_IsString_m6706 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonData JsonData::get_Item(System.String)
 JsonData_t1057 * JsonData_get_Item_m6707 (JsonData_t1057 * __this, String_t* ___prop_name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::set_Item(System.String,JsonData)
 void JsonData_set_Item_m6708 (JsonData_t1057 * __this, String_t* ___prop_name, JsonData_t1057 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonData JsonData::get_Item(System.Int32)
 JsonData_t1057 * JsonData_get_Item_m6709 (JsonData_t1057 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::set_Item(System.Int32,JsonData)
 void JsonData_set_Item_m6710 (JsonData_t1057 * __this, int32_t ___index, JsonData_t1057 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection JsonData::EnsureCollection()
 Object_t * JsonData_EnsureCollection_m6711 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary JsonData::EnsureDictionary()
 Object_t * JsonData_EnsureDictionary_m6712 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList JsonData::EnsureList()
 Object_t * JsonData_EnsureList_m6713 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonData JsonData::ToJsonData(System.Object)
 JsonData_t1057 * JsonData_ToJsonData_m6714 (JsonData_t1057 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::WriteJson(IJsonWrapper,JsonWriter)
 void JsonData_WriteJson_m6715 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JsonData::Add(System.Object)
 int32_t JsonData_Add_m6716 (JsonData_t1057 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::Clear()
 void JsonData_Clear_m6717 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::Equals(JsonData)
 bool JsonData_Equals_m6718 (JsonData_t1057 * __this, JsonData_t1057 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonType JsonData::GetJsonType()
 int32_t JsonData_GetJsonType_m6719 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::SetJsonType(JsonType)
 void JsonData_SetJsonType_m6720 (JsonData_t1057 * __this, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JsonData::ToJson()
 String_t* JsonData_ToJson_m6721 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JsonData::ToJson(JsonWriter)
 void JsonData_ToJson_m6722 (JsonData_t1057 * __this, JsonWriter_t1060 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JsonData::ToString()
 String_t* JsonData_ToString_m6723 (JsonData_t1057 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonData JsonData::op_Implicit(System.Boolean)
 JsonData_t1057 * JsonData_op_Implicit_m6724 (Object_t * __this/* static, unused */, bool ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonData JsonData::op_Implicit(System.Double)
 JsonData_t1057 * JsonData_op_Implicit_m6725 (Object_t * __this/* static, unused */, double ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonData JsonData::op_Implicit(System.Int32)
 JsonData_t1057 * JsonData_op_Implicit_m6726 (Object_t * __this/* static, unused */, int32_t ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonData JsonData::op_Implicit(System.Int64)
 JsonData_t1057 * JsonData_op_Implicit_m6727 (Object_t * __this/* static, unused */, int64_t ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// JsonData JsonData::op_Implicit(System.String)
 JsonData_t1057 * JsonData_op_Implicit_m6728 (Object_t * __this/* static, unused */, String_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JsonData::op_Explicit(JsonData)
 bool JsonData_op_Explicit_m6729 (Object_t * __this/* static, unused */, JsonData_t1057 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double JsonData::op_Explicit(JsonData)
 double JsonData_op_Explicit_m6730 (Object_t * __this/* static, unused */, JsonData_t1057 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JsonData::op_Explicit(JsonData)
 int32_t JsonData_op_Explicit_m6731 (Object_t * __this/* static, unused */, JsonData_t1057 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 JsonData::op_Explicit(JsonData)
 int64_t JsonData_op_Explicit_m6732 (Object_t * __this/* static, unused */, JsonData_t1057 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JsonData::op_Explicit(JsonData)
 String_t* JsonData_op_Explicit_m6733 (Object_t * __this/* static, unused */, JsonData_t1057 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
