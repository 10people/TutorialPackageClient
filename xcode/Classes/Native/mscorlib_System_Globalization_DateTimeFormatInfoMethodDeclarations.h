#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t5483;
// System.String[]
struct StringU5BU5D_t333;
// System.String
struct String_t;
// System.Globalization.Calendar
struct Calendar_t7889;
// System.IFormatProvider
struct IFormatProvider_t1076;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
 void DateTimeFormatInfo__ctor_m54418 (DateTimeFormatInfo_t5483 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
 void DateTimeFormatInfo__ctor_m54419 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
 void DateTimeFormatInfo__cctor_m54420 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
 DateTimeFormatInfo_t5483 * DateTimeFormatInfo_GetInstance_m54421 (Object_t * __this/* static, unused */, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
 bool DateTimeFormatInfo_get_IsReadOnly_m54422 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
 DateTimeFormatInfo_t5483 * DateTimeFormatInfo_ReadOnly_m54423 (Object_t * __this/* static, unused */, DateTimeFormatInfo_t5483 * ___dtfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
 Object_t * DateTimeFormatInfo_Clone_m54424 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
 Object_t * DateTimeFormatInfo_GetFormat_m54425 (DateTimeFormatInfo_t5483 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
 String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m54426 (DateTimeFormatInfo_t5483 * __this, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
 String_t* DateTimeFormatInfo_GetEraName_m54427 (DateTimeFormatInfo_t5483 * __this, int32_t ___era, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
 String_t* DateTimeFormatInfo_GetMonthName_m54428 (DateTimeFormatInfo_t5483 * __this, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
 StringU5BU5D_t333* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m54429 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
 StringU5BU5D_t333* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m54430 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
 StringU5BU5D_t333* DateTimeFormatInfo_get_RawDayNames_m54431 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
 StringU5BU5D_t333* DateTimeFormatInfo_get_RawMonthNames_m54432 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
 String_t* DateTimeFormatInfo_get_AMDesignator_m54433 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
 String_t* DateTimeFormatInfo_get_PMDesignator_m54434 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
 String_t* DateTimeFormatInfo_get_DateSeparator_m54435 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
 String_t* DateTimeFormatInfo_get_TimeSeparator_m54436 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
 String_t* DateTimeFormatInfo_get_LongDatePattern_m54437 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
 String_t* DateTimeFormatInfo_get_ShortDatePattern_m54438 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
 String_t* DateTimeFormatInfo_get_ShortTimePattern_m54439 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
 String_t* DateTimeFormatInfo_get_LongTimePattern_m54440 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
 String_t* DateTimeFormatInfo_get_MonthDayPattern_m54441 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
 String_t* DateTimeFormatInfo_get_YearMonthPattern_m54442 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
 String_t* DateTimeFormatInfo_get_FullDateTimePattern_m54443 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
 DateTimeFormatInfo_t5483 * DateTimeFormatInfo_get_CurrentInfo_m54444 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
 DateTimeFormatInfo_t5483 * DateTimeFormatInfo_get_InvariantInfo_m38779 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
 Calendar_t7889 * DateTimeFormatInfo_get_Calendar_m54445 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
 void DateTimeFormatInfo_set_Calendar_m54446 (DateTimeFormatInfo_t5483 * __this, Calendar_t7889 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
 String_t* DateTimeFormatInfo_get_RFC1123Pattern_m54447 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
 String_t* DateTimeFormatInfo_get_RoundtripPattern_m54448 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
 String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m54449 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
 String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m54450 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
 StringU5BU5D_t333* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m54451 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
 void DateTimeFormatInfo_FillAllDateTimePatterns_m54452 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
 StringU5BU5D_t333* DateTimeFormatInfo_GetAllRawDateTimePatterns_m54453 (DateTimeFormatInfo_t5483 * __this, uint16_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
 String_t* DateTimeFormatInfo_GetDayName_m54454 (DateTimeFormatInfo_t5483 * __this, int32_t ___dayofweek, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
 String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m54455 (DateTimeFormatInfo_t5483 * __this, int32_t ___dayofweek, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
 void DateTimeFormatInfo_FillInvariantPatterns_m54456 (DateTimeFormatInfo_t5483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
 StringU5BU5D_t333* DateTimeFormatInfo_PopulateCombinedList_m54457 (DateTimeFormatInfo_t5483 * __this, StringU5BU5D_t333* ___dates, StringU5BU5D_t333* ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
