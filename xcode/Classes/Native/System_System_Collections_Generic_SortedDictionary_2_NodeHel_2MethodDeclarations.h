#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,GuildPreviewInfo>
struct NodeHelper_t21189;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t5768;
// System.Collections.Generic.RBTree/Node
struct Node_t7087;

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,GuildPreviewInfo>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
 void NodeHelper__ctor_m154667 (NodeHelper_t21189 * __this, Object_t* ___cmp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,GuildPreviewInfo>::.cctor()
 void NodeHelper__cctor_m154668 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,GuildPreviewInfo>::Compare(TKey,System.Collections.Generic.RBTree/Node)
 int32_t NodeHelper_Compare_m154669 (NodeHelper_t21189 * __this, int32_t ___key, Node_t7087 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,GuildPreviewInfo>::CreateNode(TKey)
 Node_t7087 * NodeHelper_CreateNode_m154670 (NodeHelper_t21189 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,GuildPreviewInfo>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
 NodeHelper_t21189 * NodeHelper_GetHelper_m154671 (Object_t * __this/* static, unused */, Object_t* ___cmp, MethodInfo* method) IL2CPP_METHOD_ATTR;
