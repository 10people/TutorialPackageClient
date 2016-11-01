//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class CG_DAILYMISSION_UPDATE_NEWHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 CG_DAILYMISSION_UPDATE_NEW packet = (CG_DAILYMISSION_UPDATE_NEW )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
