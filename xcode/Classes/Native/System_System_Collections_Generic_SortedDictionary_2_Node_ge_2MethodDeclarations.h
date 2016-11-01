#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/Node<System.Int32,MasterPreviewInfo>
struct Node_t21245;
// MasterPreviewInfo
struct MasterPreviewInfo_t1538;
// System.Collections.Generic.RBTree/Node
struct Node_t7087;
// System.Collections.Generic.KeyValuePair`2<System.Int32,MasterPreviewInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_49.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,MasterPreviewInfo>::.ctor(TKey)
 void Node__ctor_m155058 (Node_t21245 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,MasterPreviewInfo>::.ctor(TKey,TValue)
 void Node__ctor_m155059 (Node_t21245 * __this, int32_t ___key, MasterPreviewInfo_t1538 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,MasterPreviewInfo>::SwapValue(System.Collections.Generic.RBTree/Node)
 void Node_SwapValue_m155060 (Node_t21245 * __this, Node_t7087 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Int32,MasterPreviewInfo>::AsKV()
 KeyValuePair_2_t5783  Node_AsKV_m155061 (Node_t21245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Int32,MasterPreviewInfo>::AsDE()
 DictionaryEntry_t1066  Node_AsDE_m155062 (Node_t21245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
