//This code create by CodeEngine
using System;
 using Module.Log;
 using Google.ProtocolBuffers;
 using System.Collections;
namespace SPacket.SocketInstance
 {
    public class CG_ASK_DECORATE_TREEHandler : Ipacket
    {
        public uint Execute(PacketDistributed ipacket)
        {
            CG_ASK_DECORATE_TREE packet = (CG_ASK_DECORATE_TREE)ipacket;
            if (null == packet) return (uint)PACKET_EXE.PACKET_EXE_ERROR;
            return (uint)PACKET_EXE.PACKET_EXE_CONTINUE;
        }
    }
 }
