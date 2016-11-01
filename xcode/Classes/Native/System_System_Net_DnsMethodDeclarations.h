#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Dns
struct Dns_t7171;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t333;
// System.Net.IPHostEntry
struct IPHostEntry_t7172;

// System.Void System.Net.Dns::.cctor()
 void Dns__cctor_m49848 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
 bool Dns_GetHostByName_internal_m49849 (Object_t * __this/* static, unused */, String_t* ___host, String_t** ___h_name, StringU5BU5D_t333** ___h_aliases, StringU5BU5D_t333** ___h_addr_list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
 IPHostEntry_t7172 * Dns_hostent_to_IPHostEntry_m49850 (Object_t * __this/* static, unused */, String_t* ___h_name, StringU5BU5D_t333* ___h_aliases, StringU5BU5D_t333* ___h_addrlist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
 IPHostEntry_t7172 * Dns_GetHostByName_m49851 (Object_t * __this/* static, unused */, String_t* ___hostName, MethodInfo* method) IL2CPP_METHOD_ATTR;
