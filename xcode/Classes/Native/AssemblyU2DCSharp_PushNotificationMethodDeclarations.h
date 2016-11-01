#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PushNotification
struct PushNotification_t4507;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void PushNotification::.ctor()
 void PushNotification__ctor_m32328 (PushNotification_t4507 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PushNotification::addPushNotificationInfo(System.String,System.Int32,System.Int32)
 void PushNotification_addPushNotificationInfo_m32329 (Object_t * __this/* static, unused */, String_t* ___news, int32_t ___data, int32_t ___RepeatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PushNotification::ClearPushNotificationInfo()
 void PushNotification_ClearPushNotificationInfo_m32330 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PushNotification::NotificationMessage2Server()
 void PushNotification_NotificationMessage2Server_m32331 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PushNotification::NotificationMessage2Clinet()
 void PushNotification_NotificationMessage2Clinet_m32332 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PushNotification::NotificationMessage(System.String,System.Int32,System.Int32)
 void PushNotification_NotificationMessage_m32333 (Object_t * __this/* static, unused */, String_t* ___news, int32_t ___date, int32_t ___RepeatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PushNotification::NotificationMessage(System.String,System.DateTime,System.Int32)
 void PushNotification_NotificationMessage_m32334 (Object_t * __this/* static, unused */, String_t* ___news, DateTime_t1171  ___newDate, int32_t ___RepeatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PushNotification::CleanNotification()
 void PushNotification_CleanNotification_m32335 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PushNotification::AndroidNotificationMessage(System.String,System.Int32,System.Int32)
 void PushNotification_AndroidNotificationMessage_m32336 (Object_t * __this/* static, unused */, String_t* ___news, int32_t ___date, int32_t ___RepeatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
