//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_BEGINENTERBREEDINGHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_BEGINENTERBREEDING packet = (GC_BEGINENTERBREEDING )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
     if (PartnerFrameLogic_Breeding.Instance() != null)
     {
         PartnerFrameLogic_Breeding.Instance().ShowBeginTips();
     }
     
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
