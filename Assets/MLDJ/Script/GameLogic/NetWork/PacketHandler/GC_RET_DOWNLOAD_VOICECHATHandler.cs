//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_RET_DOWNLOAD_VOICECHATHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_DOWNLOAD_VOICECHAT packet = (GC_RET_DOWNLOAD_VOICECHAT)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            GameManager.gameManager.PlayerDataPool.VoiceChatDownloadRecord.Add(packet.VoiceChatIndex, packet.VoiceChat);
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
