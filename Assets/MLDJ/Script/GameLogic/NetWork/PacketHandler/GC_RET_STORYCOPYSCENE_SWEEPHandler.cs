//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_RET_STORYCOPYSCENE_SWEEPHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_STORYCOPYSCENE_SWEEP packet = (GC_RET_STORYCOPYSCENE_SWEEP)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            if (null != StoryCopySceneInfoLogic.Instance() && 0 == packet.NResult)
            {
				StoryCopySceneInfoLogic.Instance().SweepFinish(packet.NCount);
                //StoryCopySceneInfoLogic.Instance().Init();
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
