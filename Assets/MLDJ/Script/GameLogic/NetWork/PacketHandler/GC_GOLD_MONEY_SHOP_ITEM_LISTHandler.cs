//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
 {
 public class GC_GOLD_MONEY_SHOP_ITEM_LISTHandler : Ipacket
 {
 public uint Execute(PacketDistributed ipacket)
 {
 GC_GOLD_MONEY_SHOP_ITEM_LIST packet = (GC_GOLD_MONEY_SHOP_ITEM_LIST )ipacket;
 if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
 //enter your logic
 GameManager.gameManager.PlayerDataPool.GoldMoneyShopItemList.Clear();
 for (int i = 0; i < packet.GoodIdCount; i++)
 {
     if (packet.GoodIdList[i] != GlobeVar.INVALID_ID)
     {
         GoldMoneyShopItem ShopItem = new GoldMoneyShopItem(packet.GoodIdList[i], packet.LeftCountList[i]);
         GameManager.gameManager.PlayerDataPool.GoldMoneyShopItemList.Add(ShopItem);
     }
 }

 if (SysShopController.Instance() != null)
 {
     SysShopController.Instance().UpdateGoldMoneyShopItem();
 }
 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
 }
 }
