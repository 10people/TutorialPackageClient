//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_WULIN_SHOWSEARCHHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_WULIN_ShowSearch packet = (GC_WULIN_ShowSearch )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 WuLinData.ShowSearchOpponent(packet);
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
