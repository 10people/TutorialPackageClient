﻿#pragma once
#include <stdint.h>
// System.Collections.SortedList/Slot[]
struct SlotU5BU5D_t7880;
// System.Collections.IComparer
struct IComparer_t7107;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.SortedList
struct SortedList_t7423  : public Object_t
{
	// System.Int32 System.Collections.SortedList::inUse
	int32_t ___inUse;
	// System.Int32 System.Collections.SortedList::modificationCount
	int32_t ___modificationCount;
	// System.Collections.SortedList/Slot[] System.Collections.SortedList::table
	SlotU5BU5D_t7880* ___table;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	Object_t * ___comparer;
	// System.Int32 System.Collections.SortedList::defaultCapacity
	int32_t ___defaultCapacity;
};
struct SortedList_t7423_StaticFields{
	// System.Int32 System.Collections.SortedList::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
};
