#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,GuildMember>
struct Node_t21185;
// GuildMember
struct GuildMember_t1444;
// System.Collections.Generic.RBTree/Node
struct Node_t7087;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,GuildMember>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_45.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,GuildMember>::.ctor(TKey)
 void Node__ctor_m154534 (Node_t21185 * __this, uint32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,GuildMember>::.ctor(TKey,TValue)
 void Node__ctor_m154535 (Node_t21185 * __this, uint32_t ___key, GuildMember_t1444 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,GuildMember>::SwapValue(System.Collections.Generic.RBTree/Node)
 void Node_SwapValue_m154536 (Node_t21185 * __this, Node_t7087 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,GuildMember>::AsKV()
 KeyValuePair_2_t5767  Node_AsKV_m154537 (Node_t21185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Node<System.UInt32,GuildMember>::AsDE()
 DictionaryEntry_t1066  Node_AsDE_m154538 (Node_t21185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
