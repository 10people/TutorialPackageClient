#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,Relation>
struct Node_t21321;
// Relation
struct Relation_t1442;
// System.Collections.Generic.RBTree/Node
struct Node_t7087;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,Relation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,Relation>::.ctor(TKey)
 void Node__ctor_m155681 (Node_t21321 * __this, uint32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,Relation>::.ctor(TKey,TValue)
 void Node__ctor_m155682 (Node_t21321 * __this, uint32_t ___key, Relation_t1442 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,Relation>::SwapValue(System.Collections.Generic.RBTree/Node)
 void Node_SwapValue_m155683 (Node_t21321 * __this, Node_t7087 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,Relation>::AsKV()
 KeyValuePair_2_t5798  Node_AsKV_m155684 (Node_t21321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,Relation>::AsDE()
 DictionaryEntry_t1066  Node_AsDE_m155685 (Node_t21321 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
