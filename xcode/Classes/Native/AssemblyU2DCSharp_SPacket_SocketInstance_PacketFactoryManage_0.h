#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t4372;
// System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>
struct Dictionary_2_t4373;
// System.Object
#include "mscorlib_System_Object.h"
// SPacket.SocketInstance.PacketFactoryManager
struct PacketFactoryManager_t3658  : public Object_t
{
	// System.Collections.Hashtable SPacket.SocketInstance.PacketFactoryManager::m_Factories
	Hashtable_t4372 * ___m_Factories;
	// System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket> SPacket.SocketInstance.PacketFactoryManager::m_HandlerDic
	Dictionary_2_t4373 * ___m_HandlerDic;
};
