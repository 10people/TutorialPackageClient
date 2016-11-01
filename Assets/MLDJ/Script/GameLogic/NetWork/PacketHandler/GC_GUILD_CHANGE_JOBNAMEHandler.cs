//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_GUILD_CHANGE_JOBNAMEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_GUILD_CHANGE_JOBNAME packet = (GC_GUILD_CHANGE_JOBNAME)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

            if (packet.GuildJobId >= (int)GameDefine_Globe.GUILD_JOB.CHIEF && packet.GuildJobId < (int)GameDefine_Globe.GUILD_JOB.MAX)
            {
                GameManager.gameManager.PlayerDataPool.GuildInfo.GuildJobName[packet.GuildJobId] = packet.GuildJobName;
            }

            if (GuildAuthorityWindowLogic.Instance() != null)
            {
                GuildAuthorityWindowLogic.Instance().HandleChangeJobName();
            }

            if (null != GUIData.delGuildDataUpdate)
                GUIData.delGuildDataUpdate();

            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
