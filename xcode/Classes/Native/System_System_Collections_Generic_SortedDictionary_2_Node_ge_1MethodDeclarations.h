#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/Node<System.Int32,GuildPreviewInfo>
struct Node_t21195;
// GuildPreviewInfo
struct GuildPreviewInfo_t1446;
// System.Collections.Generic.RBTree/Node
struct Node_t7087;
// System.Collections.Generic.KeyValuePair`2<System.Int32,GuildPreviewInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,GuildPreviewInfo>::.ctor(TKey)
 void Node__ctor_m154642 (Node_t21195 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,GuildPreviewInfo>::.ctor(TKey,TValue)
 void Node__ctor_m154643 (Node_t21195 * __this, int32_t ___key, GuildPreviewInfo_t1446 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.Int32,GuildPreviewInfo>::SwapValue(System.Collections.Generic.RBTree/Node)
 void Node_SwapValue_m154644 (Node_t21195 * __this, Node_t7087 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.Int32,GuildPreviewInfo>::AsKV()
 KeyValuePair_2_t5773  Node_AsKV_m154645 (Node_t21195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.Int32,GuildPreviewInfo>::AsDE()
 DictionaryEntry_t1066  Node_AsDE_m154646 (Node_t21195 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
