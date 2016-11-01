//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.YuanBaoShopData;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_ADD_SHOPPINGLIST_PRESENTHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_ADD_SHOPPINGLIST_PRESENT packet = (GC_ADD_SHOPPINGLIST_PRESENT)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

            ShoppingList shoppinglist = new ShoppingList();
            shoppinglist.Guid = packet.Guid;
            shoppinglist.SenderName = packet.SenderName;
            shoppinglist.CreateTime = packet.CreateTime;
            // ÿ�����ﵥ ��ƷID��������Զ��5�� ����5������invalid_id���
            for (int i = 0; i < GlobeVar.SHOPPINGLIST_GOODSMAX; i++)
            {
                shoppinglist.GoodsID[i] = packet.GoodsIDList[i];
                shoppinglist.GoodsCount[i] = packet.GoodsCountList[i];
            }

            GameManager.gameManager.PlayerDataPool.PresentRecord.AddShoppingList(shoppinglist);

            if (PresentRootLogic.Instance() != null)
            {
                PresentRootLogic.Instance().UpdateTabShow();
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
