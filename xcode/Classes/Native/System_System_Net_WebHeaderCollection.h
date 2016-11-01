#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t7218;
// System.Boolean[]
struct BooleanU5BU5D_t102;
// System.Collections.Specialized.NameValueCollection
#include "System_System_Collections_Specialized_NameValueCollection.h"
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157  : public NameValueCollection_t7114
{
	// System.Boolean System.Net.WebHeaderCollection::internallyCreated
	bool ___internallyCreated;
};
struct WebHeaderCollection_t7157_StaticFields{
	// System.Collections.Hashtable System.Net.WebHeaderCollection::restricted
	Hashtable_t4372 * ___restricted;
	// System.Collections.Hashtable System.Net.WebHeaderCollection::multiValue
	Hashtable_t4372 * ___multiValue;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> System.Net.WebHeaderCollection::restricted_response
	Dictionary_2_t7218 * ___restricted_response;
	// System.Boolean[] System.Net.WebHeaderCollection::allowed_chars
	BooleanU5BU5D_t102* ___allowed_chars;
};
