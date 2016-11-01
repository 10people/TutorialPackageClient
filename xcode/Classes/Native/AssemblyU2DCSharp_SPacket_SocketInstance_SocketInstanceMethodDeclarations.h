#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPacket.SocketInstance.SocketInstance
struct SocketInstance_t2204;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.String
struct String_t;
// System.Net.Sockets.SocketFlags
#include "System_System_Net_Sockets_SocketFlags.h"

// System.Void SPacket.SocketInstance.SocketInstance::.ctor()
 void SocketInstance__ctor_m31000 (SocketInstance_t2204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.SocketInstance.SocketInstance::Send(System.Byte[],System.Int32,System.Net.Sockets.SocketFlags)
 uint32_t SocketInstance_Send_m31001 (SocketInstance_t2204 * __this, ByteU5BU5D_t1033* ___buf, int32_t ___nLen, int32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.SocketInstance.SocketInstance::receive(System.Byte[],System.Int32,System.UInt32)
 uint32_t SocketInstance_receive_m31002 (SocketInstance_t2204 * __this, ByteU5BU5D_t1033* ___buf, int32_t ___nLen, uint32_t ___flags, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.SocketInstance::close()
 void SocketInstance_close_m31003 (SocketInstance_t2204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 SPacket.SocketInstance.SocketInstance::available()
 uint32_t SocketInstance_available_m31004 (SocketInstance_t2204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SPacket.SocketInstance.SocketInstance::connect(System.String,System.Int32)
 String_t* SocketInstance_connect_m31005 (SocketInstance_t2204 * __this, String_t* ___IP, int32_t ___port, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPacket.SocketInstance.SocketInstance::get_IsValid()
 bool SocketInstance_get_IsValid_m31006 (SocketInstance_t2204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPacket.SocketInstance.SocketInstance::get_IsConnected()
 bool SocketInstance_get_IsConnected_m31007 (SocketInstance_t2204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPacket.SocketInstance.SocketInstance::IsCanSend()
 bool SocketInstance_IsCanSend_m31008 (SocketInstance_t2204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPacket.SocketInstance.SocketInstance::IsCanReceive()
 bool SocketInstance_IsCanReceive_m31009 (SocketInstance_t2204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
