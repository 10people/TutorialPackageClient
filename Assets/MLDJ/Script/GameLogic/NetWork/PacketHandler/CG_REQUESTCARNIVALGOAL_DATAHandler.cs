//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_REQUESTCARNIVALGOAL_DATAHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_REQUESTCARNIVALGOAL_DATA packet = (CG_REQUESTCARNIVALGOAL_DATA )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
