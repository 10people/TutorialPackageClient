//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.YuanBaoShopData;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_SYNC_SHOPPINGLIST_WAITPAYHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SYNC_SHOPPINGLIST_WAITPAY packet = (GC_SYNC_SHOPPINGLIST_WAITPAY)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

            for (int i = 0; i < packet.GuidCount; i++ )
            {
                if (i >= packet.GuidList.Count || i >= packet.SenderNameList.Count || i >= packet.CreateTimeList.Count)
                {
                    LogModule.ErrorLog("guid index out of range than packet define");
                    continue;
                }
                ShoppingList shoppinglist = new ShoppingList();
                shoppinglist.Guid = packet.GuidList[i];
                shoppinglist.SenderName = packet.SenderNameList[i];
                shoppinglist.CreateTime = packet.CreateTimeList[i];
                // 每个购物单 商品ID和数量永远传5个 不足5个的用invalid_id填充
                for (int j = 0; j < GlobeVar.SHOPPINGLIST_GOODSMAX; j++ )
                {
                    int goodIndex = i * GlobeVar.SHOPPINGLIST_GOODSMAX + j;
                    if(j >=shoppinglist.GoodsID.Length || j >= shoppinglist.GoodsCount.Length ||
                        goodIndex >= packet.GoodsIDList.Count || goodIndex >= packet.GoodsCountList.Count)
                    {
                        LogModule.ErrorLog("good index out of range than packet define");
                    }
                    else
                    {
                        shoppinglist.GoodsID[j] = packet.GoodsIDList[goodIndex];
                        shoppinglist.GoodsCount[j] = packet.GoodsCountList[goodIndex];
                    }
                }

                GameManager.gameManager.PlayerDataPool.WaitPayRecord.AddShoppingList(shoppinglist);
            }

            if (PresentRootLogic.Instance() != null)
            {
                PresentRootLogic.Instance().UpdateTabShow();
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
