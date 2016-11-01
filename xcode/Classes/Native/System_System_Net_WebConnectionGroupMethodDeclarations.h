#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t7209;
// System.Collections.Queue
struct Queue_t6898;
// System.Net.ServicePoint
struct ServicePoint_t6620;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t7201;
// System.Net.HttpWebRequest
struct HttpWebRequest_t6544;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
 void WebConnectionGroup__ctor_m50265 (WebConnectionGroup_t7209 * __this, ServicePoint_t6620 * ___sPoint, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
 WebConnection_t7201 * WebConnectionGroup_GetConnection_m50266 (WebConnectionGroup_t7209 * __this, HttpWebRequest_t6544 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
 void WebConnectionGroup_PrepareSharingNtlm_m50267 (Object_t * __this/* static, unused */, WebConnection_t7201 * ___cnc, HttpWebRequest_t6544 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
 WebConnection_t7201 * WebConnectionGroup_CreateOrReuseConnection_m50268 (WebConnectionGroup_t7209 * __this, HttpWebRequest_t6544 * ___request, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
 Queue_t6898 * WebConnectionGroup_get_Queue_m50269 (WebConnectionGroup_t7209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
