#pragma once
#include <stdint.h>
// System.Collections.Generic.IList`1<JsonData>
struct IList_1_t1054;
// System.Collections.Generic.IDictionary`2<System.String,JsonData>
struct IDictionary_2_t1055;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>>
struct IList_1_t1056;
// System.Object
#include "mscorlib_System_Object.h"
// JsonType
#include "AssemblyU2DCSharp_JsonType.h"
// JsonData
struct JsonData_t1057  : public Object_t
{
	// System.Collections.Generic.IList`1<JsonData> JsonData::inst_array
	Object_t* ___inst_array;
	// System.Boolean JsonData::inst_boolean
	bool ___inst_boolean;
	// System.Double JsonData::inst_double
	double ___inst_double;
	// System.Int32 JsonData::inst_int
	int32_t ___inst_int;
	// System.Int64 JsonData::inst_long
	int64_t ___inst_long;
	// System.Collections.Generic.IDictionary`2<System.String,JsonData> JsonData::inst_object
	Object_t* ___inst_object;
	// System.String JsonData::inst_string
	String_t* ___inst_string;
	// System.String JsonData::json
	String_t* ___json;
	// JsonType JsonData::type
	int32_t ___type;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,JsonData>> JsonData::object_list
	Object_t* ___object_list;
};
