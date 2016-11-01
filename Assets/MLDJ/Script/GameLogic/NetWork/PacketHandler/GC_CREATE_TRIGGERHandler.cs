//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_CREATE_TRIGGERHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_CREATE_TRIGGER packet = (GC_CREATE_TRIGGER )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
			int triggerId = packet.NTriggerId;
			CabalTrigger.CreateTrigger(triggerId);
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
