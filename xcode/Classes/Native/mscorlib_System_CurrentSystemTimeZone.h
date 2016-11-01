#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Globalization.DaylightTime
struct DaylightTime_t7895;
// System.TimeZone
#include "mscorlib_System_TimeZone.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t8273  : public TimeZone_t7420
{
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t4372 * ___m_CachedDaylightChanges;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t5565  ___utcOffsetWithOutDLS;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t5565  ___utcOffsetWithDLS;
};
struct CurrentSystemTimeZone_t8273_StaticFields{
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t7895 * ___this_year_dlt;
};
