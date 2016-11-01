#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t7267;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t7268;
// System.Collections.IDictionary
struct IDictionary_t1061;
// System.String[]
struct StringU5BU5D_t333;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Text.RegularExpressions.Regex
struct Regex_t6628  : public Object_t
{
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	Object_t * ___machineFactory;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	Object_t * ___mapping;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t333* ___group_names;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t116* ___group_numbers;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions;
};
struct Regex_t6628_StaticFields{
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t7267 * ___cache;
};
