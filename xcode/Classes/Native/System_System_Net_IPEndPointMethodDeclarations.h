#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPEndPoint
struct IPEndPoint_t5717;
// System.Net.IPAddress
struct IPAddress_t5682;
// System.Net.EndPoint
struct EndPoint_t5222;
// System.Net.SocketAddress
struct SocketAddress_t7143;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
 void IPEndPoint__ctor_m40465 (IPEndPoint_t5717 * __this, IPAddress_t5682 * ___address, int32_t ___port, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Int64,System.Int32)
 void IPEndPoint__ctor_m50103 (IPEndPoint_t5717 * __this, int64_t ___iaddr, int32_t ___port, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
 IPAddress_t5682 * IPEndPoint_get_Address_m50104 (IPEndPoint_t5717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Address(System.Net.IPAddress)
 void IPEndPoint_set_Address_m50105 (IPEndPoint_t5717 * __this, IPAddress_t5682 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPEndPoint::get_AddressFamily()
 int32_t IPEndPoint_get_AddressFamily_m50106 (IPEndPoint_t5717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::get_Port()
 int32_t IPEndPoint_get_Port_m50107 (IPEndPoint_t5717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::set_Port(System.Int32)
 void IPEndPoint_set_Port_m50108 (IPEndPoint_t5717 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPoint System.Net.IPEndPoint::Create(System.Net.SocketAddress)
 EndPoint_t5222 * IPEndPoint_Create_m50109 (IPEndPoint_t5717 * __this, SocketAddress_t7143 * ___socketAddress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SocketAddress System.Net.IPEndPoint::Serialize()
 SocketAddress_t7143 * IPEndPoint_Serialize_m50110 (IPEndPoint_t5717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPEndPoint::ToString()
 String_t* IPEndPoint_ToString_m50111 (IPEndPoint_t5717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPEndPoint::Equals(System.Object)
 bool IPEndPoint_Equals_m50112 (IPEndPoint_t5717 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPEndPoint::GetHashCode()
 int32_t IPEndPoint_GetHashCode_m50113 (IPEndPoint_t5717 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
