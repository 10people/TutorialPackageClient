#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PacketDistributed
struct PacketDistributed_t2209;
// System.Byte[]
struct ByteU5BU5D_t1033;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;
// MessageID
#include "AssemblyU2DCSharp_MessageID.h"

// System.Void PacketDistributed::.ctor()
 void PacketDistributed__ctor_m29412 (PacketDistributed_t2209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed PacketDistributed::CreatePacket(MessageID)
 PacketDistributed_t2209 * PacketDistributed_CreatePacket_m29413 (Object_t * __this/* static, unused */, uint16_t ___packetID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PacketDistributed::SendPacket()
 void PacketDistributed_SendPacket_m29414 (PacketDistributed_t2209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed PacketDistributed::ParseFrom(System.Byte[],System.Int32)
 PacketDistributed_t2209 * PacketDistributed_ParseFrom_m29415 (PacketDistributed_t2209 * __this, ByteU5BU5D_t1033* ___data, int32_t ___nLen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PacketDistributed::SerializedSize()
// System.Void PacketDistributed::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
// PacketDistributed PacketDistributed::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
// System.Boolean PacketDistributed::IsInitialized()
// MessageID PacketDistributed::GetPacketID()
 uint16_t PacketDistributed_GetPacketID_m29416 (PacketDistributed_t2209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
