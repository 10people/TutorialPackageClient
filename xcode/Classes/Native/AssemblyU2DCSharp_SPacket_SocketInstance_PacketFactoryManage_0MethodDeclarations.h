#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SPacket.SocketInstance.PacketFactoryManager
struct PacketFactoryManager_t3658;
// SPacket.SocketInstance.Ipacket
struct Ipacket_t2528;
// SPacket.SocketInstance.PacketFactory
struct PacketFactory_t4374;
// MessageID
#include "AssemblyU2DCSharp_MessageID.h"

// System.Void SPacket.SocketInstance.PacketFactoryManager::.ctor()
 void PacketFactoryManager__ctor_m30995 (PacketFactoryManager_t3658 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SPacket.SocketInstance.PacketFactoryManager::Init()
// SPacket.SocketInstance.Ipacket SPacket.SocketInstance.PacketFactoryManager::GetPacketHandler(MessageID)
 Object_t * PacketFactoryManager_GetPacketHandler_m30996 (PacketFactoryManager_t3658 * __this, uint16_t ___nMID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.PacketFactoryManager::RemovePacket(SPacket.SocketInstance.Ipacket)
 void PacketFactoryManager_RemovePacket_m30997 (PacketFactoryManager_t3658 * __this, Object_t * ___pPacket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.PacketFactoryManager::AddFactory(SPacket.SocketInstance.PacketFactory)
 void PacketFactoryManager_AddFactory_m30998 (PacketFactoryManager_t3658 * __this, Object_t * ___pFactory, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SPacket.SocketInstance.PacketFactoryManager::AddPacketHander(MessageID,SPacket.SocketInstance.Ipacket)
 void PacketFactoryManager_AddPacketHander_m30999 (PacketFactoryManager_t3658 * __this, uint16_t ___nMID, Object_t * ___packetHander, MethodInfo* method) IL2CPP_METHOD_ATTR;
