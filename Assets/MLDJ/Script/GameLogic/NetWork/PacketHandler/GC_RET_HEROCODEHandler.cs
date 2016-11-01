//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_RET_HEROCODEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_HEROCODE packet = (GC_RET_HEROCODE)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            if (YingXiongBeiChuWindow.Instance() != null)
            {
                YingXiongBeiChuWindow.Instance().HandleNewHeroCode(packet.HeroCode);
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
