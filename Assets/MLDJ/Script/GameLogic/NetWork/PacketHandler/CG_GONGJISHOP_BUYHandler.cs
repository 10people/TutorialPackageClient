//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_GONGJISHOP_BUYHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_GONGJISHOP_BUY packet = (CG_GONGJISHOP_BUY )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
