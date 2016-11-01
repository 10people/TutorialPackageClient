#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DaylightTime
struct DaylightTime_t7895;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
 void DaylightTime__ctor_m54458 (DaylightTime_t7895 * __this, DateTime_t1171  ___start, DateTime_t1171  ___end, TimeSpan_t5565  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
 DateTime_t1171  DaylightTime_get_Start_m54459 (DaylightTime_t7895 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
 DateTime_t1171  DaylightTime_get_End_m54460 (DaylightTime_t7895 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
 TimeSpan_t5565  DaylightTime_get_Delta_m54461 (DaylightTime_t7895 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
