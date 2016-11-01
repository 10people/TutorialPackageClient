//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_GUILD_SHOP_ITEM_MAKE_LISTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_GUILD_SHOP_ITEM_MAKE_LIST packet = (GC_GUILD_SHOP_ITEM_MAKE_LIST )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
//     if(GuildWindow.GuildShopItemMakeList != null )
//     {
//         GuildWindow.GuildWealthBak = packet.GuildWealth;
//         GuildWindow.GuildShopItemMakeList.Clear();
//         for (int i = 0; i < packet.ItemIDCount; i++)
//         {
//             GuildWindow.GuildShopItemMakeList.Add( new GuildShopMakeItem( packet.GetItemID(i), 
//                 packet.GetPrice(i), packet.GetMakeNum(i), 
//                 packet.GetMaxHold(i), packet.GetDictID(i), packet.GetDictIDDesc(i) ));
//         }
//         if (GuildWindow.GuildShopItemMakeList.Count > 0 && GUIData.delGuildShopItemMakeListShow != null)
//             GUIData.delGuildShopItemMakeListShow();
//     }
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
