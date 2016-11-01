//This code create by CodeEngine

using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_SHOW_PICGUIDEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_SHOW_PICGUIDE packet = (GC_SHOW_PICGUIDE)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            UIManager.ShowUI(UIInfo.PicGuideRoot);
            PicGuideLogic.m_NewPlayerGuideIndex = 0;
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
