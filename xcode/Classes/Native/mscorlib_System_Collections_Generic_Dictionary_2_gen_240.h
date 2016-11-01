#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t8437;
// MessageID[]
struct MessageIDU5BU5D_t20547;
// SPacket.SocketInstance.Ipacket[]
struct IpacketU5BU5D_t20548;
// System.Collections.Generic.IEqualityComparer`1<MessageID>
struct IEqualityComparer_1_t20549;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Collections.Generic.Dictionary`2/Transform`1<MessageID,SPacket.SocketInstance.Ipacket,System.Collections.DictionaryEntry>
struct Transform_1_t20550;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>
struct Dictionary_2_t4373  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::table
	Int32U5BU5D_t116* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::linkSlots
	LinkU5BU5D_t8437* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::keySlots
	MessageIDU5BU5D_t20547* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::valueSlots
	IpacketU5BU5D_t20548* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::serialization_info
	SerializationInfo_t6402 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::generation
	int32_t ___generation;
};
struct Dictionary_2_t4373_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<MessageID,SPacket.SocketInstance.Ipacket>::<>f__am$cacheB
	Transform_1_t20550 * ___U3CU3Ef__am$cacheB;
};
