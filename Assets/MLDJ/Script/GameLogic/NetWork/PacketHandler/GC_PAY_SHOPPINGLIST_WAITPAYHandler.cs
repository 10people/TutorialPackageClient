//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_PAY_SHOPPINGLIST_WAITPAYHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_PAY_SHOPPINGLIST_WAITPAY packet = (GC_PAY_SHOPPINGLIST_WAITPAY)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            GameManager.gameManager.PlayerDataPool.WaitPayRecord.DelShoppingList(packet.Guid);

            if (PresentRootLogic.Instance() != null)
            {
                PresentRootLogic.Instance().UpdateTabShow();
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
