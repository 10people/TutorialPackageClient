//This code create by CodeEngine

using System;
using Module.Log;
using Google.ProtocolBuffers;
using System.Collections;
namespace SPacket.SocketInstance
{
    public class GC_VOICE_CHATHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            GC_VOICE_CHAT packet = (GC_VOICE_CHAT)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            //enter your logic
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
}
