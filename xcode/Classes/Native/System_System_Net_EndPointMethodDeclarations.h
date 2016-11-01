#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.EndPoint
struct EndPoint_t5222;
// System.Net.SocketAddress
struct SocketAddress_t7143;
// System.Exception
struct Exception_t972;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.EndPoint::.ctor()
 void EndPoint__ctor_m49852 (EndPoint_t5222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily()
 int32_t EndPoint_get_AddressFamily_m49853 (EndPoint_t5222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.EndPoint::Create(System.Net.SocketAddress)
 EndPoint_t5222 * EndPoint_Create_m49854 (EndPoint_t5222 * __this, SocketAddress_t7143 * ___address, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.EndPoint::Serialize()
 SocketAddress_t7143 * EndPoint_Serialize_m49855 (EndPoint_t5222 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.EndPoint::NotImplemented()
 Exception_t972 * EndPoint_NotImplemented_m49856 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
