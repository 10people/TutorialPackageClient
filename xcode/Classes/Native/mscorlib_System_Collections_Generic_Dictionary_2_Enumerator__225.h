#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Type,ArrayMetadata>
struct Dictionary_2_t5479;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,ArrayMetadata>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_237.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,ArrayMetadata>
struct Enumerator_t16328 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,ArrayMetadata>::dictionary
	Dictionary_2_t5479 * ___dictionary;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,ArrayMetadata>::next
	int32_t ___next;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,ArrayMetadata>::stamp
	int32_t ___stamp;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,ArrayMetadata>::current
	KeyValuePair_2_t16301  ___current;
};
