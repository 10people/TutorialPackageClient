#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.JsonMockWrapper
struct JsonMockWrapper_t6285;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1058;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1059;
// System.String
struct String_t;
// LitJson.JsonWriter
struct JsonWriter_t6286;
// LitJson.JsonType
#include "LitJson_LitJson_JsonType.h"

// System.Void LitJson.JsonMockWrapper::.ctor()
 void JsonMockWrapper__ctor_m44130 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IList.get_IsFixedSize()
 bool JsonMockWrapper_System_Collections_IList_get_IsFixedSize_m44131 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IList.get_IsReadOnly()
 bool JsonMockWrapper_System_Collections_IList_get_IsReadOnly_m44132 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMockWrapper::System.Collections.IList.get_Item(System.Int32)
 Object_t * JsonMockWrapper_System_Collections_IList_get_Item_m44133 (JsonMockWrapper_t6285 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.set_Item(System.Int32,System.Object)
 void JsonMockWrapper_System_Collections_IList_set_Item_m44134 (JsonMockWrapper_t6285 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonMockWrapper::System.Collections.IList.Add(System.Object)
 int32_t JsonMockWrapper_System_Collections_IList_Add_m44135 (JsonMockWrapper_t6285 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Clear()
 void JsonMockWrapper_System_Collections_IList_Clear_m44136 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IList.Contains(System.Object)
 bool JsonMockWrapper_System_Collections_IList_Contains_m44137 (JsonMockWrapper_t6285 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonMockWrapper::System.Collections.IList.IndexOf(System.Object)
 int32_t JsonMockWrapper_System_Collections_IList_IndexOf_m44138 (JsonMockWrapper_t6285 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Insert(System.Int32,System.Object)
 void JsonMockWrapper_System_Collections_IList_Insert_m44139 (JsonMockWrapper_t6285 * __this, int32_t ___i, Object_t * ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Remove(System.Object)
 void JsonMockWrapper_System_Collections_IList_Remove_m44140 (JsonMockWrapper_t6285 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.RemoveAt(System.Int32)
 void JsonMockWrapper_System_Collections_IList_RemoveAt_m44141 (JsonMockWrapper_t6285 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonMockWrapper::System.Collections.ICollection.get_Count()
 int32_t JsonMockWrapper_System_Collections_ICollection_get_Count_m44142 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.ICollection.get_IsSynchronized()
 bool JsonMockWrapper_System_Collections_ICollection_get_IsSynchronized_m44143 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMockWrapper::System.Collections.ICollection.get_SyncRoot()
 Object_t * JsonMockWrapper_System_Collections_ICollection_get_SyncRoot_m44144 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void JsonMockWrapper_System_Collections_ICollection_CopyTo_m44145 (JsonMockWrapper_t6285 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JsonMockWrapper::System.Collections.IEnumerable.GetEnumerator()
 Object_t * JsonMockWrapper_System_Collections_IEnumerable_GetEnumerator_m44146 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IDictionary.get_IsFixedSize()
 bool JsonMockWrapper_System_Collections_IDictionary_get_IsFixedSize_m44147 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IDictionary.get_IsReadOnly()
 bool JsonMockWrapper_System_Collections_IDictionary_get_IsReadOnly_m44148 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Keys()
 Object_t * JsonMockWrapper_System_Collections_IDictionary_get_Keys_m44149 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Values()
 Object_t * JsonMockWrapper_System_Collections_IDictionary_get_Values_m44150 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * JsonMockWrapper_System_Collections_IDictionary_get_Item_m44151 (JsonMockWrapper_t6285 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void JsonMockWrapper_System_Collections_IDictionary_set_Item_m44152 (JsonMockWrapper_t6285 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.Add(System.Object,System.Object)
 void JsonMockWrapper_System_Collections_IDictionary_Add_m44153 (JsonMockWrapper_t6285 * __this, Object_t * ___k, Object_t * ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.Clear()
 void JsonMockWrapper_System_Collections_IDictionary_Clear_m44154 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IDictionary.Contains(System.Object)
 bool JsonMockWrapper_System_Collections_IDictionary_Contains_m44155 (JsonMockWrapper_t6285 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.Remove(System.Object)
 void JsonMockWrapper_System_Collections_IDictionary_Remove_m44156 (JsonMockWrapper_t6285 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonMockWrapper::System.Collections.IDictionary.GetEnumerator()
 Object_t * JsonMockWrapper_System_Collections_IDictionary_GetEnumerator_m44157 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.get_Item(System.Int32)
 Object_t * JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_get_Item_m44158 (JsonMockWrapper_t6285 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.set_Item(System.Int32,System.Object)
 void JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_set_Item_m44159 (JsonMockWrapper_t6285 * __this, int32_t ___idx, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
 Object_t * JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m44160 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
 void JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_Insert_m44161 (JsonMockWrapper_t6285 * __this, int32_t ___i, Object_t * ___k, Object_t * ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::System.Collections.Specialized.IOrderedDictionary.RemoveAt(System.Int32)
 void JsonMockWrapper_System_Collections_Specialized_IOrderedDictionary_RemoveAt_m44162 (JsonMockWrapper_t6285 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsArray()
 bool JsonMockWrapper_get_IsArray_m44163 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsBoolean()
 bool JsonMockWrapper_get_IsBoolean_m44164 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsDouble()
 bool JsonMockWrapper_get_IsDouble_m44165 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsInt()
 bool JsonMockWrapper_get_IsInt_m44166 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsLong()
 bool JsonMockWrapper_get_IsLong_m44167 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsObject()
 bool JsonMockWrapper_get_IsObject_m44168 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::get_IsString()
 bool JsonMockWrapper_get_IsString_m44169 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonMockWrapper::GetBoolean()
 bool JsonMockWrapper_GetBoolean_m44170 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonMockWrapper::GetDouble()
 double JsonMockWrapper_GetDouble_m44171 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonMockWrapper::GetInt()
 int32_t JsonMockWrapper_GetInt_m44172 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonType LitJson.JsonMockWrapper::GetJsonType()
 int32_t JsonMockWrapper_GetJsonType_m44173 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonMockWrapper::GetLong()
 int64_t JsonMockWrapper_GetLong_m44174 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonMockWrapper::GetString()
 String_t* JsonMockWrapper_GetString_m44175 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetBoolean(System.Boolean)
 void JsonMockWrapper_SetBoolean_m44176 (JsonMockWrapper_t6285 * __this, bool ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetDouble(System.Double)
 void JsonMockWrapper_SetDouble_m44177 (JsonMockWrapper_t6285 * __this, double ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetInt(System.Int32)
 void JsonMockWrapper_SetInt_m44178 (JsonMockWrapper_t6285 * __this, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetJsonType(LitJson.JsonType)
 void JsonMockWrapper_SetJsonType_m44179 (JsonMockWrapper_t6285 * __this, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetLong(System.Int64)
 void JsonMockWrapper_SetLong_m44180 (JsonMockWrapper_t6285 * __this, int64_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::SetString(System.String)
 void JsonMockWrapper_SetString_m44181 (JsonMockWrapper_t6285 * __this, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonMockWrapper::ToJson()
 String_t* JsonMockWrapper_ToJson_m44182 (JsonMockWrapper_t6285 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonMockWrapper::ToJson(LitJson.JsonWriter)
 void JsonMockWrapper_ToJson_m44183 (JsonMockWrapper_t6285 * __this, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
