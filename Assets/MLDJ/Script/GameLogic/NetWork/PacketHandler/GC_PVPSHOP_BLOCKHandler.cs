//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_PVPSHOP_BLOCKHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_PVPSHOP_BLOCK packet = (GC_PVPSHOP_BLOCK )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

     if( PvpShopLogic.Instance() != null )
     {
         PvpShopLogic.Instance().initPvpShop(packet.BlockId);
     }
    
     
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
