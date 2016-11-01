//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_GONGJISHOP_BUYHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_GONGJISHOP_BUY packet = (GC_GONGJISHOP_BUY )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

            if (GongJiShopLogic.Instance() != null)
            {
                GongJiShopLogic.Instance().UpDateGongJi();
            }

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
