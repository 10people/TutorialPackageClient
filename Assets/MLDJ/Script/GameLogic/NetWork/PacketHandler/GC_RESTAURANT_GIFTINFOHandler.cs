//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_RESTAURANT_GIFTINFOHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_RESTAURANT_GIFTINFO packet = (GC_RESTAURANT_GIFTINFO )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
     if (RestaurantController.Instance() != null)
     {
         RestaurantController.Instance().OpenGiftWindow();
         RestaurantController.Instance().m_GiftWindow.GetComponent<RestaurantGift>().UpdateGiftInfo(packet.Itemid, packet.Itemcount);
     }
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
