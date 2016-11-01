//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_FELLOW_REBIRTHHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_FELLOW_REBIRTH packet = (GC_FELLOW_REBIRTH)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            if (PartnerFrameLogic.Instance() != null)
            {
                PartnerFrameLogic.Instance().InitPartnerList(PartnerFrameLogic.Instance().rebirthFellowGuid);
                //PartnerFrameLogic.Instance().rebirthFellowGuid = Games.GlobeDefine.GlobeVar.INVALID_GUID;
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
