#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.RBTree
struct RBTree_t7088;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node>
struct IEnumerator_1_t7092;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t7091;
// System.Collections.Generic.RBTree/Node
struct Node_t7087;
// System.Collections.Generic.RBTree/NodeEnumerator
#include "System_System_Collections_Generic_RBTree_NodeEnumerator.h"

// System.Void System.Collections.Generic.RBTree::.ctor(System.Object)
 void RBTree__ctor_m49322 (RBTree_t7088 * __this, Object_t * ___hlp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::System.Collections.Generic.IEnumerable<System.Collections.Generic.RBTree.Node>.GetEnumerator()
 Object_t* RBTree_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_RBTree_NodeU3E_GetEnumerator_m49323 (RBTree_t7088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.RBTree::System.Collections.IEnumerable.GetEnumerator()
 Object_t * RBTree_System_Collections_IEnumerable_GetEnumerator_m49324 (RBTree_t7088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::alloc_path()
 List_1_t7091 * RBTree_alloc_path_m49325 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::release_path(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 void RBTree_release_path_m49326 (Object_t * __this/* static, unused */, List_1_t7091 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::Clear()
 void RBTree_Clear_m49327 (RBTree_t7088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::get_Count()
 int32_t RBTree_get_Count_m49328 (RBTree_t7088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/NodeEnumerator System.Collections.Generic.RBTree::GetEnumerator()
 NodeEnumerator_t7090  RBTree_GetEnumerator_m49329 (RBTree_t7088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_insert(System.Int32,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 Node_t7087 * RBTree_do_insert_m49330 (RBTree_t7088 * __this, int32_t ___in_tree_cmp, Node_t7087 * ___current, List_1_t7091 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::do_remove(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 Node_t7087 * RBTree_do_remove_m49331 (RBTree_t7088 * __this, List_1_t7091 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 void RBTree_rebalance_insert_m49332 (RBTree_t7088 * __this, List_1_t7091 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete(System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 void RBTree_rebalance_delete_m49333 (RBTree_t7088 * __this, List_1_t7091 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_insert__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 void RBTree_rebalance_insert__rotate_final_m49334 (RBTree_t7088 * __this, int32_t ___curpos, List_1_t7091 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::rebalance_delete__rotate_final(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 void RBTree_rebalance_delete__rotate_final_m49335 (RBTree_t7088 * __this, int32_t ___curpos, List_1_t7091 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.RBTree::ensure_sibling_black(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 int32_t RBTree_ensure_sibling_black_m49336 (RBTree_t7088 * __this, int32_t ___curpos, List_1_t7091 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.RBTree::node_reparent(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.UInt32,System.Collections.Generic.RBTree/Node)
 void RBTree_node_reparent_m49337 (RBTree_t7088 * __this, Node_t7087 * ___orig_parent, Node_t7087 * ___orig, uint32_t ___orig_size, Node_t7087 * ___updated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::right_most(System.Collections.Generic.RBTree/Node,System.Collections.Generic.RBTree/Node,System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>)
 Node_t7087 * RBTree_right_most_m49338 (Object_t * __this/* static, unused */, Node_t7087 * ___current, Node_t7087 * ___sibling, List_1_t7091 * ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
