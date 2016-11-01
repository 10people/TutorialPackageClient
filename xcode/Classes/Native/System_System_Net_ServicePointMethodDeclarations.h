#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePoint
struct ServicePoint_t6620;
// System.Uri
struct Uri_t6735;
// System.Version
struct Version_t7194;
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Net.IPHostEntry
struct IPHostEntry_t7172;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t7209;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t7200;
// System.Net.HttpWebRequest
struct HttpWebRequest_t6544;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6546;
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.Net.IPEndPoint
struct IPEndPoint_t5717;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
 void ServicePoint__ctor_m50149 (ServicePoint_t6620 * __this, Uri_t6735 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
 Uri_t6735 * ServicePoint_get_Address_m50150 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_ConnectionLimit()
 int32_t ServicePoint_get_ConnectionLimit_m50151 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
 int32_t ServicePoint_get_CurrentConnections_m50152 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
 DateTime_t1171  ServicePoint_get_IdleSince_m50153 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
 void ServicePoint_set_IdleSince_m50154 (ServicePoint_t6620 * __this, DateTime_t1171  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.ServicePoint::get_ProtocolVersion()
 Version_t7194 * ServicePoint_get_ProtocolVersion_m50155 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
 void ServicePoint_set_Expect100Continue_m50156 (ServicePoint_t6620 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseNagleAlgorithm()
 bool ServicePoint_get_UseNagleAlgorithm_m50157 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
 void ServicePoint_set_UseNagleAlgorithm_m50158 (ServicePoint_t6620 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_SendContinue()
 bool ServicePoint_get_SendContinue_m50159 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
 void ServicePoint_set_SendContinue_m50160 (ServicePoint_t6620 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UsesProxy()
 bool ServicePoint_get_UsesProxy_m50161 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
 void ServicePoint_set_UsesProxy_m50162 (ServicePoint_t6620 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_UseConnect()
 bool ServicePoint_get_UseConnect_m50163 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
 void ServicePoint_set_UseConnect_m50164 (ServicePoint_t6620 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
 bool ServicePoint_get_AvailableForRecycling_m50165 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.ServicePoint::get_Groups()
 Hashtable_t4372 * ServicePoint_get_Groups_m50166 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.ServicePoint::get_HostEntry()
 IPHostEntry_t7172 * ServicePoint_get_HostEntry_m50167 (ServicePoint_t6620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetVersion(System.Version)
 void ServicePoint_SetVersion_m50168 (ServicePoint_t6620 * __this, Version_t7194 * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnectionGroup System.Net.ServicePoint::GetConnectionGroup(System.String)
 WebConnectionGroup_t7209 * ServicePoint_GetConnectionGroup_m50169 (ServicePoint_t6620 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.Net.ServicePoint::SendRequest(System.Net.HttpWebRequest,System.String)
 EventHandler_t7200 * ServicePoint_SendRequest_m50170 (ServicePoint_t6620 * __this, HttpWebRequest_t6544 * ___request, String_t* ___groupName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::SetCertificates(System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate)
 void ServicePoint_SetCertificates_m50171 (ServicePoint_t6620 * __this, X509Certificate_t6546 * ___client, X509Certificate_t6546 * ___server, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::CallEndPointDelegate(System.Net.Sockets.Socket,System.Net.IPEndPoint)
 bool ServicePoint_CallEndPointDelegate_m50172 (ServicePoint_t6620 * __this, Socket_t4375 * ___sock, IPEndPoint_t5717 * ___remote, MethodInfo* method) IL2CPP_METHOD_ATTR;
