//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_PVPSHOP_ITEM_LEFTCOUNTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_PVPSHOP_ITEM_LEFTCOUNT packet = (GC_PVPSHOP_ITEM_LEFTCOUNT )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;

 GameManager.gameManager.PlayerDataPool.SetPvpShopItemBuyNum(packet.ItemId, packet.LeftCount);
     

     
 //enter your logic
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
