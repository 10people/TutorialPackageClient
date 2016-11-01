//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_RECEIVE_SHOPPINGLIST_PRESENTHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RECEIVE_SHOPPINGLIST_PRESENT packet = (GC_RECEIVE_SHOPPINGLIST_PRESENT)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            GameManager.gameManager.PlayerDataPool.PresentRecord.DelShoppingList(packet.Guid);

            if (PresentRootLogic.Instance() != null)
            {
                PresentRootLogic.Instance().UpdateTabShow();
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
