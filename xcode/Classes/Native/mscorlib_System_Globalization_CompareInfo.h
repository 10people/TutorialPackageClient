#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t7785;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Globalization.CompareInfo
struct CompareInfo_t6617  : public Object_t
{
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t7785 * ___collator;
};
struct CompareInfo_t6617_StaticFields{
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_t4372 * ___collators;
	// System.Object System.Globalization.CompareInfo::monitor
	Object_t * ___monitor;
};
