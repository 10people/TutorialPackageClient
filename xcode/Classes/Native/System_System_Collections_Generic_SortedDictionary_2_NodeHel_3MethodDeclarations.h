#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,MasterPreviewInfo>
struct NodeHelper_t21239;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t5768;
// System.Collections.Generic.RBTree/Node
struct Node_t7087;

// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,MasterPreviewInfo>::.ctor(System.Collections.Generic.IComparer`1<TKey>)
 void NodeHelper__ctor_m155083 (NodeHelper_t21239 * __this, Object_t* ___cmp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,MasterPreviewInfo>::.cctor()
 void NodeHelper__cctor_m155084 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,MasterPreviewInfo>::Compare(TKey,System.Collections.Generic.RBTree/Node)
 int32_t NodeHelper_Compare_m155085 (NodeHelper_t21239 * __this, int32_t ___key, Node_t7087 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,MasterPreviewInfo>::CreateNode(TKey)
 Node_t7087 * NodeHelper_CreateNode_m155086 (NodeHelper_t21239 * __this, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedDictionary`2/NodeHelper<TKey,TValue> System.Collections.Generic.SortedDictionary`2/NodeHelper<System.Int32,MasterPreviewInfo>::GetHelper(System.Collections.Generic.IComparer`1<TKey>)
 NodeHelper_t21239 * NodeHelper_GetHelper_m155087 (Object_t * __this/* static, unused */, Object_t* ___cmp, MethodInfo* method) IL2CPP_METHOD_ATTR;
