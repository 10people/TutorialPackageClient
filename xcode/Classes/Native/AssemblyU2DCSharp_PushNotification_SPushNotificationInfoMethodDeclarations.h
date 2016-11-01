#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PushNotification/SPushNotificationInfo
struct SPushNotificationInfo_t4505;
struct SPushNotificationInfo_t4505_marshaled;

void SPushNotificationInfo_t4505_marshal(const SPushNotificationInfo_t4505& unmarshaled, SPushNotificationInfo_t4505_marshaled& marshaled);
void SPushNotificationInfo_t4505_marshal_back(const SPushNotificationInfo_t4505_marshaled& marshaled, SPushNotificationInfo_t4505& unmarshaled);
void SPushNotificationInfo_t4505_marshal_cleanup(SPushNotificationInfo_t4505_marshaled& marshaled);
