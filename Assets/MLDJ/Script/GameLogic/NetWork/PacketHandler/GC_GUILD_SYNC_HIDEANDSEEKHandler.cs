//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_GUILD_SYNC_HIDEANDSEEKHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_GUILD_SYNC_HIDEANDSEEK packet = (GC_GUILD_SYNC_HIDEANDSEEK)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic

            if (GameManager.gameManager.PlayerDataPool.IsHaveGuild())
            {
                if (packet.HasHideAndSeekWeek)
                {
                    GameManager.gameManager.PlayerDataPool.GuildInfo.HideAndSeekWeek = packet.HideAndSeekWeek == 1;
                }

                if (packet.SceneNpcIdCount > 0)
                {
                    GameManager.gameManager.PlayerDataPool.GuildInfo.HideAndSeekNpcInfo.Clear();
                    for (int i = 0; i < packet.SceneNpcIdCount; i++)
                    {
                        GuildHideAndSeekNpc npcInfo = new GuildHideAndSeekNpc();
                        if (packet.SceneNpcIdCount > i)
                        {
                            npcInfo.SceneNpcId = packet.SceneNpcIdList[i];
                        }
                        if (packet.SceneNpcFindCount > i)
                        {
                            npcInfo.IsFound = packet.SceneNpcFindList[i] == 1;
                        }

                        if (npcInfo.IsValid())
                        {
                            GameManager.gameManager.PlayerDataPool.GuildInfo.HideAndSeekNpcInfo.Add(npcInfo);
                        }
                    }
                }

                if (GuildActivityLogic.Instance() != null)
                {
                    GuildActivityLogic.Instance().HandleSyncHideAndSeek();
                }
            }
            
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
