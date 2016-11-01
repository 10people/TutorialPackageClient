//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_CUTSCENE_RFCHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_CUTSCENE_RFC packet = (CG_CUTSCENE_RFC )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
