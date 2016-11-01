//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
 public class GC_GUILD_SHOP_ITEM_MAKEHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_GUILD_SHOP_ITEM_MAKE packet = (GC_GUILD_SHOP_ITEM_MAKE )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
// GuildWindow.GuildWealthBak = packet.GuildWealth;
// if (GuildPaoShang.Instance() != null)
// {
//     GuildPaoShang.Instance().OnMakeSucSetWealth(packet.GuildWealth);
// }
// if (GUIData.delGuildShopItemMakeListShow != null)
//     GUIData.delGuildShopItemMakeListShow();
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
