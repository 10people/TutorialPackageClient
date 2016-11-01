#pragma once
#include <stdint.h>
// System.Collections.Generic.RBTree/Node
struct Node_t7087;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node>
struct List_1_t7091;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.RBTree
struct RBTree_t7088  : public Object_t
{
	// System.Collections.Generic.RBTree/Node System.Collections.Generic.RBTree::root
	Node_t7087 * ___root;
	// System.Object System.Collections.Generic.RBTree::hlp
	Object_t * ___hlp;
	// System.UInt32 System.Collections.Generic.RBTree::version
	uint32_t ___version;
};
struct RBTree_t7088_ThreadStaticFields{
	// System.Collections.Generic.List`1<System.Collections.Generic.RBTree/Node> System.Collections.Generic.RBTree::cached_path
	List_1_t7091 * ___cached_path;
};
