//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_NIANSHOU_INFOHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_NIANSHOU_INFO packet = (GC_NIANSHOU_INFO )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
