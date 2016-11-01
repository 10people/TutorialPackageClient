//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_PVP_TIME_JIFEN_INFOHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_PVP_TIME_JIFEN_INFO packet = (GC_PVP_TIME_JIFEN_INFO )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic

	PVPData.PVPJiFen = packet.JIFEN;
    if(PvpShopLogic.Instance() != null)
     {
         PvpShopLogic.Instance().setJiFen();
     }
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
