//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
using Games.GlobeDefine;
namespace SPacket.SocketInstance
{
    public class GC_GUILD_RESERVE_LISTHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_GUILD_RESERVE_LIST packet = (GC_GUILD_RESERVE_LIST)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            GameManager.gameManager.PlayerDataPool.GuildInfo.PreserveGuildGuid.Clear();
            for (int i = 0; i < packet.ReserveGuildGuidCount; i++)
            {
                if (packet.ReserveGuildGuidList[i] != GlobeVar.INVALID_GUID)
                {
                    GameManager.gameManager.PlayerDataPool.GuildInfo.PreserveGuildGuid.Add(packet.ReserveGuildGuidList[i]);
                }
            }

            if (GuildWindow.Instance() != null)
            {
                GuildWindow.Instance().UpdateGuildListCurPage();
            }

            if (GuildSearchLogic.Instance() != null)
            {
                GuildSearchLogic.Instance().UpdateSearchList();
            }
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
