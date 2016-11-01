#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.JsonData
struct JsonData_t1031;
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
// LitJson.JsonWriter
struct JsonWriter_t6286;
// System.Collections.IDictionary
struct IDictionary_t1061;
// System.Collections.IList
struct IList_t1062;
// LitJson.IJsonWrapper
struct IJsonWrapper_t6290;
// LitJson.JsonType
#include "LitJson_LitJson_JsonType.h"

// System.Void LitJson.JsonData::.ctor()
 void JsonData__ctor_m44184 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Boolean)
 void JsonData__ctor_m44185 (JsonData_t1031 * __this, bool ___boolean, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Double)
 void JsonData__ctor_m44186 (JsonData_t1031 * __this, double ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int32)
 void JsonData__ctor_m44187 (JsonData_t1031 * __this, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Int64)
 void JsonData__ctor_m44188 (JsonData_t1031 * __this, int64_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.Object)
 void JsonData__ctor_m44189 (JsonData_t1031 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::.ctor(System.String)
 void JsonData__ctor_m44190 (JsonData_t1031 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
 int32_t JsonData_System_Collections_ICollection_get_Count_m44191 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.ICollection.get_IsSynchronized()
 bool JsonData_System_Collections_ICollection_get_IsSynchronized_m44192 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
 Object_t * JsonData_System_Collections_ICollection_get_SyncRoot_m44193 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsFixedSize()
 bool JsonData_System_Collections_IDictionary_get_IsFixedSize_m44194 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.get_IsReadOnly()
 bool JsonData_System_Collections_IDictionary_get_IsReadOnly_m44195 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Keys()
 Object_t * JsonData_System_Collections_IDictionary_get_Keys_m44196 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::System.Collections.IDictionary.get_Values()
 Object_t * JsonData_System_Collections_IDictionary_get_Values_m44197 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsArray()
 bool JsonData_LitJson_IJsonWrapper_get_IsArray_m44198 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsBoolean()
 bool JsonData_LitJson_IJsonWrapper_get_IsBoolean_m44199 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsDouble()
 bool JsonData_LitJson_IJsonWrapper_get_IsDouble_m44200 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsInt()
 bool JsonData_LitJson_IJsonWrapper_get_IsInt_m44201 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsLong()
 bool JsonData_LitJson_IJsonWrapper_get_IsLong_m44202 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsObject()
 bool JsonData_LitJson_IJsonWrapper_get_IsObject_m44203 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsString()
 bool JsonData_LitJson_IJsonWrapper_get_IsString_m44204 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
 bool JsonData_System_Collections_IList_get_IsFixedSize_m44205 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
 bool JsonData_System_Collections_IList_get_IsReadOnly_m44206 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * JsonData_System_Collections_IDictionary_get_Item_m44207 (JsonData_t1031 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void JsonData_System_Collections_IDictionary_set_Item_m44208 (JsonData_t1031 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.get_Item(System.Int32)
 Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_get_Item_m44209 (JsonData_t1031 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.set_Item(System.Int32,System.Object)
 void JsonData_System_Collections_Specialized_IOrderedDictionary_set_Item_m44210 (JsonData_t1031 * __this, int32_t ___idx, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
 Object_t * JsonData_System_Collections_IList_get_Item_m44211 (JsonData_t1031 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
 void JsonData_System_Collections_IList_set_Item_m44212 (JsonData_t1031 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void JsonData_System_Collections_ICollection_CopyTo_m44213 (JsonData_t1031 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
 void JsonData_System_Collections_IDictionary_Add_m44214 (JsonData_t1031 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Clear()
 void JsonData_System_Collections_IDictionary_Clear_m44215 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
 bool JsonData_System_Collections_IDictionary_Contains_m44216 (JsonData_t1031 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
 Object_t * JsonData_System_Collections_IDictionary_GetEnumerator_m44217 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
 void JsonData_System_Collections_IDictionary_Remove_m44218 (JsonData_t1031 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
 Object_t * JsonData_System_Collections_IEnumerable_GetEnumerator_m44219 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
 bool JsonData_LitJson_IJsonWrapper_GetBoolean_m44220 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
 double JsonData_LitJson_IJsonWrapper_GetDouble_m44221 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
 int32_t JsonData_LitJson_IJsonWrapper_GetInt_m44222 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
 int64_t JsonData_LitJson_IJsonWrapper_GetLong_m44223 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
 String_t* JsonData_LitJson_IJsonWrapper_GetString_m44224 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
 void JsonData_LitJson_IJsonWrapper_SetBoolean_m44225 (JsonData_t1031 * __this, bool ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
 void JsonData_LitJson_IJsonWrapper_SetDouble_m44226 (JsonData_t1031 * __this, double ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
 void JsonData_LitJson_IJsonWrapper_SetInt_m44227 (JsonData_t1031 * __this, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
 void JsonData_LitJson_IJsonWrapper_SetLong_m44228 (JsonData_t1031 * __this, int64_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
 void JsonData_LitJson_IJsonWrapper_SetString_m44229 (JsonData_t1031 * __this, String_t* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::LitJson.IJsonWrapper.ToJson()
 String_t* JsonData_LitJson_IJsonWrapper_ToJson_m44230 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.ToJson(LitJson.JsonWriter)
 void JsonData_LitJson_IJsonWrapper_ToJson_m44231 (JsonData_t1031 * __this, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
 int32_t JsonData_System_Collections_IList_Add_m44232 (JsonData_t1031 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
 void JsonData_System_Collections_IList_Clear_m44233 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
 bool JsonData_System_Collections_IList_Contains_m44234 (JsonData_t1031 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
 int32_t JsonData_System_Collections_IList_IndexOf_m44235 (JsonData_t1031 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
 void JsonData_System_Collections_IList_Insert_m44236 (JsonData_t1031 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
 void JsonData_System_Collections_IList_Remove_m44237 (JsonData_t1031 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
 void JsonData_System_Collections_IList_RemoveAt_m44238 (JsonData_t1031 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
 Object_t * JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m44239 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.Insert(System.Int32,System.Object,System.Object)
 void JsonData_System_Collections_Specialized_IOrderedDictionary_Insert_m44240 (JsonData_t1031 * __this, int32_t ___idx, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.RemoveAt(System.Int32)
 void JsonData_System_Collections_Specialized_IOrderedDictionary_RemoveAt_m44241 (JsonData_t1031 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::get_Count()
 int32_t JsonData_get_Count_m44242 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsArray()
 bool JsonData_get_IsArray_m44243 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsBoolean()
 bool JsonData_get_IsBoolean_m44244 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsDouble()
 bool JsonData_get_IsDouble_m44245 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsInt()
 bool JsonData_get_IsInt_m44246 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsLong()
 bool JsonData_get_IsLong_m44247 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsObject()
 bool JsonData_get_IsObject_m44248 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::get_IsString()
 bool JsonData_get_IsString_m44249 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
 JsonData_t1031 * JsonData_get_Item_m6511 (JsonData_t1031 * __this, String_t* ___prop_name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
 void JsonData_set_Item_m44250 (JsonData_t1031 * __this, String_t* ___prop_name, JsonData_t1031 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
 JsonData_t1031 * JsonData_get_Item_m44251 (JsonData_t1031 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
 void JsonData_set_Item_m44252 (JsonData_t1031 * __this, int32_t ___index, JsonData_t1031 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
 Object_t * JsonData_EnsureCollection_m44253 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
 Object_t * JsonData_EnsureDictionary_m44254 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList LitJson.JsonData::EnsureList()
 Object_t * JsonData_EnsureList_m44255 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
 JsonData_t1031 * JsonData_ToJsonData_m44256 (JsonData_t1031 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
 void JsonData_WriteJson_m44257 (Object_t * __this/* static, unused */, Object_t * ___obj, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::Add(System.Object)
 int32_t JsonData_Add_m44258 (JsonData_t1031 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::Clear()
 void JsonData_Clear_m44259 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
 bool JsonData_Equals_m44260 (JsonData_t1031 * __this, JsonData_t1031 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonType LitJson.JsonData::GetJsonType()
 int32_t JsonData_GetJsonType_m44261 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
 void JsonData_SetJsonType_m44262 (JsonData_t1031 * __this, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToJson()
 String_t* JsonData_ToJson_m44263 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonData::ToJson(LitJson.JsonWriter)
 void JsonData_ToJson_m44264 (JsonData_t1031 * __this, JsonWriter_t6286 * ___writer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::ToString()
 String_t* JsonData_ToString_m44265 (JsonData_t1031 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Boolean)
 JsonData_t1031 * JsonData_op_Implicit_m44266 (Object_t * __this/* static, unused */, bool ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Double)
 JsonData_t1031 * JsonData_op_Implicit_m44267 (Object_t * __this/* static, unused */, double ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int32)
 JsonData_t1031 * JsonData_op_Implicit_m44268 (Object_t * __this/* static, unused */, int32_t ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int64)
 JsonData_t1031 * JsonData_op_Implicit_m44269 (Object_t * __this/* static, unused */, int64_t ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.String)
 JsonData_t1031 * JsonData_op_Implicit_m44270 (Object_t * __this/* static, unused */, String_t* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonData::op_Explicit(LitJson.JsonData)
 bool JsonData_op_Explicit_m44271 (Object_t * __this/* static, unused */, JsonData_t1031 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double LitJson.JsonData::op_Explicit(LitJson.JsonData)
 double JsonData_op_Explicit_m6514 (Object_t * __this/* static, unused */, JsonData_t1031 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.JsonData::op_Explicit(LitJson.JsonData)
 int32_t JsonData_op_Explicit_m6512 (Object_t * __this/* static, unused */, JsonData_t1031 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LitJson.JsonData::op_Explicit(LitJson.JsonData)
 int64_t JsonData_op_Explicit_m44272 (Object_t * __this/* static, unused */, JsonData_t1031 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonData::op_Explicit(LitJson.JsonData)
 String_t* JsonData_op_Explicit_m6513 (Object_t * __this/* static, unused */, JsonData_t1031 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
