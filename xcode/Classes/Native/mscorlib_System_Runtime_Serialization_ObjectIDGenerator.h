#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
struct InstanceComparer_t8097;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t6897  : public Object_t
{
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectIDGenerator::table
	Hashtable_t4372 * ___table;
	// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::current
	int64_t ___current;
};
struct ObjectIDGenerator_t6897_StaticFields{
	// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer System.Runtime.Serialization.ObjectIDGenerator::comparer
	InstanceComparer_t8097 * ___comparer;
};
