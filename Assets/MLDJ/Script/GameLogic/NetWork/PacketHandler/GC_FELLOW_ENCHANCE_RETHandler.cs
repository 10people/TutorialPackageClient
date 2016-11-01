//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_FELLOW_ENCHANCE_RETHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_FELLOW_ENCHANCE_RET packet = (GC_FELLOW_ENCHANCE_RET)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            if (PartnerFrameLogic.Instance() != null)
            {
                PartnerFrameLogic.Instance().RefreshPartnerList((fellow) =>
                {
                    return (fellow.GetFellowType() != (int)Games.Fellow.FELLOWTYPE.BABY);
                });
            }
            if (PartnerFrameLogic_Star.Instance() != null)
            {
                PartnerFrameLogic_Star.Instance().HandleFellowStarRet();
            }

            if (packet.Result == 1)
            {
                // 成功播放动画
                PartnerFrameLogic_Star.Instance().PlayStarUpgradeEffect();
            }
            
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
