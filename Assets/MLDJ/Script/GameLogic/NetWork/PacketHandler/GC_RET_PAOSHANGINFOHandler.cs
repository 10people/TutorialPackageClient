//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;

namespace SPacket.SocketInstance
{
    public class GC_RET_PAOSHANGINFOHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_PAOSHANGINFO packet = (GC_RET_PAOSHANGINFO) ipacket;
            if (null == packet) return (uint) PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
//            if (GuildPaoShang.Instance() !=null)
//            {
//                GuildPaoShang.Instance().UpdatePaoShangInfo(packet);
//            }
//
//            // 更新下 可领取次数吧
//            GameManager.gameManager.PlayerDataPool.GuildInfo.PSCanAcceptTimes = packet.CurCanAcceptTimes;
//            if (MenuBarLogic.Instance() != null)
//            {
//                MenuBarLogic.Instance().UpdateGuildAndMasterReserveMember();
//            }
//            if (PlayerFrameLogic.Instance() != null)
//            {
//                PlayerFrameLogic.Instance().UpdateRemainNum();
//            }
//            if (GuildWindow.Instance() != null)
//            {
//                GuildWindow.Instance().UpdatePaoShangTip();
//            }

            return (uint) PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
