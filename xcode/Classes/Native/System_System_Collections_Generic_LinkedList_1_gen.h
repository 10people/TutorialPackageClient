#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t20953;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t4532  : public Object_t
{
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Int32>::count
	uint32_t ___count;
	// System.UInt32 System.Collections.Generic.LinkedList`1<System.Int32>::version
	uint32_t ___version;
	// System.Object System.Collections.Generic.LinkedList`1<System.Int32>::syncRoot
	Object_t * ___syncRoot;
	// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedList`1<System.Int32>::first
	LinkedListNode_1_t20953 * ___first;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.LinkedList`1<System.Int32>::si
	SerializationInfo_t6402 * ___si;
};
