//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.YuanBaoShopData;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_SYNC_SHOPPINGLIST_PRESENTHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SYNC_SHOPPINGLIST_PRESENT packet = (GC_SYNC_SHOPPINGLIST_PRESENT)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

            for (int i = 0; i < packet.GuidCount; i++)
            {
                ShoppingList shoppinglist = new ShoppingList();
                shoppinglist.Guid = packet.GuidList[i];
                shoppinglist.SenderName = packet.SenderNameList[i];
                shoppinglist.CreateTime = packet.CreateTimeList[i];
                // 每个购物单 商品ID和数量永远传5个 不足5个的用invalid_id填充
                for (int j = 0; j < GlobeVar.SHOPPINGLIST_GOODSMAX; j++)
                {
                    shoppinglist.GoodsID[j] = packet.GoodsIDList[i * GlobeVar.SHOPPINGLIST_GOODSMAX + j];
                    shoppinglist.GoodsCount[j] = packet.GoodsCountList[i * GlobeVar.SHOPPINGLIST_GOODSMAX + j];
                }

                GameManager.gameManager.PlayerDataPool.PresentRecord.AddShoppingList(shoppinglist);
            }

            if (PresentRootLogic.Instance() != null)
            {
                PresentRootLogic.Instance().UpdateTabShow();
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
