#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPacket.SocketInstance.PacketException
struct PacketException_t4371;
// System.String
struct String_t;

// System.Void SPacket.SocketInstance.PacketException::.ctor(System.String)
 void PacketException__ctor_m30991 (PacketException_t4371 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPacket.SocketInstance.PacketException SPacket.SocketInstance.PacketException::PacketReadError(System.String)
 PacketException_t4371 * PacketException_PacketReadError_m30992 (Object_t * __this/* static, unused */, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPacket.SocketInstance.PacketException SPacket.SocketInstance.PacketException::PacketExecuteError(System.String)
 PacketException_t4371 * PacketException_PacketExecuteError_m30993 (Object_t * __this/* static, unused */, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SPacket.SocketInstance.PacketException SPacket.SocketInstance.PacketException::PacketCreateError(System.String)
 PacketException_t4371 * PacketException_PacketCreateError_m30994 (Object_t * __this/* static, unused */, String_t* ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
