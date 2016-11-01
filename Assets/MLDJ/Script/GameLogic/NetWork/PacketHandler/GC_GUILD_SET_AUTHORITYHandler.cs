//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_GUILD_SET_AUTHORITYHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_GUILD_SET_AUTHORITY packet = (GC_GUILD_SET_AUTHORITY)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

            if(false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
            {
                return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
            }

            if (packet.SetGuildJobId == (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
            {
                GameManager.gameManager.PlayerDataPool.GuildInfo.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_JOIN] = packet.GuildJoin == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_DECLARATION] = packet.Declaration == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_NOTICE] = packet.ChangeNotice == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOINREQ] = packet.ChangeJoinReq == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_KICK] = packet.GuildKick == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_SHOP_LEVELUP] = packet.ShopLevelUp == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ViceChiefRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_OPEN_ACTIVITY] = packet.OpenActivity == 1;
            }
            else if (packet.SetGuildJobId == (int)GameDefine_Globe.GUILD_JOB.ELDER)
            {
                GameManager.gameManager.PlayerDataPool.GuildInfo.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_JOIN] = packet.GuildJoin == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_DECLARATION] = packet.Declaration == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_NOTICE] = packet.ChangeNotice == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOINREQ] = packet.ChangeJoinReq == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_KICK] = packet.GuildKick == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_SHOP_LEVELUP] = packet.ShopLevelUp == 1;
                GameManager.gameManager.PlayerDataPool.GuildInfo.ElderRoutine[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_OPEN_ACTIVITY] = packet.OpenActivity == 1;
            }

            if (GuildAuthorityWindowLogic.Instance() != null)
            {
                GuildAuthorityWindowLogic.Instance().HandleSetAuthority();
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
