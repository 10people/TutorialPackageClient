#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.UInt64>
struct Node_t19652;
// System.Collections.Generic.RBTree/Node
struct Node_t7087;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.UInt64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.UInt64>::.ctor(TKey)
 void Node__ctor_m143188 (Node_t19652 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.UInt64>::.ctor(TKey,TValue)
 void Node__ctor_m143189 (Node_t19652 * __this, int32_t ___key, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.UInt64>::SwapValue(System.Collections.Generic.RBTree/Node)
 void Node_SwapValue_m143190 (Node_t19652 * __this, Node_t7087 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.UInt64>::AsKV()
 KeyValuePair_2_t5648  Node_AsKV_m143191 (Node_t19652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Int32,System.UInt64>::AsDE()
 DictionaryEntry_t1066  Node_AsDE_m143192 (Node_t19652 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
