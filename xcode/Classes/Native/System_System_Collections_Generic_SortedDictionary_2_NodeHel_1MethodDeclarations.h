#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.UInt32,GuildMember>
struct NodeHelper_t21179;
// System.Collections.Generic.IComparer`1<System.UInt32>
struct IComparer_1_t5769;
// System.Collections.Generic.RBTree/Node
struct Node_t7087;

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.UInt32,GuildMember>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
 void NodeHelper__ctor_m154559 (NodeHelper_t21179 * __this, Object_t* ___cmp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.UInt32,GuildMember>::.cctor()
 void NodeHelper__cctor_m154560 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.UInt32,GuildMember>::Compare(TKey,System.Collections.Generic.RBTree/Node)
 int32_t NodeHelper_Compare_m154561 (NodeHelper_t21179 * __this, uint32_t ___key, Node_t7087 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.UInt32,GuildMember>::CreateNode(TKey)
 Node_t7087 * NodeHelper_CreateNode_m154562 (NodeHelper_t21179 * __this, uint32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.UInt32,GuildMember>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
 NodeHelper_t21179 * NodeHelper_GetHelper_m154563 (Object_t * __this/* static, unused */, Object_t* ___cmp, MethodInfo* method) IL2CPP_METHOD_ATTR;
