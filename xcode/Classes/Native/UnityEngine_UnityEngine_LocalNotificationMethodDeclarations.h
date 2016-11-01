#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.LocalNotification
struct LocalNotification_t5743;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.CalendarUnit
#include "UnityEngine_UnityEngine_CalendarUnit.h"
// UnityEngine.CalendarIdentifier
#include "UnityEngine_UnityEngine_CalendarIdentifier.h"

// System.Void UnityEngine.LocalNotification::.ctor()
 void LocalNotification__ctor_m40715 (LocalNotification_t5743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::.cctor()
 void LocalNotification__cctor_m52390 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::SetFireDate(System.Double)
 void LocalNotification_SetFireDate_m52391 (LocalNotification_t5743 * __this, double ___dt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::set_fireDate(System.DateTime)
 void LocalNotification_set_fireDate_m40716 (LocalNotification_t5743 * __this, DateTime_t1171  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::set_repeatInterval(UnityEngine.CalendarUnit)
 void LocalNotification_set_repeatInterval_m40721 (LocalNotification_t5743 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::set_repeatCalendar(UnityEngine.CalendarIdentifier)
 void LocalNotification_set_repeatCalendar_m40720 (LocalNotification_t5743 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::set_alertBody(System.String)
 void LocalNotification_set_alertBody_m40717 (LocalNotification_t5743 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::set_hasAction(System.Boolean)
 void LocalNotification_set_hasAction_m40719 (LocalNotification_t5743 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::set_applicationIconBadgeNumber(System.Int32)
 void LocalNotification_set_applicationIconBadgeNumber_m40718 (LocalNotification_t5743 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::set_soundName(System.String)
 void LocalNotification_set_soundName_m40723 (LocalNotification_t5743 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.LocalNotification::get_defaultSoundName()
 String_t* LocalNotification_get_defaultSoundName_m40722 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::Destroy()
 void LocalNotification_Destroy_m52392 (LocalNotification_t5743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::Finalize()
 void LocalNotification_Finalize_m52393 (LocalNotification_t5743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocalNotification::InitWrapper()
 void LocalNotification_InitWrapper_m52394 (LocalNotification_t5743 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
