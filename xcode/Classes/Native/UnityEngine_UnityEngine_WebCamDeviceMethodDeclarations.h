#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t7534;
struct WebCamDevice_t7534_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
 String_t* WebCamDevice_get_name_m51767 (WebCamDevice_t7534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
 bool WebCamDevice_get_isFrontFacing_m51768 (WebCamDevice_t7534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t7534_marshal(const WebCamDevice_t7534& unmarshaled, WebCamDevice_t7534_marshaled& marshaled);
void WebCamDevice_t7534_marshal_back(const WebCamDevice_t7534_marshaled& marshaled, WebCamDevice_t7534& unmarshaled);
void WebCamDevice_t7534_marshal_cleanup(WebCamDevice_t7534_marshaled& marshaled);
