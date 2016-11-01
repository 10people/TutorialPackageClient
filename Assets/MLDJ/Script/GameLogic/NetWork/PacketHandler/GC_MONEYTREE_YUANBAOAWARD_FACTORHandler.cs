//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_MONEYTREE_YUANBAOAWARD_FACTORHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_MONEYTREE_YUANBAOAWARD_FACTOR packet = (GC_MONEYTREE_YUANBAOAWARD_FACTOR )ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            if (MoneyTreeLogic.Instance())
            {
                MoneyTreeLogic.Instance().YuanbaoFactor = packet.Factor/100;
            }
            
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
