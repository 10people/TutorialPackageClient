#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t6292;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t6291;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
 void OrderedDictionaryEnumerator__ctor_m44273 (OrderedDictionaryEnumerator_t6292 * __this, Object_t* ___enumerator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
 Object_t * OrderedDictionaryEnumerator_get_Current_m44274 (OrderedDictionaryEnumerator_t6292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
 DictionaryEntry_t1066  OrderedDictionaryEnumerator_get_Entry_m44275 (OrderedDictionaryEnumerator_t6292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
 Object_t * OrderedDictionaryEnumerator_get_Key_m44276 (OrderedDictionaryEnumerator_t6292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
 Object_t * OrderedDictionaryEnumerator_get_Value_m44277 (OrderedDictionaryEnumerator_t6292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
 bool OrderedDictionaryEnumerator_MoveNext_m44278 (OrderedDictionaryEnumerator_t6292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
 void OrderedDictionaryEnumerator_Reset_m44279 (OrderedDictionaryEnumerator_t6292 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
