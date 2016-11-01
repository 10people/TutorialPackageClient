//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_RET_STORYCOPYSCENE_CHAPTERAWARDHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_RET_STORYCOPYSCENE_CHAPTERAWARD packet = (GC_RET_STORYCOPYSCENE_CHAPTERAWARD)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            GameManager.gameManager.PlayerDataPool.JuQingCopySceneData.HandlePacket(packet);
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
