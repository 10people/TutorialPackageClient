//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_GUILD_SHOP_ITEM_LISTHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
GC_GUILD_SHOP_ITEM_LIST packet = (GC_GUILD_SHOP_ITEM_LIST )ipacket;
         if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
         //enter your logic
         GameManager.gameManager.PlayerDataPool.GuildShopItemList.Clear();
         for (int i = 0; i < packet.GoodIdCount; i++ )
         {
             if (packet.GoodIdList[i] != GlobeVar.INVALID_ID)
             {
                 GuildShopItem ShopItem = new GuildShopItem(packet.GoodIdList[i], packet.LeftCountList[i]);
                 GameManager.gameManager.PlayerDataPool.GuildShopItemList.Add(ShopItem);
             }
         }

            if (GuildShopLogic.Instance() != null)
            {
                GuildShopLogic.Instance().UpdateGuildShopItem();
            }
             

 return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
 }
    }
}
