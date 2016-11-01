#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Type,ObjectMetadata>
struct Dictionary_2_t5481;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,ObjectMetadata>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_240.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,ObjectMetadata>
struct Enumerator_t16365 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,ObjectMetadata>::dictionary
	Dictionary_2_t5481 * ___dictionary;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,ObjectMetadata>::next
	int32_t ___next;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,ObjectMetadata>::stamp
	int32_t ___stamp;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,ObjectMetadata>::current
	KeyValuePair_2_t16313  ___current;
};
