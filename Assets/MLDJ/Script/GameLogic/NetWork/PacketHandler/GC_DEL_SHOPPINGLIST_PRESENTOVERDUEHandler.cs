//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_DEL_SHOPPINGLIST_PRESENTOVERDUEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_DEL_SHOPPINGLIST_PRESENTOVERDUE packet = (GC_DEL_SHOPPINGLIST_PRESENTOVERDUE)ipacket;
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
