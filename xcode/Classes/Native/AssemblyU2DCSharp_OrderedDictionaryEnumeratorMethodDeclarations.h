#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t1065;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>
struct IEnumerator_1_t1064;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>)
 void OrderedDictionaryEnumerator__ctor_m6734 (OrderedDictionaryEnumerator_t1065 * __this, Object_t* ___enumerator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OrderedDictionaryEnumerator::get_Current()
 Object_t * OrderedDictionaryEnumerator_get_Current_m6735 (OrderedDictionaryEnumerator_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry OrderedDictionaryEnumerator::get_Entry()
 DictionaryEntry_t1066  OrderedDictionaryEnumerator_get_Entry_m6736 (OrderedDictionaryEnumerator_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OrderedDictionaryEnumerator::get_Key()
 Object_t * OrderedDictionaryEnumerator_get_Key_m6737 (OrderedDictionaryEnumerator_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object OrderedDictionaryEnumerator::get_Value()
 Object_t * OrderedDictionaryEnumerator_get_Value_m6738 (OrderedDictionaryEnumerator_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OrderedDictionaryEnumerator::MoveNext()
 bool OrderedDictionaryEnumerator_MoveNext_m6739 (OrderedDictionaryEnumerator_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OrderedDictionaryEnumerator::Reset()
 void OrderedDictionaryEnumerator_Reset_m6740 (OrderedDictionaryEnumerator_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
