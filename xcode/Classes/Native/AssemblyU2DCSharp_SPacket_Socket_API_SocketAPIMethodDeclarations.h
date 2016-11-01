#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPacket.Socket_API.SocketAPI
struct SocketAPI_t4376;
// System.Net.Sockets.Socket
struct Socket_t4375;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Net.Sockets.SocketFlags
#include "System_System_Net_Sockets_SocketFlags.h"

// System.Void SPacket.Socket_API.SocketAPI::.ctor()
 void SocketAPI__ctor_m31010 (SocketAPI_t4376 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket SPacket.Socket_API.SocketAPI::Connect(System.String,System.Int32,System.String&)
 Socket_t4375 * SocketAPI_Connect_m31011 (Object_t * __this/* static, unused */, String_t* ___ServerIP, int32_t ___nPort, String_t** ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.Socket_API.SocketAPI::Send(System.Net.Sockets.Socket,System.Byte[],System.UInt32,System.Net.Sockets.SocketFlags)
 uint32_t SocketAPI_Send_m31012 (Object_t * __this/* static, unused */, Socket_t4375 * ___client, ByteU5BU5D_t1033* ___buff, uint32_t ___nLen, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.Socket_API.SocketAPI::Close(System.Net.Sockets.Socket)
 void SocketAPI_Close_m31013 (Object_t * __this/* static, unused */, Socket_t4375 * ___ClientSocket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.Socket_API.SocketAPI::Recv(System.Net.Sockets.Socket,System.Byte[],System.UInt32,System.UInt32)
 uint32_t SocketAPI_Recv_m31014 (Object_t * __this/* static, unused */, Socket_t4375 * ___client, ByteU5BU5D_t1033* ___buff, uint32_t ___nLen, uint32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.Socket_API.SocketAPI::available(System.Net.Sockets.Socket)
 uint32_t SocketAPI_available_m31015 (Object_t * __this/* static, unused */, Socket_t4375 * ___client, MethodInfo* method) IL2CPP_METHOD_ATTR;
